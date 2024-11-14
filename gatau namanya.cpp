#include <iostream>
#include <pthread.h>
#include <chrono>

// Fungsi f(x) = x^2
double f(double x) {
    return x * x;
}

// Struktur data untuk menghitung integral dalam thread
struct ThreadData {
    double a, b;
    int n;
    double result;
};

// Fungsi yang akan dijalankan dalam setiap thread
void* integrate(void* arg) {
    ThreadData* data = (ThreadData*)arg;
    double a = data->a;
    double b = data->b;
    int n = data->n;

    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }

    data->result = h * sum;
    return nullptr;
}

int main() {
    const int num_threads = 4;
    const int n = 4000000;
    const double a = 1.0;
    const double b = 5.0;
    double result = 0.0;

    // Inisialisasi thread dan data
    pthread_t threads[num_threads];
    ThreadData thread_data[num_threads];

    auto start_time = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < num_threads; i++) {
        thread_data[i].a = a + i * (b - a) / num_threads;
        thread_data[i].b = a + (i + 1) * (b - a) / num_threads;
        thread_data[i].n = n / num_threads;
        pthread_create(&threads[i], nullptr, integrate, &thread_data[i]);
    }

    for (int i = 0; i < num_threads; i++) {
        pthread_join(threads[i], nullptr);
        result += thread_data[i].result;
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_time = end_time - start_time;

    std::cout << "Hasil integral: " << result << std::endl;
    std::cout << "Waktu eksekusi: " << elapsed_time.count() << " detik" << std::endl;

    return 0;
}

#include <iostream>
#include <chrono>

// Fungsi f(x) = x^2
double f(double x) {
    return x * x;
}

int main() {
    const int n = 4000000; // Jumlah trapesium
    const double a = 1.0;  // Batas awal
    const double b = 5.0;  // Batas akhir
    double result = 0.0;

    auto start_time = std::chrono::high_resolution_clock::now();

    double h = (b - a) / n;
    result = 0.5 * (f(a) + f(b));

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        result += f(x);
    }

    result *= h;

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_time = end_time - start_time;

    std::cout << "Hasil integral: " << result << std::endl;
    std:: cout << "Waktu eksekusi: " << elapsed_time.count() << " detik" << std::endl;

    return 0;
}

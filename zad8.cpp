#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cout << "Введите N: ";
    std::cin >> n;

    double sum_series = 0.0;

    for (int i = 1; i <= n; ++i) {
        sum_series += 1.0 / i;
    }

    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Сумма ряда: " << sum_series << "\n";

    return 0;
}
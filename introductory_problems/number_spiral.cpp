#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        unsigned long long row, col;
        std::cin >> row >> col;

        unsigned long long k = std::max(row, col);

        if ((k % 2 == 1 && row <= col) || (k % 2 == 0 && col <= row)) {
            std::cout << std::fixed << k * k - std::min(row, col) + 1 << "\n";
        } else {
            std::cout << (k - 1) * (k - 1) + std::min(row, col) << "\n";
        }
    }
    return 0;
}
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned int n;
    std::cin >> n;

    for (unsigned int k = 1; k <= n; k++) {
        unsigned long long all_possibilities = 1ULL * (k * k) * (k * k - 1) / 2;
        unsigned long long attacking_possibilities = 0;
        if (k > 2) {
            attacking_possibilities += 4ULL * (k - 1) * (k - 2);
        }
        std::cout << all_possibilities - attacking_possibilities << "\n";
    }

    return 0;
}
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned int n;
    std::cin >> n;

    unsigned int total = 1;
    constexpr unsigned int MOD = 1000000007;

    for (unsigned int i = 0; i < n; i++) {
        total = (total * 2) % MOD;
    }

    std::cout << total << "\n";

    return 0;
}
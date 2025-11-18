#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    long long sum = 0;

    for (int i = 0; i < n - 1; i++) {
        int input;
        std::cin >> input;
        sum += input;
    }

    long long expected_sum = 1ULL * n * (n + 1) / 2;
    std::cout << expected_sum - sum << std::endl;
}
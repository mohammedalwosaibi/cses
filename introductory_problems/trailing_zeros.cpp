#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned int n;
    std::cin >> n;

    unsigned int trailing_zeros = 0;

    while (n > 0) {
        n /= 5;
        trailing_zeros += n;
    }

    std::cout << trailing_zeros << "\n";
}
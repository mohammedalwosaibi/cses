#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned int t;
    std::cin >> t;

    for (unsigned int i = 0; i < t; i++) {
        unsigned int a, b;
        std::cin >> a >> b;


        if (b > 2 * a || a > 2 * b || (a + b) % 3 != 0) {
            std::cout << "NO\n";
            continue;
        }

        std::cout << "YES\n";
    }
}
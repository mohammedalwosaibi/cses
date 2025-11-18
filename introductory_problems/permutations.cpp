#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    if (n <= 3) {
        if (n == 1) {
            std::cout << 1;
        } else {
            std::cout << "NO SOLUTION\n";
        }
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        std::cout << i << " ";
    }

    for (int i = 1; i <= n; i += 2) {
        std::cout << i << (i + 2 <= n ? " " : "\n");
    }

    return 0;
}
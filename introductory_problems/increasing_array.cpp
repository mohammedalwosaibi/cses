#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    long long moves = 0;
    int prev;

    std::cin >> prev;

    for (int i = 1; i < n; i++) {
        int curr;
        std::cin >> curr;
        if (curr < prev) {
            moves += prev - curr;
            curr = prev;
        }
        prev = curr;
    }

    std::cout << moves << "\n";

    return 0;
}
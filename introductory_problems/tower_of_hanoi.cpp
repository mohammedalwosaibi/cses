#include <iostream>

void toh_recur(int n, int source, int aux, int dest) {
    if (n == 1) {
        std::cout << source << " " << dest << "\n";
        return;
    }

    toh_recur(n - 1, source, dest, aux);

    std::cout << source << " " << dest << "\n";

    toh_recur(n - 1, aux, source, dest);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int moves_required = (1 << n) - 1;
    std::cout << moves_required << "\n";

    toh_recur(n, 1, 2, 3);
}
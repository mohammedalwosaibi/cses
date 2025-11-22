#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<unsigned int> left_numbers;
    std::vector<unsigned int> right_numbers;

    unsigned int n;
    std::cin >> n;

    unsigned long long target = 1ULL * n * (n + 1) / 2;

    if (target % 2 == 1) {
        std::cout << "NO";
        return 0;
    }

    std::cout << "YES\n";

    target /= 2;

    for (unsigned int i = n; i > 0; i--) {
        if (i <= target) {
            left_numbers.push_back(i);
            target -= i;
        } else {
            right_numbers.push_back(i);
        }
    }

    std::cout << left_numbers.size() << "\n";

    for (unsigned int i = 0; i < left_numbers.size(); i++) std::cout << left_numbers[i] << (i == left_numbers.size() - 1 ? "\n" : " ");

    std::cout << right_numbers.size() << "\n";

    for (unsigned int i = 0; i < right_numbers.size(); i++) std::cout << right_numbers[i] << (i == right_numbers.size() - 1 ? "\n" : " ");

    return 0;
}
#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string sequence;
    std::cin >> sequence;

    int maximum = 1;
    int count = 1;

    for (unsigned int i = 1; i < sequence.size(); i++) {
        if (sequence[i] == sequence[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count > maximum) {
            maximum = count;
        }
    }

    std::cout << maximum << "\n";
}
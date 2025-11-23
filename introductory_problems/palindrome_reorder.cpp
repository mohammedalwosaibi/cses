#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str;
    std::cin >> str;

    std::unordered_map<char, unsigned int> freq;

    for (char c : str) {
        freq[c] += 1;
    }

    char odd_char;
    bool has_odd = false;
    for (auto [character, count] : freq) {
        if (count % 2 == 1 && !has_odd) {
            has_odd = true;
            odd_char = character;
        } else if (count % 2 == 1 && has_odd) {
            std::cout << "NO SOLUTION\n";
            return 0;
        }
    }

    std::vector<char> stack;
    for (auto [character, count] : freq) {
        if (count % 2 == 0) {
            for (unsigned int i = 0; i < count / 2; i++) std::cout << character;
            stack.push_back(character);
        }
    }

    if (has_odd) {
        for (unsigned int i = 0; i < freq[odd_char]; i++) std::cout << odd_char;
    }

    while (stack.size() > 0) {
        for (unsigned int i = 0; i < freq[stack.back()] / 2; i++) std::cout << stack.back();
        stack.pop_back();
    }

    std::cout << "\n";

    return 0;
}
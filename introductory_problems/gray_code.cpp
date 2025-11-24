#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<std::string> results = {"0", "1"};
    results.reserve(1 << n);

    for (int i = 1; i < n; i++) {
        int size = results.size();
        for (int j = size - 1; j >= 0; j--) {
            results.push_back(results[j]);
            std::string& last_elem = results.back();
            last_elem.insert(last_elem.begin(), '1');
        }
        for (int j = 0; j < size; j++) {
            results[j].insert(results[j].begin(), '0');
        }
    }

    for (std::string bit_string : results) std::cout << bit_string << "\n";
}
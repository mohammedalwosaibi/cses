#include <iostream>
#include <cstdint>
#include <vector>

constexpr uint64_t MOD = 1e9 + 7;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<uint64_t> dp(n + 1);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        uint64_t ways = 0;
        for (int j = 1; j <= 6; j++) {
            if (i - j >= 0) ways = (ways + dp[i - j]) % MOD;
            else break;
        }
        dp[i] = ways;
    }

    std::cout << dp[n] << "\n";
}
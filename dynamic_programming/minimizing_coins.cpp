#include <iostream>
#include <vector>
#include <cstdint>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, x;

    std::cin >> n >> x;

    std::vector<int32_t> coins(n);
    std::vector<int32_t> dp(x + 1);

    for (int i = 0; i < n; i++) {
        int32_t c_i;
        std::cin >> c_i;
        coins[i] = c_i;
        if (c_i <= x) dp[c_i] = 1;
    }


    for (int i = 1; i <= x; i++) {
        if (dp[i] == 1) continue;
        bool possible = false;
        int32_t min_coins = INT32_MAX;
        for (int32_t coin : coins) {
            if (i - coin >= 1 && dp[i - coin] != -1) {
                min_coins = std::min(min_coins, 1 + dp[i - coin]);
                possible = true;
            }
        }
        if (!possible) dp[i] = -1;
        else dp[i] = min_coins;
    }


    std::cout << dp[x] << "\n";
}
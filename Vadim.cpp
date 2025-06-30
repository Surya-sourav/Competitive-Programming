#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;  // length 10, guaranteed beautiful

        // Count how many of each digit we have
        vector<int> cnt(10, 0);
        for (char c : s) {
            cnt[c - '0']++;
        }

        string ans;
        ans.reserve(10);

        // Fill positions 1..10 greedily
        // position i (1-based) requires digit >= (10 - i)
        for (int i = 1; i <= 10; i++) {
            int need = 10 - i;
            // pick the smallest available digit >= need
            for (int d = need; d <= 9; d++) {
                if (cnt[d] > 0) {
                    ans.push_back(char('0' + d));
                    cnt[d]--;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

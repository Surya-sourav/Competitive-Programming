#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), cnt(n+1);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }

        int first_missing = 0;
        while (first_missing <= n && cnt[first_missing] > 0)
            first_missing++;
        vector<int> diff(n+2, 0);

        for (int m = 0; m <= first_missing; m++) {
            int L = cnt[m];
            int R = n - m;
            if (L <= R) {
                diff[L] += 1;
                diff[R+1] -= 1;
            }
        }
        vector<int> ans(n+1);
        int cur = 0;
        for (int k = 0; k <= n; k++){
            cur += diff[k];
            ans[k] = cur;
        }

        for (int k = 0; k <= n; k++){
            cout << ans[k] << (k==n?'\n':' ');
        }
    }

    return 0;
}

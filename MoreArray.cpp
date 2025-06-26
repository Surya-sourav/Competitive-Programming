#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int answer = 0;
        int last_kept = -1000000000;  
        // something very small so the first element is always ≥ last_kept+2

        for (int x : a) {
            if (x >= last_kept + 2) {
                // we can "keep" x and start a new array here
                answer++;
                last_kept = x;
            }
            // otherwise we "remove" x (do nothing)
        }

        cout << answer << "\n";
    }
    return 0;
}

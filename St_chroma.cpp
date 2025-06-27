#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long n, x;
        cin >> n >> x;

        vector<int> p;
        p.reserve(n);

        // 1) All 0..x-1
        for (int i = 0; i < x; i++) {
            p.push_back(i);
        }
        // 2) All x+1..n-1
        for (int i = x+1; i < n; i++) {
            p.push_back(i);
        }
        // 3) Finally x (if x<n; if x==n this is skipped)
        if (x < n) {
            p.push_back(x);
        }

        // Output the permutation
        for (int v : p) {
            cout << v << ' ';
        }
        cout << "\n";
    }
    return 0;
}

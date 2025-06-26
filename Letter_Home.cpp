#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        int lo = x.front();
        int hi = x.back();
        int ans;
        if (s <= lo) {
            // start left of (or on) the leftmost point—just go to the rightmost
            ans = hi - s;
        }
        else if (s >= hi) {
            // start right of (or on) the rightmost point—just go to the leftmost
            ans = s - lo;
        }
        else {
            // start inside [lo..hi]: go to one end, then sweep to the other
            int span = hi - lo;
            int distToLo = s - lo;
            int distToHi = hi - s;
            ans = span + min(distToLo, distToHi);
        }   
        cout << ans << "\n";
    }
    return 0;
}

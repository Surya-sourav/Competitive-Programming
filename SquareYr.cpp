#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int yr = stoi(s);
        int root = static_cast<int>(sqrt(yr));

        // If it's not a perfect square, no solution at all
        if (root * root != yr) {
            cout << -1 << "\n";
            continue;
        }

        // Otherwise (a + b) must equal 'root'.
        // We can pick *any* non-negative (a,b) with a+b = root.
        // A perfectly valid and super-simple choice is:
        //     a = 0,  b = root
        cout << 0 << " " << root << "\n";
    }
    return 0;
}

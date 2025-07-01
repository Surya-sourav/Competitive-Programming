#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        // Case 1: Overlap magic
        if (2*k > n) {
            cout << "Alice\n";
            continue;
        }

        // Case 2: look for an initial run of k zeroes
        bool hasZeroRun = false;
        int run = 0;
        for (char c : s) {
            if (c == '0') {
                if (++run == k) {
                    hasZeroRun = true;
                    break;
                }
            } else run = 0;
        }

        cout << (hasZeroRun ? "Alice\n" : "Bob\n");
    }
    return 0;
}

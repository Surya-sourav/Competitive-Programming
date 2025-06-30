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

        int firstOpen = s.find('(');
        int lastClose = s.rfind(')');

        // Build the string after removing exactly those two
        string t;
        t.reserve(s.size() - 2);
        for (int i = 0; i < (int)s.size(); i++) {
            if (i == firstOpen || i == lastClose) continue;
            t.push_back(s[i]);
        }

        // Check for ANY prefix underflow
        int depth = 0;
        bool broken = false;
        for (char c : t) {
            depth += (c == '(' ? +1 : -1);
            if (depth < 0) {
                broken = true;
                break;
            }
        }

        cout << (broken ? "YES\n" : "NO\n");
    }
    return 0;
}

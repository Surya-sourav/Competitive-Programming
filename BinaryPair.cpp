#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--){
        long long n, k;
        string s;
        cin >> n >> k >> s;

        // count zeros and ones
        long long c0 = 0;
        for (char ch : s) if (ch == '0') ++c0;
        long long c1 = n - c0;

        long long half = n/2;
        long long z = half - k;  
        // z = how many 0–1 pairs we must form

        // check 0 ≤ z ≤ min(c0,c1)  AND  z%2 == c0%2
        if (0 <= z 
            && z <= min(c0,c1) 
            && (z % 2) == (c0 % 2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

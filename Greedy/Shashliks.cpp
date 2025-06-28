#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        ll k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        // Make (a,x) the cheaper‐drop shashlik
        if (x > y) {
            swap(a, b);
            swap(x, y);
        }

        ll ans = 0;

        // 1) Batch the cheap cooks while k >= both requirements (i.e. k >= max(a,b))
        ll M = max(a, b);
        if (k >= M) {
            // how many cheap cooks until k < M?
            //   k - n*x >= M  =>  n <= (k - M)/x
            ll n = (k - M) / x + 1;
            ans += n;
            k   -= n * x;
        }

        // 2) Now k < M, so you can no longer cook whichever had the higher requirement.
        //    Cook the remaining type you still can, whichever that is:
        //    - If k >= a, you can still do cheap (drop=x).
        //    - Else if k >= b, you can still do the other (drop=y).
        if (k >= a) {
            ll n = (k - a) / x + 1;
            ans += n;
        } 
        else if (k >= b) {
            ll n = (k - b) / y + 1;
            ans += n;
        }

        cout << ans << "\n";
    }
    return 0;
}

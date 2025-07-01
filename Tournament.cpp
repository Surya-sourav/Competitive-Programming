#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int strength_j = a[j-1]; 
        
        if (k == 1) {

            int stronger_count = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] > strength_j) {
                    stronger_count++;
                }
            }
            cout << (stronger_count == 0 ? "YES" : "NO") << "\n";
        } else {

            int eligible_count = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] >= strength_j) {
                    eligible_count++;
                }
            }
            cout << (eligible_count >= k ? "YES" : "NO") << "\n";
        }
    }
    
    return 0;
}
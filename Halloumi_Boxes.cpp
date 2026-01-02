#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    const int N = 1e3+10;
    int A[N];
    while(t--)
    {
        int n , k;
        cin >> n >> k;

        for( int i=0;i<n;i++)
        {
            cin >> A[i];
        }

        if(is_sorted(A , A+n))
        {
            cout << "YES" << endl;
        }

        else if(k<2) // Edge Case
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;

}
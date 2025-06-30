#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Wrong Approach !
int main()
{
    int t;
    cin >> t;

    vector<vector<int>>matrix = {
        {1,2,9,10,25},
        {4,3,8,11,24},
        {5,6,7,12,23},
        {16,15,14,13,22},
        {17,18,19,20,21}
    };
    while(t--)
    {
        int x , y;
        cin >> x >> y;

        cout << matrix[x-1][y-1];

    }
return 0;
}
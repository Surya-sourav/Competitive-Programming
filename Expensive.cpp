#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;    

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int count=0 , rest = 0;
        while(n!=0)
        {
            int digit = n % 10;
            v.push_back(digit);
            n /= 10;   
        }
        sort(v.begin(), v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i] == 0)
            {
                count++;
            }
                rest = v.size() - count;

        }
        rest--;
        int res = count + rest;
        cout << res << endl;
        
    }
    return 0;
}
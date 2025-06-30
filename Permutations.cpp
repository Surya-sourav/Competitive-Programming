#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void permutation(int n)
{
    if(n == 2 || n==3)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    vector<int> v(n);
    vector<int>res(n);
    for(int i = 0; i <n; i++)
    {
        v[i] = i+1;
    }
int c=0;
    for(int i=0 ; i<n;i++)
    {
        if(v[i] % 2 == 0)
        {
            res[c] = v[i];
            c++;
        }
    }

    for(int i=0 ; i<n ; i++)
    {
        if(v[i] % 2 != 0)
        {
            res[c] = v[i];
            c++;
        }
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << res[i] << " ";
    }

}


int main()
{
    int n;
    cin >> n;
    permutation (n);
    return 0;
}
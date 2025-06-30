#include<iostream>  
#include<vector>
#include<algorithm>
using namespace std;    

int main()
{
    int n;
    cin >> n;
    int count=0;
    for(int i=0 ;i<n;i++)
    {
        int p1,p2,p3;
        cin >> p1 >> p2 >> p3;
        if(p1+p2+p3 >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
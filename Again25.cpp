#include<iostream>
#include<cmath>
using namespace std;


long long mod_pow(long long base , long long exp , long long mod)
{
   long long result =1;
    while(exp > 0)
    {   
        result = (base * base) % mod;
        exp/=2;
    }   
    return result;
}





int main()
{
    long long n;
    cin >> n;
    cout << mod_pow(5 , n , 100) << endl;
    return 0;
}
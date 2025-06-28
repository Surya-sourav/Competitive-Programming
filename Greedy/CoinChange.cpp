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
    int target;
    cin >> target;
    vector<int>coins = {1,2,5};
    // for(int i = 0; i < n; i++) {
    //     cin >> coins[i];
    // }
    int coin_count = 0;

    while(target > 0)
    {   
        
        int maxCoin = *max_element(coins.begin(), coins.end());
          if(target < maxCoin) {
            coins.erase(remove(coins.begin(), coins.end(), maxCoin), coins.end());
        }
        else
        {
            target-=maxCoin;
            coin_count++;
        }
    }
    cout << coin_count << endl;

}
return 0;

}
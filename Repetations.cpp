#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <cstdlib>
using namespace std;


int main()
{
    string s;
    cin >> s;
    int size = s.length();
    int b =  0;
    int e = 0;
    int count = 0;
    int maxCount = 0;

    while(e != size)
    {
        
        if(s[b] == s[e])
        {
            count++;
            e++;
            maxCount = max(maxCount, count);
        }
        else
        {
            b = e;
            count=0;
        }

    }
    cout << maxCount << endl;
    return 0;
}








//     int main()
//     {   

//         string s;
//         cin >> s;   
//         int size = s.length();
//         int max_count = 0;
//         for(int i=0 ; i<size;i++)
//         {
//             int count = 1;
//             for(int j= i+1;j<size;j++)
//             {
//                 if(s[i] == s[j])
//                 {
//                     count++;
//                     max_count = max(max_count, count);
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }

//         }
//         cout << max_count << endl;
//         return 0;
// }
#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

vector<int> new_s;

int create_binary_strings(string s , string bkp)
{
    // Flip the bits in the string
    for (char& ch : s) {
        ch = (ch == '0') ? '1' : '0';
    // Convert flipped binary string to integer
    for(int i=0 ; i<s.length() ; i++)
    {
        new_s.push_back(s[i] - '0'); // Convert char to int
    }
    s = bkp;
}
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        new_s.clear(); // Clear the vector for each test case
        int n;
        cin >> n;
        string s;
        cin >> s;
        string bkp = s;
        create_binary_strings(s , bkp);
        int count = 0;
        for (int i = 0; i < new_s.size(); i++) {
            if(new_s[i] == 1) {
                count++;
            }
        }
    cout << count << endl;  
    }
    return 0;
}

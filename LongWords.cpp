#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string final_word;

    while (t--) {
        string word;
        cin >> word;

        if (word.length() > 10) {

            char f = word.front();
            char b = word.back();
            int len = word.length() - 2;
            final_word = f+to_string(len) + b;
            
        
        } 

        else {
            final_word = word;
        }
        cout << final_word << endl;
        
    }

    
    return 0;
}
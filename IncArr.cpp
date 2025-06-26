#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<long long> arr(n);  // Use long long for large values
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long moves = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            moves += arr[i - 1] - arr[i];  // how much to increment
            arr[i] = arr[i - 1];  // make arr[i] equal to arr[i-1]
        }
    }

    cout << moves << endl;
    return 0;
}

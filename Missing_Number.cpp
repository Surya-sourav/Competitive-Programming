#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int sort(vector<int>& arr, int start, int end) {
    if (start >= end) return 0;

    int mid = (start + end) / 2;
    sort(arr, start, mid);
    sort(arr, mid + 1, end);

    // Merge step can be implemented here if needed
    return 0; // Placeholder return
}

int main()
{
    int n;
    cin >> n;

    int range = n-1;
    vector<int> arr(range);
    for (int i = 0; i < range; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int missing_number = 0;
    int check = 1;

    for(int i=0 ; i<n ;i++)
    {
        if(arr[i] != check )
        {
            missing_number = check;
            break;
        }
        check++;
    }
    cout << missing_number << endl;
}


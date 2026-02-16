#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n ; 
    cout << "enter size of array";
    cin >> n;
    int arr[n];
    cout << "enter array elements";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n;
    cout << "enter the target element";
    int target; cin >> target;

    while(start < end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else if(arr[start] > arr[mid])
        {
            end = mid - 1;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int A[10];
// Implementing Pre-fix Sum 
int main()
{	
	int n;
	cout << " Enter The Array Size";
	cin >> n;

	cout << " Enter The Array Elements";
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		cin >> A[i];
		sum+=A[i];
		A[i] = sum;
	}

	cout << " Enter l & r";
	int l , r ; cin >> l >> r;
	// Substract the Total Subarray - unwanted Subarray
	cout << A[r]- A[l-1] << endl;

}
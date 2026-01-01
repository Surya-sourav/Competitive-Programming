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
	for(int i=1;i<=n;i++)
	{
		cin >> A[i];
	}


	cout << " Enter l & r";
	int l , r ; cin >> l >> r;
	int sum = 0;
	//Pre-computed the Sub array values 1-n
	for(int i=1;i<=n;i++)
	{
		sum+=A[i];
		A[i] = sum;
	}

	// Substract the Total Subarray - unwanted Subarray
	cout << A[r]- A[l-1] << endl;

}
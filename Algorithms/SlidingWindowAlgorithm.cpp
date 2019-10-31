// Sliding Window Algorithm -TO find maximum sub array sum of k numbers.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[] = {1,2,-6,98,23};
	int n = sizeof(arr)/sizeof(int);
	int k;

	cout<<"Enter value of k:";
	cin>>k;

	int sum = 0;
	for(int i=0;i<k;i++)
		sum+=arr[i];
	int maxm = sum;
	for(int i=k;i<n;i++)
	{
	 sum+=arr[i]-arr[i-k];
	 maxm = max(maxm,sum);
	}

	cout << "Maximum sum:" << maxm;

}
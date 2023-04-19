#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void insertionsort(int arr[], int n)
{
    int k,j;
    for(int i=1;i<n;i++)
    {
        // i = 1, because we assume that 1st element is already sorted.
        k=arr[i];
        j=i-1;

        while(j>=0 && k<arr[j])
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=k;
    }
}

/*
void insertionSortRecursive(int arr[], int n)
{
	// base case
	if (n <= 1)
		return;

	insertionSortRecursive(arr, n - 1);
	int last = arr[n - 1];
	int j = n - 2;

	while (j >= 0 && arr[j] > last)
	{
		arr[j + 1] = arr[j];
		j--;
	}
	arr[j + 1] = last;
}
*/

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    insertionsort(arr,n);
    print(arr,n);
    return 0;
}

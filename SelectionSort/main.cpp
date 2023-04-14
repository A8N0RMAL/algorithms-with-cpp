#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void selectionsort(int arr[], int n)
{
    int minidx;
    for(int i=0;i<n-1;i++)
    {
        minidx=i;
        // i < n-1, because last element will be sorted.
        for(int j=i+1;j<n;j++)
        {
            // ascending order
            if(arr[j] < arr[minidx])
            {
                minidx=j;
                swap(arr[minidx],arr[i]);
            }
            /*
            // descending order
            if(arr[j] > arr[minidx])
            {
                minidx=j;
                swap(arr[minidx],arr[i]);
            }
            */
        }
    }
}

/*
// swap(x,y)
void swap(int&x, int&y)
{
    int temp=x;
    x=y;
    y=temp;
}
*/

/*
// Recursive
int minIndex(int a[], int i, int j)
{
	if (i == j)
		return i;

	int k = minIndex(a, i + 1, j);

	return (a[i] < a[k]) ? i : k;
}


void recurSelectionSort(int a[], int n, int index = 0)
{

	if (index == n)
		return;

	int k = minIndex(a, index, n - 1);

	if (k != index)
		swap(a[k], a[index]);

	recurSelectionSort(a, n, index + 1);
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
    int arr[] = {-50,-10,0,10,50};
    int n=sizeof(arr)/sizeof(arr[0]); // 20 / 4 = 5
    selectionsort(arr,n);
    cout<<"Array after selection sort : \n";
    print(arr,n);
    return 0;
}

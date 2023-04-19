#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void heapify(int arr[],int n,int i)
{
// i is z position
int l=2*i+1; // left child
int r=2*i+2; // right child
int max=i;
// root has to be z maximum element.
if(l<n&&arr[l]>arr[max])
max=l;
if(r<n&&arr[r]>arr[max])
max=r;

if(max != i){
swap(arr[i],arr[max]);
heapify(arr,n,max);
}
}

void buildHeap(int arr[],int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);
}

void heapSort(int arr[], int n)
{

	buildHeap(arr, n);
	for (int i = n-1; i >=0; i--)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}

}

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
    int arr[] = {80,30,40,70,15};
	int n = sizeof(arr) / sizeof(arr[0]);
	heapSort(arr, n);
	print(arr, n);
    return 0;
}

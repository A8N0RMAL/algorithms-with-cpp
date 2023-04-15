#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void bubblesort(int arr[],int n)
{
    int f=1,c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            // in 1st iteration z last element will be z maximum element.
            // ascending order
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                f=0;
            }
            /*
            descending order
            if(arr[j] < arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                f=0;
            }
            */
            c++;
            // if c=n-1, then array is already sorted.
        }
        if(f)
        {
            cout<<"Array is already sorted\n";
            break;
        }
    }
    cout<<"# of rounds : "<<c<<"\n";
}

/*
void bubbleSortRec(int arr[], int n)
{

	if (n == 1)//base case
		return;

for (int i = 0; i < n - 1; i++)
		if (arr[i] > arr[i + 1])
		swap(arr[i], arr[i + 1]);

bubbleSortRec(arr, n - 1);
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
    //int arr[]={20,90,11,24,70};
    //int n=sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bubblesort(arr,n);
    print(arr,n);
    return 0;
}

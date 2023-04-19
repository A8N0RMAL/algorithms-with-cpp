#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void Merge(int arr[], int l,int m, int r)
{
    int n1=m-l+1; // left subarray [1..m]
    int n2=r-m; // right subarray [m+1..r]
    int *L=new int[n1], *R=new int[n2];

    for(int i=0;i<n1;i++)
        L[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    int i=0, j=0, k=l; // k=l=0
    while(i<n1 && j<n2)
    {
        // for descending order L[i]>=R[i]
        if(L[i]<=R[i])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;

    }
}

void mergesort(int arr[], int l, int r)
{
    // base case
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(arr,l,m); // left subarray
        mergesort(arr,m+1,r); // right subarray
        // we will divide until we reach z last single element then Merge.
        Merge(arr,l,m,r);
    }
}

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
    // n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    print(arr,n);
    return 0;
}

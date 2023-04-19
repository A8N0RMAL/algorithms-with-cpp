#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int linearSearch(int arr[], int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return-1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int num;
	cout << "Enter an Integer :";
	cin >> num;

	int result = linearSearch(arr,n,num);
	if (result == -1)
		cout << "The Number : (" << num << ") Was Not Found." << endl;
	else
		cout << "The Number : (" << arr[result] << ") Was Found At Index : (" <<result<<")"<< endl;
    return 0;
}

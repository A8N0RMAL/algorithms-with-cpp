#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int binarySearch(int arr[], int l, int r, int element)
{
	while (l <= r)
    {
		int m = (l + r) / 2;// =>m = l + (r - l) / 2 =>m = (2 l + r -l)/2
		if (arr[m] == element)
			return m;
		if (arr[m] > element)
		r = m - 1;
		else
		l = m + 1;
	}
	return -1;
}

/*
int binarySearchRec(int arr[], int l, int r, int element)
{
	if (r >= l) {
		int mid = (l + r) / 2;

		if (arr[mid] == element)
			return mid;

		if (arr[mid] > element)
			return binarySearch(arr, l, mid - 1, element);

		return binarySearch(arr, mid + 1, r, element);
	}
	return -1;
}
*/
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

	int result = binarySearch(arr, 0, n - 1, num);
	if(result == -1)
		cout << "The Number : (" << num << ") Was Not Found." << endl;
	else
		cout << "The Number : (" << arr[result] << ") Was Found At Index : (" << result << ")" << endl;
    return 0;
}

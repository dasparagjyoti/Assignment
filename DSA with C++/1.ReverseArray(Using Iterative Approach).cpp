#include<bits/stdc++.h>
using namespace std;


	void reverseArray(int arr[], int start, int end)
    {
    while (start < end)
    {
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	start++;
	end--;
	}
}


void printArray(int arr[],int size)/* Utility function to print an array */
{
	for(int i=0; i<size; i++)
	cout << arr[i] << " "; //to get the gap between outpu
    
    cout << endl;
}


int main()/* Driver function to test above functions */
{
	int arr[] = {1,2,3,4,5,6};

	int n = sizeof(arr) / sizeof(arr[0]);

     printArray(arr,n);// To print original array

     reverseArray(arr, 0, n-1);// Function calling

     cout << "Reversed array is" << endl;

     printArray(arr, n);// To print the Reversed array

     return 0;
}

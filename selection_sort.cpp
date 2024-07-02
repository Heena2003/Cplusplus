#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of arr:";
	cin>>n;
	int arr[n];
	int loc;
	int min;
	
	for (int i = 0; i < n; ++i)
	{
		int ele;
		cin>>ele;
		arr[i] = ele;
	}
	
	for(int i=0;i<n-1;i++)
	{
	    min=arr[i];
	    loc=i;
	for (int j = i+1; j <n; ++j)
	{
		if(min>arr[j])
		{
			min=arr[j];
			loc=j;	
		}
	}
	int temp=arr[i];
	arr[i]=arr[loc];
	arr[loc]=temp;
	}
	for (int i = 0; i < n; ++i)
	{
		
		cout<<arr[i]<<" ";
		
	}
	return 0;
};





#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of arr:";
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		int ele;
		cin>>ele;
		arr[i] = ele;
	}
	int p;
    cout<<"Enter the numpber of passes:";
	cin>>p;
    for(int i=0; i<p; ++i)
    {
        for (int j=n-1; j>=0; --j)
        {
        int temp= arr[j];
        arr[j]=arr[n];
        arr[j+1]=temp;
        }
    }
for (int i = 0; i < n; ++i)
	{
		
		cout<<arr[i]<<" ";
		
	}
	return 0;
	
	return 0;
};
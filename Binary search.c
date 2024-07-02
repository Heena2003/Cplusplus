Binary search
low=0;
high=n;
mid=(low+high)/2;
if (key==arr[mid])
{
	Search is sucessfull
}
if (key<arr[mid])
{
	high=mid-1
}
else{
	low=mid+1
}
#include <iostream>
#include <math.h>
using namespace std;

int countDigit(int n) 
{ 
    return floor(log10(n) + 1); 
}

void print_vertical(int arr[],int partition_size,int &spaces,int &j)
{
	for(int i=0;i<partition_size-1;i++)
	{
		cout<<string(spaces,' ');
		cout<<arr[j]<<endl;
		j++;
	}
	cout<<string(spaces,' ')<<arr[j]<<" ";
	spaces += countDigit(arr[j])+1;
	j++;
}

void print_horizontal(int arr[],int partition_size,int &spaces,int &j)
{
	for(int i=0;i<partition_size;i++)
	{
		cout<<arr[j]<<" ";
		spaces += countDigit(arr[j])+1;
		j++;
	}
	spaces -= countDigit(arr[j-1])+1;
	cout<<endl;
}

int main()
{

	int a[] = { 9,5,6,7,8,9,1,1,2,3,4,5,6,7,5,7,1,3,4,6,8,5,6,4,2,9 };
	int size = sizeof(a)/sizeof(a[0]);
	int steps = 5;
	int partition_size = size/steps;
	bool horizontal = true;
	int j=0,space=0;
	for(int i=0;i<steps;i++)
	{
		if(horizontal)
		{
			print_horizontal(a,partition_size,space,j);
			horizontal=false;
		}
		else
		{
			print_vertical(a,partition_size,space,j);
			horizontal=true;
		}
	}

	if(partition_size*steps !=size)
	{
		if(horizontal)
		{
			print_horizontal(a,size-(steps*partition_size),space,j);
		}
		else
		{
			print_vertical(a,size-(steps*partition_size),space,j);
		}
	}	

	return 0;
}
#include<iostream>
using namespace std;

void partition(int Arr[],int start,int end)
{
	int i = start;
	for(int j=0;j<end;j++)
	{
		if(Arr[j] < Arr[end])
		{
			swap(Arr[j],Arr[i]);
		}
	}
}

void quicksort(int Arr[],int start,int end)
{
	if(start<end)
	{
		int i =  partition(Arr,start,end);
		quicksort(Arr,start,i-1);
		quicksort(Arr,i+1,end);
	}
	
}
int main()
{
	
	return 0;
}

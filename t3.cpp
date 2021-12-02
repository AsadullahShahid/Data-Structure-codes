#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	
	int arr[7], size, i, del, count=0;
	//cout<<"Enter array size : ";
	//cin>>size;
	cout<<"Enter array elements : ";
	for(i=0; i<7; i++)
	{
		cin>>arr[i];
	}
	//cout<<"Enter element to be delete : ";
	//cin>>del;
	for(i=0; i<7; i++)
	{
		if(arr[i]==4)
		{
			for(int j=i; j<(7-1); j++)
			{
				arr[j]=arr[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not found";
	}
	else
	{
		cout<<"Element deleted successfully"<<endl;
		cout<<"Now the new array is"<<endl;
		for(i=0; i<(7-1); i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	getch();
}

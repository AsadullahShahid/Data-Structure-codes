#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	
	int arr[7] = {1,2,3,4,5,6,7};
	int arr2[7];
	bool flag = false;
	
	for(int i=0;i<6;i++)
	{
		if(arr[i]==4)
		{
			flag = true;
		}
		if(flag = false)
		{
			arr2[i]=arr[i];
			
			
		}
		else
		{
			
			arr2[i]=arr[i+1];
			cout<<arr2[i];
		}
	}
	



}

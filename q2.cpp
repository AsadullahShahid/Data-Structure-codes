#include<iostream>
using namespace std;


int partition (int *arr, int low, int high)
{
	int pivot = arr[high];
	int i = low;

	for (int j = low; j <= high ; j++)
	{

		if (arr[j] < pivot)
		{
			swap(arr[j],arr[i]);
			i++;
		}
	}
	swap(arr[i], arr[high]);
	return i;
}

void quickSort(int *arr, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		
	    quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main()
{
	int arr[] = {10, 7, 8, 9, 1, 5,6,4};
	quickSort(arr, 0, 7);
	cout << "Unsorted array: \n";
	cout<<"10, 7, 8, 9, 1, 5,6,4"<<endl;
	cout << "Sorted array: \n";
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}



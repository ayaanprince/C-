#include<iostream>
#include<conio.h>
using namespace std;



int main()
{

	int arr[100], size, i, del, count=0;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements : \n";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element to be delete : ";
	cin>>del;
	for(i=0; i<size; i++)
	{
		if(arr[i]==del)
		{
			for(int j=i; j<(size-1); j++)
			{
				arr[j]=arr[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not found..!!";
	}
	else
	{
		cout<<"Element deleted successfully..!!\n";
		cout<<"Now the new array is :\n";
		for(i=0; i<(size-1); i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	getch();
	{

	int size, arr[50], i, j, temp;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array using selection sort ... \n";
	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"Array after sorting : \n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}

}
}

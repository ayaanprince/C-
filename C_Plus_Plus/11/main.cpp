#include<iostream>
#include<conio.h>
using namespace std;


insert_(int key)
{
    int arr[100], size,i, count=0;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements : \n";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
}
delete_(int key)
{   int del, arr[100],size,i,count=0;
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
}


int main()
{

  insert_(5);
  delete_(0);


}

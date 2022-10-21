#include<iostream>
#include<conio.h>
using namespace std;
void insert()
 {
 int i,a[10],temp,j;
 cout<<"Enter any 10 num in array: \n";
 for(i=0;i<=10;i++)
 {
 cin>>a[i];
 }
 cout<<"\nData before sorting: ";
 for(j=0;j<10;j++)
 {
 cout<<a[j];
 }
 for(i=0;i<=10;i++)
 {
 for(j=0;j<=10-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 cout<<"\nData after sorting: ";
 for(j=0;j<10;j++)
 {
 cout<<a[j];
 }
 getch();
 }
void delete_1()
{
    int size,arr,i,del;

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
}
int main ()
{
    void insert();
    void delete_1();



}

#include<iostream>
#include<conio.h>
using namespace std;
int main()
  {
   int j;
   int array[5];
   int no;
   int position;
   cout<<"Enter data in array: "<<endl;

   for(j=0;j<5;j++)
   {
    cin>>array[j];
   }
   cout<<"\n\nData shown in array:  ";
   for(j=0;j<5;j++)
   {
    cout<<array[j];
   }
   cout<<"\n\nEnter position of element to delete: ";
   cin>>position;
   if(position>5)
   {
   cout<<"\n\nThis value is not in the array: ";
   }
   else
   {
   --position;
   for(j=position;j<=4;j++)
   {
    array[j]=array[j+1];
   }
   cout<<"\n\nNew data after deletion in array is: ";
   for(j=0;j<4;j++)
   {
    cout<<array[j];
  }
  }

   getch();
   return 0;
 }

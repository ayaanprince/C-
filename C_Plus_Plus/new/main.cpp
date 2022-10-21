#include<iostream>
using namespace std;

float avarage(float a[],int size)
{
    int i;
    float avg,sum=0;
    for
        (i=0;i<8;++i)
         {
             sum+=a[i];
         }
    avg=sum/size;
    return avg;
}
int main()
{
   int size,j;
   cout<<"Enter the size of array"<<endl;
   cin>>size;
   float b,n[size];
   for(j=0;j<size;j++)
   {
       cout<<"value of n["<<j<<"]:"<<endl;
       cin>>n[j];
   }
   b=avarage(n,size);
   cout<<"Avarage of numbers="<<b<<endl;
   return 0;
}





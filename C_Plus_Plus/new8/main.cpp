#include <iostream>
#define length 10
using namespace std;

int nextEmptyPosition=0;
int arr[length];

void _insert(int value)
{
    cout<<"Enter 10 Values "<<endl;
    for(int i=0;i<10;i++)
    {
    cin>>arr[length];
    }
    cout<<"\n\t\t\tArray Values Inserted...  Successfully "<<endl;
}

void _delete(int value)
{
    cout<<"Enter the Index Number To Delete Value :";
    int index;
    cin>>index;
    if(index>9||index<0)
    {
        cout<<"Invalid Index Entered-> Valid Range(0-9)"<<endl;
    }
    else
    {
        arr[index]=-1;
    }
    cout<<"\n\t\t\tArray Value Deleted...  Successfully "<<endl;
}

int LinearSearch(int value)
{

}

void _update(int oldValue, int newValue)
{
    cout<<"Enter Index Number to Update Value :";
    int index;
    cin>>index;
    if(index>9||index<0)
    {
        cout<<"Invalid Index Entered-> Valid Range(0-9)"<<endl;

    }
    else
    {
   cout<<"Enter the New Value For Index array[ "<<index<<" ] = ";
        cin>>arr[index];
   cout<<"\n\t\t\tArray Updated...  Successfully "<<endl;
    }
}


void PrintArray()
{

}

int main()
{

    _insert(10);
    _insert(12);
    _insert(13);
    _insert(6);

    return 0;
}

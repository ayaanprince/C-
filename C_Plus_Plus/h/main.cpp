#include<iostream>
using namespace std;
void Array_input(int a[],int x)
{
    int i;
    for(i=0; i<x; i++)
        cin>>a[i];
}
void Array_Output(int a[],int x)
{
    int i;
    for(i=0; i<x; i++);
    cout<<a[i];
}
void Print_revarse(int a[],int x)
{
    int i;
    for(i=x; i>=0; i--)
        cout<<a[i];
}
void End (int a[],int x)
{
    cin>>a[x+1];

}
void position (int a[],int p)
{
    cin>>a[p];

}
void Delete(int a[],int x)
{
    int i;
    for (i=0; i<x-1; i++)
        a[i] = a[i];
}
void delet_positon(int a[],int p,int x)
{
    int i;
    for (i = p-1; p<x-1; i++)
        a[i] = a[i+1];
}
void delete_x(int a[],int p,int x)
{
    int i;
    for (i = p-1; p<x-1; i++)
        a[i] = a[i+1];
}
void highest_lowest(int a[],int x)
{
    int i,k,m;
    k=a[0];
    for(i=1; i<x-1; i++)
    {
        if(a[i]>k)
        {
            k=a[i];
        }
        else
            continue;
    }
    cout<<"Highest:"<<k<<endl;

    m=a[0];
    for(i=1; i<x-1; i++)
    {
        if(a[i]<m)
        {
            m=a[i];
        }
        else
            continue;
    }
    cout<<"Lowest:"<<m;

}
void count_data(int a[],int x)
{
    int i,count;
    for(i=0; i<x; i++)
        count++;
    cout<<"Count: "<<count;
}
void Search(int a[],int x,int p)
{
    int i;
    for(i=0; i<x; i++)
    {
        if(a[i]==p)
            cout<<"Found"<<endl;
        else
            cout<<"Not Found"<<endl;
    }
}

int main()
{

    int a[10],x=10,p,k;
    cout<<"Input Choice: ";
    cin>>x;
    if(x==1)
        Array_input(a,x);
    else if(x==2)
        Array_Output(a,x);
    else if(x==3)
        Print_revarse(a,x);

    else if(x==4)
        End(a,x);
    else if(x==5)
        position(a,x);
    else if(x==6)
    {


        position(a,x);
    }

    else if(x==7)
        Delete(a,x);
    else if(x==8)
    {
        int k;
        cout<<"enter position: ";
        cin>>k;
        delet_positon(a,k,x);
    }

    else if(x==9)
        highest_lowest(a,x);
    else if(x==10)
        count_data(a,x);
    else if(x==11)
    {
        int k;
        cout<<"enter value: ";
        cin>>k;
        delet_positon(a,k,x);
        Search(a,x,k);
    }
    else if(x==12)
    {
        int k;
        cout<<"enter value: ";
        cin>>k;

        delete_x(a,k,x);
    }
    else
        cout<<"WRONG INPUT"<<endl;






}


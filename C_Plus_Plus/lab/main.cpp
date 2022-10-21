#include <iostream>
using namespace std;
int del(int *p,int pos,int n)
{
for(int j=pos;j<n;j++)
{
*(p+j)=*(p+j+1);
}
return n-1;
}
int main()
{
int t,n,k;
cin>>t;
while(t--)
{
cin>>n>>k;
int pop[n],i;
for(i=0;i<n;i++)
{cin>>pop[i];}
while(k--)

{int df=0,x=0;

for(i=x;i<n-1;i++)
{
//if(pop[i]!=0)
if(pop[i]<pop[i+1])
{n=del(pop,i,n);
df=1;
x=i-1;
break;
}

}
if(df==0)
n=del(pop,n-1,n);
}
for(i=0;i<n;i++)
{if(pop[i]!=0)
cout<<pop[i]<<" ";
}
cout<<"\b\n\n";
}
return 0;
}

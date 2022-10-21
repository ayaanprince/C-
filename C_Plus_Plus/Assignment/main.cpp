#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
int del;
void check(int data){

if(s.empty())
{
s.push(data);
return;
}
else if(!s.empty() && s.top()<data && del>=1)
{

s.pop();
del--;
check(data);

return;

}
else
{
s.push(data);
return;
}

}
int main()
{
int t;
cin>>t;
for(int k=0;k<t;k++)
{
int n;
cin>>n>>del;

int a[n];

for(int i=0;i<n;i++)
{
cin>>a[i];
}


for(int i=0;i<n;i++)
{
check(a[i]);
}


stack<int> s2;
while(!s.empty())
{
int temp=s.top();
s.pop();
s2.push(temp);
}
while(!s2.empty())
{
cout<<s2.top()<<" ";
s2.pop();
}
cout<<endl;
}


}

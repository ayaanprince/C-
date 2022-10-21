#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void insert(int,int );
void delte(int);
void display(int);
int search(int);
int search1(int,int);
int tree[40],t=1,s,x,i;


void insert(int s,int ch )
{
	int x;
	if(t==1)
	{
		tree[t++]=ch;
		return;
	}

	if(tree[x]>ch)
		tree[2*x]=ch;
	else
		tree[2*x+1]=ch;
	t++;
}
void delte(int x)
{
	if( tree[2*x]==-1 && tree[2*x+1]==-1)
		tree[x]=-1;
	else if(tree[2*x]==-1)
	      {	tree[x]=tree[2*x+1];
		tree[2*x+1]=-1;
	      }
	else if(tree[2*x+1]==-1)
	      {	tree[x]=tree[2*x];
		tree[2*x]=-1;
	      }
	else
	{
	  tree[x]=tree[2*x];
	  delte(2*x);
	}
	t--;
}

void display(int s)
{
if(t==1)
{cout <<"no element in tree:";
return;}
for(int i=1;i<40;i++)
if(tree[i]==-1)
cout <<" ";
else cout <<tree[i];
return ;
}
main()
{
	int ch,y;
	for(i=1;i<40;i++)
	tree[i]=-1;
	while(1)
	{
cout <<"1.INSERT\n2.DELETE\n3.SEARCH\n4.EXIT\nEnter your choice:";
		cin >> ch;
		switch(ch)
		{
		case 1:
			cout <<"enter the element to insert";
			cin >> ch;
			insert(1,ch);
			break;
		case 2:
			cout <<"enter the element to delete";
			cin >>x;

			if(y!=-1) delte(y);
			else cout<<"no such element in tree";
			break;
		case 3:
			display(1);
			cout<<"\n";
			for(int i=0;i<=32;i++)
			cout <<i;
			cout <<"\n";
			break;

		case 4:
			exit(0);
		}
	}
}


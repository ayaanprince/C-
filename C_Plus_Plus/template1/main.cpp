 #include<iostream>
 using namespace std;
 template<typename  R,typename  S>
R sum(R x, S y)
{
    return x + y;
}
int main()
{
   cout<<sum<int,int>(3 , 6)<<endl;
   cout<<sum<double,int>(4.5 , 7)<<endl;
   cout<<sum<int,double>(6 , 8.4)<<endl;
   cout<<sum<double,double>(3.2 , 6.8)<<endl;
}

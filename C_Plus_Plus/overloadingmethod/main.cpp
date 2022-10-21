#include <iostream>

using namespace std;

class myClass
{
private:
    int a,b,c;

public:
    void method1(int a,int b)
    {
        int sum;
        sum=a+b;
        cout<<sum<<endl;
    }
    void method1(int a,int b,int c)
    {
        int sum;
        sum=a+b+c;
        cout<<sum<<endl;
    }
 main()
 {
   int myClass ob1,ob2;
   ob1.method1(10);
   ob2.method1(10.5,);
   return 0;

 }





};

#include<iostream>
using namespace std;
class Father
{
protected:
 string memData;
 public:
 Father(string a)
{
  this ->memData=a;
}
  void method(void)
{
 cout <<memData<<" From Father class"<<endl;
}
};
 class son:public Father
{
public:
 son(string a) : Father(a){}
 void method(void)
{
 cout <<memData<<" From son class"<<endl;
}
};
 class Daughter:public Father
{
public:
 Daughter(string a) : Father(a){}
void method(void)
{
 cout <<memData<<" From Daughter class"<<endl;
}
};
main()
{
 son *sonObj;
 Daughter *daughterObj;
 sonObj = new son("Alex is my name and I am ");
 daughterObj = new Daughter("Molly is my name and I am ");
 sonObj -> method();
 daughterObj -> method();
}

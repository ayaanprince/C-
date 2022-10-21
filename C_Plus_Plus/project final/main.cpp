#include <iostream>

using namespace std;

class num
{
protected:
    int num;
public:
    void conversion()
    {
        cout << "Enter numbers:"<<endl;
        cin>>num;
          if(num<=100&&num>90)
    {
        cout<<("Grade is A+\n");
    }
    else if (num<=90&&num>80)
    {
        cout<<("Grade is A\n");
    }
    else if(num<=80&&num>70)
    {
        cout<<("Grade is B\n");
    }
    else if(num<=70&&num>60)
    {
        cout<<("Grade is C\n");
    }
    else if(num<=60&&num>45)
    {
        cout<<("Grade is D\n");
    }
    else if (num<=45)
    {
        cout<<("FAILED\n");
    }
   else
    {
    cout<<("invalid \n");
    }

}

};
class English: public num
{
public:
    void number()
    {
        cout<<"Number in English"<<endl;
     conversion();
    }
};
class Lab: public num
{
public:
    void number()
    {
        cout<<"\n Number in Lab"<<endl;
     conversion();
    }
};
class PL_Lab: public num
{
public:
    void number()
    {
        cout<<"\n Number in Programming Lab"<<endl;
     conversion();
    }
};
class Math: public num
{
public:
    void number()
    {
        cout<<"\n Number in Math"<<endl;
     conversion();
    }
};
class Programminng: public num
{
public:
    void number()
    {
        cout<<"\n Number in Programming"<<endl;
     conversion();
    }
};
class Computer_Studies: public num
{
public:
    void number()
    {
        cout<<"\n Number in Computer Studies"<<endl;
     conversion();
    }
};
class Physics: public num
{
public:
    void number()
    {
        cout<<"\n Number in Physics"<<endl;
     conversion();
    }
};
int main()
{
      English o2;
    o2.number();
      PL_Lab o3;
    o3.number();
      Math o4;
    o4.number();
     Programminng o5;
    o5.number();
     Computer_Studies o7;
    o7.number();
     Physics o8;
    o8.number();
     return 0;
}

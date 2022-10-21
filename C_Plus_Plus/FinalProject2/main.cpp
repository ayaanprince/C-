#include<iostream>
#include<string>
using namespace std;
class Result
{
protected:
    string name;
    int id;
    float numOfPL,numOfEnglish,numOfMath;
    float avg;
public:
    Result(string a,int b,float p,float e,float m)
    {
        name=a;
        id=b;
        numOfPL=p;
        numOfEnglish=e;
        numOfMath=m;
    }
};
class StudentData:public Result
{
public:
    StudentData(string a,int b,float p,float e,float m):Result(a,b,p,e,m){}

    void putData()
    {
       cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
    }
    void showResult()
    {
        avg=(numOfPL+numOfEnglish+numOfMath)/3;
        if(avg>=90&&avg<=100)
        {
            cout<<"You get A+ and your point is 4.OO"<<endl;
        }
        else if(avg>=85&& avg<90)
        {
            cout<<"You got A and your point is 3.75"<<endl;
        }
        else if(avg>=80&&avg<85)
        {
            cout<<"You got B+ and your point is 3.50"<<endl;
        }
        else if(avg>=75&&avg<80)
        {
            cout<<"You got B and your point is 3.25"<<endl;
        }

        else if(avg>=70&&avg<75)
        {
            cout<<"ou got C+ and your point is 3.00"<<endl;
        }
        else if(avg>=65&&avg<70)
        {
            cout<<"ou got C and your point is 2.75"<<endl;
        }
        else if(avg>=60&&avg<65)
        {
            cout<<"ou got D+ and your point is 2.50"<<endl;
        }
        else if(avg>=50&&avg<60)
        {
            cout<<"ou got D and your point is 2.25"<<endl;
        }
        else
            cout<<"you have failed"<<endl;


    }

};
main()
{
    StudentData s1("Prince",40091,88,84,91);
        s1.putData();
        s1.showResult();
}

#include<iostream>
using namespace std;

class Student
{
public:
    ~Student()
    {
     cout<<"i am delete"<<endl;
    };
    int id;
    double gpa;
    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }
    void setValue(int x, double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    Student Alim,Prince;
    Alim.setValue(101,3.44);
    Alim.display();
    Prince.setValue(102,3.99);
    Prince.display();
}

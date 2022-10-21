#include <iostream>
using namespace std;
class item
{
private:
    int id;
    double price;
    char *name;
public:
    void getdata()
    {
        name=new char[50];
        cin>>id>>price>>name;
    }
    void putdata()
    {
        cout<<"id="<<id<<endl;
        cout<<"price="<<price<<endl;
        cout<<"name="<<name<<endl;
    }
};
int main()
{
    item rakib,mehedi;
    rakib.getdata();
    rakib.putdata();
    mehedi.getdata();
    mehedi.putdata();
    return 0;
}

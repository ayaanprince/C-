#include<iostream>
using namespace std;
class class1
{
public:
    class1(int val)
    {
        this->value=val;
    }
    class1(class1 const& source)
    {
        value=source.value+100;
    }
    int value;
};
class class2
{
public:
   class2(int val)
    {
     this->value=val;
    }
    int value;

};

int main(void)
{
    class1 object11(100),object12=object11;
    class2 object21(200),object22=object21;
    cout<<object12.value<<endl;
    cout<<object22.value<<endl;
    return 0;
}


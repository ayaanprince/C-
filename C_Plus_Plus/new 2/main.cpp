#include <iostream>

using namespace std;

int main()
{
    int s[2][4];
    s[0][0] = 2;
    s[0][1] = 5;
    s[0][2] = 7;
    s[0][3] = 4;
    s[1][0] = 9;
    s[1][1] = 3;
    s[1][2] = 2;
    s[1][3] = 8;
    cout<<"Sum of the items produced in the first factory:"<<endl;
    int sum1=0,sum2=0;
    for
        (int i=0;i<4;i++)
    {
        sum1+=s[0][i];
    }
    cout<<sum1<<endl;
    cout<<"Sum of the items produced in the second factory:"<<endl;
    for(int j=0;j<4;j++)
    {
        sum2+=s[1][j];
    }
    cout<<sum2<<endl;
    return 0;




}

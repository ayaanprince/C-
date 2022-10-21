#include<iostream>
using namespace std;

int main()
{
    int Array[3][2]={{2,-5},{4,0},{9,1}};
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<2;++j)
        {
            cout<<"Array["<<i<<"]["<<j<<"]="<<Array[i][j]<<endl;
        }
    }
    return 0;
}

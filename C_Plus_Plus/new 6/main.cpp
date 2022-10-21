#include <iostream>
using namespace std;
int main()
{
    int Array[2][3][2];
    cout << "Enter 12 values: \n";
    for(int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for(int k = 0; k < 2; ++k )
            {
                cin >> Array[i][j][k];
            }
        }
    }
    cout<<"\nDisplaying Value stored:"<<endl;
    for(int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for(int k = 0; k < 2; ++k)
            {
                cout << "Array[" << i << "][" << j << "][" << k << "] = " << Array[i][j][k] << endl;
            }
        }
    }
    return 0;
}

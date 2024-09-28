#include <iostream>
using namespace std;

int main()
{
    int levels;

    cout << "Enter the number of levels for your pyramid:";
    cin >> levels;

    for(int i=1; i<=levels; i++)
    {
        for(int j=1; j<=levels-i; j++)
        {
            cout << " ";
        }
        for(int k=1; k<=(2*i-1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}



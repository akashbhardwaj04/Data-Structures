#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter range:" << endl;
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        for (int k=1; k<=(n-i); k++)
        {
            cout << " ";
        }
        for (int j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;

    }

    for (int i=1; i<=n; i++)
    {
        for (int k=0; k!=i; k++)
        {
            cout << " ";
        }
        for (int j=i; j<=n-1; j++)
        {
            cout << "*";
        }
        cout << endl;

    }

    return 0;
}

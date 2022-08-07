#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << 1 << " " << 2 << " " << 3 << " " << 4 << " " << 5 << endl;
        }
        else
        {
            if (i % 2 == 0)
            {
                int k = 5 * i;
                cout << k << " ";
                for (int m = 4; m > 0; m--)
                {
                    k-=1;
                    cout << k<< " ";
                }
                cout << endl;
            }
            else
            {
                int k = 5 * (i - 1) + 1;
                cout << k << " ";
                for (int m = 4; m > 0; m--)
                {
                    k+=1;
                    cout << k  << " ";
                }
                cout << endl;
            }
            
        }
    }
}

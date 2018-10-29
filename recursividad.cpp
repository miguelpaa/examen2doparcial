#include <iostream>
using namespace std;
int main ()
{
    int q;
    cout << "hasta que numero de la serie fibonnacci deceas llegar?" << endl;
    cin >> q;
    if (q==0)
        {
            cout << "el numero de fibonacci es = 0";
        }

    else
        {
            int fibonacci[q];
            int x;
            fibonacci[0]=0;
            fibonacci[1]=1;
            cout << "serie de fibonacci \n";
            cout << fibonacci[0] << endl << fibonacci[1] << endl;
             for (x=2; x<q; x++)
                {
                    fibonacci[x]=fibonacci[x-1]+fibonacci[x-2];
                    cout << fibonacci[x] << endl;
                }
        }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a ;
    cin >> a ;
    int i=a;
    int pri=1;
    for(i=a-1;i>1;i--)
    {
        if(a%i==0)
        {
            cout << "NO" << endl ;
            pri=0;
            break;
        }
    }
    if(pri==1)
    {
        cout << "YES" << endl;
    }
}

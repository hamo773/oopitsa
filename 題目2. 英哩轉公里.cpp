#include <iomanip>
#include <iostream>


using namespace std;

int main()
{
    int a;
    double b;
    /*while(scanf("%lld",&a)!=EOF)
        {
            b=a*1.6;
            printf("%.1lf\n",b);
        }*/
    /*cin >> a ;
    while(!cin.eof())
    {
        b=a*1.6;
        cout << fixed << setprecision(1) << b << endl ;
        cin >> a ;
    }*/
    cin >> a ;
    b=a*1.6;
    cout << fixed << setprecision(1) << b << endl ;
}

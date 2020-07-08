#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    long double r,p;
    //scanf("%f %d %d",&r,&n,&p);
    cin >> r >> n >> p;
    int i=0;
    long double k;
    k=0;
    for(i=0;i<n;i++)
    {
        k=(k+p)*(1.0+r);
    }
    //printf("%d\n",k);
    cout << fixed << setprecision(0) << k << endl ;
}

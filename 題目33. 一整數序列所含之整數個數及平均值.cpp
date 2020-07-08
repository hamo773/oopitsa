#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    double a,c;
    float k;
    int b=0;
    a=0;
    c=0;
    cin >> a ;
    while(!cin.eof())
    {
        c=c+a;
        b++;
        cin >> a ;
    }
    //Math.Round(1,1);
    c=c/b;
    //printf("Size: %d\n",b);
    //printf("Average: %.3f\n",c);
    cout << "Size: " << b << endl ;
    cout << "Average: " << fixed << setprecision(3) << c << endl ;

}

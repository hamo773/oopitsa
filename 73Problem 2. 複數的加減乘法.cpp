#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a[4];
    //scanf("%f%f%f%f",&a[0],&a[1],&a[2],&a[3]);
    cin >> a[0] >> a[1] >> a[2] >> a[3] ;
    double d,e;
    d=a[0]+a[2];
    e=a[1]+a[3];
    //printf("(%.2f)+(%.2f)i\n",d,e);
    cout << fixed << setprecision(2) << "(" << d << ")"<< "+" << "(" << e << ")" << "i" <<endl;
    d=a[0]-a[2];
    e=a[1]-a[3];
    //printf("(%.2f)+(%.2f)i\n",d,e);
    cout << fixed << setprecision(2) << "(" << d << ")"<< "+" << "(" << e << ")" << "i" <<endl;
    d=a[0]*a[2]-a[1]*a[3];
    e=a[0]*a[3]+a[1]*a[2];
    //printf("(%.2f)+(%.2f)i\n",d,e);
    cout << fixed << setprecision(2) << "(" << d << ")"<< "+" << "(" << e << ")" << "i" <<endl;

}

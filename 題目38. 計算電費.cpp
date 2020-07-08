#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    //scanf("%d",&n);
    cin >> n ;
    double summer=0;
    double nonsummer=0;
    if(n<=120)
    {
        summer=n*2.1;
        nonsummer=n*2.1;
    }
    else if(n<=330)
    {
        summer=120*2.1+(n-120)*3.02;
        nonsummer=120*2.1+(n-120)*2.68;
    }
    else if(n<=500)
    {
        summer=120*2.1+(330-120)*3.02+(n-330)*4.39;
        nonsummer=120*2.1+(330-120)*2.68+(n-330)*3.61;
    }
    else if(n<=700)
    {
        summer=120*2.1+(330-120)*3.02+(500-330)*4.39+(n-500)*4.97;
        nonsummer=120*2.1+(330-120)*2.68+(500-330)*3.61+(n-500)*4.01;
    }
    else if(n>700)
    {
        summer=120*2.1+(330-120)*3.02+(500-330)*4.39+(700-500)*4.97+(n-700)*5.63;
        nonsummer=120*2.1+(330-120)*2.68+(500-330)*3.61+(700-500)*4.01+(n-700)*4.5;
    }
    /*printf("Summer months:%.2f\n",summer);
    printf("Non-Summer months:%.2f\n",nonsummer);*/
    cout << "Summer months:" << fixed << setprecision(2) << summer << endl;
    cout <<"Non-Summer months:" << nonsummer << endl;
}

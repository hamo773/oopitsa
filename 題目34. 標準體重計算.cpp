#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    int gen;
    double n;
    double k;
    cin >> n >> gen ;
    while(!cin.eof())
    {
        if(gen==1)
        {
            k=(n-80)*0.7;
        }
        else
        {
            k=(n-70)*0.6;
        }
        //printf("%.1f\n",k);
        cout << fixed << setprecision(1) << k << endl ;
        cin >> n >> gen ;
    }
    //cout << endl ;
}

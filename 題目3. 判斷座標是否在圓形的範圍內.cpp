#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    /*scanf("%d %d",&a,&b);
    if(a*a+b*b<=10000)
        {
            printf("inside\n");
        }
    else
        {
            printf("outside\n");
        }*/
    cin >> a >> b ;
    if(a*a+b*b<=10000)
    {
        cout << "inside" << endl;
    }
    else
    {
        cout << "outside" << endl;
    }
}


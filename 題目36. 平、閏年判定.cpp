#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    //scanf("%d",&n);
    cin >> n ;
    if(n%400!=0&&n%100==0)
    {
        //printf("Common Year\n");
        cout << "Common Year" << endl ;
    }
    else if(n%4!=0)
    {
        //printf("Common Year\n");
        cout << "Common Year" << endl ;
    }
    else
    {
        //printf("Bissextile Year\n");
        cout << "Bissextile Year" << endl ;
    }
}

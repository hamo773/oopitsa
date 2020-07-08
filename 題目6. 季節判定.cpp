#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a;
    //scanf("%d",&a);
    cin >> a ;
    if(a>=3&&a<=5)
        {
            //printf("Spring\n");
            cout << "Spring" << endl ;
        }
    if(a>=6&&a<=8)
        {
            //printf("Summer\n");
            cout << "Summer" << endl ;
        }
    if(a>=9&&a<=11)
        {
            //printf("Autumn\n");
            cout << "Autumn" << endl ;
        }
    if(a==12||a<=2)
        {
            //printf("Winter\n");
            cout << "Winter" << endl ;
        }
}

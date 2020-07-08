#include <iostream>

using namespace std;

int main()
{
    char a[100];
    char c;
    int b;
    cin >> b ;
    int i;
    while((c=cin.get())!=EOF)
    {
        if(c==20)
        {
            a[i]=c;
        }
        else
        {
            a[i]=c+b;
        }
        i++;
    }
    cout << a ;
}

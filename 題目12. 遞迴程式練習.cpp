#include <iostream>

using namespace std;

int f(int a)
{
    if(a==0||a==1)
    {
        return a+1;
    }
    else
    {
        return f(a-1)+f(a/2);
    }
}

int main()
{
    int a;
    cin >> a ;
    int k=f(a);
    cout << k << endl ;

}

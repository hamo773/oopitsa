#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    string a;
    int i=0;
    int j=0;
    int ans=0;
    cin >> n ;
    getchar();
    for(i=0;i<n;i++)
    {
        //cin >> a ;
        //a=cin.getline();
        getline(cin,a);
        for(j=0;j<a.length();j++)
        {
            //if(a[j]!=' ')
            //{
                ans=ans+a[j];
            //}
        }
        cout << ans << endl ;
        ans=0;
    }
}

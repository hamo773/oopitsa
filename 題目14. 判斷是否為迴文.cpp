#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1;
    cin >> str1;
    int len=str1.length();
    int ans=1;
    int i=0;
    for(i=0;i<len/2;i++)
    {
        if(str1[i]!=str1[len-i-1])
        {
            cout << "NO" << endl;
            ans=0;
        }
    }
    if(ans==1)
    {
        cout << "YES" << endl ;
    }
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1,str2;
    cin >> str1 ;
    cin >> str2 ;
    int pos=0;
    int coun=0;
    while((pos=str2.find(str1,pos))!=string::npos)
    {
        coun++;
        pos++;
        //cout << pos << endl;
    }
    cout << coun <<endl ;
}

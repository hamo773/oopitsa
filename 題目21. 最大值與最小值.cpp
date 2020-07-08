#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double k,maxi,mini;
    int i=0;
    mini=1000000;
    maxi=-1000000;
    for(i=0;i<10;i++)
    {
        cin >> k;
        if(k>maxi)
        {
            maxi=k;
        }
        if(k<mini)
        {
            mini=k;
        }
    }
    cout << "maximum:" << fixed << setprecision(2) << maxi << endl;
    cout << "minimum:" << mini << endl;
}

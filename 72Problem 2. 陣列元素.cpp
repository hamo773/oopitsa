#include <iostream>

using namespace std;
int main()
{
    int a[20000]={0};
    int b;
    int num=0;
    cin >> b ;
    while(!cin.eof())
    {
        a[b]++;
        num++;
        //cout << b << " " << a[b] <<num << endl;
        cin >> b ;
    }
    int maxi=0;
    int ans;
    for(int i=0;i<20000;i++)
    {
        //cout << maxi ;
        if(a[i]>=maxi)
        {
            maxi=a[i];
            ans=i;
            //cout << "asda" ;
            //cout << maxi << endl ;
        }
    }
    if(num%2!=0)
    {
        num=num/2+1;
    }
    else
    {
        num=num/2;
    }
    if(maxi>=num)
    {
        cout << ans << endl ;
    }
    else
    {
        //cout << ans << endl ;
        cout << "n/a" << endl ;
    }
}

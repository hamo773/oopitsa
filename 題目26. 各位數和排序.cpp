#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i,j;
    int b[n]={0};
    int c[n]={0};
    int a[n];
    int k;
    for(i=0;i<n;i++)
    {
        c[i]=i;
        cin >> a[i];
        k=a[i];
        while(k>0)
        {
            b[i]=b[i]+(k%10);
            k=k/10;
        }
       // cout << b[i] << endl;
    }
    int mini=100000;
    int temp;
    int ka=100000;
    for(i=0;i<n;i++)
    {
        mini=100000;
        for(j=i;j<n;j++)
        {
            if(b[c[j]]<mini)
            {
                /*temp=c[j];
                c[j]=c[i];
                c[i]=temp;*/
                mini=b[c[j]];
                k=j;
                ka=a[c[j]];
            }
            else if(b[c[j]]==mini&&a[c[j]]<ka)
            {
                /*temp=c[j];
                c[j]=c[i];
                c[i]=temp;*/
                mini=b[c[j]];
                ka=a[c[j]];
                //cout << i << " " << a[c[j]] << " " << ka << endl ;
                k=j;
            }
        }
        temp=c[k];
        c[k]=c[i];
        c[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        if(i!=n-1)
        {
            cout << a[c[i]] << " " ;
        }
        else
        {
             cout << a[c[i]] ;
        }
    }
    cout << endl ;
}

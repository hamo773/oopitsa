#include <iostream>

using namespace std;

int main()
{
    int a;
    int bin[8]={0};
    cin >> a;
    int n=a;
    int i=0;
    if(a>=0)
    {
        while(n>0)
        {
            bin[i]=n%2;
            n=n/2;
            i++;
        }
        for(i=7;i>=0;i--)
        {
            cout << bin[i] ;
        }
        cout << endl;
    }
    else
    {
        n=-1*a;
        while(n>0)
        {
            bin[i]=n%2;
            n=n/2;
            i++;
        }
        for(i=0;i<8;i++)
        {
            if(bin[i]==1)
            {
                for(int k=i+1;k<8;k++)
                {
                    if(bin[k]==0)
                    {
                        bin[k]=1;
                    }
                    else if(bin[k]==1)
                    {
                        bin[k]=0;
                    }
                }
                break;
            }
        }
        for(i=7;i>=0;i--)
        {
            cout << bin[i] ;
        }
        cout << endl;
    }
}

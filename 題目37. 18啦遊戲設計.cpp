#include <iostream>

using namespace std;

int main()
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3] ;
    int i,j;
    int k=0;
    int point=0;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
            {
                k++;
            }
        }
    }
    if(k>3)
    {
        cout << "WIN" << endl;
    }
    else if(k==3||k==0)
    {
        cout << "R" << endl ;
    }
    else if(k==1)
    {
        for(i=0;i<4;i++)
        {
            for(j=i+1;j<4;j++)
            {
                if(a[i]==a[j])
                {
                    for(int b=0;b<4;b++)
                    {
                        if(a[b]!=a[i])
                        {
                            point=point+a[b];
                        }
                    }
                    break;
                }
            }
            if(point!=0)
            {
                break;
            }
        }
        cout << point << endl;
    }
    else
    {
        for(i=0;i<4;i++)
        {
            for(j=i+1;j<4;j++)
            {
                if(a[i]==a[j])
                {
                    for(int b=0;b<4;b++)
                    {
                        if(a[b]>a[i])
                        {
                            point=2*a[b];
                        }
                    }
                    break;
                }
            }
            if(point!=0)
            {
                break;
            }
        }
        cout << point << endl;
    }
}

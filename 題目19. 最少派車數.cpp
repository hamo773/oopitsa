#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n,i;
    //scanf("%d",&n);
    cin >> n ;
    int a[25]={0};
    int str,end;
    for(i=0;i<n;i++)
        {
            //scanf("%d%d",&str,&end);
            cin >> str >> end ;
            while(str<end)
                {
                    a[str]=a[str]+1;
                    str++;
                }
        }
    int k=0;
    for(i=0;i<25;i++)
        {
            if(a[i]>k)
                {
                    k=a[i];
                }
        }
    //printf("%d\n",k);
    cout << k << endl ;
}

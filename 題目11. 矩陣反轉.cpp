#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    //scanf("%d%d",&n,&m);
    cin >> n >> m ;
    int input[n][m];
    int output[m][n];
    int i,j;
    int a;
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                {
                    //scanf("%d",&input[i][j]);
                    cin >> input[i][j];
                    output[j][i]=input[i][j];
                }
        }
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    //printf("%d",output[i][j]);
                    cout << output[i][j] ;
                    if(j!=n-1)
                        {
                            //printf(" ");
                            cout << " " ;
                        }

                }
            //printf("\n");
            cout << "\n" ;
        }
}

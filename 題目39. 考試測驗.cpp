#include <iostream>

using namespace std ;
int main()
{
    int n;
    cin >> n;
    int a[n][3];
    int i=0;
    int j;
    for(i=0;i<n;i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    int more80,more60,sum;
    for(i=0;i<n;i++)
    {
        more80=0;
        more60=0;
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
            if(a[i][j]>=80)
            {
                more80++;
            }
            if(a[i][j]>=60)
            {
                more60++;
            }
        }
        if(more60==3||(more60==2&&sum>=220))
        {
            cout << "P"<<endl;
        }
        else if((more60==2&&sum<220)||(more60==1&&more80==1))
        {
            cout << "M" << endl;
        }
        else
        {
            cout << "F" << endl ;
        }
    }

}

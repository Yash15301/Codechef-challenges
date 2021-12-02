#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int sum=0,product=1;
        int a[n][n];
        for(int row=0; row<n; row++)
        {
            for(int column=0; column<n; column++)
            {
                a[row][column]=1;
                sum=sum+a[row][column];
                if(sum > 0)
                {
                    a[row][column]=-1;
                }
                product=product*a[row][column];
                if(sum>a[row][column])
                {
                    continue;
                }
            }
        }
    }
    return 0;
}
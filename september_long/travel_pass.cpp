#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        string s;
        int sum =0;
        cin >> n >> a >> b >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '0')
            {
                sum+=a;
            }
            else
            {
                sum+=b;
            }
        } 
        cout << sum << endl;
    }
    return 0;
}
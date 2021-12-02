#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int count=0;
        for(int c=1;c<=n;c++)
        {
            for(int b=c;b<=n;b+=c)
            {
                if(b%c==0)
                {
                    for(int a=c;a<=n;a+=b)
                    {
                        if(a%b==c)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
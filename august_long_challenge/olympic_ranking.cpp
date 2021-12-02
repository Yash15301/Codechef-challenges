#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int g1,s1,b1,g2,s2,b2;
    while(T--)
    {
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        if((g1+s1+b1)-(g2+s2+b2) > 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}
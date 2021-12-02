#include<cmath>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        float x,y,total;
        float result;
        cin >> x >> y;
        total = x+y;
        if(total < 6)
        {
            result = (6-total)/6;
        }
        else
        {
            result = 0;
        }
        cout << result << endl;
    }
}
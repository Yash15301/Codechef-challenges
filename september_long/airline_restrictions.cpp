#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        int d,e;
        cin >> a >> b >> c >> d >> e;
        int arr[3] = {a,b,c};
        sort(arr,arr+3);
        if(arr[2]+arr[1] <= d && arr[0] <= e)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }   
    return 0;
}
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
        int arr[n];
        map<int ,int> mp;
        int result=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            mp[arr[i] -i-1]++;
            if(mp[arr[i]-i-1] ==1)
            {
                result++;
            }
        }
        if(mp[arr[0]-1] == n)
        {
            cout << n << endl;
        }
        else 
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
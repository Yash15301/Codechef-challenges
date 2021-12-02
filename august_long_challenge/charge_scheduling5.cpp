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
        vector<int, pair<int, int>> v;
        vector<int> result;
        for(int i=0; i<n; i++)
        {
            v[i].first = i+1;
            cin >> v[i].second.first;
        }
        for(int i=0; i<n; i++)
        {
            cin >> v[i].second.second;
        }
        sort(v.begin(), v.end());
        int start_time=0, end_time;
        while(max(v.begin(), v.end()) && )


    }
    return 0;
}
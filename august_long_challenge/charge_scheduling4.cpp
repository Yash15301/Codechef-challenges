#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while(T--)
    {
        long long int n,count=0,start_time=0,end_time;
        cin >> n;
        vector<pair<pair<long long int, long long int>,long long int>>v(n);
        vector<long long int>ans;
        for(int i=0; i<n; i++)
        {
            long long int x;
            cin >> x;
            v[i].first.first=x;
        } 
        for(int i=0; i<n; i++)
        {
            long long int x;
            cin >> x;
            v[i].first.second=x;
            v[i].second=i+1;
        }
        sort(v.begin(), v.end());
        int check=0;
        for(long long int i =0; i<v.size(); i++)
        {
            if(v[i].first.first>v[i].first.second)
            {
                continue;
            }
            if(i==0)
            {
                end_time=v[i].first.first;
                ans.push_back(v[i].second);
                ans.push_back(start_time);
                ans.push_back(end_time);
                start_time=end_time;
                count ++;
                continue;
            }
            if(v[i].first.second-start_time >=v[i].first.first)
            {
                end_time=v[i].first.first+start_time;
                ans.push_back(v[i].second);
                ans.push_back(start_time);
                ans.push_back(end_time);
                start_time=end_time;
                count ++;
            }
        }
        cout << count << endl;
        for(long long int i=0; i<ans.size(); i++)
        {
            cout << ans[i] << " ";
            if((i+1)%3==0)
            {
                cout << endl;
            }
        }
    }
    return 0;
}
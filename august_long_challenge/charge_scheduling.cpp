#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int x=0;;
        int count=0;
        cin >> n;
        int time[n];
        int charging[n];
        int start_time =0;
        int end_time=0;
        vector <pair <int, int>> v;
        for(int i=0; i<n; i++)
        {
            cin >> time[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> charging[i];
        }
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(time[i],charging[i]));
        }
        sort(v.begin(), v.end());

        while(x<n && end_time<=*max_element(charging, charging+n))
        {
            if(v[x].first > v[x].second)
            {
                ++x;
            }
            else
            {
                
                end_time = v[x].first + start_time;
                if(end_time > *max_element(charging, charging+n))
                {
                    break;
                }
                else
                {
                    cout << x+1 << " " << start_time << " " << end_time << endl;
                    start_time = end_time;
                    ++x;
                    count ++;
                }
            }

        }
        if(count == 0)
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
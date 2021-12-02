#include<bits/stdc++.h>
using namespace std;

void solve(int n, int k, string s)
{
    int count=0,goodness_score=0;
    for(int i=0; i<n/2; i++)
    {
        goodness_score+=(s[i]!=s[n-i-1]);
        //cout << "Comparing " << s[i] << " " << s[n-i-1] << endl;
    }
    cout << abs(goodness_score-k) << endl;
    
}
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,k;
        string s;
        cin >> n >> k >> s;
        cout << "Case #" << i+1 << ": ";
        solve(n,k,s);
    }
}
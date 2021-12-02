#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int largest=0,count=0;
        vector<int> v(n);
        //input elements in a vector
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        map<int, int > m;
        pair<int, int> answer = {0,0};
        //calculate frequency of all elements 
        for(int i=0; i<n; i++)
        {
            m[v[i]]++;
        }

        //using first element of map to calculate XOR and using its frequnecy to get results
        for(auto it=m.begin(); it!=m.end(); ++it)
        {   
            int temp=it->first ^ x;
            int temp2=it->second;
            map<int, int>::iterator j = m.find(temp);
            if(j!=m.end())
            {
                largest = max(largest, (j->second)+temp2);
                count =it->second;
                if(largest>answer.first)
                {
                    answer.first=largest;
                    answer.second=count;
                }
                else if(largest==answer.first && count<answer.second)
                {
                    answer.first=largest;
                    answer.second=count;
                }
            }
            
        }
        if(largest==0)
        {
            // calculate max number of elements occuring 
            int maximum=0;
            for(auto it=m.begin(); it!=m.end(); ++it)
            {
                maximum = max(maximum,it->second);
            }
            map<int,int>::iterator j=m.begin();
            answer.first=maximum;
            cout << answer.first << " " << answer.second <<  endl;
        }
        else
        {
            // only 1 operation can happen
            cout << answer.first <<" "<< answer.second <<  endl;
        }    
    }
    return 0;
}
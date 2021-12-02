#include<bits/stdc++.h>
using namespace std;
//push occurences of integer in vector. Then sort vector in ascending order and take the last element from vector. if last element of vector is 1 or 2 means each element is unique so 2 pairs are possible. if last element is 2 means 
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        unordered_map<int, int> unordered_map;
        int array[4];
        for(int i=0; i<4; i++)
        {
            cin >> array[i];
            unordered_map[array[i]]++;
        }
        for(auto x: unordered_map)
        {
            cout << x.first << " " << x.second << endl;
        }
        vector<int> v;
        for(auto k: unordered_map)
        {
            v.push_back(k.second);
        }
        sort(v.begin(), v.end(), greater<>());
        cout << "v[0]: "<< v[0] << endl;
        if(v[0] > 3)
        {
            cout << 0 << endl;
        }
        else if(v[0] > 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }    
        
    return 0;
}
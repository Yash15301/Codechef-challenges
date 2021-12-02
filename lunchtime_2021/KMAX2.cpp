#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
           cin >> arr[i];
        }
        /*cout << "array: " << endl;
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " " ;
        }
        cout << endl;*/
        int count=0;
        for(int i=0; i<n-1; i++)
        {
            vector<int> v;
            for(int j=i; j<n; j++)
            {
                v.push_back(arr[j]);
                if(v.size() >=k)
                {
                    if(v.size()+1 >= k)
                    {
                        /*if(v[k-1] == *max_element(arr, arr+n) == 0);
                        {
                            cout << v[k-1] << " " << *max_element(arr, arr+n) << endl;                            
                            count ++;
                            cout << "Sequence found: ";
                            for(int i=0; i<v.size(); i++)
                            {
                                cout << v[i] << " ";
                            }
                            cout << endl;
                        }*/
                        int a= v[k-1];
                        int b= *max_element(arr, arr+n);
                        if(a==b)
                        {
                            count++;
                        }
                    }
                }
                /*cout << "Vector: " << endl;
                for(int i=0; i<v.size(); i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;*/
            }
        }
        cout << count << endl;
        //cout << * max_element(arr, arr+n) << endl;

    }
    return 0;

}
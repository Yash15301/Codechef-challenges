#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)//take test cases
    {
        int n,q,temp;
        int count=0;
        int total;
        cin >> n >> q;
        int array[n];
        for(int j=0; j<n; j++)//take array
        {
            cin >> temp;
            array[j] = temp;
        }
        for(int j=0; j<q; j++)//solve query
        {
            int l,r;
            cin >> l >> r;
            l=l-1;
            r=r-1;
            //cout << "checking from" << l << " " << r <<endl;
            for(int x=l; x<=r-2; x++)
            {
                //cout << "x is " << array[x]<<endl;
                for(int y=x+1; y<=r-1; y++)
                {
                    //cout << "y is " << array[y] << endl;
                    for(int z=y+1; z<=r; z++)
                    {
                        //cout << "z is " << array[z] << endl;
                        total = array[x]+array[y]+array[z];
                        if(total%2 == 0)
                        {
                            //cout << total;
                            count += 1;
                        }    
                        total = 0;                    
                    }
                }
            }
            cout << count << endl;
            count = 0;
        }
    }
}
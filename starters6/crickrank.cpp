#include<cstdio>
#include<cmath>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        int r1,w1,c1,r2,w2,c2;
        int countA = 0;
        int countB = 0;
        cin >> r1 >> w1 >> c1 >> r2 >> w2 >> c2;
        
        int r,w,c;
        r=r1-r2;
        w=w1-w2;
        c=c1-c2;
        if(r>0)
        {
            ++countA;
        }
        if(r<0)
        {
            ++countB;
        }
        if(w>0)
        {
            ++countA;
        }
        if(w<0)
        {
            ++countB;
        }
        if(c>0)
        {
            ++countA;
        }
        if(c<0)
        {
            ++countB;
        }
        //cout << countA << " " <<countB <<endl;
        if(countA > countB)
        {
            cout << "A"<< endl;
        }
        if(countB > countA)
        {
            cout << "B"<<endl;
        }
        //cout << "\nA: " << r1<<w1<<c1;
        //cout << "\nB: " <<r2<<w2<<c2;
        //cout << "\nr1w1c1" << r1 << w1 << c1;
        //cout << "\nr2w2c2" << r2 << w2 << c2;

    }
}
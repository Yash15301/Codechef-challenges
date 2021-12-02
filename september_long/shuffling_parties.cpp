#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
       long long int n;
       cin >> n;
       long long int a[n];
       for(long long int i=0; i<n; i++)
       {
           cin >> a[i];
       }
       int oddInt=0;
       int evenInt=1;
       while(true)
       {
           while(evenInt<n && a[evenInt]%2==1)
           {
               evenInt += 2;
           }
           while(oddInt<n && a[oddInt]%2==0)
           {
               oddInt+=2;
           }
           if(evenInt<n && oddInt<n)
           {
               swap(a[evenInt],a[oddInt]);
           }
           else
           {
               break;
           }
       }
       long long int sum=0;
       for(long long int i=0; i<n; i++)
       {
           sum+=(a[i]+(i+1))%2;
       } 
       cout << sum << endl;
    }
    return 0;
}
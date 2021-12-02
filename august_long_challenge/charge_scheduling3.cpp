#include <bits/stdc++.h>
using namespace std;



class Activity{

public:
		long long index,charge_time,leaving_time;

};

bool compare(Activity a,Activity b)
{
       return a.charge_time < b.charge_time; 
}
int main() {
	// your code goes here
	
	long long q;
	cin>>q;
	while(q--)
	{
	    long long n,c=0;
	    cin>>n;
	    long long max_time=0,fin=0;

		Activity a[n];
		for(long long i=0;i<n;i++)
		{
			long long data;
			cin>>data;
			a[i].index = i;
			a[i].charge_time = data;
		}

		for(long long i=0;i<n;i++)
		{
			long long data;
			cin>>data;
			a[i].leaving_time = data;
			max_time = max(max_time,data);
		}

		sort(a,a+n,compare);
		
		for(long long i=0;i<n;i++)
		{
			if(fin+a[i].charge_time<a[i].leaving_time and fin+a[i].charge_time<=max_time){
			    	
			    fin = fin + a[i].charge_time;
			    c++;

			}
		}

		cout<<c<<endl;
        
        fin = 0;

		for(long long i=0;i<n;i++)
		{
			if(fin+a[i].charge_time<a[i].leaving_time and fin+a[i].charge_time<=max_time)
			{
				cout<<a[i].index+1<<" "<<fin<<" "<<fin+a[i].charge_time<<endl;
				fin = fin + a[i].charge_time;
				
			}
		}
		

	}
	return 0;
}

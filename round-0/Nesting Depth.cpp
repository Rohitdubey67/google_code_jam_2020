#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t,n,i,k,p;
	cin>>t;
	for(p=1;p<=t;p++)
	{
	    cout<<"Case #"<<p<<": ";
	    string s;
	    cin>>s;
	    k=0;
	    for(i=0;i<s.size();i++)
	    {
	        while(k<(s[i]-'0'))
	        {
	           cout<<"(";
	           k++;
	        }
	        while(k>(s[i]-'0'))
	        {
	            cout<<")";
	            k--;
	        }
	        cout<<s[i];
	    }
	     while(k>0)
	        {
	            cout<<")";
	            k--;
	        }
	        cout<<endl;
	}
	return 0;
}

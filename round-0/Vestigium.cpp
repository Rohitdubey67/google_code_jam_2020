#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t,n,i,j,k,p;
	cin>>t;
	for(p=1;p<=t;p++)
	{
	    cout<<"Case #"<<p<<": ";
	    cin>>n;
	    ll a[n][n];
	    k=0;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	            if(i==j)
	            k+=a[i][j];
	        }
	    }
	    cout<<k<<" ";
	    k=0;
	    for(i=0;i<n;i++)
	    {
	        unordered_map<ll,ll>m;
	        for(j=0;j<n;j++)
	        {
	            m[a[i][j]]++;
	            if(m[a[i][j]]>1)
	            {
	                k++;
	                break;
	            }
	        }
	    }
	    cout<<k<<" ";
	    k=0;
	    for(i=0;i<n;i++)
	    {
	        unordered_map<ll,ll>m;
	        for(j=0;j<n;j++)
	        {
	            m[a[j][i]]++;
	            if(m[a[j][i]]>1)
	            {
	                k++;
	                break;
	            }
	        }
	    }
	    cout<<k<<endl;
	}
	return 0;
}

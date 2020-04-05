#include <bits/stdc++.h>
using namespace std;
#define ll long long int
struct s
{
    ll x,y,z;
};
bool cmp(s a,s b)
{
   if(a.x!=b.x)
   return a.x<b.x;
   else if(a.y!=b.y)
   return a.y<b.y;
   else
   return a.z<b.z;
}
int main() {
	ll t,n,i,j,k,p,m;
	cin>>t;
	for(p=1;p<=t;p++)
	{
	    cout<<"Case #"<<p<<": ";
	    cin>>n;
	    s a[n];
	    char b[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i].x>>a[i].y;
	        a[i].z=i;
	    }
	    sort(a,a+n,cmp);
	    k=1;
	    i=0,j=-1;
	    b[a[i].z]='C';
	    for(m=1;m<n;m++)
	    {
	       if(a[m].x>=a[i].y)
	       {
	           i=m;
	           b[a[i].z]='C';
	       }
	       else if(a[m].x<a[i].y)
	       {
	           if(j==-1)
	           {
	               j=m;
	               b[a[j].z]='J';
	           }
	           else if(a[m].x>=a[j].y)
	           {
	               j=m;
	               b[a[j].z]='J';
	           }
	           else
	          {
	              k=0;
	          }
	       }
	    }
	    if(k==0)
	    cout<<"IMPOSSIBLE"<<endl;
	    else
	    {
	        for(i=0;i<n;i++)
	        cout<<b[i];
	        cout<<endl;
	    }
	}
	return 0;
}

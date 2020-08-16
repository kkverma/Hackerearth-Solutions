#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=1;
        cin>>n;
        if(n==1)
        cout<<0<<endl;
        else
        {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
            c+=i;
            if(i!=n/i)
            c+=n/i;
            }
            
        }
        
        cout<<c<<endl;
        }
    }
}
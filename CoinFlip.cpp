#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int k; cin>>k;
     while(k--)
     {
         long long int n;  int i,q;
         cin>>i>>n>>q;
         if(n%2==0) cout<<n/2<<endl;
         else if(i==q) cout<<n/2<<endl;
         else cout<<(1+(n/2))<<endl;
     }
    }
    return 0;
}


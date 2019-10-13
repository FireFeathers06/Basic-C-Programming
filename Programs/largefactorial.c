#include <stdio.h>
typedef long long int ll;
ll mod = 1e9 + 7;
int main()
{
    ll n, q, i, p = 1,s=0,t=0,sum=0;
    scanf("%lld %lld", &n, &q);
    ll a[n];
    ll prefix[n];
    for (i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    for(i=0;i<n;i++)
    {
    sum=sum+a[i]*p;
    p=p*107;
    }
    for (i = 0; i < q; i++)
    {
        ll l, r, x;
        scanf("%lld %lld %lld", &l, &r, &x);
        

    }
    long long int hash=0;
    for(i=0;i<n;i++)
    {
        hash=(hash+p*a[i])%mod;
        p=p*107;
    }

  
    

    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll power(ll a , int b){
    ll ans=1;
    while(b){
        if(b&1)
            ans*=a;
        a*=a;
        b>>=1;
    }
    return ans;
}

bool check(ll a){
    ll b=a;
    ll ans=0;
    while(b){
        ans += power(b%10 , 5);
        b/=10;
    }
    if(ans==a)
        return true;
    return false;
}

using namespace std;

int main()
{
    quick;

#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
#endif

    int ans=0;
    for(int i=10;i<1e6;i++){
        if(check(i))
            ans+=i;
    }

    cout<<ans<<endl;
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
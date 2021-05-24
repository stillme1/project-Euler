#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;


int solve(int n, int a, int b){
    if(n==a)return 1;
    if(a>n)return 0;
    
    int ans=0;
    
    for(int i=b ; i>=(n+a-1)/a ; i--){
        ans+=solve(n-i , a-1 , i);
    }
    return ans;
}

int main()
{
    quick;

#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
#endif

    int ans=0;
    for(int i=2 ; i<101 ; i++){
        ans += solve(100,i,99);
    }
        

    cout<<ans;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
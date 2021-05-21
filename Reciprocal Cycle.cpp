#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int find(int n){
    int j=ceil(log10(n));
    int k=pow(10,j);
    map<int,int>a;
    vector<int>b;

    int l;
    while(k){
        // cout<<k<<endl;
        k=k%n;
            if(a[k] || k==0){
                b.push_back(k);
                break;
            }
        a[k]=1;
        b.push_back(k);
        k*=10;
        while(k<n){
            if(a[k]){
                b.push_back(k);
                break;
            }
            b.push_back(k);
            a[k]=1;
            k*=10;

        }
    }
    if (k==0) return 0;
    int x=1;
    for(int i=b.size()-2 ; i>=0 ; i--){
        if(b[i]==b[b.size()-1])
            break;
        x++;
    }
    return x;
}

int main()
{
    quick;

#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
#endif

    
    int mx=0;
    int n=1000;

    int ans=0;

    for(int i=2;i<n;i++){
        mx=max(mx , find(i));
        if(mx==find(i))
            ans=i;
    }
    cout<<ans;
    // cout<<find(4)<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
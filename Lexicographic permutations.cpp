#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int factorial(int n){
    if(n<2) return 1;
    return factorial(n-1)*n;
}

void solve(vector<int>&a , int n){
    cout<<n<<endl;
    if(n<2)return;

    int i=0;
    while(factorial(10-i)>=n)
        i++;
    i--;

    int j=(n+(factorial(10-i-1))-1)/(factorial(10-i-1)) - 1;
    swap(a[i],a[i+j]);
    // for(auto j: a)
    //     cout<<j<<" ";
    // cout<<endl;
    sort(a.begin()+i+1, a.end());
    cout<<"j="<<j<<endl;
    solve(a, n-(j*factorial(10-i-1)));
    // for(auto j: a)
    //     cout<<j<<" ";
    // cout<<endl;
}

int main()
{
    quick;

#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
#endif

    vector<int>a={0,1,2,3,4,5,6,7,8,9};
    int n=1e6;
    solve(a,n);
    
    for(auto i: a)
        cout<<i<<" ";
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
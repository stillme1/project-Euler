//	Code by Sahil Tiwari (still_me)


#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define tt int TESTCASE;cin>>TESTCASE;while(TESTCASE--)
#define arrin(a,n) for(int INPUT=0;INPUT<n;INPUT++)cin>>a[INPUT]

using namespace std;
const int mod=1e9+7;

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    map<pair<int,int>,int> a;
    unordered_map<int,int> done;
    for(int i=2;i<=100;i++){
        int c=1;
        for(int j=i;j<=100;j*=i){
            if(done[j]++)
                continue;
            for(int k=2;k<=100;k++){
                a[{i,c*k}]++;
            }
            c++;
        }
    }
    cout<<a.size()<<endl;
    return 0;
}
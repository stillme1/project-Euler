#include<bits/stdc++.h>
#define ll long long int
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main()
{
    quick;

#ifndef ONLINE_JUDGE
    freopen("C:/sublime/input.txt", "r", stdin);
    freopen("C:/sublime/output.txt", "w", stdout);
#endif
    int a[100][100];
    for(int i=0;i<100;i++){
        for(int j=0;j<=i;j++){
            cin>>a[i][j];
        }
    }

    for(int i=99;i>0;i--){
        for(int j=0;j<i;j++){
            a[i-1][j]+=max(a[i][j],a[i][j+1]);
        }
    }
    cout<<a[0][0];
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
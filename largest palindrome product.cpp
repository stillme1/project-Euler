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
    vector<int> pal;
    int maxP=0;
    for(int i=100;i<1000;i++){
        for(int j=i;j<1000;j++){
            string s=to_string(i*j);
            bool isPal=true;
            int l=s.length();
            for(int k=0;k<l;k++){
                if(s[k]!=s[l-1-k]){
                    isPal=false;
                    break;
                }
            }
            if(isPal&&(i*j)>maxP){
                maxP=i*j;
            }
        }
    }
    cout<<maxP;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
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
    vector<string> s;
    string line;
    cin>>line;
    string intermediate;
    stringstream check1(line);
    while(getline(check1, intermediate,',')){
        s.push_back(intermediate);
    }
    sort(s.begin(),s.end());
    int r=s.size();
    int final=0;
    for(int i=0;i<r;i++){
        int curr=0;
        for(int j=1;j<s[i].length()-1;j++){
            curr+=int(s[i][j])-64;
        }
        final+=(i+1)*curr;
    }
    cout<<final;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
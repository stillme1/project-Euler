#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main()
{
    quick;

#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
#endif

    vector<int> a={31,29,31,30,31,30,31,31,30,31,30,31};

    int d=0;
    int c=0;

    for(int i=0;i<101;i++){
        if(i%4)
            a[1]=28;
        else
            a[1]=29;
        

        for(int j=0;j<12;j++){
            int days=0;
            for(int k=0;k<a[j];k++){
                d=(d+1)%7;
                if(k==0 && d==0 && i){
                    // cout<<"Sunday\n";
                    c++;
                }
                // else
                    // cout<<"Not Sunday\n";

            }
            // cout<<days<<endl;
        }
    }
    cout<<c<<endl;
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
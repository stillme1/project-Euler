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

    
    int k=0;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    string s;

    for(int i=0;i<9;i++){
    	cin>>s;
    	a+=s.length();
    }

    for(int i=0;i<10;i++){
    	cin>>s;
    	b+=s.length();
    }

    for(int i=0;i<8;i++){
    	cin>>s;
    	e+=s.length();
    }

    k=a+b;
    c=10*e+a*8;
    k+= 10*e+a*8;

    // cout<<k<<endl;
    for(int i=0;i<9;i++){
    	cin>>s;
    	d+=s.length();
    }

    k+= 100*d + 9*(a+b+c);
    k+=891*3;
    cin>>s;
    k+=s.length();

    cout<<k<<endl;
    // cout<<a<<" "<<b<<" "<<e<<endl;

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
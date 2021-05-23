#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

vector<bool> a(1e6 , 1);

int howMany(int c , int b){
	
	bool flag = true;
	int x=0;
	for(int i=0 ; i<1e6 && flag ; i++){

		if(a[max(i*i + c*i + b , 0)]){
			x++;
			continue;
		}
		break;
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

    a[0]=a[1]=false;
    for(int i=2;i<1e6;i++){
    	if(a[i]){
    		for(int j=i*i ;j<1e6; j+=i)
    			a[i]=0;
    	}
    }
    int ans=0;
    for(int i=0;i<1000;i++){
    	for(int j=0;j<=1000;j++){
    		ans = max(0 , howMany(i,j));
    		ans = max(0 , howMany(i,-j));
    		ans = max(0 , howMany(-i,j));
    		ans = max(0 , howMany(-i,-j));
    	}
    }

    cout<<ans<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
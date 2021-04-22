#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<bool> a(1000000,true);
    long long int mx=0;
    long long int i;
    for(int l=999999;l>1;l--){
        //cout<<l<<endl;
        if(a[l]){
            long long int curr=1;
            long long int b=l;
            while(b!=1){
                if(b%2)
                    b=3*b+1;
                else
                    b/=2;
                curr++;
                if(b<1000000)
                    a[b]=false;
            }
            if(curr>mx){
                mx==currl;
                i=l;
            }
        }
    }
    cout<<i;
return 0;}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n=2000000;
    vector<bool> primes(n,true);
    primes[0]=primes[1]=false;
    for(int i=2;i*i<n;i++){
        if(primes[i]){
        for(int j=i*i;j<n;j+=i){
            primes[j]=false;
	}
        }
    }
long long sum=0;
for(int i=0;i<n;i++){
    if(primes[i]){
        sum+=i;
    }
}
    cout<<sum;
return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int div(int n,int* x,int l){
    int total=1;
    for(int i=0;i<l;i++){
        int  j=n;
        int coun=0;
        while(j%x[i]==0){
            j=j/x[i];
            coun++;
        }
        total=total*(coun+1);
    }

return total;}
int main(){
    int n=2000;
    vector <bool> primes(n,true);
    primes[0]=primes[1]=false;
    for(int i=2;i*i<n;i++){
        if(primes[i]){
            for(int j=i*i;j<n;j+=i){
                primes[j]=false;
            }
        }
    }
    vector <int> a;
    for(int i=0;i<n;i++){
        if(primes[i]){
            a.push_back(i);
        }
    }
    int l=a.size();
    int i=1;
    int num=1;
    while(div(num,&a[0],l)<=500){
        i++;
        num+=i;
    }
    cout<<num;
return 0;}

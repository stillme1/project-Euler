#include <iostream>
using namespace std;
int main(){
    string a[100];
    for(int i=0;i<100;i++){
        cin>>a[i];
    }
    int b[100][50];
    for(int i=0;i<100;i++){
        for(int j=0;j<50;j++){
            b[i][j]=a[i][j]-'0';
        }
    }
    int c[50];
    int carry=0;
    for(int j=49;j>=0;j--){
        int sum=0;
        for(int i=0;i<100;i++){
            sum+=b[i][j];
        }
        sum+=carry;
        if(j)
            c[j]=sum%10;
        else
            c[j]=sum;
        carry=(sum-(sum%10))/10;
    }
    for(int i=0;i<10;i++){
        cout<<c[i];
    }
return 0;}
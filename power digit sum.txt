#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> a(1,1);
	int len=1;
	for(int i=0;i<1000;i++){
		//cout<<i<<endl;
		int c=0;
		int carry=0;
		for(int j=0;j<len-1;j++){
			c=a[j]*2+carry;
			carry=c/10;
			a[j]=c%10;
		}
		c=a[len-1]*2+carry;
		carry=c/10;
		a[len-1]=c%10;
		if(carry!=0){
			a.push_back(carry);
			len++;
		}
	}
	int sum=0;
	for(int i=0;i<len;i++){
		sum+=a[i];
	}
	cout<<sum;
	return 0;
}
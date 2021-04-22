#include<iostream>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;
cpp_int binmod(cpp_int a) {
    cpp_int b = a;
    cpp_int c = 10000000000;
    cpp_int res = 1;
    while (b) {
        if (b & 1)
            res = (res * a) % c;
        a = (a * a) % c;
        b >>= 1;
    }
    return res % c;
}
int main() {
    cpp_int res=0;
    for(int i=1;i<1001;i++){
        res=(res+binmod(i))%10000000000;
    }
    cout<<res;
}
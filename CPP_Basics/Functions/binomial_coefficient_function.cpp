
//Calculate ncr Binomial Cofficient for n&r
#include<iostream>
using namespace std;
int calFact(int n, int r){
    int nom=1;
    int denom=1;
    for(int i=n;i>n-r;i--){
        nom*=i;
    } 
    for(int i=r;i>0;i--){
        denom*=i;
    }
    return nom/denom;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<n<<"c"<<r<<"="<<calFact(n,r)<<endl;
    return 0;
}
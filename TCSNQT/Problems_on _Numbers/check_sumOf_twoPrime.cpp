//TC = o(n sqrt(n))
//SC = o(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkPrime(int n){
    if(n<2){
        return false;
    }else if(n==2){
        return true;
    }else{
        for(int i = 2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}

void checkSum(int num){
    if(num%2!=0){
        if(checkPrime(num-2)==true){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }else{
       for(int i =3;i<num;i++){
           if(checkPrime(i)==true){
            int need = num-i;
            if(checkPrime(need)==true){
                cout<<"yes"<<endl;
                return;
            }
           }    
       }
       cout<<"no"<<endl;
    }
}

int main() {
    int num =74;
    checkSum(num);
    return 0;
}
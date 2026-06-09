
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int firstArr[]={1,2,3,4,5};
    int secondArr[]={2,3,4};
    int size1=5;
    int size2=3;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(firstArr[i]==secondArr[j]){
                cout<<firstArr[i];
            }
        }
    }
    cout<<endl;
    return 0;
}
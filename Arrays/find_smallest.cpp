#include<iostream>
using namespace std;
int main(){
    int marks[]={90,80,70,60,50};
    int size=5;
    int smallest = INT_MAX;
    for(int i=0;i<size;i++){
       smallest=min(smallest,marks[i]);
    }
    cout<<smallest<<endl;
    return 0;
}
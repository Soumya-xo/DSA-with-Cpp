
#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int count = 0;
        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main(){
    int arr[]={1,2,3,4,5,67,1,2,3,45,6,7,89,};
    int size=13;
    printUnique(arr,size);
    return 0;
}
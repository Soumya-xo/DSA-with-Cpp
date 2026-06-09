// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int a = 10;
//     int* ptr=&a;
//     cout<<a<<endl;
//     cout<<&a<<endl;
//     cout<<ptr<<endl;
//     int** ptr2= &ptr;
//     cout<<ptr2<<endl;
//     cout<<*(&a)<<endl;
//     cout<<*(ptr2)<<endl;
//     cout<<**(ptr2)<<endl;
//     cout<<*(ptr)<<endl;

//     return 0;
// }




// Pass by value and pass by Reference

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;


// void changeByValue(int a){
//     a=20;
// }

// int main() {
//     int a = 10;
//     changeByValue(a);
//     cout<<"change by value:"<<a<<endl;
//     return 0;
// }

// void changeByreference(int* ptr){
//     *ptr=20;
// }
// int main(){
//     int a = 10;
//     changeByreference(&a);
//     cout<<"change by reference:"<<a<<endl;
//     return 0;
// }



// Pass by reference using alias
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void changeByreference(int &b){
//     b=20;
// }

// int main() {
//     int a= 10;
//     changeByreference(a);
//     cout<<"change by reference:"<<a<<endl;
//     return 0;
// }



// Array pointer
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[]={1,2,3,4};
    cout<<*(arr)<<endl;
    cout<<*(arr+1)<<endl;
    return 0;
}
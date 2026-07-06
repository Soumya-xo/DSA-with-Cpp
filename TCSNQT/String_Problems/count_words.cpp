#include <iostream>
#include <vector>
#include <algorithm>
#include<sstream>
using namespace std;

int main() {
    string sentence = "Hello World Welcome";

stringstream ss(sentence);

string word;
int count=0;

while (ss >> word) {

    count+=1;

}
cout<<count<<endl;
    return 0;
}
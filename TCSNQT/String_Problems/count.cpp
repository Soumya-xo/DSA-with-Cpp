#include <iostream>
#include <cctype>
using namespace std;

void count(string s) {
    int vcount = 0;
    int ccount = 0;
    int scount = 0;

    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u') {
            vcount++;
        }
        else if (s[i] == ' ') {
            scount++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            ccount++;
        }
    }

    cout << "Vowels = " << vcount << endl;
    cout << "Consonants = " << ccount << endl;
    cout << "Spaces = " << scount << endl;
}

int main() {
    string s = "Take u forward is Awesome";
    count(s);
    return 0;
}
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> st;

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     cout << "Size: " << st.size() << endl;
//     cout << "Top: " << st.top() << endl;

//     st.pop();

//     cout << "After pop" << endl;
//     cout << "Size: " << st.size() << endl;
//     cout << "Top: " << st.top() << endl;

//     if(st.empty())
//         cout << "Stack Empty";
//     else
//         cout << "Stack Not Empty";

//     return 0;
// }



// using vector
#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> v;

public:
    void push(int x) {
        v.push_back(x);
    }

    void pop() {
        if (!v.empty())
            v.pop_back();
    }

    int top() {
        return v.back();
    }

    bool empty() {
        return v.empty();
    }

    int size() {
        return v.size();
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    st.pop();

    cout << "After pop" << endl;
    cout << "Top: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    return 0;
}
#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

int helper(string expr) {
    stack<int> st;
    stringstream stream(expr);
    string str;

    while (stream >> str) {
        if (str == "+" || str == "-" || str == "*" || str == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int res;

            if (str == "+") res = a + b;
            else if (str == "-") res = a - b;
            else if (str == "*") res = a * b;
            else if (str == "/") res = a / b;

            st.push(res);
        } else {
            st.push(stoi(str));
        }
    }

    return st.top();
}

int main() {
    string expr;
    cout << "Enter postfix expression: ";
    cin >> expr;

    int res = helper(expr);
    cout << "Result: " << res << endl;

    return 0;
}

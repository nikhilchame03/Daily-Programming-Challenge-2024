#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &st, int elem) {
    if (st.empty() || st.top() <= elem) {
        st.push(elem);
        return;
    }
    int topElem = st.top();
    st.pop();
    insertSorted(st, elem);
    st.push(topElem);
}

void sortStack(stack<int> &st) {
    if (st.empty()) return;
    int topElem = st.top();
    st.pop();
    sortStack(st);
    insertSorted(st, topElem);
}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    cout<<"enter number of elemets to push in stack ";

    int n;
    cin >>n;
    stack<int> st;
    for(int i=0;i<n;i++){
        cout<<"enter"<<i+1<<"th number ";
        int num;
        cin>>num;
        st.push(num);

    }

    cout << "Original Stack: ";
    printStack(st);

    sortStack(st);

    cout << "Sorted Stack: ";
    printStack(st);

    return 0;
}

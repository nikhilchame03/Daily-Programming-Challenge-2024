#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& s) {
    if (s.empty()) return "";

    string temp = s[0];
    for (int i = 1; i < s.size(); i++) {
        int j = 0;
        while (j < temp.size() && j < s[i].size() && temp[j] == s[i][j]) {
            j++;
        }
        temp = temp.substr(0, j);
        if (temp.empty()) 
        break;  
    }
    
    return temp;
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    
    vector<string> strs(n);
    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = longestCommonPrefix(strs);
    cout << "Longest common prefix: " << result << endl;

    return 0;
}

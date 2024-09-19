#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(string &s, vector<string> &result, string &current, vector<bool> &visited) {
    if (current.size() == s.size()) {
        result.push_back(current);
        return;
    }
    
    for (int i = 0; i < s.size(); i++) {
        if (visited[i]) continue;
        
        
        if (i > 0 && s[i] == s[i-1] && !visited[i-1]) continue;
        
        visited[i] = true;
        current.push_back(s[i]);
        backtrack(s, result, current, visited);
        visited[i] = false;
        current.pop_back();
    }
}

vector<string> permute(string s) {
    vector<string> result;
    sort(s.begin(), s.end()); 
    string current;
    vector<bool> visited(s.size(), false);
    backtrack(s, result, current, visited);
    return result;
}

int main() {
    string s;
    cin >> s;
    
    vector<string> permutations = permute(s);
    
    for (const auto &perm : permutations) {
        cout << perm << endl;
    }
    
    return 0;
}

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> helper(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    
  
    for (auto s : strs) {
        string sortedStr = s;
        sort(sortedStr.begin(), sortedStr.end()); 
        mp[sortedStr].push_back(s);     
    }
    
    
    vector<vector<string>> ans;
    for (auto group : mp) {
        ans.push_back(group.second);
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of string:- ";
    cin >> n;

    vector<string> str(n);
    cout << "Enter the string:- ";
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    vector<vector<string>> result = helper(str);
    
    cout << "Grouped anagrams:- " << endl;


    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){

            cout<< result[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}

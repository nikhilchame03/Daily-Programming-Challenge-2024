#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int helper(string s, int k) {
    unordered_map<char, int> mp;
    int left = 0, result = 0;

    for (int right = 0; right < s.length(); right++) {
        mp[s[right]]++;

        while (mp.size() > k) {
            mp[s[left]]--;
            if (mp[s[left]] == 0) {
                mp.erase(s[left]);
            }
            left++;
        }

        result += (right - left + 1);
    }
    return result;
}

int countSubstrings(string s, int k) {
    if (k == 0) return 0;
    return helper(s, k) - helper(s, k - 1);
}

int main() {
    string s;
    int k;

    cout<<"enter string s:-";
    cin >> s ;

    cout<<"enter value of k:-";
    cin>>k;

    int result = countSubstrings(s, k);
    cout << result << endl;

    return 0;
}

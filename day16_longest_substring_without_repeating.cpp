    #include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int helper(string str) {
    int ans = 0, n = str.size();
        int s = 0, e = 0;

        unordered_map<char, int> mp;

        while (e < n) {

            while (mp[str[e]] > 0) {

                mp[str[s]]--;
                s++;
            }

            ans = max(ans, e - s + 1);
            mp[str[e]]++;
            e++;
        }
        return ans;
}

int main() {


    string s;

    cout<<"enter string s:-";
    cin >> s ;

    int result = helper(s);
    cout << result << endl;

    return 0;
}

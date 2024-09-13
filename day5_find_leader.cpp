#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> helper(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans;

    int maxi = arr[n - 1];  
    ans.push_back(maxi);

    
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] > maxi) {
            maxi = arr[i];
            ans.push_back(maxi);
        }
    }

    
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements  ";
    cin >> n;
    
    vector<int> arr(n);
    

    cout<<"enter elements of arr";

     for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<int> result = helper(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}

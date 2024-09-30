#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int firstElementToRepeatKTimes(const vector<int>& arr, int k) {
    unordered_map<int, int> freq;
    
    for (int num : arr) {
        freq[num]++;
    }

    for (int num : arr) {
        if (freq[num] == k) {
            return num;
        }
    }

    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << firstElementToRepeatKTimes(arr, k) << endl;
    
   
}

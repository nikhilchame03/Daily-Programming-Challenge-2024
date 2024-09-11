#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(const std::vector<int>& arr) {
    int low = 1, high = arr.size() - 1;
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        int count = 0;
        
        for (int num : arr) {
            if (num <= mid) {
                count++;
            }
        }
        
        if (count > mid) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    
    return low;
}

int main() {
    int n;
    cout << "Enter the number of elements  ";
    cin >> n;
    
    vector<int> arr(n);
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Duplicate number: " << findDuplicate(arr) << std::endl;
    return 0;
}

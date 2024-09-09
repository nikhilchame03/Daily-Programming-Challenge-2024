#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

void sortColors(vector<int>& arr) {
    int l = 0;
    int m = 0;
    int h = arr.size() - 1;
    
    while (m <= h) {
        if (arr[m] == 0) {
            
            swap(arr[l], arr[m]);
            l++;
            m++;
        } else if (arr[m] == 1) {
            
            m++;
        } else { 
            swap(arr[m], arr[h]);
            h--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    
    cout << "Enter the elements (0, 1, or 2): ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    sortColors(arr);
    
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

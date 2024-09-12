#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n;
    cout << "Enter the number of elements  ";
    cin >> n;
    
    vector<int> arr1(n);
    vector<int>arr2(n);

    cout<<"enter elements of arr1";

     for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    cout<<"enter elements of arr2";

    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }


    
    vector<int> merged(2 * n);
    int i = 0, j = 0, k = 0;

    
    while (i < n && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    
    while (i < n) {
        merged[k++] = arr1[i++];
    }

    
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    
    cout << "Merged array: ";
    for (int x : merged) {
        cout << x << " ";
    }
    cout << endl;

    
   
}

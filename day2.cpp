#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements (including the missing one): ";
    cin >> n;
    
    vector<int> arr(n-1);
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n-1; ++i) {
        cin >> arr[i];
    }
    
    
    int totalSum = n * (n + 1) / 2;
    
   
    int temp = 0;
    for (int i = 0; i < n-1; ++i) {
        temp += arr[i];
    }
    
    int missingNumber = totalSum - temp;
    
    cout << "The missing number is: " << missingNumber << endl;
    
    return 0;
}

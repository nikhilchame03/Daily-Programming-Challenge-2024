#include <iostream>
#include <vector>
using namespace std;

int trapRainWater(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;
    
    int left = 0, right = n - 1;
    int left_max = 0, right_max = 0;
    int water_trapped = 0;
    
    while (left <= right) {
        if (height[left] < height[right]) {
            if (height[left] > left_max) {
                left_max = height[left];
            } else {
                water_trapped += left_max - height[left];
            }
            left++;
        } else {
            if (height[right] > right_max) {
                right_max = height[right];
            } else {
                water_trapped += right_max - height[right];
            }
            right--;
        }
    }
    
    return water_trapped;
}

int main() {
    vector<int> height;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    height.resize(n);
    cout << "Enter the heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }
    
    int result = trapRainWater(height);
    cout << "Total water trapped: " << result << " units" << endl;
    
    return 0;
}

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<pair<int, int>> helper(vector<int> &arr)
{
    unordered_map<int, vector<int>> mp;
    vector<pair<int, int>> result;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if (sum == 0)
        {
            result.push_back({0, i});
        }

        if (mp.find(sum) != mp.end())
        {
            for (int startIndex : mp[sum])
            {
                result.push_back({startIndex + 1, i});
            }
        }

        mp[sum].push_back(i);
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<pair<int, int>> ans = helper(arr);

    if (ans.empty())
    {
        cout << "No subarrays with sum zero found." << endl;
    }
    else
    {
        cout << "Subarrays with sum zero:" << endl;
        for (auto &p : ans)
        {
            cout << "(" << p.first << ", " << p.second << ")" << endl;
        }
    }

    return 0;
}

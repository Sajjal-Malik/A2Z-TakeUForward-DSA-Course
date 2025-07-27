#include <bits/stdc++.h>
using namespace std;

// Custom comparator function
bool descending(int a, int b) {
    return a > b;
}


int main() {
    vector<int> nums = {4, 2, 5, 3, 1};
    
    // Sorting in ascending order
    sort(nums.begin(), nums.end());
    
    for(int num : nums) {
        cout << num << " ";
    }
    // Output: 1 2 3 4 5
    

    vector<int> nums = {4, 2, 5, 3, 1};
    
    // Sorting in descending order using function
    sort(nums.begin(), nums.end(), descending);
    
    // Sorting in descending order using lambda
    sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;
    });
    
    for(int num : nums) {
        cout << num << " ";
    }
    // Output: 5 4 3 2 1

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm> // For sort and max functions
using namespace std;

int maximumProduct(vector<int>& nums) {
    // Sort the array
    sort(nums.begin(), nums.end());
    
    int n = nums.size();
    
    // Maximum product could be from:
    // 1. Product of the three largest numbers
    // 2. Product of the two smallest numbers (possibly negative) and the largest number
    return max(nums[n-1] * nums[n-2] * nums[n-3], 
               nums[0] * nums[1] * nums[n-1]);
}

int main() {
    vector<int> nums = {-10, -10, 5, 2}; // Example input
    cout << "Maximum product: " << maximumProduct(nums) << endl;
    return 0;
}

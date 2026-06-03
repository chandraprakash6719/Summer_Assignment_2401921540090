#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    int left = 0, right = n - 1;
    int pos = n - 1;

    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            ans[pos] = nums[left] * nums[left];
            left++;
        } else {
            ans[pos] = nums[right] * nums[right];
            right--;
        }
        pos--;
    }

    return ans;
}

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> result = sortedSquares(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
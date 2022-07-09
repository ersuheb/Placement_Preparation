// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] < 0) {
                result.push_back(index + 1);
            }
            nums[index] = -nums[index];
        }
        return result;

    }

};





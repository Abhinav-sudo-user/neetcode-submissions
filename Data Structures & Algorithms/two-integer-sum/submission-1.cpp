class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_to_index;
        
        for (int i = 0; i < nums.size(); i++) {
            int c = target - nums[i];

            if (num_to_index.count(c)) {
                return {num_to_index[c], i};
            }
            num_to_index[nums[i]] = i;
        }
        return {};
    }
};

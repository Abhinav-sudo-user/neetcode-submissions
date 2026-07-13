class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int , int> hashmap;

        for (auto num : nums){
            if (hashmap.contains(num)){
                return true;
            }
            hashmap.insert({num , 1});
        }
        return false;
    }
};
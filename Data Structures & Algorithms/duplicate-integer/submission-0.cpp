class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> um;
        for(int i=0; i<n; i++){
            if(um.find(nums[i]) != um.end())
                return true;
            um[nums[i]]++;
        }

        return false;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> index_map;

        for(int i=0; i<n; i++){
            auto it = index_map.find(target - nums[i]);
            if(it != index_map.end()){
                return {it->second, i};
            }
            index_map[nums[i]] = i;
        }

        return {};
    }
};

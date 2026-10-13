class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> index_map;

        for(int i=0; i<n; i++){
            if(index_map.find(target-nums[i]) != index_map.end()){
                return {index_map[target-nums[i]], i};
            }
            index_map[nums[i]] = i;
        }

        return {};
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> freq_vec(2001, {0, 0});

        for(int i=0; i<n; i++){
            freq_vec[nums[i]+1000].first++;
            freq_vec[nums[i]+1000].second = nums[i];
        }

        sort(freq_vec.begin(), freq_vec.end());
        vector<int> top_k_vec;
        for(int i=2000; i>= 2000-k+1; i--){
            top_k_vec.push_back(freq_vec[i].second);
        }

        return top_k_vec;
    }
};

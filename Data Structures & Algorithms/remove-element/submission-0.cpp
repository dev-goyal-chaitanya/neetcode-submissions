class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int swap_index = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != val){
                swap(nums[i], nums[swap_index]);
                swap_index++;
            }
            else{
                count++;
            }
        }

        return n-count;
    }
};
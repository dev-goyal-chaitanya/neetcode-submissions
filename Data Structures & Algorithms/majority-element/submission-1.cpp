class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int major_el = nums[0];
        int count = 1;
        for(int i=1; i<n; i++){
            if(nums[i] != major_el){
                count--;
            }
            else{
                count++;
            }

            if(count == 0){
                major_el = nums[i];
                count++;
            }
        }

        return major_el;
    }
};
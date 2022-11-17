class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num = 1, elem = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            if(num <= 0) {
                num = 1;
                elem = nums[i];
            } else {
                num += elem == nums[i] ? 1 : -1;
            }
        }
        return elem;
    }
};

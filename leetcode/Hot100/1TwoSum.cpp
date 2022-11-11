class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> mp;
        for(int i = 0; i < nums.size(); ++i) {
            int temp = target - nums[i];
            if(mp.count(temp)) {
                res.push_back(mp[temp]);
                res.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }
        return res;
    }
};
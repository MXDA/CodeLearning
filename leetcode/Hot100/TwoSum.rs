use std::collections::HashMap;
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut res: Vec<i32> = Vec::new();
        let mut mp: HashMap<i32, i32> = HashMap::new();
        for i in 0..nums.len() {
            let temp:i32 = target - nums[i];
            if mp.contains_key(&temp) {
                res.push(mp[&temp]);
                res.push(i as i32);
                break;
            }
            mp.insert(nums[i], i as i32);
        } 
        res
    }
}

impl Solution {
    pub fn move_zeroes(nums: &mut Vec<i32>) {
        let mut k: usize = 0;
        for i in 0..nums.len() {
            if nums[i] != 0 {
                nums[k] = nums[i];
                k = k + 1;
            }
        }
        while k < nums.len() {
            nums[k] = 0;
            k = k + 1;
        }
    }
}

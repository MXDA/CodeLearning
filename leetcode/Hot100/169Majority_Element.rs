impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> i32 {
        let mut num: i32 = 1;
        let mut elem: i32 = nums[0];
        for x in &nums[1..] {
            if num <= 0 {
                num = 1;
                elem = *x;
            } else {
                if *x == elem {
                    num += 1;
                } else {
                    num -= 1;
                }
            }
        }
        elem
    }
}

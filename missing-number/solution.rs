impl Solution {
    pub fn missing_number(nums: Vec<i32>) -> i32 {
        // Calculates the maximum sum (n * (n / 2))
        let mut result: i32 = (((nums.len() as i32) + 1) as f32 * ((nums.len() as f32) / 2.0)) as i32;
        
        // O(n)
        for i in 0..nums.len() {
            result -= nums[i];
        }
        
        return result;
    }
}
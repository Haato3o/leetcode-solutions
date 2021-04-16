impl Solution {
    
    pub fn integer_break(n: i32) -> i32 {
        if (n <= 3) {
            return (n / 2) * (n - (n / 2));
        }
        
        let number_three: u32 = (n / 3) as u32;
        
        match n % 3 {
            0 => return i32::pow(3, number_three),
            1 => return 2 * 2 * i32::pow(3, number_three - 1),
            2 => return 2 * i32::pow(3, number_three),
            _ => return n,
        }
        
    }
}
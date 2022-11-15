impl Solution {
    pub fn is_valid(s: String) -> bool {
        let mut st: Vec<char> = Vec::new();
        for c in s.chars() {
            match c {
                '[' => st.push(']'),
                '{' => st.push('}'),
                '(' => st.push(')'),
                _ => {
                    if st.len() == 0 || st.pop().unwrap() != c {
                        return false;
                    }
                } 
            }
        }
        st.len() == 0
        
    }
}

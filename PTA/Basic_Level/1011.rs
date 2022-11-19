use std::io::stdin;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let t: i32 = input.trim().parse().unwrap();
    //println!("{}", t);
    for i in 1..=t {
        let mut st: String = String::new();
        stdin().read_line(&mut st).unwrap();
        let v: Vec<i64> = st.trim().split(' ').map(|s| s.parse::<i64>().unwrap()).collect();
        if v[0] + v[1] > v[2] {
            println!("Case #{}: true", i);
        } else {
            println!("Case #{}: false", i);
        }
    }
}

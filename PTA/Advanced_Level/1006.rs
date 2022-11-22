use std::io::stdin;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let t: u32 = input.trim().parse::<u32>().unwrap();
    //println!("{}", t);
    let mut num1: String = String::new();
    let mut num2: String = String::new();
    let mut early: String = String::new();
    let mut last: String = String::new();
    let mut flag: bool = true;
    input.clear();
    for _ in 0..t {
        stdin().read_line(&mut input).unwrap();
        let mut v: Vec<String> = input.trim().split(' ').map(|s| s.to_string()).collect();
        if flag || early > v[1] {
            early = v[1].clone();
            num1 = v[0].clone();
        }
        if flag || last < v[2] {
            last = v[2].clone();
            num2 = v[0].clone();
            flag = false;
        }
        input.clear();
    }
    println!("{} {}", num1, num2);
}
use std::io::stdin;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let v: Vec<i32> = input.trim().split(' ').map(|s| s.parse::<i32>().unwrap()).collect();
    //println!("{:?}", v);
    let num = (v[0] + v[1]).to_string();
    //println!("{}", num);
    let mut res = String::new();
    let mut j: usize = 0;
    for x in num.chars().rev() {
        if j % 3 == 0 && x != '-' && j != 0 {
            res = String::from(',') + res.as_str();
        }
        j += 1;
        res = String::from(x) + res.as_str();
    }
    println!("{}", res);
}


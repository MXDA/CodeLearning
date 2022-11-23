use std::io::stdin;
fn transform(s: String) -> String {
    let mut res: String = String::new();
    for c in s.chars() {
        if c == '1' {
            res = res + "@";
        } else if c == '0' {
            res = res + "%";
        } else if c == 'l' {
            res = res + "L";
        } else if c == 'O' {
            res = res + "o";
        } else {
            res = res + String::from(c).as_str();        
        }
    }
    res 
}
fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let t: u32 = input.trim().parse::<u32>().unwrap();

    let mut v1: Vec<String> = Vec::new();
    let mut v2: Vec<String> = Vec::new();

    input.clear();
    for _ in 0..t {
        stdin().read_line(&mut input).unwrap();
        let temp: Vec<String> = input.trim().split(' ').map(|s| s.to_string()).collect();
        let s = transform(temp[1].clone());
        //println!("{}", s);
        if s != temp[1] {
            v1.push(temp[0].clone());
            v2.push(s);
        }
        input.clear();
        //println!("t {:?} {} {} {}", temp, temp[0], tmep[1], s);       
    }
    if t == 1 && v1.is_empty() {
        println!("There is 1 account and no account is modified");
    } else if v1.is_empty() {
        println!("There are {} accounts and no account is modified", t);
    } else {
        println!("{}", v1.len());
        for i in 0..v1.len() {
            println!("{} {}", v1[i], v2[i]);
        }
    }
    
}
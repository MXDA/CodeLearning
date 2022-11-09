use std::io::stdin;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut v: Vec<&str> = input.trim().split(' ').collect();
    v.reverse();
    let mut flag: bool = false;
    for s in v {
        if flag {
            print!(" ");
        } else {
            flag = true;
        }
        print!("{}", s);
    }
}
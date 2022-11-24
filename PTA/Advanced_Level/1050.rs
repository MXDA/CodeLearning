use std::io::stdin;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let s1 = input.clone();
    input.clear();
    stdin().read_line(&mut input).unwrap();
    let s2 = input.clone();
    //println!("{} {}", s1, s2);
    for c in s1.chars() {
        //println!("{}", c);
        if s2.find(c) == None {
            print!("{}", c);
        }
    }
}
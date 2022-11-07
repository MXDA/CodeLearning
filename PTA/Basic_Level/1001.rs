use std::io::stdin;

fn main() {
    let mut i = 0;
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    //println!("{}", input);
    let mut num: i32 = input.trim().parse().unwrap();
    //println!("{}", num);
    while num != 1 {
        i = i + 1;
        num = func(num);
    }
    println!("{}", i);
}

fn func(num: i32) -> i32 {
    if num % 2 == 0 {
        num / 2
    } else {
        (num * 3 + 1) / 2
    }
}

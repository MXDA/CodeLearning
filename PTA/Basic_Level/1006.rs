use std::io::stdin;


fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let num: i32 = input.trim().parse().unwrap();
    let mut a:i32 = num / 100;
    let mut b:i32 = (num / 10) % 10;
    let mut c:i32 = num % 10;

    while a!= 0 {
        print!("B");
        a -= 1;
    }
    while b != 0 {
        print!("S");
        b -= 1;
    }
    let mut i:i32 = 1;
    while c != 0{
        print!("{}", i);
        i += 1;
        c -= 1;
    }
}

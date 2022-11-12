use std::io::stdin;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let a: Vec<i32> = input.trim().split(' ').map(|s| s.parse::<i32>().unwrap()).collect();
    //println!("{:?}", a);
    //let a: [i32] = input.trim().split(' ').map(|s| s.parse::<i32>().unwrap()).collect();
    //println!("{:?}", a);
    let mut index = 0;
    for i in 1..10 {
        if a[i] != 0 {
            print!("{}", i);
            index = i;
            break;
        }
    }
    for i in 0..a[0] {
        print!("0");
    }
    for i in 0..a[index] - 1 {
        print!("{}", index);
    }
    for i in index + 1..10 {
        for k in 0..a[i] {
            print!("{}", i);
        }
    }
}
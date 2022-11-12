use std::io::stdin;
fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let v: Vec<i32> = input.trim().split(' ').map(|s| s.parse::<i32>().unwrap()).collect();
    let mut flag = false;
    let mut index: usize = 0;
    let length = v.len();
    while index < length {
        if v[index + 1] != 0 {
            if flag == true {
                print!(" ");
            }
            print!("{} {}", v[index] * v[index + 1], v[index + 1] - 1);
            flag = true;
        }
        index += 2;
    }
    if flag == false {
        print!("0 0");
    }
    println!("");
}
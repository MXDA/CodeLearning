use std::io::stdin;

fn main() {
    let v: Vec<&str> = vec!["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"];
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let num: String = input.clone();
    let mut sum: usize = 0;
    for x in num.chars() {
        if x as usize == 10 {
            break;
        }
        // println!("{}", (x as usize).wrapping_sub('0' as usize));
        sum = sum + (x as usize).wrapping_sub('0' as usize);
    }
    let res: String = sum.to_string();
    //println!("{}", res);
    //println!("{}", sum);
    let mut flag = false;
    for x in res.chars() {
        if x as usize == 10 {
            break;
        }
        if flag == true {
            print!(" ");
        } else {
            flag = true;
        }
        let index: usize = (x as usize).wrapping_sub('0' as usize);
        print!("{}", v[index]);
    }
}
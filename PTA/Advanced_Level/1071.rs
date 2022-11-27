use std::io::stdin;
use std::collections::HashMap;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut mp: HashMap<String, i32> = HashMap::new();
    let mut word = String::new();
    for x in input.chars() {
        if x.is_alphabetic() || x.is_ascii_digit() {
            word = word.as_str().to_owned() + &String::from(x);
        } else {
            if word.len() == 0 {
                continue;
            }
            word = word.to_lowercase();
            let v = mp.entry(word.clone()).or_insert(0);
            *v = *v + 1;
            word.clear();
        }
        //println!("{}", word);
    }
    let mut cnt: i32 = -1;
    let mut res = String::from("");
    for (k, v) in mp.iter() {
        if *v > cnt {
            cnt = *v;
            res = k.clone();
        }
    }
    println!("{} {}", res, cnt);
}
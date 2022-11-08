use std::io::stdin;
use std::collections::BTreeMap;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let s = input.trim().clone();
    let mut mp: BTreeMap<char, i32> = BTreeMap::new();
    for x in s.chars() {
        //println!("{}", x);
        let v = mp.entry(x).or_insert(0);
        *v += 1;
    }
    //println!("{:?}", mp);
    for (key,val) in mp {
        println!("{}:{}", key, val);
    }
}
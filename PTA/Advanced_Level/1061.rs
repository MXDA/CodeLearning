use std::io::stdin;

fn main() {
    let week: Vec<&str> = vec!["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"];
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let t: Vec<String> = input.trim().split(' ').map(|s| s.to_string()).collect();
    let mut v: vec![Vec<char>; 4] = vec![];
    let mut index: usize = 0;
    for x in t {
        let v1: Vec<char> = x.chars().collect();
        v.push(v1.clone());
    }
    println!("{:?}", v);
    /*while true {
        if v[0][index] == v[1][index] && v[0][index] >= 'A' && v[0][index] <= 'G' {
            break;
        } 
        index += 1;
    }
    */
    //println!("{} ", week[(v[0][index] as usize - 'A' as usize)]);
}
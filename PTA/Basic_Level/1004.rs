use std::io::stdin;
fn main() {
    let mut input: String = String::new();
    let mut maxscore: i32 = -1;
    let mut minscore: i32 = 101;
    let mut maxnum: String = String::new();
    let mut minnum: String = String::new();
    let mut maxname: String = String::new();
    let mut minname: String = String::new();

    stdin().read_line(&mut input).unwrap();
    let mut n: i32 = input.trim().parse().unwrap();
    input = "".to_string();
    for i in 0..n {
        stdin().read_line(&mut input).unwrap();
        //println!("{} i: {}", input, i);
        let v: Vec<String> = input.trim().split(' ').map(|s| s.to_string()).collect();
        let score: i32 = v[2].parse().unwrap();
        if score > maxscore {
            maxnum = v[1].clone();
            maxname = v[0].clone();
            maxscore = score;
        }
        if score < minscore {
            minnum = v[1].clone();
            minname = v[0].clone();
            minscore = score;
        }
        input = "".to_string();
    }
    println!("{} {}", maxname, maxnum);
    println!("{} {}", minname, minnum);
}

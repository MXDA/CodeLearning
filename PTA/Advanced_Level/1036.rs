use std::io::stdin;

fn main() {
    
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut t: u32 = input.trim().parse::<u32>().unwrap();
    input.clear();

    let mut m: String = String::new();
    let mut f: String = String::new();
    let mut m_id: String = String::new();
    let mut f_id: String = String::new();
    let mut m_score: i32 = 101;
    let mut f_score: i32 = 0;

    for _ in 0..t {
        stdin().read_line(&mut input).unwrap();
        let v: Vec<String> = input.trim().split(' ').map(|s| s.to_string()).collect();
        let score: i32 = v[3].parse::<i32>().unwrap();
        //println!("{}", score);
        if v[1].as_str() == "M" && score < m_score {
            m_score = score;
            m_id = v[2].clone();
            m = v[0].clone();
        }
        if v[1].as_str() == "F" && score > f_score {
            f_score = score;
            f_id = v[2].clone();
            f = v[0].clone();
        }
        input.clear();
    }
    if f.is_empty() {
        println!("Absent");
    } else {
        println!("{} {}", f, f_id);
    } 
    if m.is_empty() {
        println!("Absent");
    } else {
        println!("{} {}", m, m_id);
    }

    if !m.is_empty() && !f.is_empty() {
        println!("{}", f_score - m_score);
    } else {
        println!("NA");
    }
    //println!("{} {}", m, f);
}

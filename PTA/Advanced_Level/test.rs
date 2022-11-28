fn main() {
    let s = String::from("123");
    let v: Vec<char> = s.chars().collect();
    println!("{:?}", v);
    println!("{number:>0width$}", number=1, width=6);
}

index += 1;
    while true {
        if v[0][index] == v[1][index] && (v[0][index] >= '0' && v[0][index] <= '9' || v[0][index] >= 'A' && v[0][index] <= 'N') {
            break;
        }
        index += 1;
    }
    let mut hour = 0;
    if v[0][index] <= '9' {
        hour = v[0][index] as usize - '0' as usize;
    } else {
        hour = v[0][index] as usize - 'A' as usize + 10 as usize;
    }
    println!("{number:>0width$}", number=hour, width=2);
use std::io::stdin;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let n: usize = input.trim().parse().unwrap();;
    let mut cnt: usize = 0;
    for i in 5..=n {
        if is_prime(i - 2) && is_prime(i) {
            cnt += 1;
        }
    }
    println!("{}", cnt);
}

fn is_prime(n: usize) -> bool {
    let mut i = 2;
    while i * i <= n {
        if n % i == 0 {
            return false;
        }
        i += 1;
    }
    true
}
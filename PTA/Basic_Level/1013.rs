use std::io::stdin;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let mn: Vec<i32> = input.trim().split(' ').map(|s| (s.to_string()).parse::<i32>().unwrap()).collect();
    let mut primes: Vec<i32> = Vec::new();
    let mut cnt = 0;
    let mut num = 2;
    while cnt < mn[1] {
        if is_prime(num) {
            cnt += 1;
            if cnt >= mn[0] {
                primes.push(num);
            }
        }
        num += 1;
    }

    cnt = 0;
    for i in 0..primes.len() {
        cnt += 1;
        if cnt % 10 != 1 {
            print!(" ");
        }
        print!("{}", primes[i]);
        if cnt % 10 == 0 {
            println!("");
        }
    }
}

fn is_prime(n: i32) -> bool {
    let mut i: i32 = 2;
    while i * i <= n {
        if n % i == 0 {
            return false;
        }
        i += 1;
    }
    true
}
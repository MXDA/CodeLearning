use std::io::stdin;


fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut res: u32 = 0;
    let s: String = input.clone();
    let sv: Vec<&str> = vec!["ling","yi","er","san","si","wu","liu","qi","ba","jiu"];
    for num in s.chars() {
        if (num as u32) == 10 {
            break;
        }
        //println!("{}", num);
        //res += num.parse::<u64>().unwrap();
        //println!("{}", (num as u64 - '0' as u64));
        //println!("{} {}, {}", num, num as u32, (num as u32).wrapping_sub('0' as u32));
        res += (num as u32).wrapping_sub('0' as u32);
    }
    //println!("{}", res);
    let t = res.to_string();
    //println!("{}", t);
    let mut flag: bool = false;
    for num in t.chars() {
        if (num as u32) == 10 {
            break;
        }
        if flag == false {
            flag = true;
        } else {
            print!(" ");
        }
        let index: usize = (num as usize).wrapping_sub('0' as usize);
        print!("{}", sv[index]);
    }
}


use std::io::stdin;

fn main() {
    let mut input: String = String::new();
    let mut tin: String = String::new();
    stdin().read_line(&mut input).unwrap();

    let mut v: Vec<i32> = input.trim().split(' ').map(|s| (s.to_string()).parse::<i32>().unwrap()).collect();
    //let t: Vec<i32> = v.iter().map(|s| s.parse::<i32>().unwrap()).collect();
    //println!("{:?}", v);
    v[1] = v[1] % v[0];
    stdin().read_line(&mut tin).unwrap();
    let mut arr: Vec<i32> = tin.trim().split(' ').map(|s| (s.to_string()).parse::<i32>().unwrap()).collect();
    //println!("{:?}", arr);
    arr.reverse();
    arr[0..v[1] as usize].reverse();
    arr[v[1] as usize.. v[0] as usize].reverse();
    let mut flag: bool = false;
    for x in arr {
        if flag {
            print!(" ");
        } else {
            flag = true;
        }
        print!("{}", x);
    }
}
use std::io::stdin;

fn main() {
    let mut input: String = String::new();
    stdin().read_line(&mut input).unwrap();
    let v: Vec<i32> = input.trim().split(' ').map(|s| s.parse::<i32>().unwrap()).collect();
    //println!("{:?}", v);
    let mut c: i32 = v[0] + v[1];
    if c == 0 {
        println!("0");

    } else {
        let mut st: Vec<i32> = Vec::new();
        while c != 0 {
            st.push(c % v[2]);
            c /= v[2];
        }
        //println!("{:?}", st);
        st.reverse();
        for x in st {
            print!("{}", x);
        }
    }
}
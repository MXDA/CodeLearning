use std::thread;

struct FuncArguments {
    x: i32,
    y: i32,
}
fn func(args: FuncArguments) -> i32 {
    println!("x = {}, y = {}", args.x, args.y);
    args.x + args.y
}
fn main() {
    let v = vec![
        thread::spawn(|| func(FuncArguments {x : 1, y : 2})),
        thread::spawn(|| func(FuncArguments {x : 3, y : 4})),
        thread::spawn(|| func(FuncArguments {x : 5, y : 6})),
    ];
    for handle in v {
        println!("result = {}", handle.join().unwrap());
    }
}

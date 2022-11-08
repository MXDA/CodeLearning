macro_rules! scan {
    ( $string:expr, $sep:expr, $( $x:ty ),+ ) => {{
        let mut iter = $string.split($sep);
        ($(iter.next().and_then(|word| word.parse::<$x>().ok()),)*)
    }}
}


fn main() {
    let output = scan!("2 false fox", char::is_whitespace, u8, bool, String);
    println!("{:?}", output); // (Some(2), Some(false), Some("fox"))
}

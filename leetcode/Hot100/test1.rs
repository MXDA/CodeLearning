
fn main() {
    let mut a = 1;
    let b = &mut a;
    *b = 2;
    let d = &mut a;
    //*b = 2;
    *d = 3;
    let c = &a;
    //*b = 2;


}

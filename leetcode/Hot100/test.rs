#[derive(PartialEq, Eq, Clone, Debug)]
pub struct ListNode {
    pub val: i32,
    pub next: Option<Box<ListNode>>,
}
impl ListNode {
    #[inline]
    fn new(val: i32) -> Self {
        ListNode {
            next: None,
            val,
        }
    }
}
fn main() {
    let mut head = ListNode::new(0);
    let mut Node = ListNode::new(1);
    head.next = Some(Box::new(Node));
    println!("{:?}", head);
    println!("{:?}", head.next.as_deref_mut().unwrap());
}

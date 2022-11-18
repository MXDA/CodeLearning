// Definition for singly-linked list.
// #[derive(PartialEq, Eq, Clone, Debug)]
// pub struct ListNode {
//   pub val: i32,
//   pub next: Option<Box<ListNode>>
// }
//
// impl ListNode {
//   #[inline]
//   fn new(val: i32) -> Self {
//     ListNode {
//       next: None,
//       val
//     }
//   }
// }
impl Solution {
    pub fn merge_two_lists(list1: Option<Box<ListNode>>, list2: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
        let mut l1 = list1.clone();
        let mut l2 = list2.clone();
        let mut dummy = ListNode::new(0);
        let mut cur = &mut dummy;
        while l1.is_some() && l2.is_some() {
            let (p1, p2) = (l1.as_deref_mut().unwrap(), l2.as_deref_mut().unwrap());
            if p1.val < p2.val {
                let next = p1.next.take();
                cur.next = l1.take();
                l1 = next;
            } else {
                let next = p2.next.take();
                cur.next = l2.take();
                l2 = next;
            }
            cur = cur.next.as_deref_mut().unwrap();
        }
        cur.next = l1.or(l2);
        dummy.next
    }
}

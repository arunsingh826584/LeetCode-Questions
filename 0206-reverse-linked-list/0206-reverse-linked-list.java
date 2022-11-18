class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode prev=null, curr=head, tmp=null;
        while(curr!=null)
        {
            tmp=curr.next;
            curr.next=prev;
            prev=curr;
            curr=tmp;
        }
        return prev;
        
    }
}
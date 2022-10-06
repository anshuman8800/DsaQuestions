class Solution {
    public ListNode rotateRight(ListNode head, int k) {
     if(head==null || head.next==null || k==0)return head;
        int c=0;
        ListNode temp=head;
        while(temp!=null)
        {
        c++;
        temp=temp.next;
        }
        c=c-k%c;
        ListNode pn=head;
         temp=head;
        while(c>0)
        {
            pn=temp;
            temp=temp.next;
            c--;
        }
        if(temp==null)
            return head;
        ListNode root=temp;
        pn.next=null;
        while(temp.next!=null)
        {
            temp=temp.next;
        }
        temp.next=head;
        return root;
    }
}

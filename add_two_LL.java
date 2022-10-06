public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
       
        {
            int carry=0;
        ListNode start=new ListNode(0);
        ListNode temp=start;
           
        while(l1!=null || l2!=null)
        {
            int x=(l1!=null)?l1.val:0;
            int y=(l2!=null)?l2.val:0;
            int sum=carry+x+y;
            carry=sum/10;
            ListNode newnode=new ListNode(sum%10);
            temp.next=newnode;
            temp=newnode;
            if(l1!=null)
            {
                l1=l1.next;
            }
            if(l2!=null)
            {
                l2=l2.next;
            }
            
        }
           if(carry>0)
           {
               ListNode newnode =new ListNode(carry);
               temp.next=newnode;
           }
        return start.next;
    }


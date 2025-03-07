/****************************************************************

 Following is the Linked list node structure already written:-

 class Node
 {
     public int data;
     public Node next;

     Node()
     {
         this.data = 0;
         this.next = null;
     }

     Node(int data)
     {
         this.data = data;
         this.next = null;
     }
 }

 *****************************************************************/


 public class Solution {
    public static Node oddEvenList(Node head) {
        // Write your code here.
        Node odd=head;
        Node even=head.next;
        Node evenHead=head.next;

        while(even!=null && even.next!=null){
            odd.next=odd.next.next;
            even.next=even.next.next;
            odd=odd.next;
            even=even.next;
        }
        odd.next=evenHead;
        return head;
    }
}
/****************************************************************

 Following is the class structure of the Node class:

 class Node {
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
    
     Node(int data, Node next)
     {
         this.data = data;
         this.next = next;
     }
 }

 *****************************************************************/

 public class Solution
 {
     public static Node sortList(Node head) {
         // Write your code here
         Node zeroHead=new Node(-1);
         Node oneHead=new Node(-1);
         Node twoHead=new Node(-1);
 
         Node zero=zeroHead;
         Node one=oneHead;
         Node two=twoHead;
         Node temp=head;
 
         while(temp!=null){
             if(temp.data==0){
                 zero.next=temp;
                 zero=zero.next;
             }else if(temp.data==1){
                 one.next=temp;
                 one=one.next;
             }else{
                 two.next=temp;
                 two=two.next;
             }
             temp=temp.next;
         }
         zero.next=(oneHead.next!=null)? oneHead.next:twoHead.next;
         one.next=twoHead.next;
         two.next=null;
         Node newHead=zeroHead.next;
         return newHead;
     }
 }
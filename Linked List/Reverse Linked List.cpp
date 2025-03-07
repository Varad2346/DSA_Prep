//Iterative

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    Node* prev=NULL;
    Node* temp=head;
    while(temp!=NULL){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

//Recursive

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* newHead=reverseLinkedList(head->next);
    Node* front=head->next;
    front->next=head;
    head->next=NULL;
    return newHead;
}

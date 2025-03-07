//BruteNode* reverseDLL(Node* head)
{   
    // Write your code here  
    Node* temp=head;
    stack<int>s;
    while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        temp->data=s.top();
        s.pop();
        temp=temp->next;
    }
    temp=head;
    return temp;
}


//Optimal
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    // Write your code here  
    if(head==NULL||head->next==NULL){
        return head;
    } 

    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;
}


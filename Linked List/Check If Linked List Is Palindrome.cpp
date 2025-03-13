/****************************************************************

    Following is the class structure of the Node class:

    class Node
    {
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *newHead = reverse(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

bool isPalindrome(Node *head)
{
    // write your code here
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL || fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *newHead = reverse(slow->next);
    Node *second = newHead;
    Node *first = head;
    while (second != NULL)
    {
        if (first->data != second->data)
        {
            reverse(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    reverse(newHead);
    return true;
}
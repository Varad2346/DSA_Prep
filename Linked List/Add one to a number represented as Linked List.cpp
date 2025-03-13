/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
int helper(Node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    int carry = helper(head->next);
    head->data = head->data + carry;
    if (head->data < 10)
    {
        return 0;
    }
    head->data = 0;
    return 1;
}

Node *addOne(Node *head)
{
    // Write Your Code Here.
    int carry = helper(head);
    if (carry == 1)
    {
        Node *newNode = new Node(carry);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

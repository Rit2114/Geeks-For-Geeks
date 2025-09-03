class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* temp1=head;
        while(temp1){
            Node *prev=temp1->prev;
            Node *next=temp1->next;
            temp1->next=prev;
            temp1->prev=next;
            head=temp1;
            temp1=next;
        }
    }
};

class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int count0=0;
        int count1=0;
        int count2=0;
        Node* temp = head;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                count0++;
            }
            if(temp->data==1)
            {
                count1++;
            }
            if(temp->data==2)
            {
                count2++;
            }
            temp=temp->next;
        }
        
    }
};

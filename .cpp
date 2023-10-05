class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        
        if(head->next==NULL) return head;
        
         ListNode *heades=head->next, *heades2=head;
      
        while(heades->next){
            heades=heades->next;
            heades2=heades2->next;
            
        }
        
        
        heades2->next=NULL;
        heades->next=head;
        return heades;
        
    }

};

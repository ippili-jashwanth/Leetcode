/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;
        
       ListNode* dummy = head;
       int len=0;
       while(dummy!=NULL)
       {
        len++;
        dummy = dummy->next;
       }
       if(k==len)return head;
       k = k%len;
       ListNode* temp = head;

       for(int i = 0 ; i < len-k-1; i++)
       {
         temp= temp->next;
       }
       ListNode* tail = temp;
       ListNode* head2 = temp->next;
       tail->next = nullptr;
     
       ListNode* h = head2;
       if(h==NULL) return head;
       while(h->next!=NULL )
       {
        h= h->next;
       }
        h->next = head;
        return head2;

    }
};
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* result = new ListNode;
        ListNode* temp = result;
        //ListNode* itr = result;
        //int count = 0;
        bool carry = false;
        while(l1 || l2 || carry)
        {
            if (carry)
            {
                if (l1 && l2) {temp->val = l1->val + l2->val + 1;}
                else if (!l1 && l2){temp->val = l2->val + 1;}
                else if (l1 && !l2) {temp->val = l1->val + 1;}
                else {temp->val = 1;}
            }
            else if(!carry)
            {
                if(l1 && l2){temp->val = l1->val + l2->val;}
                else if(!l1 && l2){temp->val = l2->val;}
                else{temp->val = l1->val;}
            }
            
            
            if (temp->val > 9)
            {
                temp->val = temp->val%10;
                carry = true;
            }
            else if(temp->val < 10)
            {
                carry = false;
            }
            
            if((l1 && l1->next) || (l2 && l2->next) || carry)
            {
                temp->next = new ListNode;
                temp = temp->next;
            }
            
            if (l1 && l1->next){l1=l1->next;}
            else{l1=nullptr;}
            if (l2 && l2->next){l2=l2->next;}
            else{l2=nullptr;}
        }
        return result;
    }
};
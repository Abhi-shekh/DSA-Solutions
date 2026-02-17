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
    void revLL(ListNode* &left, ListNode* &right){
        ListNode* curr=left;
        ListNode* prev=NULL;
        ListNode* stop=right->next;

        while(curr!=stop){
            ListNode* frr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frr;
        }
        prev=right;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;

        while(left>1){
            prev=prev->next;
            left--;
            right--;
        }
        ListNode* leftNode=prev->next;
        ListNode* rightNode=prev;

        while(right>0){
            rightNode=rightNode->next;
            right--;
        }
        ListNode* frr=rightNode->next;

        revLL(leftNode, rightNode);
        prev->next=rightNode;
        leftNode->next=frr;

        return dummy->next;

        
    }
};
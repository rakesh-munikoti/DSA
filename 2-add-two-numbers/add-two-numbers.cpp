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
        // ListNode* result = new ListNode(0);
        // ListNode* i = l1;
        // ListNode* j = l2;
        // ListNode* k = result;
        // int sum1 = 0;
        // int sum2 = 0;
        // int sum;
        // int x = 1;
        // while(i != NULL){
        //     int temp = i->val;
        //     sum1 = ((i->val)*(x)) + sum1;
        //     x = x*10;
        //     i = i->next;
        // }
        // x = 1;
        // while(j != NULL){
        //     int temp = j->val;
        //     sum2 = ((j->val)*(x)) + sum2;
        //     x = x*10;
        //     j = j->next;
        // }
        // sum = sum1 + sum2;
        // cout<<sum1<<" "<<sum2<<" "<<sum;
        // if(sum == 0){
        //     ListNode* temp = new ListNode(0);
        //     return temp;
        // }
        // while(sum > 0){
        //     int data = sum%10;
        //     ListNode* temp = new ListNode(data);
        //     k->next = temp;
        //     k = k->next;
        //     sum = sum/10;
        // }
        // return result->next;
        ListNode* result = new ListNode(0);
        ListNode* i = l1;
        ListNode* j = l2;
        ListNode* k = result;
        int carry = 0;
        while(i != NULL && j != NULL){
            if((i->val + j->val + carry) < 10){
                int data = i->val + j->val + carry;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                carry = 0;
            }
            else{
                int x = i->val + j->val + carry;
                int data = x%10;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                x = x/10;
                carry = x%10;
            }
            i = i->next;
            j = j->next;
        }
        cout<<carry;
        while(j != NULL){
            if((j->val + carry) < 10){
                int data = j->val + carry;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                j = j->next;
                carry = 0;
            }
            else{
                int x = j->val + carry;
                int data = x%10;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                x = x/10;
                carry = x%10;
                j = j->next;
            }
        }
        while(i != NULL){
            if((i->val + carry) < 10){
                int data = i->val + carry;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                i = i->next;
                carry = 0;
            }
            else{
                int x = i->val + carry;
                int data = x%10;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                x = x/10;
                carry = x%10;
                i = i->next;
            }
        }
        if(carry != 0){
            ListNode* temp = new ListNode(carry);
            k->next = temp;
            k = k->next;
        }
        return result->next;
    }
};
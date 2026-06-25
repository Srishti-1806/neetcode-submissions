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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> vec;
        ListNode* ll1=list1;
        ListNode* ll2=list2;
        while(ll1!= NULL){
            vec.push_back(ll1->val);
            ll1=ll1->next;
        }
        while(ll2 != NULL){
            vec.push_back(ll2->val);
            ll2=ll2->next;
        }
        if(vec.empty()) return NULL;
        sort(vec.begin(), vec.end());
        ListNode* n = new ListNode(vec[0]);
        ListNode* curr = n;
        for(int i=1; i<vec.size(); i++){
            curr->next = new ListNode(vec[i]);
            curr = curr->next;
        }
        return n;
    }
};

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>vec;
        for(auto it: lists){
            ListNode* conn = it;
            while(conn!=NULL){
                vec.push_back(conn->val);
                conn=conn->next;
            }
        }
        sort(vec.begin(),vec.end());
        ListNode* ans = new ListNode(0);
        ListNode* dummy= ans;
        for(auto it:vec){
            dummy ->next = new ListNode(it);
            dummy=dummy->next;
        }
        return ans->next;
    }
};

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
    struct compare{
        bool operator()(ListNode* a,ListNode* b){
            return a->val>b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare>heap;
        ListNode* dummy= new ListNode();
        ListNode* tail=dummy;
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL)
                heap.push(lists[i]);
        }
        while(!heap.empty()){
            ListNode* node=heap.top();
            tail->next=node;
            tail=tail->next;
            heap.pop();
            if(node->next!=NULL){
                heap.push(node->next);
            }
        }
        return dummy->next;
    }
};
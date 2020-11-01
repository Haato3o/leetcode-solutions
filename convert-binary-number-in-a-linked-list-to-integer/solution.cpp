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
using namespace std;
class Solution 
{
public:
    int getDecimalValue(ListNode* head) 
    {
        int value = head->val;
        while (head->next != NULL) 
        {
            head = head->next;
            value = (value << 1) + head->val;
        }
        return value;
    }
};
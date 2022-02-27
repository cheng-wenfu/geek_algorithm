#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// LeetCode 运行
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //  保护节点
        ListNode* newHead = new ListNode(0, nullptr); 
        ListNode* pre = newHead;
        while (list1 && list2) {
            // 当前较小的值插入链表尾部，然后移动头部，继续下一轮比较
            if (list1 -> val <=  list2 -> val) {
                pre -> next = list1;
                list1 = list1 -> next;
            } else {
                pre -> next = list2;
                list2 = list2 -> next;
            }
            pre = pre -> next;
        }
        // 比较结束，剩余没有比较完的头部插入比较后的链尾
        pre -> next = list1 ? list1 : list2;
        return newHead -> next;
    }
};
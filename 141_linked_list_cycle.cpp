#include <cstddef>
#include <iostream>

/** Leetcode 141**/
/** Definition for singly-linked list. **/
struct ListNode	{
		int val;
		ListNode *next;
		ListNode(int x): val(x), next(NULL)	{}
};

int main()	{
	ListNode ln1(1);
	ListNode* ln2;
	struct ListNode* ln3 = (struct ListNode*) malloc(sizeof(struct ListNode));
	/** The three ways can initialize the ListNode structure **/

	std::cout << ln1.next << "\n";
	ln1.next = ln2; /** This change the ln1's next pointer **/
	std::cout << ln1.val << "\n";
	std::cout << ln1.next << "\n";
	std::cout << ln2 << "\n";
	std::cout << ln3 -> val << "\n";
	std::cout << ln3 -> next << "\n";
	return 0;
}

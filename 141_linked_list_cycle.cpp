#include <cstddef>
#include <iostream>

/** Leetcode 141**/
/** Definition for singly-linked list. **/
struct ListNode	{
		int val;
		ListNode *next;
		ListNode(int x): val(x), next(NULL)	{}
};

class SingleList {
	ListNode* head;
	public:
		SingleList() {head=nullptr;};
		/** https://shengyu7697.github.io/cpp-nullptr/ **/

		void PrintList() {
			ListNode* temp = head;
			while(temp!=nullptr){
				std::cout << temp-> val << "\n";
				temp = temp -> next;
			}
		};

		void Insert(int value) {
			ListNode* new_node = new ListNode(value);
			if (head == nullptr){
				head = new_node;
				return;
			}
			ListNode* temp  = head;
			while(temp -> next != nullptr){
				temp = temp -> next;
			}	
			temp -> next = new_node;
		};

		/**void Delete(int node_number) {
		};**/
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
	SingleList sl;
	sl.Insert(1);
	sl.Insert(2);
	sl.PrintList();
	return 0;
}

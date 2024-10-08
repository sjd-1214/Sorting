#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int val) {
		data = val;
		next = nullptr;
	}
};

class linkedList {
public:
	Node* head;
	linkedList() {
		head = nullptr;
	}

	~linkedList() {}

	bool insertEnd(int val) {
		Node* newNode = new Node(val);
		Node* current = head;
		if (head == nullptr) {
			head = newNode;
			return true;
		}
		else {
			while (current->next != nullptr) {
				current = current->next;
			}
			current->next = newNode;
			return true;
		}
	}

	bool insertStart(int val) {
		Node* newNode = new Node(val);
		if (head == nullptr) {
			head = newNode;
			return true;
		}
		else {
			newNode->next = head;
			head = newNode;
			return true;
		}
	}

	bool insertSpecify(int index, int val) {
		Node* newNode = new Node(val);
		Node* current = head;
		if (index < 0) {
			cout << "INVALID INDEX\n";
			delete newNode;
			return false;
		}

		if (index == 0) {
			return insertStart(val);
		}

		int count = 0;
		while (current != nullptr && count != index - 1) {  // Fixed condition
			count++;
			current = current->next;
		}

		if (current == nullptr) {
			cout << "INDEX OUT OF BOUNDS\n";
			delete newNode;
			return false;
		}

		newNode->next = current->next;
		current->next = newNode;
		return true;
	}

	bool deleteEnd() {
		if (head == nullptr) {
			cout << "The list is EMPTY\n";
			return false;
		}

		if (head->next == nullptr) {
			delete head;
			head = nullptr;
			return true;
		}

		Node* current = head;
		while (current->next->next != nullptr) {
			current = current->next;
		}

		delete current->next;
		current->next = nullptr;

		return true;
	}

	bool deleteStart() {
		if (head == nullptr) {
			cout << "The list is EMPTY\n";
			return false;
		}

		Node* current = head;
		head = current->next;
		delete current;
		return true;
	}

	bool deleteSpecify(int index) {
		if (index <= 0) {
			cout << "INVALID INDEX - Index starts from 1\n";
			return false;
		}

		if (index == 1) {
			Node* temp = head;
			head = head->next;
			delete temp;
			return true;
		}

		Node* current = head;
		int count = 1;

		while (current != nullptr && count < index - 1) {
			current = current->next;
			count++;
		}

		if (current == nullptr || current->next == nullptr) {
			cout << "INDEX OUT OF BOUNDS\n";
			return false;
		}

		Node* temp = current->next;
		current->next = temp->next;
		delete temp;
		return true;
	}

	void display() {
		if (head == nullptr) {
			cout << "The list is Empty\n";
		}
		else {
			Node* current = head;
			while (current != nullptr) {
				cout << current->data << " ";
				current = current->next;
			}
		}
		cout << endl;
	}

	Node* findMiddle(Node* hd) {
		Node* slow = hd;
		Node* fast = hd;
		while (fast->next && fast->next->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}

	Node* merge(Node* left, Node* right) {
		Node dummy(0);
		Node* tail = &dummy;

		while (left && right) {
			if (left->data < right->data) {
				tail->next = left;
				left = left->next;
			}
			else {
				tail->next = right;
				right = right->next;
			}
			tail = tail->next;
		}

		// Attach remaining elements
		if (left) tail->next = left;
		if (right) tail->next = right;

		return dummy.next;
	}

	Node* sortList(Node* head) {
		if (!head || !head->next) {
			return head;
		}

		Node* mid = findMiddle(head);      // Find middle node
		Node* left = head;
		Node* right = mid->next;
		mid->next = nullptr;               // Split into two halves

		left = sortList(left);             // Recursively sort left half
		right = sortList(right);           // Recursively sort right half

		return merge(left, right);         // Merge the sorted halves
	}
};


int main() {
	linkedList ll1;
	ll1.insertEnd(2);
	ll1.insertEnd(5);
	ll1.insertEnd(1);
	ll1.insertEnd(3);
	ll1.insertEnd(4);

	ll1.display();

	ll1.head = ll1.sortList(ll1.head);

	ll1.display();

	return 0;
}

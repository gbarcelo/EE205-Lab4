#include "List.hpp"

#include <utility>

List::List() {
	head = new ListNode();
	head = nullptr;
	length = 0;
	}

List::List(const List& other) {
	head = new ListNode();
	head = other.head
	length = other.length

/*
	for (i = 0; i < other.length; i++) {
		head[i]->data = other.get(i);
		} // Use the get function to copy individual data of each input ListNode
	}
*/

List::List(List&& other) :
	head(std::move(other.head)),
	length(std::move(other.length)) {}

List::~List() {
	delete head;
	}

List::append(int num) {
	head = new ListNode;
	
	}

List::get(int index) const {
	
	}

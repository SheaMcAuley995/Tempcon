#include "intlinkedlist.h"
#include <cassert>

intLinkedList::intLinkedList()
	: head(nullptr)
{

}

intLinkedList::~intLinkedList()
{
	intLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		intLinkedListNode* next = iter->next;
		delete iter;
		iter = next;
	}

}

void intLinkedList::appened(int value)
{
	intLinkedListNode* newNode = new intLinkedListNode;
	newNode->value = value;
	newNode->next = nullptr;

	if (head == nullptr)
	{
		head = newNode;
		//tail = head;
	}
	else
	{
		intLinkedListNode* iter = head;
		while (iter->next != nullptr)
		{
			iter = iter->next;
		}
		iter->next = newNode;
		//tail->value = iter->value;
		
	}
}

int intLinkedList::at(int index)
{
	intLinkedListNode* FindIndex = head;
	int counter = 0;
	while (counter != index && FindIndex != nullptr)
	{
		counter++;
		FindIndex = FindIndex->next;
	}

	return FindIndex->value;
	//assert(index >= );

	//return

}

int intLinkedList::back() const
{
	assert(!empty());
	intLinkedListNode * iter = head;
	while (iter->next != nullptr)
	{
		iter = iter->next;
	}
	return iter->value;
}

int intLinkedList::front() const
{
	assert(!empty());
	//assert(tail->value == nullptr);
	return head->value;
}

size_t intLinkedList::size() const
{
	int counter = 0;
	intLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		counter++;
		iter = iter->next;
	}
	return counter;
}

bool intLinkedList::empty() const
{
	return head == nullptr;
}

void intLinkedList::clear()
{
	intLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		intLinkedListNode* next = iter->next;

		head = next;
		delete iter;

		iter = next;
	}
}


void intLinkedList::insert(int value, size_t index)
{
	intLinkedListNode* newNode = new intLinkedListNode;
	newNode->value = value;
	intLinkedListNode* CurrentIndex = head;
	int counter = 0;
	intLinkedListNode* previousIndex = nullptr;
	while (CurrentIndex != nullptr && counter < index)
	{
		if (counter == index - 1)
		{
			previousIndex = CurrentIndex;
		}
		CurrentIndex = CurrentIndex->next;
		counter++;
	}
	
	intLinkedListNode* temp = CurrentIndex;
	
	CurrentIndex->value = value;
	
	newNode->next = temp;
	
	previousIndex->next = CurrentIndex;
	
}

void intLinkedList::Erase(size_t index)
{
	assert(index < size());

	intLinkedListNode *iter = head;
	intLinkedListNode *prev = head;
	int counter = 0;

	while (iter->next != nullptr && counter != index)
	{
		if (counter == index - 1)
		{
			prev = iter;
		}

		iter = iter->next;
		counter++;
	}
	assert(counter == index);
	prev->next = iter->next;
	delete iter;
}

intLinkedList::intLinkedListNode * intLinkedList::findLastNode()
{
	intLinkedListNode* currentNode = head;
	if (currentNode == nullptr)
	{
		return nullptr;
	}
	else {
		while (currentNode->next != nullptr)
		{
			
		}
	}
}

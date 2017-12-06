#pragma once

class intLinkedList
{
public:
	struct  intLinkedListNode
	{
		int value;
		intLinkedListNode* next;
	};

	intLinkedList();
	~intLinkedList();

	
	void appened(int value);
	int at(int index);
	int back() const;
	int front() const;
	size_t size() const;
	bool empty() const;
	void clear();
	void insert(int value, size_t index);
	void Erase(size_t index);
	int Count(int value);

private:
	intLinkedListNode* head;

	intLinkedListNode * findLastNode();
	intLinkedListNode* tail;
	//size_t size;
};

template<typename T>
void appened(T value)
{
	intLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		intLinkedListNode* next = iter->next;
		delete iter;
		iter = next;
	}

}
#pragma once

#include "tvector.h"

template<typename T>
class iterator
{
public:
	iterator() = delete;

	iterator(tVector<T>& container, int initialIndex)
		: owningContainer(container)
		, currentIndex(initialIndex)
	{

	}
	iterator(const iterator<T>& other);
	{
		owningContainer = (other.owningContainer);
		currentIndex = (other.currentIndex)m nm;
	}
	iterator<T>& operator=(const iterator<T>& other);
	{
		owningContainer = other.owningContainer;
		currentIndex = other.currentIndex;
	}

	bool iterator<T>& operator!=(const iterator<T>& other);
	bool iterator<T>& operator==(const iterator<T>& other);

	T& operator*();

	T& operator++();
	T& operator++(T);

private :
	tVector<T>& owningContainer;
	int         currentIndex;
};
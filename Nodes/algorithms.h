#pragma once


static int addRange(int* start, int* end)
{
	int total = 0;
	int* iter = start;
	while (iter != end)
	{
		total += *iter;
		++iter;
	}

	return total;
}


template<typename T>
static T addRangetoo(T* start, T* end)
{
	int total = 0;
	int* iter = start;
	while (iter != end)
	{
		total += *iter;
		++iter;
	}

	return total;
}
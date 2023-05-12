#pragma once
#include"Collection.h"
#include<stddef.h>
class IntervalCollection : public Collection
{
private:
	int* data;
	size_t start;
	size_t end;
	void free();
	void copyFrom(const IntervalCollection&);

public:
	IntervalCollection(size_t start, size_t end);

	IntervalCollection(const IntervalCollection&);
	IntervalCollection& operator=(const IntervalCollection&);

	unsigned intervalLength() const;

	void add(int) override;
	void remove(int) override;
	unsigned count(int) const override;
	bool contains(int) const override;

	~IntervalCollection();
};

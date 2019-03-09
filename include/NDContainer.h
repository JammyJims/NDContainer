#include <numeric>
#include <vector>
#include <functional>
#include <iostream>

template <class DType> 
class NDContainer {
public:
	NDContainer();
	NDContainer(std::vector<unsigned int> dimension_lengths);
	~NDContainer();
	void print();
	void fill();
private:
	std::vector<unsigned int> dimension_lengths;
	unsigned int size();
	DType *data;
};

#ifndef __NDContainer__
#define __NDContainer__

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

// ********************************************************************************************************************************************************** //

template <class DType> 
NDContainer<DType>::NDContainer() {
	this->dimension_lengths = std::vector<unsigned int>(1, 0);
	this->data = new DType[this->size()];
}

template <class DType> 
NDContainer<DType>::NDContainer(std::vector<unsigned int> dimension_lengths) {
	this->dimension_lengths = dimension_lengths;
	this->data = new DType[this->size()];
}

template <class DType> 
NDContainer<DType>::~NDContainer() {
	delete[] this->data;
}

template <class DType> 
unsigned int NDContainer<DType>::size() {
	return std::accumulate(this->dimension_lengths.begin(), this->dimension_lengths.end(), 1, std::multiplies<unsigned int>());
}

template <class DType> 
void NDContainer<DType>::fill() {
	using namespace std;
	for (unsigned int i=0; i<this->size(); i++) data[i] = (DType) i;
	return;
}

template <class DType> 
void NDContainer<DType>::print() {
	using namespace std;
	for (unsigned int i=0; i<this->size(); i++) cout << data[i] << endl;
	return;
}

#endif __NDContainer__

#include "NDContainer.h"

template <class DType> 
NDContainer<DType>::NDContainer() {
	this->dimension_lengths = std::vector<unsigned int>(1, 0);
	this->data = new double[this->size()];
}

template <class DType> 
NDContainer<DType>::NDContainer(std::vector<unsigned int> dimension_lengths) {
	this->dimension_lengths = dimension_lengths;
	this->data = new double[this->size()];
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

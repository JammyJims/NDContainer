#include <iostream>
#include "NDContainer.h"
int main(int argc, char *argv[]) {
	using namespace std;
	vector<unsigned int> dimensions = {3, 3, 3};
	NDContainer<float> matrix(dimensions);
	matrix.fill();
	matrix.print();
	return 0;
}

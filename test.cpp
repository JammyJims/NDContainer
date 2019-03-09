#include "NDContainer.h"
#include <vector>

int main() {
	using namespace std;
	vector<unsigned int> dimensions = {3, 3, 3};
	NDContainer<float> matrix(dimensions);
	//matrix.fill();
	//matrix.print();
	return 0;
}

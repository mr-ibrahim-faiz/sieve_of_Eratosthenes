#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<algorithm>
using std::sort;

#include<vector>
using std::vector;


//This function checks if a number is marked

bool is_marked(int tested_number, vector<int> marked) {
	for (int number : marked)
		if (tested_number == number)
			return true;
	return false;
}

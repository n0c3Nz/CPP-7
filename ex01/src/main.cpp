#include <iter.hpp>

int main()
{
	char *array = new char[5];
	array[0] = 'a';
	array[1] = 'b';
	array[2] = 'c';
	array[3] = 'd';
	array[4] = 'e';
	iter(array, 5, print);
	delete[] array;
	std::cout << "----------------" << std::endl;
	int *array2 = new int[5];
	array2[0] = 1;
	array2[1] = 2;
	array2[2] = 3;
	array2[3] = 4;
	array2[4] = 5;
	iter(array2, 5, print);
	delete[] array2;
	std::cout << "----------------" << std::endl;
	std::string *array3 = new std::string[5];
	array3[0] = "one";
	array3[1] = "two";
	array3[2] = "three";
	array3[3] = "four";
	array3[4] = "five";
	iter(array3, 5, print);
	delete[] array3;
	std::cout << "----------------" << std::endl;
	std::string array4[5] = {"uno", "dos", "tres", "cuatro", "cinco"};
	iter(array4, 5, print);
	return 0;
}
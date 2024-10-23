#include <iostream>
#include <array.hpp>

#define MAX_VAL 750
#define END "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    std::cout << "----- [ 1 ] -----" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << GREEN << "OK." << END << std::endl;
    std::cout << "----- [ 2 ] -----" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << END << '\n';
    }
    std::cout << "----- [ 3 ] -----" << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << END << '\n';
    }
    std::cout << "----- [ 4 ] -----" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    std::cout << "----- ----- -----" << std::endl;
	std::cout << GREEN << "Success" << END << std::endl;
	std::cout << "Size of Array: " << numbers.size() << std::endl;
    std::cout << "----- ----- -----" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << RED << "[" << i << "] " << END << numbers[i] << std::endl;
	}
    std::cout << "----- ----- -----" << std::endl;
	
    return 0;
}
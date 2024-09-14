#include <iostream>
#include <vector>

template <typename T>
void printArray(const std::vector<T>& arr)
{
	// typename keyword prefix required for dependent type
	for (typename std::vector<T>::size_type index { 0 }; index < arr.size(); ++index)
		std::cout << arr[index] << ' ';
}

/*Alias are often used to make using loops easier

using arrayi = std::vector<int>;
for (arrayi::size_type index { 0 }; index < arr.size(); ++index)*/

int main()
{
	std::vector arr { 9, 7, 5, 3, 1 };

	printArray(arr);

	return 0;
}
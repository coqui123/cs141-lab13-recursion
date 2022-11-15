#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

//🐸🐸🐸🐸🐸

auto number_count(int n) -> int
{
	if (n == 0)
		return 0;
	else
		return 1 + number_count(n / 10);
}

/* Implement this function and call it in problem 2 to check if the number is found or not */
auto check_number(int arr[], int size, int x) -> bool
{
	if (size == 0)
		return false;
	else if (arr[size - 1] == x)
		return true;
	else
		return check_number(arr, size - 1, x);
}

/* Implement this function and call it in problem 3 to get the last index of a number */
auto last_index(int arr[], int size, int x) -> int
{
	if (size == 0)
		return -1;
	else if (arr[size - 1] == x)
		return size - 1;
	else
		return last_index(arr, size - 1, x);
}

/* Read number as input and call the numberCount() function by passing the input number as a parameter.*/
auto problem1() -> void
{
	int n;
	std::cout << "enter input number : ";
	std::cin >> n;
	std::cout << "count of numbers : " << number_count(n) << std::endl;
}

/* Input is going to be an array of numbers for this problem. First read Array size as input, then read array elements
 followed by the number you want to check. Call the checkNumber() function to check if the number is present in the array or not.
 It takes the array, array size and the element to be searched as parameters. */
auto problem2() -> void
{
	int size;
	std::cout << "enter array size : ";
	std::cin >> size;
	int *arr = new int[size];
	std::cout << "Enter array elements : ";
	for (int i = 0; i < size; i++)
		std::cin >> arr[i];
	int x;
	std::cout << "Enter array element to be searched : ";
	std::cin >> x;
	if (check_number(arr, size, x))
		std::cout << "Found" << std::endl;
	else
		std::cout << "Not Found" << std::endl;
}

/* Input is going to be an array of numbers for this problem. First read Array size as input, then read array elements
 followed by the number whose last index you want to return. Call the lastIndex() function to return a numbers last index.
 It takes the array, array size and the element to be searched as parameters. */
auto problem3() -> void
{ 
	int size;
	std::cout << "enter array size : ";
	std::cin >> size;
	int* arr = new int[size];
	std::cout << "Enter array elements : ";
	for (int i = 0; i < size; i++)
		std::cin >> arr[i];
	int x;
	std::cout << "enter element whose last index should be returned : ";
	std::cin >> x;
	std::cout << last_index(arr, size, x) << std::endl;
}

auto main() -> int{
    // You should not change the code below this point.  
    // All your changes should be inside the individual functions shown above.
    int menu_option = 0;
	std::cout << "Enter which problem to run : " << std::endl;
	std::cin >> menu_option;
    switch (menu_option) {
    case 1: problem1(); break;
    case 2: problem2(); break;
    case 3: problem3(); break;
    }
	std::cout << "Done." << std::endl;
    return 0;
}// end main()


#include <iostream>
#include "Sales_item.h"

int main()
{
	/*
		Exercises Section 1.2
	*/

	//std::cout << "Hello world!" << std::endl;

	//std::cout << "Enter two numbers:" << std::endl;
	//int v1 = 0, v2 = 0;
	//std::cin >> v1;
	//std::cin >> v2;

	//std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	//std::cout << "The product of them is " << v1 * v2 << std::endl;

	/*
	Exercises Section 1.4.1
	*/

	//Exercise 1.9
	//int current = 50;
	//int total = 0;

	//int numberArray[51] = {};

	//while (current <= 100)
	//{
	//	numberArray[current - 50] = current;
	//	total += current;
	//	current++;
	//}

	//std::cout << "The numbers from 50 to 100 added together is: " << total << std::endl;

	//Exercise 1.10
	//In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1.
	//Use the decrement operator to write a while that prints the numbers from ten down to zero.
	/*std::cout << "The numbers from 10 to 0 are: " << std::endl;

	int current = 10;
	
	while (current >= 0)
	{
		std::cout << current << std::endl;
		current--;
	}*/

	//Exercise 1.11
	//write a program that prompts the user for two integers. print each number in the range specified by those two integers.
	/*
	int v1 = 0, v2 = 0;

	std::cout << "Please enter two integers." << std::endl;
	std::cin >> v1 >> v2;
	std::cout << "The integers between the two numbers you entered are: " << std::endl;

	if (v1 < v2)
	{
		while (v1 <= v2)
		{
			std::cout << v1 << std::endl;
			v1++;
		}
	}
	else if (v1 > v2)
	{
		while (v1 >= v2)
		{
			std::cout << v2 << std::endl;
			v2++;
		}
	}
	else //the numbers are equal.
	{
		std::cout << v1 << std::endl << v2 << std::endl;
	}
	*/

	//Exercises Section 1.4.2
	/* 1.12
	int sum = 0;

	for (int i = -100; i <= 100; ++i)
	{
		sum += i;
	}

	std::cout << sum;*/
	//1.13 rewrite the first two exercises from 1.4.1 using for loops

	/*int sum = 0;
	
	for (int i = 50; i <= 100; i++)
		sum += i;

	std::cout << sum << std::endl;*/

	/*for (int i = 10; i >= 0; --i)
	{
		std::cout << i << std::endl;
	}*/

	//1.14
	/*
	for loop advantages: varibles have only local visibility, and are automatically "managed" by the statement (i++)
	while loop advantages: if the expression is complex, it may be easier to read in a while loop than in hte body of a for loop
	*/
	
	//1.15 write programs that contain the common errors discussed in the box on p. 16. Familiarize yourself with the messages the compiler generates.
	//...done.

	//program from p. 15 - std::cin will continue to read values until it encounters end of file or an invalid input - in this case any value that is not an integer.
	//on windows, end of file can be entered using ctrl-z. On UNIX systems or Mac OSX, the combination is usually control-d.

	//int sum = 0, value = 0;

	//while (std::cin >> value)
	//{
	//	sum += value;
	//}

	//std::cout << "Sum is: " << sum << std::endl;

	//1.16 write your own version of a program that prints the sum of a set of integers read from cin.
	
	/*int value = 0;
	int sum = 0;

	for (; std::cin >> value; )
	{
		sum += value;
	}

	std::cout << "Sum is: " << sum << std::endl;
	*/

	//program from p. 17 about the if statement

	//int currVal = 0, val = 0;

	//if (std::cin >> currVal)
	//{
	//	int cnt = 1;
	//	
	//	while (std::cin >> val)
	//	{
	//		if (val == currVal)
	//		{
	//			++cnt;
	//		}
	//		else
	//		{
	//			std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	//			currVal = val;
	//			cnt = 1;
	//		}
	//	}

	//	std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	//}

	//1.17 what happens in the above program if the input values are equal? normal execution...
	// what happens  if there are no duplicated values? normal...execution...
	//1.18 compile and run the program with 1.17's proposed inputs. okay...done.
	//1.19 Revise the program written for section 1.4.1 so that it handles input in which
	//the first number is smaller than the second. I did write it to handle that case already (see 1.11 above)

	//1.20 Write a program that reads a set of book sales transactions, writing each transaction to the standard output.
	/*
	Sales_item item1, item2, item3;

	std::cin >> item1 >> item2 >> item3;
	std::cout << item1 << std::endl << item2 << std::endl << item3 << std::endl;
	*/

	//1.21 Write a program that reads two Sales_item objects that have the same isbn and produces their sum.

	/*Sales_item item1, item2;

	std::cin >> item1 >> item2;

	if (item1.isbn() == item2.isbn())
	{
		Sales_item sumItem = item1 + item2;
		std::cout << "The sum of the two transactions you entered is: " << sumItem << std::endl;
	}
	else
	{
		std::cerr << "Sorry, you can't add transactions together unles they have the same ISBN." << std::endl;
		return -1;
	}*/

	//1.22 Write a program that reads several transactions for the same isbn. Write the sum of all the transactions that were read.

	/*Sales_item item1, item2, item3, item4;

	std::cin >> item1 >> item2 >> item3 >> item4;

	if (item1.isbn() == item2.isbn() && item1.isbn() == item3.isbn() && item1.isbn() == item4.isbn())
	{
	Sales_item sumItem = item1 + item2 + item3 + item4;
	std::cout << "The sum of the two transactions you entered is: " << sumItem << std::endl;
	}
	else
	{
	std::cerr << "Sorry, you can't add transactions together unles they have the same ISBN." << std::endl;
	return -1;
	}*/

	//1.23 Write a program that reads several transactions and counts how many transactions occur for each isbn.

	//Sales_item total;
	//
	//if (std::cin >> total)
	//{
	//	Sales_item trans;
	//	
	//	while (std::cin >> trans)
	//	{
	//		if (trans.isbn() == total.isbn())
	//		{
	//			total += trans;
	//		}
	//		else
	//		{
	//			std::cout << "Total for book: " << total << std::endl;
	//			total = trans;
	//		}
	//	}
	//	
	//	std::cout << "Total for book: " << total << std::endl;
	//}
	//else
	//{
	//	std::cerr << "No data?!" << std::endl;
	//	return -1;
	//}

	return 0;
}
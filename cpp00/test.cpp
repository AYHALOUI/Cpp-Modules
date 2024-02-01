
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

bool is_uppercase(const std::string &s) 
{
	for (size_t i = 0; i < s.length(); i++)
	{
		if (!isupper(s[i]))
			return (false);
	}
	return true;
}



int basicOp(char op, int val1, int val2) 
{
	switch (op)
	{
		case '+':
			return (val1 + val2);
		case '-':
			return (val1 - val2);
		case '/':
			return (val1 / val2);
		case '*':
			return (val1 * val2);
		default :
			return (0);
	}
}

int get_size(std::vector<bool> arr)
{
	return (sizeof(arr) / sizeof(bool));
}
int count_sheep(std::vector<bool> arr) 
{
	return (std::count(arr.begin(), arr.end(), true));
}

int pow_1(int number, int base)
{
	int result = 1;
	for (int i = 0; i < base; i++)
		result *= number;
	return (result);
}
int square_sum(const std::vector<int>& numbers)
{
	int result = 0;
	for (size_t i = 0; i < numbers.size(); i++)
	{
		result += pow_1(numbers[i], 2);
	}
	return (result);
}
int getRealFloor(int n) 
{
	return (n<= 0? n: n <=13? n-1: n-2);
}

std::pair<int, int> swap_values(std::pair<int, int> values) 
{
	int tmp = values.first;
  	values.first = values.second;
  	values.second = tmp;
	return values;
}

// std::string people_with_age_drink(int age) 
// {
// 	return (
// 		age < 14 ? "drink toddy":
// 		age < 18 ? "drink coke" :
// 		age < 21 ? "drink beer" :
// 		"drink whisky"
// 	);
// }

// std::string people_with_age_drink(int age) 
// {
// 	switch (age)
// 	{
// 		case 0 ...13:
// 			return "drink toddy";
// 		case 14 ... 17:
// 			return "drink coke";
// 		case 18 ... 21:
// 			return "drink beer";
// 		default:
// 			return "drink whisky";
// 	}
// }


// Describe(Correct){
//   It(BasicTests){
//     Assert::That(correct("1F-RUDYARD K1PL1NG"), Equals("IF-RUDYARD KIPLING"));
//     Assert::That(correct("R0BERT MERLE - THE DAY 0F THE D0LPH1N"), Equals("ROBERT MERLE - THE DAY OF THE DOLPHIN"));
//     Assert::That(correct("R1CHARD P. FEYNMAN - THE FEYNMAN LECTURE5 0N PHY51C5"), Equals("RICHARD P. FEYNMAN - THE FEYNMAN LECTURES ON PHYSICS"));
//     Assert::That(correct("R1CHARD P. FEYNMAN - 5TAT15T1CAL MECHAN1C5"), Equals("RICHARD P. FEYNMAN - STATISTICAL MECHANICS"));
//     Assert::That(correct("5TEPHEN HAWK1NG - A BR1EF H15T0RY 0F T1ME"), Equals("STEPHEN HAWKING - A BRIEF HISTORY OF TIME"));
//     Assert::That(correct("5TEPHEN HAWK1NG - THE UN1VER5E 1N A NUT5HELL"), Equals("STEPHEN HAWKING - THE UNIVERSE IN A NUTSHELL"));
//     Assert::That(correct("ERNE5T HEM1NGWAY - A FARWELL T0 ARM5"), Equals("ERNEST HEMINGWAY - A FARWELL TO ARMS"));
//     Assert::That(correct("ERNE5T HEM1NGWAY - F0R WH0M THE BELL T0LL5"), Equals("ERNEST HEMINGWAY - FOR WHOM THE BELL TOLLS"));
//     Assert::That(correct("ERNE5T HEM1NGWAY - THE 0LD MAN AND THE 5EA"), Equals("ERNEST HEMINGWAY - THE OLD MAN AND THE SEA"));
//     Assert::That(correct("J. R. R. T0LK1EN - THE L0RD 0F THE R1NG5"), Equals("J. R. R. TOLKIEN - THE LORD OF THE RINGS"));
//   }
// };


std::string correct(std::string str)
{
	int len = str.length();
	// std::cout << len << std::endl;
	for (int i = 0; i < len; i++)
	{
		if (isdigit(str[i]))
		{
			if (str[i] == '1')
				str[i] = 'I';
			else if (str[i] == '0')
				str[i] = 'O';
			else if (str[i] == '5')
				str[i] = 'S';
		}
	}
	return str;
}

int main()
{
	// std::vector<int> arr = {0, 3, 4, 5};
	// std::pair <int, int> arr = {42 , 25};
	// arr = swap_values(arr);
	// std::cout << arr.first << std::endl;
	// std::cout << arr.second << std::endl;
	std::cout << correct("R0BERT MERLE - THE DAY 0F THE D0LPH1N");
	// std::cout << basicOp('+', 2 , 5);
	// std::cout << basicOp('-', 11 , 8);
	// std::cout << basicOp('*', 3 , 4);
	// std::cout << basicOp('/', 16 , 4);
}
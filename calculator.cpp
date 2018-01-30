#include<iostream>
using namespace std;

int main()
{
	float number1, number2;
	char symbol;
	
	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	cout << "What do you want to do with them? (Use + - * or /) ";
	cin >> symbol;
	switch (symbol)
	{
		case '+':
			cout << "If you add them together, you get " << number1 + number2;
			break;
		case '-':
			cout << "If you subtract them, you get " << number1 - number2;
			break;
		case '*':
			cout << "If you multiply them, you get " << number1 * number2;
			break;
		case '/':
			cout << "If you divide them, you get " << number1 / number2;
			break;
		default:
			cout << "You must use one of these operators! + - * or /";
	}
	cout << "\n";
	
	/* struggled with making this work logically until I read ch3 about "switch"
	
	while (symbol != '+' || '-' || '*' || '/')
	{
		cout << "What do you want to do with them? (Use + - * or /) ";
		cin >> symbol;
		//if ((symbol != '+') || (symbol != '-') || (symbol != '*') || (symbol != '/'))
		{
			cout << "You must use one of these operators! + - * or /";
		}
	}
	*/
	cout << "End of program.";
	return 0;	
}
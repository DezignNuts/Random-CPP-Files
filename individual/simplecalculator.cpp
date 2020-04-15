#include<iostream>;
#include<string>;
#include<iomanip>;

using namespace std;

string userName = "";
double x = 0.0;
double y = 0.0;
char symbol = '+';
double result = 0.0;

void addition(double, double) {
	result = x + y;
}

void subtraction(double, double) {
	result = x - y;
}

void multiplication(double, double) {
	result = x * y;
}

void divide(double, double) {
	result = x / y;
}

int main() {
	
	cout << "Please enter your name: ";
	getline(cin, userName);

	while (result == 0.0) {
		
		cout << "Please enter your first number: ";
		cin >> x;
		cout << "Please enter your second number: ";
		cin >> y;
		cout << "Please choose + - * / : ";
		cin >> symbol;

		if (symbol == '+')
		{
			addition(x, y);
		}
		else if (symbol == '-')
		{
			subtraction(x, y);
		}
		else if (symbol == '*')
		{
			multiplication(x, y);
		}
		else if (symbol == '/')
		{
			divide(x, y);
		}
		else
		{
			cout << "Nice try, please chose one of the listed operators!\n";
			system("Pause");
		}
	}
	cout << userName << ", your answer is: " << result << "\n";

	system("Pause");
}
#include <iostream>
#include <cstdio>

using namespace std;

/*
	Code Written by DezignNuts.
	GitHub: https://github.com/DezignNuts
*/

int myNum; //initial myNum value
int myAge; //declare constant myAge
int a, b, x, y; //declare operator ints
string myUser; //declare user name

int math1(int a, int b) { //This function does addition
	int ad;
	ad = a+b;
	return ad;
}

int math2(int x, int y) { //This Function does multiplication
	int mlp;
	mlp = x*y;
	return mlp;
}

int main() {
	cout << "What is your name?\n";
	cin >> myUser; //Get user-inputted name
	cout << "What is your favorite number?\n";
	cin >> myNum; //gets favorite number
	cout << "How old are you?\n";
	cin >> myAge; //gets user age
	cout << "```````````````````````````````````````````````````````````````````````````````\n";

	cout << "Hello " << myUser <<"!\n"; //Greeting
	cout << "This is the information you gave me:\n\n";
	cout << "Your favorite number is: " << myNum << "\n"; //Tells the user myNum is favorite number
	cout << "You are currently " << myAge << " years old!\n\n"; //Tells the user myAge
	cout << "````````````````````````````````````````````````````````````````````````````````\n";
	
	cout << "Now it's time for Random Facts!\n\n"; //Gathers 2 numbers for the math functions
	cout << "Give me a number:\n";
	int numberOne;
	cin >> numberOne;
	cout << "Give me another number:\n";
	int numberTwo;
	cin >> numberTwo;

	int answerOne;         //Sends the numbers to the math functions
	answerOne = math1(numberOne, numberTwo);
	int answerTwo;
	answerTwo = math2(numberOne, numberTwo);

	//Gives outputs
	cout << "Did you know that "<< numberOne <<" plus "<< numberTwo <<" equals " << answerOne << "?\n";
	cout << "Did you also know that " << numberOne << " times " << numberTwo << " equals " << answerTwo << "?\n";
	
	system("pause"); //press any key to continue...
	return (0); //end main loop
}

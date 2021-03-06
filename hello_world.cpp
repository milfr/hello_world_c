// Let's say hello to the world!

#include <iostream>
using namespace std;

// while working with variables ...
#include <string>

const double pi = 3.1415926;

#define WORLD "Bob"


int main()
{
	std::cout << "Well hello there! I'm the " << WORLD <<"!\n";
	// or using the namespace ...
	cout << "  - Hello to you " << WORLD "!\n";
	
	// learning variables
	bool state 		= true;
	char letter 	= 'c';
	int chiffre		= 42;
	float pie		= 3.1416;
	
	// let's output these ...
	cout << "I just learn new variables, here they are :\n";
	cout << "\tstate : \t\t";
	cout << state;
	cout << "\n\tletter : \t\t";
	cout << letter;
	cout << "\n\tchiffre : \t\t";
	cout << chiffre;
	cout << "\n\tpie : \t\t\t";
	cout << pie;
	
	cout <<"\n";
	
	// dumping results, because doing calculation is easy!
	float result;
	
	result = chiffre * pie;
	cout << "  - Do you know what does " << chiffre << " multiplied by " << pie <<"\n";
	
	result = chiffre * pie;
	cout << "Yes of course, the answer is : " << result << "\n";
	cout << "  - Nice! and what if you substract " << letter << " to this?\n";
	cout << "Of course! your answer is : " << result - letter << "\n";
	cout << "So, as you noticed already, '" << letter << "' is equal to : " << int(letter) << " !!\n";
	
	// funky ways of declaring variables!!
	int a, b, c = 0;
	int d (4);
	/* seems to be pass 2011 content ... 
	int e {5};
	auto f = "test";
	*/
	string myString;
	string hisString = "Whatever!";
	
	// constant
	cout << "Hey! I just learn constant variables! Check this! pi is actually : " << pi << "\n";
	cout << "  - You probably know the difference between a pie and the pi then\?!\n";
	cout << "Pretty easy, the difference is : " << pie - pi << "\n";
	
}

#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	int number;
	bool l ;
	for(;;){
	cout << "Please enter a number: ";
	cin >> number;
		// checking to see whether the number is a prime
 	l = 1;
	for (int i = 2; i < number/2; i++)
	{
		if((number % i) == 0)
{
	l = 0;
}
}
	if (l==0){
		cout << "This number is not a Prime number.\n" << endl;
	}else 
	{cout << "This number is a Prime number.\n" << endl;
	}

}



	return 0;
	}



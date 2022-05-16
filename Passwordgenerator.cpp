#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;

int main() {
	char complex1[53] = { "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm" };
	char complex2[63] = { "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890" };
	char complex3[86] = { "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890!@#$%^&*()_+=-:;'<,>.?/" };
	int n;
	std::cout << "Enter Password complexity (1-3): ";
	std::cin >> n;
	srand(time(NULL));
	std::cout << "Your Password is: ";
	if (n == 1)
	{
	    for (int i = 0; i < 8; i++)
	    {
		    std::cout << complex1[rand() % 53];
	    }
	}
	else if (n == 2) {
		for (int i = 0; i < 8; i++)
		{
			std::cout << complex2[rand() % 63];
		}
	}
	else if (n == 3)
	{
		for (int i = 0; i < 10; i++) {
			std::cout << complex3[rand() % 86];
		}

	}
	else
	{
		std::cout << "Please enter correct complexity level (1-3)" << std::endl;
	}
}
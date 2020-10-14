#include "ErrorChecking.h"

void userInputError(void (*placeholder))
{
	system("cls");
	std::cout << "You cannot do that. " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	system("cls");
	&placeholder;
}
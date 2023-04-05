#include "Patient.h"
#include "SurgeonSimulation.h"


int main()
{
	int input = 0;
	std::cout << "Start Surgeon simulation!" << std::endl;

	patient now;
	
		std::cout << "Choose the operation: ";
		std::cin >> input;
		if (input != 1)
		{
			std::cerr << "First operation must be Scalpel!" << std::endl;
		}
		else
		{
			while (true)
			{
			switch (input)
			{
			default:
				break;
			}
			}
		}
	
	return 0;
}

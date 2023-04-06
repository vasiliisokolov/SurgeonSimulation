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
				std::cout << "Choose the operation: ";
				std::cin >> input;
				switch (input)
				{
				case 1:
					scalpel(now);
					std::cout << "Incision made from (" << now.enc.x << " " << now.enc.y << ") to (" << now.enc.z << " " << now.enc.w << ")." << std::endl;
					break;
				case 2:
					break;
				}
			}
		}
	
	return 0;
}

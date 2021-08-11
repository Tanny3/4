#include <iostream>


int main()
{
	setlocale(LC_ALL, "rus");

	std::cout << R"( 
         _______     _______     _______     _______     _______
         | ****|     |*    |     |*****|     |  *  |     |*****|
         |  ***|     |**   |     | *** |     | *** |     |  *  |
         |    *|     |**** |     |  *  |     |*****|     |*****|    
         -------     -------     -------     -------     -------
            1           2           3           4           5
         _______     _______     _______     _______     _______
         |*   *|     |*    |     |    *|     |**** |     |    *|
         |** **|     |**   |     |   **|     |***  |     |   **|
         |*   *|     |*    |     |    *|     |*    |     |  ***|
         -------     -------     -------     -------     -------
                                                           
            6           7           8           9           10

)";
	int figure;
	std::cout << "Выберите фигуру для построения [1-10]";
	std::cin >> figure;

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			switch (figure)
			{
			case 1: if (j >= i) std::cout << "*"; else std::cout << " ";
				break;

			case 2: if (j <= i) std::cout << "*"; else std::cout << " ";
				break;

			case 3: if (j >= i && i + j <= 3 + 1) std::cout << "*"; else std::cout << " ";
				break;

			case 4: if (j <= i && i + j >= 4 + 1) std::cout << "*"; else std::cout << " ";
				break;

			case 5: if (j >= i && i + j <= 3 + 1 || j <= i && i + j >= 3 + 1) std::cout << "*"; else std::cout << " ";
				break;

			case 6: if (j <= i && i + j <= 3 + 1 || j >= i && i + j >= 3 + 1) std::cout << "*"; else std::cout << " ";
				break;

			case 7: if (j <= i && i + j <= 3 + 1) std::cout << "*"; else std::cout << " ";
				break;

			case 8: if (j >= i && i + j >= 3 + 1) std::cout << "*"; else std::cout << " ";
				break;

			case 9: if (j + i > 3 + 1) std::cout << " "; else std::cout << "*";
				break;

			case 10: if (j + i < 3 + 1) std::cout << " "; else std::cout << "*";
				break;

			default: std::cout << "такого значения не найдено";
				break;
			}
		}
		std::cout << std::endl;

	}
	return 0;
}

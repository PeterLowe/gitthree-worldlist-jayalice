// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
<<<<<<< HEAD
// Alice Timmins
//  or here
=======
// Jay
<<<<<<< HEAD
// 
>>>>>>> 233ae6e8bf2600947461d3cdf997f7092ae794ce
=======
// Conor
>>>>>>> c6d992d20ff5d02d17990dc750214d09b81e9c6a
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to A or N to N or Z to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}	
<<<<<<< HEAD
	else if (letter == 'z' || letter == 'Z') // written by Pete
=======
	if (letter == 'n' || letter == 'N') //Written by Conor
	{
		if (region == 1)
		{
			std::cout << "Nicaragua, Netherlands Antilles" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Norway, North Macedonia, Netherlands" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Namibia, Niger, Nigeria" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Nepal" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Nauru, New Caledonia Melanesia, Niuen, North Marian islands" << std::endl;
		}
	}
	if (letter == 'z' || letter == 'Z') // written by Pete
>>>>>>> c6d992d20ff5d02d17990dc750214d09b81e9c6a
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	else if (letter == 'y' || letter == 'Y')
	{
		switch (region)
		{
			case 1:
				std::cout << "There are no Ys in the Americas" << std::endl;
				break;
			case 2:
				std::cout << "There are no Ys in Europe" << std::endl;
				break;
			case 3:
				std::cout << "There are no Ys in Africa" << std::endl;
				break;
			case 4:
				std::cout << "Yemen" << std::endl; 
				break;
			case 5:
				std::cout << "There are no Ys in the rest of the world" << std::endl;
				break;

		}
			

	}
	
	
	return 1;
}

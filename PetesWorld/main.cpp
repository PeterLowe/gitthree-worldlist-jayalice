// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Alice Timmins
// Jay
// Conor
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
	std::cout << "Pick a letter from A to B or M to O or Z to Z" << std::endl; // change this line each iteration

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
	if (letter == 'l' || letter == 'L') //Written by Conor
	{
		if (region == 1)
		{
			std::cout << "There are no Ls in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Latvia, Liechtenstein, Lithuania, Luxemborg" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Lesotho, Liberia, Libya" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Lao, Lebanon" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ls in the rest of the World" << std::endl;
		}
	}
	if (letter == 'm' || letter == 'M') //Written by Conor
	{
		if (region == 1)
		{
			std::cout << "Martinique, Mexico, Montserrat" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Malta, Moldova, Monaco, Montenegro" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Madagascar, Malawi, Nali, Mauritania, Mauritius, Mayotte, Morocco, Mozambique" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Macau, Malaysia, Maldives, Mongolia, Myanmar" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Marshall islands, Micronesia" << std::endl;
		}
	}

	switch (letter) // Start of Jay's code
	{
		case 'b':
		case 'B':
			switch (region)
			{
				case 1:
					std::cout << "Belize, Bermuda, Bolivia, Brazil" << std::endl;
					break;
				case 2:
					std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
					break;
				case 3:
					std::cout << "Benin, Botswania, Burkina Faso, Burundi" << std::endl;
					break;
				case 4:
					std::cout << "Bangladesh, Bhutan, Brunei Darussalam" << std::endl;
					break;
				case 5:
					std::cout << "Bahamas, Bahrain Arabian Peninsula, Barbados" << std::endl;
					break;
			}
			break;
	} // End of Jay's code

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
	if (letter == 'o' || letter == 'O')//Written by Conor
	{
		if (region == 1)
		{
			std::cout << "There are no Os in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Os in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Os in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Oman" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Os in the rest of the World" << std::endl;
		} 
	}
	if (letter == 'p' || letter == 'P')
	{
		if (region == 1)
		{
			std::cout << "Panama, Paraguay, Peru, Puerto Rico" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Poland, Portugal" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ps in Africa" << std::endl;
		}
		if (region == 4) 
		{
			std::cout << "Pakistan, Palestinian Territories,  Philippines" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Palau, Papua New Guinea, Pitcairn Islands" << std::endl;
		}
	}
	else if (letter == 'x' || letter == 'X')
	{
		std::cout << "There are no contries beginning with x in the whole world" << std::endl;
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
	 else if (letter == 'z' || letter == 'Z') // written by Pete
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
	
	
	return 1;
}

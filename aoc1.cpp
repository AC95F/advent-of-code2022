#include <fstream>
#include <iostream>
#include <string>
#include "aoc1.h"

void day1Part1()
{
	std::ifstream filein("aoc01.txt");

	if (filein.is_open())
	{
		std::string input;
		std::getline(filein, input);

        int totalCal = 0;
        int tempCal = 0;

		while (std::getline(filein, input))
		{
            if (input.empty())
            {
                if (tempCal > totalCal)
                {
                    totalCal = tempCal;
                }
                tempCal = 0;
            }
            
            else
            {
                tempCal += std::stoi(input);
            }
		}

        std::cout << totalCal;

		filein.close();
	}
}

void day1Part2()
{
	std::ifstream filein("aoc01.txt");

	if (filein.is_open())
	{
		std::string input;
		std::getline(filein, input);

        int totalCal = 0;
        int totalCalSecond = 0;
        int totalCalThird = 0;
        int tempCal = 0;

		while (std::getline(filein, input))
		{
            if (input.empty())
            {
                if (tempCal > totalCal)
                {
                    totalCalThird = totalCalSecond;
                    totalCalSecond = totalCal;
                    totalCal = tempCal;
                }
                else if (tempCal > totalCalSecond)
                {
                    totalCalThird = totalCalSecond;
                    totalCalSecond = tempCal;
                }
                else if (tempCal > totalCalThird)
                {
                    totalCalThird = tempCal;
                }

                tempCal = 0;
            }
            
            else
            {
                tempCal += std::stoi(input);
            }
		}

        std::cout << totalCal + totalCalSecond + totalCalThird;

		filein.close();
	}
}
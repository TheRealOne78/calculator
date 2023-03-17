/*
 * Copyright (C) 2023 TheRealOne78 <bajcsielias78@gmail.com>
 *
 * This file is part of TheRealOne78's calculator project
 *
 * This is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software. If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <fstream>

#include "fancy-text.h"

#ifndef _ERRORCOUNT
 #define _ERRORCOUNT 10
#endif

/* See if the user wants to restart or exit */
uint8_t choice(void);

int main(void) {
  /* all numbers that needs to be converted */
  int64_t first, second, add, substract, multiply;
  double divide;

  /* Output SPLASH.ASCII file to the console */
  std::cout << KBBLK; /* Switch color to gray */
  std::ifstream SPLASH("./SPLASH.ASCII");
  for(std::string line; getline(SPLASH, line); )
    std::cout << line << std::endl;
  std::cout << RST; /* Switch color to default */
  SPLASH.close();

  std::cout << "\n\n\nFor this operation, input the numbers you want to calculate." << std::endl;
  std::cout << "The operation of calculation will be down...\n" << std::endl;
  std::cout << "=====================\n" << std::endl;

  /* Run this program untill the user decides to stop */
  while(1) {
    std::cout << "Input the first number: "; std::cin >> first;
    std::cout << "Input the second number: "; std::cin >> second;

    // here will be calculated the numbers into more variables
    add = first + second;
    substract = first - second;
    multiply = first * second;
    divide = first / (double)second;
    std::cout << "\n";

    // here will output what was calculated
    std::cout << "Assembly operation: " << add << std::endl;
    std::cout << "Subtraction operation: " << substract << std::endl;
    std::cout << "Multiplication operation: " << multiply << std::endl;
    std::cout << "Splitting operation: " << divide << std::endl;

    std::cout << "\n=====================" << std::endl;
    std::cout << "\nContinue? (" KBGRN "Y" RST "/" KBRED "n" RST "): ";
    choice();
  }
}

uint8_t choice(void) {
/* here the user will input it's choice to exit or not */
  char choice;
  uint8_t error;

  while(1) {
    std::cin >> choice;
    switch(tolower(choice)) {
      case 'y':
        clear_term();
        return(0);
        break;
      case 'n':
        exit(EXIT_SUCCESS);
        break;
      default:
        error++;
        if(error >= _ERRORCOUNT) {
          fprintf(stderr, "Too much encountered errors, exiting...\n");
          exit(EXIT_FAILURE);
        }
        std::cout << "Invalid input. Please repeat: ";
        continue;
        break;
    }
  }
}

#define CLS system("CLS"); //defines 'CLS;' as 'system(CLS);'

#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <io.h>
#include <ctime>
#include <stdlib.h>
#include <fcntl.h>
#include <cstdlib>
#include <string>
#include <tchar.h>

//#include <SFML/Audio.hpp> //has errors

using namespace std;//defines namespace as std, no need to use std::

void color(int color)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }
	//to change color write 'color(numer);'

void gotoxy (int x, int y)
{
    COORD coord; // coordinates
    coord.X = x; coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}
	//to change position write 'gotoxy(x,y);'
int wherex()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return csbi.dwCursorPosition.X;
  }
  //to get x position wtite 'wherex();'

int wherey()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return csbi.dwCursorPosition.Y;
  }
  //to get y position wtite 'wherey();'
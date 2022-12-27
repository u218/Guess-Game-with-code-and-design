/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>		//here i just used three three different libraries.

			       //to use the time of the operating system i used time.h 
#include <time.h>
#include<conio.h>

using namespace std;    //using namespace single time so i dont have to use std whileoutput or input


class game
//i made one class only
{
private:
  int guess;              //kept guess private
public:
  void input ();     // i used this function to take input from the user
  void playgame ();   //these function were created separeately just used scope resulation operater to connect them to class
};

void
game::input ()
{

  cout << "which number could be between 0 and 100 just make a guess...."<< endl;  //this will be the first line that user will see after running the code

  cin >> guess;
}

void
game::playgame ()          //playgame is a function
{
  int rand ();   //rand is a speacial type of the function with is used to get random number from the user


  int n = (rand () % 100) + 3;   //this function will not give any number greater than 100
  while (true)
    {
      input ();

      if (guess > n)               /*then use while loop to repeat the process again and again
      until the guess is not true*/
	{
	  cout << "the number is too high....you are very close just bit down"<< endl;
	  continue; }
  //if the guess isgreater then the random then it will show the following stratement 
	
      else if (guess < n)
	{
	  cout << "the number is too low.....just need to move little up" <<
	    endl;
	}         //similarly when is guess will be low then random number then it will show the following statement
      else
	{
	  cout << "you win!.....you made it!" << endl;
	  break;
	} // if lucky or by chacne the user made it then it will show
    }
}


int
main ()
{
  game s;

  s.playgame ();   /* final and last part the project was supposed to
  be object oriented i made 
  an object here amd then call the class*/
  return 0;
}


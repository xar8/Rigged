#include <iostream>
#include <string>
#include "Rigged.h"

using namespace std;

int main()
{
  string name;
  Rigged lottery;
  do
  {
    cin>>name;
    //adds the person's name into the lottery as long as it isn't "q"
    if( name != "q" )
    {
      lottery.enterName(name);
    }
  }while( name != "q" );

  //display the rigged winner: the very last name entered into the lottery
  cout<<"The winner is: "<<lottery.winner()<<endl;
  
  return 0;
}

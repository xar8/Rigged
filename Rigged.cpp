#include "Rigged.h"
#include <string>
#include <vector>
using namespace std;

vector <string> lotteryNames;

void Rigged::enterName(string name)
{
  lotteryNames.push_back(name);  
}

string Rigged::winner()
{
  string nameOutput;
  //int last = lotteryNames.size();
  //nameOutput = lotteryNames[last-1];
  nameOutput = lotteryNames.back();
  return nameOutput;
}

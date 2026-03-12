#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int numFemale, numMale, numOthers;
  double percF, percM, percO;

  cout << "Enter the number of students: Male, Female and Others" << endl;
  cin >> numMale >> numFemale >> numOthers;
  // TODO
  int total = numMale + numFemale + numOthers;
  percM = double(numMale) / total * 100;
  
  percF = double(numFemale) / total * 100;
  percO = double(numOthers) / total * 100;
  cout << setprecision(2) << fixed;
  cout << "Percentage of Male: " << percM << endl;
  cout << "Percentage of Female: " << percF << endl;
  cout << "Percentage of Others: " << percO << endl;
}

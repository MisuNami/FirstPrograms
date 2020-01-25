// Christian Monsivais Dr T COSC 1436 
// Converting pennies
// Date: 1-24-2020 IDE: Repl.it tool


#include <iostream>
using namespace std;


int main() 

{
 
 //Declare and initilize
  int totalPennies = 0;
  int dollars = 0, dollarRemainder = 0;
  int quarters = 0, quartersRemainder = 0;
  int dimes = 0, dimesRemainder = 0;
  int nickels = 0, nickelsRemainder = 0;
  int pennies = 0;
// Input the number of pennies

  cout <<"How many pennies do you have today? ";
  cin >> totalPennies;

// Proccess 
  
  dollars = totalPennies / 100;
  dollarRemainder = totalPennies % 100;
  quarters = dollarRemainder / 25;
  quartersRemainder = dollarRemainder % 25;
  dimes = quartersRemainder / 10;
  dimesRemainder = quartersRemainder % 10;
  nickels = dimesRemainder / 5;
  nickelsRemainder = dimesRemainder % 5;
  pennies = nickelsRemainder;
  
 // output 
  
  cout <<"Dollars = " << dollars << endl;
  cout <<"Quarters = " << quarters << endl;
  cout <<"Dimes = " << dimes << endl;
  cout <<"Nickles = " << nickels << endl;
  cout <<"Pennies = " << pennies << endl;



  return 0;
}
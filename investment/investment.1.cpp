#include<iostream>
using namespace std;
int main(){
	
  // declare variables
  int p, t, r, interest;

  // take input from end-user
  cout << "Enter principal amount, time and rate:";
  cin >> p >>t >>r;
  //int r= 0.12
  // calculate interest
  interest = (p*t*r)/100;

  // display result
  cout << "Interest = " << interest << "\n";

  return 0;
}

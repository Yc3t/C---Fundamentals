#include <iostream>
using namespace std;

//Iterate over an array
int main() {

  int x = 20;
  int *p1 = &x;
 
  //int& needs a variable on the right side 

  int &y1 = x;
  
  int &y2 = *p1;

  cout << &x <<"\n"; //0xAA
 
  cout<< &y1<<"\n";//0xAA

  cout << p1<<"\n";//0xAA

  cout << &y2<<"\n";//0xAA
  
  return 0;
}

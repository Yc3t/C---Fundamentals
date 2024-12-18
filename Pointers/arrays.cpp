#include <iostream>
using namespace std;

//Iterate over an array
int main() {

  int arr[] = {4, 5, 6, 2};

  int *p1 = arr;

  while (p1 != arr + 4){
    cout << *p1++ <<"\n";
  }


  return 0;
}

#include <iostream>
using namespace std;


void do_math(int &x){
  x=x+1;

}



void do_math(int *x){

  if (x == nullptr){
    return;
  }
  cout <<"Inside the function 2: " << x << "\n";

  *x = *x +3;


}

int main() {

    int x1 = 3;
    int x2 = 7;

    do_math(x1);
    do_math(&x2);




    cout << &x1 << ": " << x1 <<"\n";
    cout << &x2 << ": " << x2 <<"\n";





    
  

  return 0;
}

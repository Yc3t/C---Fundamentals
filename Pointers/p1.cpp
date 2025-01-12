#include <iostream>
/*
Output the initial values of val1 and val2 to the console, separated by a space and followed by a newline.

Declare two integer pointers, p1 and p2.

Initialize p1 to point to the address of val1 and p2 to point to the address of val2.

Modify the value pointed to by p1 (which is the same as val1) to 10.

Modify the value pointed to by p2 (which is the same as val2) to be the sum of the value pointed to by p1 (which is the updated value of val1) and 6.

Output the final values of val1 and val2 to the console, separated by a space and followed by a newline.
*/
int main() {
    int val1 = 4;
    int val2 = 5;

    int *p1 = &val1;
    int *p2 = &val2;

    *p1 = 10;

    *p2 = *p1 + 6;
    *p3 = *p1 + *p2

    std::cout << "val1: "<< val1 << "\n" << "val2: " << val2 << std::endl;
    return 0;
}

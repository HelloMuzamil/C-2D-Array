#include <iostream>
using namespace std;
int main() {
 int matrix[3][3] = {{4, 5, 6}, {7, 8, 6}, {7, 5, 9}}; 
 int sum = 0;
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 sum += matrix[i][j];
 }
 }
 cout << "The sum of all elements in the matrix is: " << sum << endl;
 return 0;
}


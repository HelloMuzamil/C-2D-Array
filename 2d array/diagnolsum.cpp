#include<iostream>
using namespace std;
int main() {
 int X;
 cout << "Enter the size of the square matrix ";
 cin >> X;
 int matrix[X][X]; 
 cout << "Enter the elements of the matrix";
 for (int i = 0; i < X; i++) {
 for (int j = 0; j < X; j++) {
 cin >> matrix[i][j];
 }
 }
 int sumdiagonal = 0;
 for (int i = 0; i < X; i++) {
 sumdiagonal += matrix[i][i]; 
 }
 cout << "Sum of diagonal element " << sumdiagonal << endl;
 return 0;
}


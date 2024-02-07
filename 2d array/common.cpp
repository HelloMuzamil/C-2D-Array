#include <iostream>
using namespace std;
int main() {
 int array1[5] = {3, 5, 7, 5, 8};
 int array2[5] = {3, 6, 7, 6, 8};
 cout << "Common elements: ";
 for (int i = 0; i < 5; i++)
{ 
 int boolfound = false;
 for (int j = 0; j < 5; j++) {
 if (array1[i] == array2[j]) {
 cout << array1[i] << " "; 
 int found = true;
 }
 }
 }
 cout << endl;
 return 0;
}


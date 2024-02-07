#include <iostream>
using namespace std;
int main() {
 int arr[5] = {12, 13, 14, 16, 15}; 
 int f;
 bool numberisFound = false; 
 cout<<"Which Number you want to find that present in the array : ";
 cin>>f;
 for (int i = 0; i <=5; i++) {
 if (arr[i] == f) {
 numberisFound = true; 
 }
 }
 if (numberisFound) {
 cout <<f << " is present in the array." << endl;
 } else {
 cout <<f << " is not present in the array." << endl;
 }
 return 0;
}


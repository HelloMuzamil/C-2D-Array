#include<iostream>
using namespace std;
int main(){
int a,b,sum;
cout<<"Enter the number of rows:";
cin>>a;
cout<<"Enter the number of coloumns:";
cin>>b;
int arr[a][b];
     for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
	{
           	cout<<"Enter the matrixs elements:";
             cin>>arr[i][j];
	}
}
{for(int i=0;i<a;i++)
	for(int j=0;j<b;j++)
	{
        
             cout<<arr[i][j];
	}
}



}

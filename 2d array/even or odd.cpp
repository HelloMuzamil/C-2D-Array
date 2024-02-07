#include<iostream>
using namespace std;
int main(){
	int count,counter;
	int arr[7]={1,2,3,4,5,6,7};
for(int i=0;i<7;i++)
{
	if (arr[i]%2==0)
	{
		count++;
		
	}
else
{
counter++;
}
}
cout<<"No of even numbers are found is:"  ""<<count;
cout<<"No of odd found are:"<<" "<<counter;

}

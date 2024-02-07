#include<iostream>
using namespace std;
int main(){
	int sum;
    int arr[5];
cout<<"Enter array Elements:";
for(int i=0;i<5;i++)
{
	cin>>arr[i];
	
}
cout<<"Your Enter array Elements are:"<<endl;
for(int i=0;i<5;i++)
{
	cout<<arr[i]<<" ";
	sum=sum+arr[i];

	

}
cout<<"Your sum is:"<<endl<<sum;
}

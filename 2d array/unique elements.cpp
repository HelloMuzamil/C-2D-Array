#include<iostream>
using namespace std;
int main(){
	int i,j;
	int array[7]={2,2,3,3,5,8,9};
	for( i=0;i<7;i++){
		for(j=0;j<7;j++)
		if(array[i]==array[j])
		break;
	if(i==j)
	cout<<array[i]<<endl;		
	}
	
	return 0;
}


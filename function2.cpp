#include<iostream>
#include<math.h>
using namespace std;

int facX(int x){
	int fac;
	if(x==0 || x==1){
		fac=1;
	}else{
		fac=facX(x-1)*x;
	}
	return fac;
}
int main(){
	int n;
	cout<<"Please enter an integer number:";
	cin>>n;
	while(n<0){
		cout<<"n<0,error!! Please enter another number n: ";
		cin>>n;
	}
	cout<<"n!= "<<facX(n)<<endl;
}

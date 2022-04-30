#include<iostream>
#include<math.h>
using namespace std;

int digitX(int x){
	int dgt=0;
	while(x){
		x /= 10;
		dgt++;
	}
	return dgt;	
}//求数的位数
void stcs(int x){
	int a[81]={0};
	int i;
	int cnt=0;
	for(i=0;i<digitX(x);i++){
		a[i]=x/(int)pow(10,i)%10;
		if(a[i]==0){
			cnt++;
		}
	}
	cout<<"共有 "<<cnt<<" 个0"<<endl;
	int maxI=i;
	for(i=0;i<=digitX(x);i++){
		if(a[i]>a[maxI]){
			int tmp;
			tmp=a[i];
			a[i]=a[maxI];
			a[maxI]=tmp;
		}
	}
	cout<<"最大的数字是 "<<a[maxI]<<endl;//输出最大的数
}
int main(){
	//1、编写函数，实现统计和输出一个正整数中各位数字中零的个数，及各位数字中最大者。
	int num,digit;
	cout<<"请输入一个正整数：";
	cin>>num;
	digit=digitX(num);
	cout<<"这个数共有 "<<digit<<" 位"<<endl;
	stcs(num);
}

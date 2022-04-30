#include<iostream>
using namespace std;
//4、自定义函数实现对一个有序数组进行插入操作，保证插入后的数组依然有序。主函数调用。
//要求：1）共自定义2个函数，分别对数组进行插入和输出。
//2）数组、待插数据在主函数中定义和赋值。

void plugX(int x,int a[],int len){
	int i;
	for(i=len-2;i>=0;i--){
		if(x<a[i]){
			a[i+1]=a[i];
		}else{
			break;
		}
	}
	a[i+1]=x;
}
void coutX(int a[],int len){
	int i;
	for(i=0;i<len;i++){
		cout<<a[i]<<' ';
	}
}
int main(){
	int arr[6]={10,20,30,40,50,0};
	cout<<"please enter a number n:";
	int n;
	cin>>n;
	plugX(n,arr,6);
	coutX(arr,6);
}

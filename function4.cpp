#include<iostream>
using namespace std;
//4���Զ��庯��ʵ�ֶ�һ������������в����������֤������������Ȼ�������������á�
//Ҫ��1�����Զ���2���������ֱ��������в���������
//2�����顢�����������������ж���͸�ֵ��

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

#include<iostream>
#define ARR_SIZE 6
using namespace std;
//3���Զ��庯��ʵ�ֶ�n��������ѡ���������������á�
//Ҫ�󣺹��Զ���3���������ֱ������������룬����������void
void cinA(int x[],int n){
	int i;
	for(i=0;i<n;i++){
		cin>>x[i];
	}
}

void sort(int x[],int n){
	int i,j;
	int selI;
	for(i=0;i<n-1;i++){
		selI=i;
		for(j=i+1;j<n;j++){
			int tmp;
			if(x[j]>x[selI]){
				tmp=x[j];
				x[j]=x[selI];
				x[selI]=tmp;
			}
		}
	}
}
void coutA(int x[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<x[i]<<" ";
	}
}

int main(){
	void sort(int array[],int n);
	int a[ARR_SIZE];
	cout<<"enter array:"<<endl;
	cinA(a,6);//����
	sort(a,6);//����
	coutA(a,6);//���	
}

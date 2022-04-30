#include<iostream>
#define ARR_SIZE 6
using namespace std;
//3、自定义函数实现对n个数进行选择法排序，主函数调用。
//要求：共自定义3个函数，分别对数组进行输入，排序和输出。void
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
	cinA(a,6);//输入
	sort(a,6);//排序
	coutA(a,6);//输出	
}

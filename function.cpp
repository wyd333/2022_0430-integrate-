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
}//������λ��
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
	cout<<"���� "<<cnt<<" ��0"<<endl;
	int maxI=i;
	for(i=0;i<=digitX(x);i++){
		if(a[i]>a[maxI]){
			int tmp;
			tmp=a[i];
			a[i]=a[maxI];
			a[maxI]=tmp;
		}
	}
	cout<<"���������� "<<a[maxI]<<endl;//���������
}
int main(){
	//1����д������ʵ��ͳ�ƺ����һ���������и�λ��������ĸ���������λ����������ߡ�
	int num,digit;
	cout<<"������һ����������";
	cin>>num;
	digit=digitX(num);
	cout<<"��������� "<<digit<<" λ"<<endl;
	stcs(num);
}

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int mian()
{
	int guess,magic;
	srand((unsigned)time(NULL));
	magic = rand()%51+50;//50~100
	
	cout << "please input a number" << endl;
	cin >> guess;
	
	while(guess != magic){
		if(guess < magic){
			cout << "too small" << endl;
		}else{
			cout << "too large" << endl;
		}
		cout << "please try again:  " << endl;
		cin >> guess;
	}
	cout << "you got it!";
	
	
	return 0;
}

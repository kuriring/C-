#include<iostream>
using namespace std;
int main(void){
	int number;
	cout << "숫자를 입력해주세요(1~9) : ";
	cin >> number;

	for(int i=1;i<10;i++){
		cout << number << " * " << i <<" = "<< number*i<<'\n';
	}
	return 0; 
}

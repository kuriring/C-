#include<iostream>
using namespace std;
int main(void){
	char name[100],number[100];
	cout << "이름과 전화번호를 입력해주세요 : ";
	cin >> name >> number;

	cout << "이름은 " <<name << ", 전화번호는 "<< number<<" 입니다."<<endl;
	return 0;
}

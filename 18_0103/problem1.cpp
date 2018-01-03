#include<iostream>
using namespace std;
int main(void){
	int number[5],result=0;
	for(int i=0;i<5;i++){
		cout << i+1 << "번째 정수 입력: ";
		cin >> number[i];
		result += number[i];
	}
	
	cout << "합계 : " << result << endl;
	return 0;
}

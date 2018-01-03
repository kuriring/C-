#include<iostream> 
using namespace std;

int main(void){
	double number;
	while(1){
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> number;
		if(number==-1){
			cout << "프로그램을 종료합니다" <<endl;
			break;
		}
		else{
			cout << "이번달 급여 : " << 50 + number*0.12 << "만원"<<endl;
		}
	}
	return 0;
}

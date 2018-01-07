#include<iostream> 

using namespace std;

namespace BestComImp1{
	void SimpleFunc(void);
	void PrettyFunc(void);
}

namespace ProgComImp1{
	void SimpleFunc(void);
}

int main(void){
	BestComImp1::SimpleFunc();
}

void BestComImp1::SimpleFunc(void){
	cout << "BestCom이 정의한 함수" <<endl;
	PrettyFunc();
	ProgComImp1::SimpleFunc();
}
void BestComImp1::PrettyFunc(void){
	cout << "So Pretty!!!" <<endl;
}
void ProgComImp1::SimpleFunc(void){
	cout << "ProgCom이 정의한 함수" <<endl;
}

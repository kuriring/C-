#include<iostream> 
using namespace std;

int swap(int *a,int *b){
	
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	
}
int swap(char *a,char *b){
	
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	
}
int swap(double *a,double *b){
	
	double tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	
}
int main(void){
	
	int num1=20, num2 =30;
	swap(&num1,&num2);
	cout << num1 << ' ' << num2<<endl;

	char ch1='A',ch2='Z';
	swap(&ch1,&ch2);
	cout << ch1 << ' ' << ch2<<endl;

	double db11 = 1.111, db12=5.5555;
	swap(&db11,&db12);
	cout << db11 <<' ' << db12 <<endl;

return 0;
}

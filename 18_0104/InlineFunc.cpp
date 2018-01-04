#include<iostream> 
using namespace std;
inline int Square(int x){
	return x*x;
}
int main(void){
	cout << Square(5) << endl;
	cout << Square(12) << endl;
	return 0;
}

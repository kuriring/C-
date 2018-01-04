#include<iostream>
using namespace std;
template <typename T>
inline T Square(T x){
	return x*x;
}
int main(void){
	cout << Square(5.5) << endl;
	cout << Square(12) << endl;
	return 0;
}

#include<iostream>
#include<cstring>
using namespace std;
char * MakeStrAdr(int len){
	char * str = new char[len];
	return str;
}
int main(void){
	char * str = MakeStrAdr(20);
	strcpy(str,"I am so happy~");
	cout << str << endl;
	delete []str;
	return 0;
}

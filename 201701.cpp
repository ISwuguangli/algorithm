#include <iostream>
#include <string>
#include <sstream>
using namespace std; 
int main(){
	freopen("data.txt","r",stdin);//data.txt的内容为：**** 60 88 
	string s;
	string s1;
	double re=0,a,b;
	while(getline(cin,s)){
		stringstream sw(s);//定义一个字符串流sw,并用s对其初始化,是用空格分割的 
		sw>>s1>>a>>b;//将sw的值分别复制给s1,a,b 
		re += a*(b/100); 
	}
	cout<<re;
	return 0;
} 

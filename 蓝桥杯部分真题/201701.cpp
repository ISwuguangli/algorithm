#include <iostream>
#include <string>
#include <sstream>
using namespace std; 
int main(){
	freopen("data.txt","r",stdin);//data.txt������Ϊ��**** 60 88 
	string s;
	string s1;
	double re=0,a,b;
	while(getline(cin,s)){
		stringstream sw(s);//����һ���ַ�����sw,����s�����ʼ��,���ÿո�ָ�� 
		sw>>s1>>a>>b;//��sw��ֵ�ֱ��Ƹ�s1,a,b 
		re += a*(b/100); 
	}
	cout<<re;
	return 0;
} 

//输出格式的注意观察，本题直接有特殊解法
//理解题意，知道不超过七位，那么标准输出只有两种情况
//注意左边补零的%03d格式 
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,b,sum;
	cin >> a >> b;
	sum = a+b;
	if(sum<0){
		sum = - sum;
		cout<<'-';
	}
	if(sum>=1000000){
		printf("%d,%03d,%03d",sum/1000000,sum%1000000/1000,sum%1000);
	}else if(sum>=1000){
		printf("%d,%03d",sum/1000,sum%1000);
	}else {
		printf("%d",sum); 
	} 
	return 0;
} 


//�����ʽ��ע��۲죬����ֱ��������ⷨ
//������⣬֪����������λ����ô��׼���ֻ���������
//ע����߲����%03d��ʽ 
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


#include <iostream>
using namespace std;
//�ṩһ���������ӣ��Ѹ��� 
int main(){
	long now = 0;
	long max = 0;
	long pr = 0;
	long a[100000];
	long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		now+=a[i];
		if(now < pr){
			//������Ըĵ�now<max��pr����maxs 
			//�������ж�Ҫ������С�������� 
			now = 0;
		}
		if(now>=pr){
			pr = now;
			max=now;
		}
	}
	cout<<max;
	return 0;
} 


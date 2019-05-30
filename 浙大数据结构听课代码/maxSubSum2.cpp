#include <iostream>
using namespace std;
//找出第一个元素和最后一个元素的数 
int main(){
	long now = 0;
	long max = 0;
	long a[100000];
	long n;
	int len = 0;
	int num = 0; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		now+=a[i];
		len++;
		if(now > max){
			max = now;
			num = i;
		}
		if(now < 0){
			now = 0;
			len = 0;
		}
	}
	cout<<max<<" "<<a[num - len+1]<<" "<<a[num];
	return 0;
} 


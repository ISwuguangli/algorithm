#include <iostream>
using namespace std;
//提供一个错误例子，已改正 
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
			//这里可以改的now<max，pr就是maxs 
			//不是所有都要舍弃，小于零舍弃 
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


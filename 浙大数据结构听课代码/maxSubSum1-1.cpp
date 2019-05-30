#include <iostream>
using namespace std;
//Õý½â 
int main(){
	long now = 0;
	long max = 0;
	long a[100000];
	long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		now+=a[i];
		if(now > max){
			max = now;
		}
		if(now < 0){
			now = 0;
		}
	}
	cout<<max;
	return 0;
} 


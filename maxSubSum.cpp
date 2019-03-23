#include <iostream>
using namespace std;

int main(){
	int a[6] = {-5,3,-4,6,5,-2};
	int cur = 0;
	int max = 0;
	for(int i=0;i<sizeof(a)/sizeof(int);i++){
		cur+=a[i];
		if(cur<0){
			cur=0;
		} 
		if(cur>max){
			max = cur;
		}
		cout<<"i="<<i<<" "<<"cur="<<cur<<endl;
	}
	cout << max << endl;
	return 0;
} 



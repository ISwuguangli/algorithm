# include <iostream>
using namespace std;
int f(int n){
	if(n==1){
		return n;
	}
	if(n>1){
		return f(n-1)+n;
	}
}
int main(){
	int x;
	for(int i=1;i<101;i++){
		x+=f(i);
	}
	cout<<x<<endl;
	return 0;
}

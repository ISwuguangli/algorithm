# include <iostream>
using namespace std;
int nd(int n){
	if(n==1){
		n=3;
		return 3;
	}else
		return 2*nd(n-1)-1;
}
int main(){
	int r,y;
	cin>>r;
	y=nd(r);
	cout<<y;
	return 0;
} 

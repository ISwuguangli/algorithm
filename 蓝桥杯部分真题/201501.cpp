# include <iostream>
using namespace std;
int ans=0;
int main(){
	int temp;
	for(int i=10000;i<100000;i++){
	if(!((i/10000==4)||(i%10000/1000)==4||(i%1000/100)==4||(i%100/10)==4||(i%10)==4))
			ans++;		
	}
	cout<<ans;
	return 0;
} 

//PAT B1001 �����˲�������(3n+1)���� 
# include <iostream>
using namespace std;
int main(){
	int n,step=0;
	cin >> n;
	while(n!=1){
		if(n%2==0){
			n = n/2;
			step++;
		}else{
			n = (3*n+1)/2;
			step++; 
		}
	}
	cout << step;
	return 0;
} 

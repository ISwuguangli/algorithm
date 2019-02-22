//PAT B1001 害死人不偿命的(3n+1)猜想 
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

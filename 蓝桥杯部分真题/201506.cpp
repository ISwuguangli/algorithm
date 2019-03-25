# include <iostream>
using namespace std;
int main(){
	for(int i=1;i<50;i++)
	for(int j=i+2;j<50;j++){
		int sum=0;
		for(int k=1;k<i;k++)
			sum +=k;
		sum += i*(i+1);
		for(int k=i+2;k<j;k++)
			sum +=k;
		sum += j*(j+1);
		for(int k=j+2;k<50;k++)
			sum +=k;
		if(sum==2015)
			cout<<i<<endl; 
	}
	return 0;
}

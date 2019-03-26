#include <iostream>
#include <string> 
using namespace std;
int main(){
	string num[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int sum;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++){
		sum+=str[i]-'0';
	}
	//输入的值范围(0,10^100)，因此数的数字和在(0,900) 
	if(sum>99){
		cout<<num[sum/100]<<" "<<num[sum%100/10]<<" "<<num[sum%10];
	}else if(sum>9){
		cout<<num[sum/10]<<" "<<num[sum%10];
	}else{
		cout<<num[sum];
	}
	return 0;
} 

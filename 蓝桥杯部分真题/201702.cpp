#include <iostream>
#include <cstring>
using namespace std;
int p[20000];
int main(){
	memset(p,0,sizeof(p));
	p[0]=p[1]=0;
	for(int i=2;i<10000;i++){
		if(!p[i]){
			for(int j=i+i;j<20000;j+=i){
				p[j]=1;
			}
		}
	}
	int flag=0,flag2=0,s,c,j;
	for(s=2;s<20000&&!flag;s++){
		if(p[s]) continue;
		for(c=2;c<2000&&!flag2;c++){
			for(j=1;j<10;j++){
				int n=s+j*c;
				if(p[n]) break;
			}
			if(j==10){
				flag = 1;
				flag2 = 1;
				break;
			}
		}
	}
	j--;
	s--;
	cout<<"Ê×Ïî"<<s<<" "<<"¹«²î"<<c<<endl; 
	return 0;
}
 

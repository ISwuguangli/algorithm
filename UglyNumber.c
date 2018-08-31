#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int ugly[4000];
	int n=0;
	int n2=0;
	int n3=0;
	int n5=0;
	int tempMin=0;
	int Min=0;
	int memory = 1;
	ugly[0] = 1;
	ugly[1] = 2;
	while(ugly[n] < 2000){
		if(ugly[n2]*2 <= ugly[n3]*3){
			tempMin = ugly[n2]*2;
			memory = 2;
		}else{
			tempMin = ugly[n3]*3;
			memory = 3;
		}
		if(tempMin <= ugly[n5]*5){
			Min = tempMin;
		}else{
			Min = ugly[n5]*5;
			memory = 5;
		}
		ugly[n+1]=Min;
		if((ugly[n+1]!=ugly[n])&&(ugly[n+1]<2000)){
			printf("%d\n",ugly[n+1]);		
		}
		n++;
		if(memory == 2){
			n2++;
		}
		if(memory == 3){
			n3++;
		}
		if(memory == 5){
			n5++;
		}
	}
	return 0;
}

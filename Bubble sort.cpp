# include <stdio.h>
 int main(){
 	int array[5] = {2,9,8,7,6};
 	int temp,i,j,count = 5; 
 	printf("��2��9��8��7��6����ð������\n");
 	printf("����:"); 
 	for(j=0;j<5;j++){
 		for(i=1;i<count;i++){
 			if(array[i]<array[i-1]){
 				temp = array[i-1];
 				array[i-1] = array [i];
 				array[i] = temp;
		  	}
	 	}
	 	count --;
	 }
 	
	for(i=0;i<5;i++){
		printf("%d",array[i]); 
	}
	
	printf("\n");
	printf("����:"); 
	count = 5; 
 	for(j=0;j<5;j++){
 		for(i=1;i<count;i++){
 			if(array[i]>array[i-1]){
 				temp = array[i-1];
 				array[i-1] = array [i];
 				array[i] = temp;
		  	}
	 	}
	 	count --;
	 }
 	
	for(i=0;i<5;i++){
		printf("%d",array[i]); 
	}
 	return 0;
 } 

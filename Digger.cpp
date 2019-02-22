//PAT B1032 挖掘机技术哪家强
//最后一组段错误 
# include <iostream>
using namespace std;
int main(){
	int grd[10010]={0};
	int n,id,sgrd,i,t=1,max=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&id,&sgrd);
		grd[id] += sgrd;
	}
	for(i=1;i<=n;i++){
		if(grd[i]>max){
			max = grd[i];
			t = i;
		}
	}
	cout << t << " " << max;
	return 0;
}

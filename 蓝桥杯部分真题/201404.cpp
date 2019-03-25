# include <iostream>
using namespace std;
int tol=0;
void dfs(int dian,int hua,int jiu){
	//dfs出口条件 
	if(hua==0&&jiu==1&&dian==0){
		tol++;
		return ;
	}
	if(dian>0){
		dfs(dian-1,hua,jiu*2);
	}	
	if(hua>0&&jiu>0){ 
		dfs(dian,hua-1,jiu-1);
	} 
}
int main(){
	dfs(5,9,2);
	cout<<tol;
	return 0;
} 

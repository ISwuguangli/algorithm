#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> a;
	int i;
	for(i=0;i<5;i++){
		a.push_back(i);
	}
	//���������൱��ָ�� 
	vector<int>::iterator it = a.begin();
	for(i=0;i<5;i++){
//		printf("%d",*(it+i));
		cout << *(it+i);
	}
	return 0;
}

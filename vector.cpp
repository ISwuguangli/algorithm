#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> a;
	int i;
	for(i=0;i<5;i++){
		a.push_back(i);
	}
	//迭代器，相当于指针 
	vector<int>::iterator it = a.begin();
	for(i=0;i<5;i++){
//		printf("%d",*(it+i));
		cout << *(it+i);
	}
	return 0;
}

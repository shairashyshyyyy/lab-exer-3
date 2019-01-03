#include <iostream>

using namespace std;

int main() {
//number 4
	char q;
	cout<<"Enter The First Letter: ";
	cin>>q;
	
	char r;
	cout<<"Enter The Second Letter: ";
	cin>>r;
	int ql = int(q);
	int rl = int(r);
	
	if(ql > rl){
		int temp = rl;
		rl = ql;
		ql = temp;
		for(int i =ql; i<=rl; i++){
			char hooray=i;
			cout<<hooray;
		}
	}else{
		for(int i=ql; i <=rl ; i++){
			char hooray =i;
			cout<<hooray;
		}
	}
	return 0;
}

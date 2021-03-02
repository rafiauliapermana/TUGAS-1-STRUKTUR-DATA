#include <iostream>
using namespace std;

int main (){
	cout << "============================\n" << endl;
	cout << "PROGRAM ARRAY MEMBALIKKAN KATA" << endl;
	cout << "============================\n" << endl;
	char A [6]=  {'p', 'e', 'n', 's', 'i', 't'};
	cout<<"Sebelum dibalik :";
	for (int y=0;y<6;y++) {
		cout<<A[y];
	}
	cout<<"\n";
	cout<<"Setelah dibalik :";
	for (int i=5;i>=0;i--){
		cout<<A[i];
	}
	return 0;
}

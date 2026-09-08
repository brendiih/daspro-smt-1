#include<iostream>
using namespace std;
int main(){
	
	//soal no 20,pertemuan ke 2
	//teori nested looping
	
	for (int i = 1; i < 5; i++){
		for (int j = 1; j < 5; j++){
			if (j < i)
			cout<<"*";
			else
				continue;
		}
		cout<<endl;
	}
	cout<<endl;
	
	return 0;
}

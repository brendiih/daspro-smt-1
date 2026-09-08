#include <iostream>
using namespace std;

int main(){
	//soal no 2, pertemuan ke 2
string nama;
int umur;

cout<<"SIAPA NAMAMU?";
cin>>nama;

cout<<"BERAPA UMUR KAMU?";
cin>>umur;

cout<<"HALO "<<nama<<",UMUR "<<umur << " TAHUN"<<endl;

// tambahan saja
if (umur < 17){
	cout << nama << " KAMU BELUM PUNYA KTP";
}
if (umur == 17){
	cout << nama << " KAMU BARU DAPET KTP";
}
if (umur > 17){
	cout << nama << " KAMU UDAH TUA";
}
return 0;
}

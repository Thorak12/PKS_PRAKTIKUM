/*PROGRAM MENGHITUNG RATA-RATA TINGGI BADAN 5 ORANG MAHASISWA
MUHAMMAD THARIQ HIDAYATULLAH_122440001*/

#include <iostream>
using namespace std;

int main(){
	int mahasiswa1, mahasiswa2, mahasiswa3, mahasiswa4, mahasiswa5, mean;
	cout<<"=====PROGRAM MENGHITUNG RATA-RATA TINGGI MAHASISWA====="<<endl;
	cout<<"Inputkan tinggi badan mahasiswa 1:";
	cin>>mahasiswa1;
	cout<<"Inputkan tinggi badan mahasiswa 2:";
	cin>>mahasiswa2;
	cout<<"Inputkan tinggi badan mahasiswa 3:";
	cin>>mahasiswa3;
	cout<<"Inputkan tinggi badan mahasiswa 4:";
	cin>>mahasiswa4;
	cout<<"Inputkan tinggi badan mahasiswa 5:";
	cin>>mahasiswa5;
	
	mean=((mahasiswa1+mahasiswa2+mahasiswa3+mahasiswa4+mahasiswa5)/5);
	cout<<"Tinggi rata-rata		:"<<mean;
	return 0;
}

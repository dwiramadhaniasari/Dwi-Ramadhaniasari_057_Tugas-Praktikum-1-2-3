#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int j1,j2,selisih,jam,menit,detik,sisa;
	float tarif;
	
	cout<<"PROGRAM BILLING WARNET"<<endl;
	cout<<"Masukan Jam Masuk";
	cin>>j1;
	cout<<"Masukan Jam Keluar";
	cin>>j2;
	selisih =j2-j1;
	tarif =selisih*5000/3600;
	jam =selisih/3600;
	sisa =selisih%3600;
	menit =selisih/60;
	detik =sisa%60;
	cout<<"Lama Penggunaan"<<jam<<"jam"<<menit<<"menit"<<detik<<"detik\n";
	printf("Tarif Anda : %0.2f", tarif);
	getch();
}

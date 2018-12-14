#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
int saldo = 10000;
int saldoAkhir;



void setor_tabungan(){
	cout << "Masukkan Jumlah Setoran : ";
	int setoran;
	cin >> setoran;
	saldo += setoran;
	cout << "Sukses!"<<endl;
	getch();

}
void ambil_tabungan(){
	cout << "Masukkan Jumlah Withdraw : ";
	int withdraw;
	cin >> withdraw;
	
	saldoAkhir = saldo;
	
	if(!((saldo -= withdraw) < 10000)){
		cout << "Sukses!"<<endl;
		getch();
	} else {
		saldo = saldoAkhir;
		cout << "Maaf, Sisa Saldo Anda Tidak Mencukupi Untuk Melakukan Transaksi!"<<endl;
		cout << "Saldo Minimal Yang Harus Di Miliki Adalah 10000"<<endl;
		cout << "Sukses!"<<endl;
		getch();
	}

	
}
void cek_saldo(){
	cout << "Sisa Saldo Anda Adalah : "<< saldo<<endl;
	getch();
}
void exit_prog(){
	exit(0);
}
void else_pro(){
	cout << "Inputan Tidak Valid !"<<endl;
}
int main(){
	bool exit = false;
	do{
		system("cls");
		int pilihan;
		cout << "      Saldo : " << saldo << endl;
		cout << "==========================="<<endl;
		cout << "|    1. Setor Tabungan    |"<<endl;
		cout << "|    2. Ambil Tabungan    |"<<endl;
		cout << "|    3. Cek Saldo         |"<<endl;
		cout << "|    4. Exit              |"<<endl;
		cout << "==========================="<<endl;
		
		cout << "Masukkan Pilihan : ";
		cin >> pilihan;
		
		
		pilihan == 1 ? setor_tabungan() : pilihan == 2 ? ambil_tabungan() : pilihan == 3 ? cek_saldo() : pilihan == 4 ? exit_prog() : else_pro();
		
		char yesNo;
		cout << "Transaksi Berhasil !"<<endl;		
		cout << "Transaksi Lagi (Y/N) : ";
		
		cin >> yesNo;
		(yesNo == 'N' || yesNo == 'N') ? exit = true : (yesNo == 'Y' || yesNo == 'Y') ? exit = false : exit = false;
	} while (exit == false);
	

}


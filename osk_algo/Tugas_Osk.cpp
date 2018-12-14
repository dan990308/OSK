// TugasOSK.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

bool IsPrime(unsigned& test_number, unsigned check_number) {
	++check_number;

	if (test_number == check_number)
		return true;
	if (test_number % check_number == 0) {
		cout << test_number << " dapat dibagi dengan " << check_number << endl;
		return false;
	}

	return IsPrime(test_number, check_number);
}

int main(){


start:
	int pilihan;
	system("cls");
	cout << "======================================"<<endl;
	cout << "|         Tugas OSK 2018             |"<<endl;
	cout << "|   1. Cek Bilangan Prima            |"<<endl;
	cout << "|   2. Cek Bilangan Genap & Genap    |"<<endl;
	cout << "|         Danang Eka S               |"<<endl;
	cout << "======================================"<<endl;
	
	cout << "Masukkan Pilihan (1-2) : ";
	cin >> pilihan;

	//pengecekan bilangan prima
	if(pilihan == 1){
		cout << "Masukkan Nomor > 0: ";

		unsigned test_number = 0;
		cin >> test_number;
	
		if (IsPrime(test_number, 1))
			cout << test_number << " adalah bilangan prima" << endl;
		else
			cout << test_number << " bukan bilangan prima" << endl;
		
		
	} else if(pilihan == 2){ // mengecek bilangan genap
		int angka;

		cout << "Masukkan angka untuk di cek : ";
		cin >> angka;
		if (angka % 2 == 0)
			cout<<angka<<" adalah bilangan genap"<<endl;
		else
			cout<<angka<<" adalah bilangan ganjil"<<endl;
	} else if(pilihan > 2){
		cout << "Pilih 1-2"<<endl;
		
	} else if (!(cin >> pilihan)) {
		cout << "Masukkan inputan yang valid."<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
	}


	char pil;
	cout << "Lanjut (Y/N)";
	cin >> pil;
	if(pil == 'Y' || pil == 'y'){
		goto start;
	} else if (pil == 'N' || pil == 'n'){
		cout << "press enter to continue...";
	}
	getch();
}




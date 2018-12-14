#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <dos.h>
#include <cstdlib>
#include <stdlib.h>

using namespace std ;

HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void cursor(int, int);
void frame(int, int, int, int);
void frame1(int, int, int, int);
void color(unsigned short);
void tabel();
void tablap();
void title();
void identitas();
void dt_mobil();
void laporan();
void Data_Mobil();
void tabel_Data();
void Menu();



int result,tax,hrg,hari;
string kd, jns;

string nama,ktp,hp;

main()
{

	string name181, KTP181, HP181;
	string verifikasi;


	jump:

	cursor(2,1);
	cout<<"Identitas Pelanggan";
	cursor(2,3);
	cout<<"Nama		: ";
	cin>>name181;
	cursor(2,4);
	cout<<"No KTP	: ";
	cin>>KTP181;
	cursor(2,5);
	cout<<"No HP		: ";
	cin>>HP181;

	//ambil value
	nama = name181;
	ktp = KTP181;
	hp = HP181;


	cursor(2,9);
	cout<<"Apakah data sudah benar? Y/N : ";

	cin>>verifikasi;

	if(verifikasi == "y" || verifikasi == "Y")
	{


	 	system("cls");
		do
	 	{
	 	//system("cls");

		color (7);
		identitas();

		tabel_Data();
		//system("cls");

		getch();
		//break;
		}while(true);


		}else
		{
		frame(0,100,15,17);
		cursor(3,16);
		color (4);
		cout<<"Periksa Identitas atau Penulisan Verifikasi...";
		getch();
		system("cls");
		color (7);
		goto jump;
	}
}


void cursor(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(Console, CursorPosition);
}


void frame(int left, int right, int top, int bottom)
{
	cursor(left,top);
	cout<<char(201);
	cursor(right,top);
	cout<<char(187);
	cursor(left,bottom);
	cout<<char(200);
	cursor(right,bottom);
	cout<<char(188);

	for(int col = left+1; col<right;col++)
	{
		cursor(col,top);
		cout<<char(205);
		cursor(col,bottom);
		cout<<char(205);

	}

	for(int row = top+1; row<bottom; row++)
	{
		cursor(left,row);
		cout<<char(186);
		cursor(right,row);
		cout<<char(186);
	}
}


void frame1(int left, int right, int top, int bottom)
{

	cursor(left,top);
	cout<<char(204);
	cursor(right,top);
	cout<<char(185);
	cursor(left,bottom);
	cout<<char(200);
	cursor(right,bottom);
	cout<<char(188);

	for(int col = left+1; col<right;col++)
	{
		cursor(col,top);
		cout<<char(205);
		cursor(col,bottom);
		cout<<char(205);


	}

	for(int row = top+1; row<bottom; row++)
	{
		cursor(left,row);
		cout<<char(186);
		cursor(right,row);
		cout<<char(186);
	}
}
void color(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


void tabel()
{
	frame1(0,100,4,17);
	cursor(25,5);cout<<char(186);
	cursor(75,5);cout<<char(186);
	cursor(50,5);cout<<char(186);

	cursor(25,4);cout<<char(203);
	cursor(50,4);cout<<char(203);
	cursor(75,4);cout<<char(203);

	frame1(0,100,6,17);

	cursor(50,6);cout<<char(206);
	cursor(25,6);cout<<char(206);
	cursor(75,6);cout<<char(206);

	for(int i=7;i<17;i++)
	{
	cursor(25,i);cout<<char(186);
	cursor(75,i);cout<<char(186);
	cursor(50,i);cout<<char(186);
	}
	cursor(50,17);cout<<char(202);
	cursor(25,17);cout<<char(202);
	cursor(75,17);cout<<char(202);

}

void tablap()
{

	frame1(0,100,4,17);

	cursor(17,5);cout<<char(186);
	cursor(34,5);cout<<char(186);
	cursor(51,5);cout<<char(186);
	cursor(68,5);cout<<char(186);
	cursor(85,5);cout<<char(186);

	cursor(17,4);cout<<char(203);
	cursor(34,4);cout<<char(203);
	cursor(51,4);cout<<char(203);
	cursor(68,4);cout<<char(203);
	cursor(85,4);cout<<char(203);

	frame1(0,100,6,17);

	cursor(17,6);cout<<char(206);
	cursor(34,6);cout<<char(206);
	cursor(51,6);cout<<char(206);
	cursor(68,6);cout<<char(206);
	cursor(85,6);cout<<char(206);

	for(int i=7;i<17;i++)
	{
	cursor(17,i);cout<<char(186);
	cursor(34,i);cout<<char(186);
	cursor(51,i);cout<<char(186);
	cursor(68,i);cout<<char(186);
	cursor(85,i);cout<<char(186);
	}
	cursor(17,17);cout<<char(202);
	cursor(34,17);cout<<char(202);
	cursor(51,17);cout<<char(202);
	cursor(68,17);cout<<char(202);
	cursor(85,17);cout<<char(202);
}

void title()
{
	int a=5;
	cursor(7,a);
	cout<<"KODE";
	cursor(20,a);
	cout<<"JENIS MOBIL";
	cursor(36,a);
	cout<<"HARGA SEWA";
	cursor(53,a);
	cout<<"LAMA SEWA";
	cursor(70,a);
	cout<<"PAJAK";
	cursor(88,a);
	cout<<"TOTAL";
}

void identitas()
{

	frame(0,100,0,17);

	cursor(1,1);
	cout<<"Nama	: "<<nama;
	cursor(1,2);
	cout<<"No KTP	: "<<ktp;
	cursor(1,3);
	cout<<"No HP	: "<<hp;
}

void dt_mobil()
{
	int a = 9,b=33,c=63,d=88;
	cursor(a,7);cout<<"LA01";
	cursor(a,8);cout<<"LA02";
	cursor(a,9);cout<<"LA03";
	cursor(a,10);cout<<"LA04";
	cursor(a,11);cout<<"LA05";

	cursor(b,7);cout<<"Avanza";
	cursor(b,8);cout<<"Xenia";
	cursor(b,9);cout<<"Alphard";
	cursor(b,10);cout<<"Kijang";
	cursor(b,11);cout<<"BMW Sedan";
	//harga
	cursor(c,7);cout<<"500.000";
	cursor(c,8);cout<<"300.000";
	cursor(c,9);cout<<"900.000";
	cursor(c,10);cout<<"150.000";
	cursor(c-2,11);cout<<"1.500.000";
	//sewa
	cursor(d,7);cout<<"200.000";
	cursor(d,8);cout<<"150.000";
	cursor(d,9);cout<<"350.000";
	cursor(d,10);cout<<"100.000";
	cursor(d,11);cout<<"400.000";

}

void laporan()
{

	tablap();
	identitas();
	title();
	int a=7;
	cursor(7,a);
	cout<<kd;
	cursor(22,a);
	cout<<jns;
	cursor(39,a);
	cout<<hrg;
	cursor(59,a);
	cout<<hari;
	cursor(73,a);
	cout<<tax;
	cursor(89,a);
	cout<<result;
	cursor(0,18);
	getch();
	system("cls");
	system("cls");
	exit (0);
}


void Data_Mobil()
{


	string Choose181;
	int rtail181, bayar181;

	cout<<"Masukkan Kode Mobil	: ";
	cin>>Choose181;

	if (Choose181=="LA01" || Choose181 == "la01")
	{
		string jenis181="Avanza";
		int price181 = 500000,  tax181 = 200000;

		cout<<"Jenis Mobil		: "<<jenis181<<endl;
		cout<<"Harga			: Rp. "<<price181<<endl;
		cout<<"Pajak			: Rp. "<<tax181<<endl;

		cout<<"Lama Sewa/JAM		: ";
		cin>>rtail181;


		bayar181 = rtail181*price181+tax181;

		kd = "LA01";
		jns = jenis181;
		hrg = price181;
		hari = rtail181;
		tax = tax181;
		result = bayar181;


		cout<<"\nTotal Bayar Sewa	: Rp. "<<bayar181;
		getch();
		system("cls");
		system("cls");
		laporan();



		}else if (Choose181=="LA02" || Choose181 == "la02")
		{

		string jenis181="Xenia";
		int price181 = 300000,  tax181 = 150000;
		cout<<"Jenis Mobil		: "<<jenis181<<endl;
		cout<<"Harga			: Rp. "<<price181<<endl;
		cout<<"Pajak			: Rp. "<<tax181<<endl;

		cout<<"Lama Sewa/JAM		: ";
		cin>>rtail181;

		bayar181 = rtail181*price181+tax181;

		kd = "LA02";
		jns = jenis181;
		hrg = price181;
		hari = rtail181;
		tax = tax181;
		result = bayar181;

		cout<<"\nTotal Bayar Sewa	: Rp. "<<bayar181;
		getch();
		system("cls");
		system("cls");
		laporan();


		}else if (Choose181=="LA03" || Choose181 == "la03")
		{

		string jenis181="Alphard";
		int price181 = 900000,  tax181 = 350000;
		cout<<"Jenis Mobil		: "<<jenis181<<endl;
		cout<<"Harga			: Rp. "<<price181<<endl;
		cout<<"Pajak			: Rp. "<<tax181<<endl;

		cout<<"Lama Sewa/JAM		: ";
		cin>>rtail181;

		bayar181 = rtail181*price181+tax181;

		kd = "LA03";
		jns = jenis181;
		hrg = price181;
		hari = rtail181;
		tax = tax181;
		result = bayar181;

		cout<<"\nTotal Bayar Sewa	: Rp. "<<bayar181;

		getch();
		system("cls");
		system("cls");
		laporan();


		}else if (Choose181=="LA04" || Choose181 == "la04")
		{

		string jenis181="Kijang";
		int price181 = 150000,  tax181 = 100000;
		cout<<"Jenis Mobil		: "<<jenis181<<endl;
		cout<<"Harga			: Rp. "<<price181<<endl;
		cout<<"Pajak			: Rp. "<<tax181<<endl;

		cout<<"Lama Sewa/JAM		: ";
		cin>>rtail181;

		bayar181 = rtail181*price181+tax181;

		kd = "LA04";
		jns = jenis181;
		hrg = price181;
		hari = rtail181;
		tax = tax181;
		result = bayar181;

		cout<<"\nTotal Bayar Sewa	: Rp. "<<bayar181;
		getch();
		system("cls");
		system("cls");
		laporan();


		}else if (Choose181=="LA05" || Choose181 == "la05")
		{

		string jenis181="BMW Sedan";
		int price181 = 1500000,  tax181 = 400000;
		cout<<"Jenis Mobil		: "<<jenis181<<endl;
		cout<<"Harga			: Rp. "<<price181<<endl;
		cout<<"Pajak			: Rp. "<<tax181<<endl;

		cout<<"Lama Sewa/JAM		: ";
		cin>>rtail181;

		bayar181 = rtail181*price181+tax181;

		kd = "LA05";
		jns = jenis181;
		hrg = price181;
		hari = rtail181;
		tax = tax181;
		result = bayar181;

		cout<<"\nTotal Bayar Sewa	: Rp. "<<bayar181;
		getch();
		system("cls");
		system("cls");
		laporan();

		}else
		{

			cout<<"Kode Tidak Di Temukan";
			getch();

			system("cls");
			system("cls");

		}

}


void tabel_Data()
{
	do
	{

	tabel();
	identitas();
	int a = 5;
	cursor(10,a);cout<<"Kode";
	cursor(32,a);cout<<"Jenis Mobil";
	cursor(57,a);cout<<"Sewa";
	cursor(82,a);cout<<"Pajak";
	dt_mobil();

	cursor(0,20);
	Data_Mobil();
	system("cls");

	}while(true);

}




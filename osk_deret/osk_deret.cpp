#include <iostream>

using namespace std;
int main()
{
 int angka,hasil=1,i,batas;
 //cout<<"Masukkan Nilai         : ";
 //cin>>angka;cout<<endl;
 cout<<"Masukkan Nilai Batas : ";
 cin>>batas;cout<<endl;
 //cout<<"1"<<endl;
 for(i=0;i<batas;i++)
 {
  hasil = i*i + hasil;
  cout<<hasil<<endl;
 }
 //cout<<"Hasilnya               : "<<hasil;
 return 0;
}

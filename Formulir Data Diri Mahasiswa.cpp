#include<iostream>
#include<ctime>
#include<chrono>
#include<iomanip>
#include<cstdio>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
using std::chrono::system_clock;

int main(){
   
   cout<<"==================================================="<<endl;
   cout<<setw(40)<<"Formulir Data Diri Mahasiswa"<<endl;

   //date&time
   std::time_t tt = system_clock::to_time_t (system_clock::now());
   struct std::tm * ptm = std::localtime(&tt);
   cout<<setw(22)<<"Tanggal: "<<std::put_time(ptm,"%c")<<endl;

   cout<<"==================================================="<<endl;
   cout<<"Input data anda di bawah ini"<<endl;
    
   struct dataDiri {
       string email,nama,gender,alamat;
       int nim;
       char tanggal_lahir[15],no_telp[15];
   };

   dataDiri d;
   
   //input data
   cout<<"\nEmail\t\t: "<<std::flush;
   getline(cin,d.email);

   cout<<"Nama\t\t: ";
   getline(cin,d.nama);

   cout<<"NIM\t\t: ";
   cin>>d.nim;

   fflush(stdin);

   cout<<"Jenis Kelamin\t: ";
   getline(cin,d.gender);

   cout<<"Tgl. Lahir\t: ";
   cin.getline(d.tanggal_lahir,15);

   cout<<"Alamat\t\t: ";
   cin.ignore(-1);
   getline(cin,d.alamat);

   cout<<"No. Tlp\t\t: ";
   cin.getline(d.no_telp,15);

   cout<<"==================================================="<<endl;
   cout<<"Hasil Input Formulir"<<endl;
   
   //print hasil input
   cout<<"\nEmail\t\t: "<<d.email<<endl;
   cout<<"Nama\t\t: "<<d.nama<<endl;
   cout<<"NIM\t\t: "<<d.nim<<endl;
   cout<<"Jenis Kelamin\t: "<<d.gender<<endl;
   cout<<"Tgl. Lahir\t: "<<d.tanggal_lahir<<endl;
   cout<<"Alamat\t\t: "<<d.alamat<<endl;
   cout<<"No. Tlp\t\t: "<<d.no_telp<<endl;
   
   cout<<"==================================================="<<endl;

}
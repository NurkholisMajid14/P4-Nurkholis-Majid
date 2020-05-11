#include<iostream>
#include<conio.h>
using namespace std;

void login(){
	awal:
	string username,pass;
	cout<<"	===SELAMAT DATANG==="<<endl;
	cout<<"MASUKKAN USERNAME DAN PASWWORD UNTUK LOGIN"<<endl;
	cout<<"Masukkan Username :";
	cin>>username;
	cout<<"Masukkan Password :";
	cin>>pass;
	
	if (username=="kholis" &&pass=="F1B019112"){
		system ("cls");
		cout<<"|===============================|"<<endl;
		cout<<"|   SELAMAT DATANG MAHASISWA    |"<<endl;
		cout<<"|===============================|"<<endl;
		cout<<"|	 DATA MAHASISWA		|"<<endl;
		cout<<"|	NURKHOLIS MAJID 	|"<<endl;
		cout<<"|	   F1B019112		|"<<endl;
		cout<<"|	  KELOMPOK 24		|"<<endl;
	}
	else {
		cout<<"Mohon Maaf Username dan Password yang Anda Masukkan Salah"<<endl;
		goto awal;
	}
}
int main(){
	login();
	struct data{
		char nama[50];
		char nim[50];
		int hadir;
		int tugas;
		int kuis;
		int uts;
		int uas;
		float nilai;
		
	}; struct data mahasiswa [20];
	cout<<"========================================="<<endl;
	cout<<"PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA"<<endl;
	cout<<"  MATA KULIAH BAHASA INGGRIS AKADEMIK"<<endl;
	cout<<"========================================="<<endl;
	cout<<endl;
	int o,p;
	cout<<"Masukkan Jumlah Mahasiswa : ";
	cin>>p;
	for (o=0;o<p;o++){
		cout<<"Nama Mahasiswa : ";
		cin>>mahasiswa[o].nama;
		cout<<"Nim Mahasiswa  : ";
		cin>>mahasiswa[o].nim;
		cout<<"Nilai Kehadiran Mahasiswa: ";
		cin>>mahasiswa[o].hadir;
		cout<<"Nilai Tugas Mahasiswa: ";
		cin>>mahasiswa[o].tugas;
		cout<<"Nilai Kuis Mahasiswa : ";
		cin>>mahasiswa[o].kuis;
		cout<<"Nilai UTS Mahasiswa	: ";
		cin>>mahasiswa[o].uts;
		cout<<"Nilai UAS Mahasiswa	: ";
		cin>>mahasiswa[o].uas;
		cout<<"\n";
}
	cout<<"HASIL NILAI MAHASISWA"<<endl;
	cout<<"================================================================================================================================="<<endl;
	cout<<"NAMA"<<"\t\t"<<"NIM"<<"\t\t"<<"KEHADIRAN"<<"\t\t"<<"TUGAS"<<"\t\t"<<"KUIS"<<"\t\t"<<"UTS"<<"\t\t"<<"UAS"<<"\t\t"<<"Nilai Akhir"<<endl;
	cout<<"================================================================================================================================="<<endl;
	
	for(o=0;o<p;o++){
	
    mahasiswa[o].nilai=(mahasiswa[o].hadir*10/100)+(mahasiswa[o].tugas*15/100)+(mahasiswa[o].kuis*15/100)+(mahasiswa[o].uts*40/100)+(mahasiswa[o].uas*40/100);

	cout<<mahasiswa[o].nama<<"\t\t"<<mahasiswa[o].nim<<"\t"<<mahasiswa[o].hadir<<"\t\t\t"<<mahasiswa[o].tugas<<"\t\t"<<mahasiswa[o].kuis<<"\t\t"<<mahasiswa[o].uts<<"\t\t"<<mahasiswa[o].uas<<"\t\t"<<mahasiswa[o].nilai;
	
	mahasiswa[o].nilai=(mahasiswa[o].hadir*10/100)+(mahasiswa[o].tugas*15/100)+(mahasiswa[o].kuis*15/100)+(mahasiswa[o].uts*40/100)+(mahasiswa[o].uas*40/100);






	if (mahasiswa[o].nilai>=85)
cout<<" (A)";
	else if (mahasiswa[o].nilai>=70)
cout<<" (B)";
	else if (mahasiswa[o].nilai>=55)
cout<<" (C)";
	else if (mahasiswa[o].nilai>=40)
cout<<" (D)";
	else if (mahasiswa[o].nilai<=40)
cout<<" (E)";
	cout<<endl;
	}
	cout<<endl;
	}

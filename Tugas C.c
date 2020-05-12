#include <stdio.h>
#include <conio.h>


void login(){
	awal:
	float username, pass;
	printf("	===SELAMAT DATANG===\n");
	printf("MASUKKAN USERNAME DAN PASWWORD UNTUK LOGIN\n");
	printf("Masukkan Username :");
	scanf("username");
	printf("Masukkan Password :");
	scanf("pass");
	
	if (== "kholis" && pass == "F1B019112"){
		system ("cls");
		printf("|===============================|\n");
		printf("|   SELAMAT DATANG MAHASISWA    |\n");
		printf("|===============================|\n");
		printf("|	 DATA MAHASISWA		|\n");
		printf("|	NURKHOLIS MAJID 	|\n");
		printf("|	   F1B019112		|\n");
		printf("|	  KELOMPOK 24		|\n");
	}
	else {
		printf("Mohon Maaf Username dan Password yang Anda Masukkan Salah\n");
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
	printf("=========================================\n");
	printf("PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA\n");
	printf("  MATA KULIAH BAHASA INGGRIS AKADEMIK\n");
	printf("=========================================\n");
	printf("\n");
	int o,p;
	print("Masukkan Jumlah Mahasiswa : ");
	scanf("p");
	for (o=0;o<p;o++){
		printf("Nama Mahasiswa : ");
		scanf("mahasiswa[o].nama");
		printf("Nim Mahasiswa  : ");
		scanf("mahasiswa[o].nim");
		printf("Nilai Kehadiran Mahasiswa: ");
		scanf("mahasiswa[o].hadir");
		printf("Nilai Tugas Mahasiswa: ");
		scanf("mahasiswa[o].tugas");
		printf("Nilai Kuis Mahasiswa : ");
		scanf("mahasiswa[o].kuis");
		printf("Nilai UTS Mahasiswa	: ");
		scanf("mahasiswa[o].uts");
		printf("Nilai UAS Mahasiswa	: ");
		scanf("mahasiswa[o].uas");
		printf("\n");
}
	printf("HASIL NILAI MAHASISWA\n");
	printf("=================================================================================================================================\n");
	printf("			NAMA\t\t""NIM""\t\t""KEHADIRAN""\t\t""TUGAS""\t\t""KUIS""\t\t""UTS""\t\t""UAS""\t\t""Nilai Akhir\n");
	printf("=================================================================================================================================\n");
	
	for(o=0;o<p;o++){
	
    mahasiswa[o].nilai=(mahasiswa[o].hadir*10/100)+(mahasiswa[o].tugas*15/100)+(mahasiswa[o].kuis*15/100)+(mahasiswa[o].uts*40/100)+(mahasiswa[o].uas*40/100);

	printf("mahasiswa[o].nama<<""<<mahasiswa[o].nim<<""<<mahasiswa[o].hadir<<""<<mahasiswa[o].tugas<<""<<mahasiswa[o].kuis<<""<<mahasiswa[o].uts<<""<<mahasiswa[o].uas<<""<<mahasiswa[o].nilaimahasiswa[o].nilai=(mahasiswa[o].hadir*10/100)+(mahasiswa[o].tugas*15/100)+(mahasiswa[o].kuis*15/100)+(mahasiswa[o].uts*40/100)+(mahasiswa[o].uas*40/100");






	if (mahasiswa[o].nilai>=85)
printf("A");
	else if (mahasiswa[o].nilai>=70)
printf("B");
	else if (mahasiswa[o].nilai>=55)
printf("C");
	else if (mahasiswa[o].nilai>=40)
printf("D");
	else if (mahasiswa[o].nilai<=40)
printf("E");
	printf("\n");
	}
	printf("\n");
	}

#include <iostream>
#include <conio.h>
#include <iomanip>
#define max 10

using namespace std;

typedef struct{
	int data [max];
	int head;
	int tail;
} Queue;

Queue antrian;

void create (){
	antrian.head=antrian.tail=-1;
}

int IsEmpty () {
	if (antrian.tail == -1)
		return 1;
		else 
		return 0;
}

int IsFull () {
	if (antrian.tail == max-1)
		return 1;
		else 
		return 0;
}

void Enqueue (int data){
	if(IsEmpty () == 1){
		
		antrian.head = antrian.tail = 0;
		antrian.data[antrian.tail] = data;
		cout << "\t\t--Nomor Plat Mobil " << antrian.data[antrian.tail] << " Masuk!-- \n";
		
	} else if (IsFull () == 0){
		antrian.tail++;
		antrian.data[antrian.tail] = data;
		cout << "\t\t--Nomor Plat Mobil " << antrian.data[antrian.tail] << " Masuk!--" << endl;
		
	} else if (IsFull ()== 1){
		cout << "\t\tRuangan Penuh !" << endl;
		cout << data << "--Data tidak bisa masuk!--" << endl;
	}
}

void Dequeue (){
	int i;
	int e = antrian.data[antrian.head];
	if (antrian.tail == -1){
		cout << "\t\tTidak ada antrian ... antrian telah kosong" << endl;
	} else {
		for (i=antrian.head; i<=antrian.tail; i++){
			antrian.data[i] = antrian.data[i+1];
		}
		antrian.tail--;
		cout << "\t\t--Nomor Plat Mobil " << e << " keluar lebih dulu--" << endl;
	}
}

void clear (){
	antrian.head = antrian.tail = -1;
	cout << "\t\tAntrian telah kosong " << endl;
	//cout << "\t\tData Nomor Plat --> clear" << endl;
}

void tampil(){
	if (IsEmpty () == 0 ){
		cout << "\t\tData Nomor Plat Mobil dalam Antrian : " << endl;
		
		for (int i=antrian.head; i<=antrian.tail; i++){
			cout << "\t\t{" << antrian.data[i] << "}" << endl;
		}
	}else {
		cout << "\t\tData Antrian Kosong\n" << endl;
	}
}

int main (){
	int data, pil;
	create();
			cout << "PROGRAM SIMULASI TEMPAT PARKIR (MOBIL)" << endl;
			cout << endl;
			getch();
		system ("cls");
		
	do {
		cout << "\t\t                PROGRAM PARKIR               \t" << endl;
		cout << "\t\t ==============================================" << endl;
		cout << "\t\t|               PILIHAN MENU PARKIR         |\t" << endl;
		cout << "\t\t|=============================================|" << endl;
		cout << "\t\t|1. Enqueue (Memasukkan nomor plat mobil)  |" << endl;
		cout << "\t\t|2. Dequeue (Mengeluarkan nomor plat mobil)|" << endl;
		cout << "\t\t|3. Tampilkan Data Nomor Plat mobil" << endl;
		cout << "\t\t|4. Clear" << endl;
		cout << "\t\t|5. Exit" << endl;
		
		cout << "\t\tMasukkan Pilihan (1/2/3/4/5) : ";
		cin >> pil;

		switch (pil){
		case 1 :
		{
			cout << "\n\t\tMasukkan Nomor Plat: ";
			cin >> data;
			Enqueue(data);
			cout << endl;
			break;
		}
		case 2 :
		{
			cout << endl;
			Dequeue();
			cout << endl;
			break;
		}
		case 3 :
		{
			cout << endl;
			tampil();
			break;
		}
		case 4 :
		{
			cout << endl;
			clear();
			cout << endl;
			break;
			}
		}
	}
	while (pil != 5);
	
}

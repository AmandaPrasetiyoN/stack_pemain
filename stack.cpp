#include <iostream>
#include <string>
#define MAX 10
using namespace std;
int top;
struct pemain
{
	  string nama,posisi;
};
pemain tumpukan[MAX];

void init()
{
      top= -1;
}

int isEmpty()
{
      return top==-1;
}

int isFull()
{
      return top==MAX-1;
}

void push ()
{
      if (isFull())
    {
        cout<<"\n Tumpukan sudah Penuh"<<endl<<endl;
    }
    else{
        top++;
        cout<<"\nMasukkan nama : ";
		cin>>tumpukan[top].nama;
		cout<<"Masukkan posisi : ";
		cin>>tumpukan[top].posisi;
        cout<<"Data "<<tumpukan[top].nama<<" sudah masuk ke stack"<<endl<<endl;
    }
}

void pop()
{	string temp;
      if (isEmpty())
    {
        cout<<"\n Data masih kosong"<<endl<<endl;
    }
    else
    {
		temp=tumpukan[top].nama;
		top--;
		cout<<"data "<<temp<<" sudah di hapus"<<endl;
    }
}

int main()
{
      int pilih,i,p;
      init();

do
{
      cout<<endl;
      cout<<"MENU"<<endl;
      cout<<endl;
      cout<<"1. Input \n2. Hapus \n3.keluar"<<endl;     
      cout<<endl;
      cout<<"Masukan Pilihan : ";cin>>pilih;
      switch (pilih)
      {
            case 1:
			cout<<"masukkan jumlah pemain : ";cin>>p;
				for (i=0;i<p;i++){
				push();
					}
				system("pause");
            break;
            case 2:
				pop();
            break;
            case 3:
            break;
            default:
                cout<<"ERROR!"<<endl<<endl;
            break;
      }
}
while (pilih!=3);
}
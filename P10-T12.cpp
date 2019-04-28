#include <iostream>
#include <conio.h>

using namespace::std;

struct data {
char nim[20], nama[20], prodi[20];};
data batas [100];
int a, b, c, d;

void inputdata()
{
    cout<<"\nJumlah data yang akan diinput : ";cin>>b;
    d=0;
    for(c=0;c<b;c++){
        d=d+1;
    cout<<"\Data ke-"<<d<<endl;
    cout<<"NIM : ";cin>>batas[a].nim;
    cout<<"Nama : ";cin>>batas[a].nama;
    cout<<"Prodi : ";cin>>batas[a].prodi;
    a++;}
}

void lihatdata()
{
    int i, j;
    cout<<"------Menampilkan Data------\n";
    cout<<"\n----------------------------\n";
    cout<<" || NO || NIM || Nama || Prodi || \n";
    j=0;
    for(i=0;i<a;i++)
    {
        j=j+1;

        cout<<"--------------------------------------------\n";
        cout<<" || "<<j<<" || ";
        cout<<batas[i].nim<<" || ";
        cout<<batas[i].nama<<" || ";
        cout<<batas[i].prodi<<" || ";
        cout<<endl;
    }
    cout<<"----------------------------------------------";getch();
}

void hapusdata()
{
    int x, y;
    cout<<"Hapus data ke-";cin>>x;
    y=x-1;
    a--;
    for(int i=y;i<a;i++)
    {
        batas[i]=batas[i+1];
    }
    cout<<"\n\n=================Data ke-"<<x<<"Terhapus==================";
    getch();
}

void editdata()
{
    int k, l;
    cout<<"Masukkan data yang akan diedit : ";cin>>k;
    l=k-1;
    cout<<"NIM : ";cin>>batas[l].nim;
    cout<<"Nama : ";cin>>batas[l].nama;
    cout<<"Prodi : ";cin>>batas[l].prodi;
    lihatdata();
}

int main()
{
    int pilih;
    char w;
    cout<<"\n\n\n=============STRUKTUR DATA==============";
    awal:
    cout<<"\n=============PILIH MENU================";
    cout<<"\n1. Input Data";
    cout<<"\n2. Hapus Data";
    cout<<"\n3. Lihat Data";
    cout<<"\n4. Edit Data";
    cout<<"\n5. Keluar";

    cout<<"\nMasukkan Pilihan : ";cin>>pilih;
    if(pilih==1)
    {inputdata();goto awal;}
    else if (pilih==2)
    {hapusdata();goto awal;}
    else if (pilih==3)
    {lihatdata();goto awal;}
    else if (pilih==4)
    {editdata();goto awal;}
    else if (pilih==5)
    {

        cout<<"\n\nApakah Anda yakin keluar dari program??";
        cout<<" [Y] {N] "<<endl;
        cin>>w;
        if(w=='y'||w=='Y')
        {
            cout<<"\n\n\n+++PROGRAM SELESAI+++";
        }
        if(w=='n'||w=='N')
        {
            goto awal;
        }
    }
    else
    {
        cout<<"Pilihan 1-5";getch();goto awal;
    }
}

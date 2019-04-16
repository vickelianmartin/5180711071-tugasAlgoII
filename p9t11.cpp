#include <iostream>
using namespace::std;

int mod(int angka,int modul){
 return angka%modul;
}

main(){
int angka,modul;
char u;
do{
cout<<"Angka awal    : ";cin>>angka;
cout<<"Angka modulus : ";cin>>modul;
cout<<angka<<" modulus "<<modul<<" = "<<mod(angka,modul);
cout<<"\n\n";
cout<<"Ulangi (y/t) : ";cin>>u;}
while(u=='y');}


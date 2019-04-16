#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int i,j,n,Arr[50],tmp;
cout << "              Program Pengurutan Data";
cout << "\n         Secara Descending Bubble Sort\n";
cout << "\nInputkan banyak data yg akan diurutkan: "; cin>>n;
for(i=1; i<=n; i++){
    cout<<"  Data ke-"<<i<<" = ";cin>>Arr[i];}
//Pengurutan secara Descending (Bubble Sort)
for(i=1; i<=n; i++){
    for(j=i; j<=n; j++){
        if(Arr[i] < Arr[j]){
            tmp=Arr[j];
            Arr[j]=Arr[i];
            Arr[i]=tmp;}
       }
}
cout << "\nHasil Pengurutan data Secara Descending\n";
for(i=1;i<=n;i++){
   cout<<"  Element "<<i<<"= "<<Arr[i]<<endl;}
cout<<endl;
}

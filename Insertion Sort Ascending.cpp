#include<iostream>
using namespace::std;

int data[10],data2[10],n;
void tukar(int a, int b){
int t;
    t=data[b];
    data[b]=data[a];
    data[a]=t;}

void insertion_sort(){
int temp,i,j;
    for(i=1; i<=n; i++){
      temp=data[i];
      j=i-1;
        while(data[j]>temp&&j>=0){
                data[j+1]=data[j];
                j--;
          }
        data[j+1]=temp;}
}

main(){
int i;
cout<<"PROGRAM INSERTION SORT ASCENDING\n"<<endl;
cout<<"Masukkan jumlah data: "; cin>>n;
for(int i=1; i<=n; i++){
    cout<<"  Data ke "<<i<<" : "; cin>>data[i];
    }
insertion_sort();
cout<<"\nData setelah di sort Ascending\n";
for(i=1; i<=n; i++)
{ cout<<"  Element "<<i<<"= "<<data[i]<<endl;  }
cout<<"\n";
}


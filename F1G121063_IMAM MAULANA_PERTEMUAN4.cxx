#include <iostream>
using namespace std;

int main(){
	int pil;
	cout<<"| NO |  Menu         |  Harga  |"<<endl;
	cout<<"|  1 |  Bakso biasa  |  12000  |"<<endl;
	cout<<"|  2 |  Bakso tenis  |  15000  |"<<endl;
	cout<<"\nPilihlah salah satu menu  [1-2]"<<endl;
	cout<<"Pilihan anda "<<endl;
	cin>>pil;
	switch(pil){
		case 1 :
		 int menu1, jumlah1, bayar1;
		cout<<"\nBakso biasa harga Rp 12.000"<<endl;
		cout<<"Jumlah bakso biasa :  ";
		cin>>jumlah1;
		menu1 = 12000;
		menu1*= jumlah1;
		cout<<"Total harga :  "<<menu1<<endl;
		cout<<"Uang bayar :  ";
		cin>>bayar1;
		if(bayar1<menu1){
			bayar1-=menu1;
			cout<<"Uang kurang  :"<<bayar1;
			}else{
				bayar1-=menu1;
				cout<<"uang kembalian  :"<<bayar1;
			}
			break;
			case 2 :
			 int menu2, jumlah2, bayar2;
		cout<<"\nBakso tenis harga Rp 15.000"<<endl;
		cout<<"Jumlah bakso tenis :  ";
		cin>>jumlah2;
		menu2 = 15000;
		menu2*= jumlah2;
		cout<<"Total harga :  "<<menu2<<endl;
		cout<<"Uang bayar :  ";
		cin>>bayar2;
		if(bayar2<menu2){
			bayar2-=menu2;
			cout<<"Uang kurang  :"<<bayar2;
			}else{
				bayar2-=menu2;
				cout<<"uang kembalian  :"<<bayar2;
			}
			break;
	        }
	        return 0;		
	}
	
	

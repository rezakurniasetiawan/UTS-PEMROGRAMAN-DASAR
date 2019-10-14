#include <iostream>
using namespace std;
int main(){
    int bil, jum, i;
    	cout<<"=================================="<<endl;
		cout<<"Aplikasi Grade Nilai "<<endl;
    	cout<<"Created By Reza Kurnia"<<endl;
    	cout<<"=================================="<<endl;
        cout << "Masukkan Nilai Ujian: ";
        cin >> bil;
        if (bil >= 55){
           
            cout << " Selamat Anda Lulus \n";
        }
        else{
            cout <<bil;
            cout << " Maaf Anda tidak lulus \n";
        }
        return 0;
}

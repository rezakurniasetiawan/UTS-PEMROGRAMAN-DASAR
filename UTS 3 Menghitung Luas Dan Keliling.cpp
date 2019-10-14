  
#include<iostream>

using namespace std;

int main() {
	
	int pilih ;
	float a, b, c, d, luas, keliling ;
	const float phi = 3.14 ;
		
	cout <<"=================================="<<endl;
	cout <<"Aplikasi Menghitung Luas & Keliling"<<endl;
	cout <<"Created By Reza Kurnia s"<<endl;
	cout <<"=================================="<<endl;
	cout << "PERSEGI\n" ;
	cout << "1. Luas\n2. Keliling\n\n" ;
	cout << "PERSEGI PANJANG\n" ;
	cout << "3. Luas\n4. Keliling\n\n" ;
	cout << "SEGITIGA\n" ;
	cout << "5. Luas\n6. Keliling\n\n" ;
	cout << "LINGKARAN\n" ;
	cout << "7. Luas\n8. Keliling\n\n" ;
	cout << "TRAPESIUM\n" ;
	cout << "9. Luas\n10. Keliling\n\n" ;
	cout <<"=================================="<<endl;
	
	cout << " Silahkan pilih opsi yang ada = ";
	cin >> pilih ;
	
	switch (pilih) {
	
			case 1 :
				cout << "Masukkan panjang sisi = " ;
				cin >> a ;
							
				luas = a*a ;
				cout << "Luas Persegi adalah = " << luas ;
				
				break ;
				
			case 2 :
				cout << "Masukkan panjang sisi = " ;
				cin >> a ;
				
				keliling = 4*a ;
				cout << "Keliling Persegi adalah = " << keliling ;
				
				break ; 
				
			case 3 :
				cout << "Masukkan panjang = " ;
				cin >> a ;
				cout << "Masukkan lebar   = " ;
				cin >> b ;
				
				luas = a*b ;
				cout << "Luas Persegi Panjang adalah = " << luas ;
				
				break ;
			
			case 4 :
				cout << "Masukkan panjang = " ;
				cin >> a ;
				cout << "Masukkan lebar   = " ;
				cin >> b ;
				
				keliling = 2*(a+b) ;
				cout << "Keliling Persegi Panjang adalah = " << keliling ;
				
				break ;
				
			case 5 :
				cout << "Masukkan alas   = " ;
				cin >> a ;
				cout << "Masukkan tinggi = " ;
				cin >> b ;
				
				luas = a*b/2 ;
				cout << "Luas Segitiga adalah = " << luas ;
				
				break ;
				
			case 6 :
				cout << "Masukkan sisi a = " ;
				cin >> a ;
				cout << "Masukkan sisi b = " ;
				cin >> b ;
				cout << "Masukkan sisi c = " ;
				cin >> c ;
				
				keliling = a+b+c ;
				cout << "Keliling Segitiga adalah = " << keliling ;
				
				break ;
				
			case 7 :
				cout << "Masukkan jari-jari = " ;
				cin >> a ;
				
				luas = phi*a*a ;
				cout << "Luas Lingkaran adalah = " << luas ;
				
				break ;
				
			case 8 :
				cout << "Masukkan jari-jari = " ;
				cin >> a;
				
				keliling = 2*phi*a ;
				cout << "Keliling lingkaran adalah = " << keliling ;
				
				break ;
				
			case 9 :
				cout << "Masukkan panjang sisi AB = " ;
				cin >> a ;
				cout << "Masukkan panjang sisi CD = " ;
				cin >> b ;
				cout << "Masukkan tinggi          = " ;
				cin >> c ;
				
				luas = 1/2*(a+b)*c ;
				cout << "Luas Trapesium adalah = " << luas ;
				
				break ;
				
				
			case 10 :
				cout << "Masukkan panjang sisi AB = " ;
				cin >> a ;
				cout << "Masukkan panjang sisi BC = " ;
				cin >> b ;
				cout << "Masukkan panjang sisi CD = " ;
				cin >> c ;
				cout << "Masukkan panjang sisi DA = " ;
				cin >> d ;
				
				keliling = a+b+c+d ;
				cout << "Keliling Trapesium adalah = " << keliling ;
			
				
				return 0;		
	}
}

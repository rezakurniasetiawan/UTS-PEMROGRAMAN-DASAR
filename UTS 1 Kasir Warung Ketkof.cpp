#include<iostream>
using namespace std;
int main (){
    int kode,pri,jml,tot,byr,kbl;
    char mad;
    do 
    {
    cout<<"               WARUNG KOPI               "<<endl;
    cout<<"        KETKOF KETINTANG BARAT            "<<endl;
    cout<<"      Aplikasi kasir warung kopi       "<<endl;
    cout<<"	Created By Reza Kurnia			"<<endl;
    cout<<"============================================"<<endl;
    cout<<""<<endl;
    cout<<"Menu Minuman        Harga :"<<endl;
    cout<<"1. GOOD DAY FREEZ (KECIL)  	 Rp. 4.000"<<endl;
    cout<<"2. GOOD DAY FREEZ (JUMBO)	 Rp. 5.000"<<endl;
	cout<<"3. KOPI HITAM         		 Rp. 3.000"<<endl;
    cout<<"4. NUTRISARI (KECIL) 		 Rp. 4.000"<<endl;
    cout<<"5. NUTRISARI (JUMBO)  		 Rp. 5.000"<<endl;
    cout<<"6. POP ICE	        	 Rp. 5.	000"<<endl;
    cout<<"7. KOPI SUSU		         Rp. 5.000"<<endl;
    cout<<"8. AQUA			         Rp. 3.500"<<endl;
    cout<<"============================================"<<endl;
    cout<<"MASUKKAN PILIHAN ANDA :";
    cin>>kode;
    switch (kode){
    case 1:
        cout<<"GOOD DAY FREEZ (KECIL)"<<endl;
        pri=4000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 2:
        cout<<"GOOD DAY FREEZ (JUMBO)"<<endl;
            pri=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 3:
        cout<<"KOPI HITAM"<<endl;
            pri=3000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 4:
        cout<<"NUTRISARI (KECIL)"<<endl;
            pri=4000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 5:
        cout<<"NUTRISARI (JUMBO)"<<endl;
            pri=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 6:
        cout<<"POP ICE"<<endl;
            pri=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 7:
        cout<<"KOPI SUSU"<<endl;
            pri=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 8:
        cout<<"AQUA"<<endl;
            pri=3500;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    default:
    cout<<"Kode yang anda masukkan tidak ada";
    }
    } 
    while (mad/='Y');
    cout<<"Terimah Kasih Atas Kunjungan Anda WARUNG KOPI KETKOF";
    return 0;
}

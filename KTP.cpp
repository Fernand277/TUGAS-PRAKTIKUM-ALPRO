#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct KTP{
	string nama;
	string nik;
	string tmpttgl;
	string jensikel;
	string goldar;
	string alamat;
	string rt_rw;
	string keldesa;
	string kec;
	string agama;
	string status;
	string pekerjaaan;
	string kewarganegaraan;
	string berlaku_hingga;
};

void inputKTP(KTP &ktp){
	cout<<"Masukan Nik:";
	getline(cin,ktp.nik);
	cout<<"Masukan Nama:";
	getline(cin, ktp.nama);
	cout<<"Masukan Tempat Tgl Lahir :";
	getline(cin,ktp.tmpttgl );
	cout<<"Masukan Jenis Kelamin:";
	getline(cin,ktp.jensikel );
	cout<<"MAsukan Golongan Darah:";
	getline(cin,ktp.goldar );
	cout<<"Masukan Alamat:";
	getline(cin,ktp.alamat );
	cout<<"Masukan Rt/Rw:";
	getline(cin,ktp.rt_rw );
	cout<<"Masukan Kelurahan/Desa";
	getline(cin,ktp.keldesa );
	cout<<"Masukan Kecamatan:";
	getline(cin,ktp.kec );
	cout<<"Masukan Agama:";
	getline(cin,ktp.agama );
	cout<<"MAsukan status Perkawinan:";
	getline(cin,ktp.status );
	cout<<"Masukan Pekerjaan:";
	getline(cin,ktp.pekerjaaan );
	cout<<"Masukan Kewarganegaraan";
	getline(cin,ktp.kewarganegaraan );
	cout<<"MAsukan Berlaku hingga:";
	getline(cin,ktp.berlaku_hingga );
	
}
void displayKTP(const KTP &ktp){
	cout<<"\n=============== SIMULASI KTP==============\n";
	cout<<left<<setw(20)<<"NIK"<<":"<<ktp.nik <<endl;
	cout<<left<<setw(20)<<"Nama"<<":"<<ktp.nama  <<endl;
	cout<<left<<setw(20)<<"Tempat/Tgl Lahir"<<":"<<ktp.tmpttgl  <<endl;
	cout<<left<<setw(20)<<"Jenis Kelamin"<<":"<<ktp.jensikel  <<endl;
	cout<<left<<setw(20)<<"Alamat"<<":"<<ktp.alamat  <<endl;
	cout<<left<<setw(20)<<"RT/RW"<<":"<<ktp.rt_rw  <<endl;
	cout<<left<<setw(20)<<"Kel/Desa"<<":"<<ktp.keldesa  <<endl;
	cout<<left<<setw(20)<<"Kecamatan"<<":"<<ktp.kec  <<endl;
	cout<<left<<setw(20)<<"Agama"<<":"<<ktp.agama  <<endl;
	cout<<left<<setw(20)<<"Status Perkawinan"<<":"<<ktp.status  <<endl;
	cout<<left<<setw(20)<<"Pekerjaan"<<":"<<ktp.pekerjaaan  <<endl;
	cout<<left<<setw(20)<<"Kewarganegaraan"<<":"<<ktp.kewarganegaraan  <<endl;
	cout<<left<<setw(20)<<"Berlaku HIngga"<<":"<<ktp.berlaku_hingga  <<endl;
	cout<<"=========================================\n";
}
int main(){
	KTP ktp;
	
	cout<<"Input Data KTP\n";
	inputKTP(ktp);
	
	displayKTP(ktp);
	
	return 0;
}

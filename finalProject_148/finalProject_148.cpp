#include <iostream>
using namespace std;

class Matakuliah {
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	Matakuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;

	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual float cekKelulusan() { return 0; }
	virtual void input() { return; }

	void setP(float nilai) {
		this->presensi = nilai;
	}

	float getP() {
		return presensi;
	}

	void setA(float nilai) {
		this->activity = nilai;
	}

	float getA() {
		return activity;
	}

	void setE(float nilai) {
		this->exercise = nilai;
	}

	float getE() {
		return exercise;
	}

	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}

	float getUA() {
		return tugasAkhir;
	}
};

class pemrograman : public Matakuliah {
public:

	virtual void input() {
		int nilai;
		cout << "masukkan tugas akhir";
		cin >> nilai;
		setUA(nilai);
	}


	virtual float hitungnilaiAkhir(int nilai) {
		return 0,1 ;
	}

	virtual float cekKelulusan(int nilai) {
		return 75 >= 0;
	}
};





int main() {
	Matakuliah* objek;

	//pemrograman
	cout << "Pemrogramn dibuat" << endl;
	objek = new pemrograman();
	objek->input();
	cout << "Hitung nilai akhir = " << objek->hitungNilaiAkhir(objek->getUA()) << endl;
	cout << "Cek kelulusan = " << objek->cekKelulusan(objek->getUA()) << endl;

	delete objek;
	return 0;
};
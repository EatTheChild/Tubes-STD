#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED

using namespace std;

typedef struct dokter *adrDokter;
typedef struct pasien *adrPasien;

struct dokter {
    string kodeDokter;
    string namaDokter;
    string spesialis;
    adrDokter nextDokter;

};

struct pasien {
    adrPasien prevPasien;
    string idPasien;
    string namaPasien;
    string jenisPasien;
    string tanggalPeriksa;
    string keluhan;
    adrPasien nextPasien;
};



#endif // TUBES_H_INCLUDED

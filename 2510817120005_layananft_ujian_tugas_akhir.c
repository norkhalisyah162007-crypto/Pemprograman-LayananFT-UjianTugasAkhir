#include <stdio.h>
#include <string.h>

int main() {
    char email[50];
    int tahap;
    int jumlah_mhs;
    char nama1[50], nim1[20], telp1[20], reg1[30];
    char nama2[50], nim2[20], telp2[20], reg2[30];
    int masuk_sbgai;

    char validasi_admin[20];
    const char kode_admin []= "FTULMCODEAD125";

    int pilihan;
    char nama_dosen[50], nip_dosen[20], email_dosen[50];
    char nama_dosen2[50], nip_dosen2[20];
    char nama_dosen3[50], nip_dosen3[20];
    char nama_dosen4[50], nip_dosen4[20];
    char nama_dosen5[50], nip_dosen5[20];
    char nama_dosen6[50], nip_dosen6[20];
    int pembimbing_dari;
    int pendamping_dari;
    int penguji_dari;
    int anggota1_dari;
    int anggota2_dari;
    int anggota3_dari;
    int masuk_sebagai;
    char file1[100], file2[100];

    char keterangan_mhs [20];

    char pembimbing_ta [20];
    const char kode_pembimbing []= "FTULMCODEPEM25";
    
    char Validator_judul [20];
    const char kode_judul []= "FTULMCODEJDL25";

    char validasi_admin2 [20];
    const char kode_admin2 []= "FTULMCODEAD225";

    char validasi_aka [20];
    const char kode_aka []= "FTULMCODEAK25";

    int submit = 0;

    printf("UJIAN TUGAS AKHIR\n\n");
    printf("Kepada Yth.\n");
    printf("Mahasiswa S1 & S2 di lingkungan FT ULM\n");
    printf("di tempat\n\n");
    printf("Dalam rangka peningkatan mutu layanan akademik yang terintegrasi maka mahasiswa\n");
    printf("program Sarjana (S1) dan Magister (S2) yang akan melaksanakan Sidang akhir/Ujian\n");
    printf("Skripsi/TA dan Thesis WAJIB mengisi form layanan ini.\n\n");

    printf("Dekan:\n");
    printf("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T., IPU\n");
    printf("NIP: 197309031997021001\n\n");

    printf("PERHATIAN:\n");
    printf("1) Sebelum menggunakan layanan ini, pelajari alur Proses Layanan UJIAN TUGAS AKHIR FT ULM:\n");
    printf("   https://bit.ly/Alur_TA\n");
    printf("2) Siapkan file bukti pengisian kuesioner Mahasiswa FT ULM periode semester berjalan\n");
    printf("3) Apabila belum melakukan pengisian kuesioner, isi melalui:\n");
    printf("   https://ft.ulm.ac.id/id/tracer/ (menu \"Kuesioner Mahasiswa\")\n");
    printf("4) Harap diisi sesuai contoh agar tidak terjadi kesalahan pada Halaman Pengesahan TA.\n");
    printf("5) Untuk cek status proses Ujian TA, klik: https://bit.ly/kendali_TA\n\n");

    printf("Masukkan Email ULM Anda: ");
    scanf(" %[^\n]", email);

    printf("\nPilih Opsi:\n");
    printf("1) Tahap I   : Untuk mendaftarkan jadwal sidang Tugas Akhir/Skripsi/Thesis\n (Note: Wajib diisi oleh Mahasiswa TA FT, baik yang SUDAH maupun BELUM sidang).\n");
    printf("2) Tahap II  : Untuk penerbitan Halaman Pengesahan\n (Note: Pastikan data Tahap I telah diisi.)\n");
    printf("3) Tahap III : Untuk laporan pelaksanaan sidang TA\n" "Note: Pastikan Tahap I dan II sudah diisi.\n\n");

    printf("Tahap Proses (1/2/3): ");
    scanf("%d", &tahap);

    if (tahap < 1 || tahap > 3) {
        printf("\n[!] Tahap tidak valid. Silakan ulangi.\n\n");
    } 

//Memilih Tahap 1

else if (tahap == 1) {
        printf("\nTahap I : Pendaftaran Ujian Tugas Akhir\n");
        printf("\nForm ini digunakan untuk mendaftarkan jadwal sidang Tugas Akhir/Skripsi/Thesis\n");
        printf("Mahasiswa FT ULM. Semua data yang diminta pada Tahap I Wajib diisi oleh Mahasiwa TA\n");
        printf("FT, baik yang SUDAH maupun yang BELUM melaksanakan Sidang Akhir TA.\n");

        printf("\nDATA MAHASISWA\n");
        printf("1) 1 orang (judul TA untuk 1 mahasiswa)\n");
        printf("2) 2 orang (judul TA untuk 2 mahasiswa)\n");
        printf("Pilih jumlah mahasiswa (1/2): ");
        scanf("%d", &jumlah_mhs);

        //Memilih Jumlah Mahasiswa 1
        if (jumlah_mhs == 1) {
            printf("\nDATA MAHASISWA#1\n");
            printf("Nama Mahasiswa#1: ");
            scanf(" %[^\n]", nama1);
            printf("NIM Mahasiswa#1: ");
            scanf(" %[^\n]", nim1);
            printf("No Telp Mahasiswa#1: ");
            scanf(" %[^\n]", telp1);
            printf("No Registrasi Kuisioner Mahasiswa#1: ");
            scanf(" %[^\n]", reg1);
        } 

        //Memilih Jumlah Mahasiswa 2
        else if (jumlah_mhs == 2) {
            printf("\nDATA MAHASISWA#2\n");
            printf("Nama Mahasiswa#2: ");
            scanf(" %[^\n]", nama2);
            printf("NIM Mahasiswa#2: ");
            scanf(" %[^\n]", nim2);
            printf("No Telp Mahasiswa#2: ");
            scanf(" %[^\n]", telp2);
            printf("No Registrasi Kuisioner Mahasiswa#2: ");
            scanf(" %[^\n]", reg2);
        } 
        else {
            printf("\n[!] Jumlah mahasiswa tidak valid.\n");
        }

        printf("\n       DATA PENDAFTARAN UJIAN TA\n");
        printf("Email                 : %s\n", email);
        printf("Tahap Proses          : Tahap %d\n", tahap);
        printf("Jumlah Mahasiswa      : %d orang\n", jumlah_mhs);

        if (jumlah_mhs == 1) {
            printf("\nMahasiswa #1\n");
            printf("Nama                  : %s\n", nama1);
            printf("NIM                   : %s\n", nim1);
            printf("No Telp               : %s\n", telp1);
            printf("No Reg. Kuisioner     : %s\n", reg1);
        } 
        else if (jumlah_mhs == 2) {
            printf("\nMahasiswa #2\n");
            printf("Nama                  : %s\n", nama2);
            printf("NIM                   : %s\n", nim2);
            printf("No Telp               : %s\n", telp2);
            printf("No Reg. Kuisioner     : %s\n", reg2);
        }

        printf("\nData berhasil direkam.\n");
        printf("Terima kasih telah menggunakan layanan Ujian TA FT ULM.\n");
       
        printf("Apakah Anda ingin Submit?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Pilih (1/2): ");
        scanf("%d", &submit);
    }


//Jika Memilih Tahap 2
else if (tahap == 2) {
    printf("\nTahap II : Pengajuan Lemsah Tugas Akhir\n");
    printf("\nForm ini digunakan untuk proses penerbitan Halaman Pengesahan Tugas Akhir/Skripsi/Thesis Mahasiswa FT ULM.\n");
    printf("\nMasuk sebagai:\n");
    printf("1. Mahasiswa TA\n");
    printf("2. Admin FT ULM\n");
    printf("Pilih (1/2): ");
    scanf("%d", &masuk_sbgai);

    //masuk sebagai mahasiswa
    if (masuk_sbgai == 1) {
        printf("\nApakah Pembimbing Utama TA berasal dari FT atau Non-FT?\n");
        printf("1. Dosen FT ULM\n");
        printf("2. Dosen Non-FT (luar FT ULM)\n");
        printf("Pilih (1/2): ");
        scanf("%d", &pembimbing_dari);

        //Pembimbing
        if (pembimbing_dari == 1) {
            printf("PERHATIAN:\n");
            printf("1) Pilih daftar Nama berikut, apabila Pembimbing Utama TA merupakan Dosen FT ULM.\n");
            printf("2) Lewati bagian ini, apabila Pembimbing Utama TA bukan Dosen FT ULM  (isi data Pembimbing Utama TA [ Non-FT] pada kolom isian berikutnya). \n");
            
            printf("\n   DAFTAR PEMBIMBING UTAMA (FT ULM)   \n");
            printf("1. Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n");
            printf("2. Dr. Ir. Achmad Rusdiansyah, M.T.\n");
            printf("3. Dr. Ir. Rustam Effendi, M.A.Sc.\n");
            printf("4. Dr. Ir. Henry Wardhana, M.T.\n");
            printf("5. Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n");
            printf("6. Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n");
            printf("7. Dr.Eng. Irfan Prasetia, S.T., M.T.\n");
            printf("8. Dr. Rusdiansyah, S.T., M.T.\n");
            printf("9. Dr. Novitasari, S.T., M.T.\n");
            printf("10. Dr. Hutagamissufardal, S.T., M.T.\n");
            printf("11. Dr. Nursiah Chairunnisa, S.T., M.Eng.\n");
            printf("12. Ir. Retna Hapsari Kartadipura, M.T.\n");
            printf("13. Ir. Ida Barkiah, M.T.\n");
            printf("14. Ir. Fauzi Rahman, M.T.\n");
            printf("15. Ir. Holdani Kurdi, M.T.\n");
            printf("16. Dr. Muhammad Arsyad, S.T., M.T.\n");
            printf("17. Dr. Eng. Maya Amalia, S.T., M.Eng.\n");
            printf("18. Arie Febry Fardheny, S.T., M.T.\n");
            printf("19. Ulfa Fitriati, S.T., M.Eng.\n");
            printf("20. Eliatun, S.T., M.T.\n");
            printf("\nPilih daftar Nama berikut(1-20)\n");
            scanf("%d", &pilihan);

            printf("\nPemimbing Utama (FT)\n");
            printf("\nPilih daftar Nama berikut, apabila Pembimbing Utama TA merupakan Dosen FT ULM.:  (1-20)");
            switch (pilihan) {
                case 1: printf("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n"); break;
                case 2: printf("Dr. Ir. Achmad Rusdiansyah, M.T.\n"); break;
                case 3: printf("Dr. Ir. Rustam Effendi, M.A.Sc.\n"); break;
                case 4: printf("Dr. Ir. Henry Wardhana, M.T.\n"); break;
                case 5: printf("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n"); break;
                case 6: printf("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n"); break;
                case 7: printf("Dr.Eng. Irfan Prasetia, S.T., M.T.\n"); break;
                case 8: printf("Dr. Rusdiansyah, S.T., M.T.\n"); break;
                case 9: printf("Dr. Novitasari, S.T., M.T.\n"); break;
                case 10: printf("Dr. Hutagamissufardal, S.T., M.T.\n"); break;
                case 11: printf("Dr. Nursiah Chairunnisa, S.T., M.Eng.\n"); break;
                case 12: printf("Ir. Retna Hapsari Kartadipura, M.T.\n"); break;
                case 13: printf("Ir. Ida Barkiah, M.T.\n"); break;   
                case 14: printf("Ir. Fauzi Rahman, M.T.\n"); break;
                case 15: printf("Ir. Holdani Kurdi, M.T.\n"); break;
                case 16: printf("Dr. Muhammad Arsyad, S.T., M.T\n"); break;
                case 17: printf("Dr. Eng. Maya Amalia, S.T., M.Eng.\n"); break;
                case 18: printf("Arie Febry Fardheny, S.T., M.T.\n"); break;
                case 19: printf("Ulfa Fitriati, S.T., M.Eng.\n"); break;
                case 20: printf("Eliatun, S.T., M.T.\n"); break;
                default: printf("Nomor tidak valid.\n"); break;
            }
        } 
        else if (pembimbing_dari == 2) {
            printf("\nPembimbing Utama TA [Non-FT]\n\n");
            printf("1) Isi data berikut, apabila Pembimbing Utama TA bukan DOSEN FT ULM \n(Pastikan penulisan Nama, Gelar dan NIP/NIPK terisi dengan BENAR).\n");
            printf("2) Lewati bagian ini, apabila Pembimbing Utama TA merupakan Dosen FT ULM  \n(data Pembimbing Utama TA [FT] sudah diisi).\n");
            
            printf("Nama Pembimbing Utama (Non-FT): ");
            printf("Contoh :   Dr. Ir. Muhammad Fulan, S.T., M.T.  (setiap awal kata huruf KAPITAL, gelar depan \ntanpa KOMA, gelar belakang dengan KOMA)\n");
            scanf(" %[^\n]", nama_dosen);
            
            printf("\nNIP Pembimbing Utama (Non-FT):\n ");
            printf("Contoh : NIP/NIPK 198007072008011029 (tulis NIP atau NIPK (salah satu saja) spasi \nangka NIP)\n");
            scanf(" %[^\n]", nip_dosen);
            
            printf("Email Pembimbing Utama (Non-FT): ");
            printf("Isi dengan alamat email dosen ybs. (diutamakan akun email dengan domain @gmail.com).\n");
            scanf(" %[^\n]", email_dosen);
        }

        //Pendamping
        printf("\nApakah Pembimbing Pendamping TA berasal dari FT atau Non-FT?\n");
        printf("1. Dosen FT ULM\n");
        printf("2. Dosen Non-FT (luar FT ULM)\n");
        printf("Pilih (1/2): ");
        scanf("%d", &pendamping_dari);

        if (pendamping_dari == 1) {
            printf("PERHATIAN:\n");
            printf("1) Isi data berikut, apabila Pembimbing Pendamping TA bukan DOSEN FT ULM \n(Pastikan penulisan Nama, Gelar dan NIP/NIPK terisi dengan BENAR).\n");
            printf("2) Lewati bagian ini, apabila Pembimbing Pendamping TA bukan Dosen FT ULM  (isi data Ketua Penguji TA [ Non-FT] pada kolom isian berikutnya). \n");
            printf("3) Lewati bagian ini, apabila tidak ada Pembimbing Pendamping TA.\n");
            printf("\n   DAFTAR KETUA PENGUJI TA (FT ULM)   \n");
            printf("1. Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n");
            printf("2. Dr. Ir. Achmad Rusdiansyah, M.T.\n");
            printf("3. Dr. Ir. Rustam Effendi, M.A.Sc.\n");
            printf("4. Dr. Ir. Henry Wardhana, M.T.\n");
            printf("5. Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n");
            printf("6. Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n");
            printf("7. Dr.Eng. Irfan Prasetia, S.T., M.T.\n");
            printf("8. Dr. Rusdiansyah, S.T., M.T.\n");
            printf("9. Dr. Novitasari, S.T., M.T.\n");
            printf("10. Dr. Hutagamissufardal, S.T., M.T.\n");
            printf("11. Dr. Nursiah Chairunnisa, S.T., M.Eng.\n");
            printf("12. Ir. Retna Hapsari Kartadipura, M.T.\n");
            printf("13. Ir. Ida Barkiah, M.T.\n");
            printf("14. Ir. Fauzi Rahman, M.T.\n");
            printf("15. Ir. Holdani Kurdi, M.T.\n");
            printf("16. Dr. Muhammad Arsyad, S.T., M.T.\n");
            printf("17. Dr. Eng. Maya Amalia, S.T., M.Eng.\n");
            printf("18. Arie Febry Fardheny, S.T., M.T.\n");
            printf("19. Ulfa Fitriati, S.T., M.Eng.\n");
            printf("20. Eliatun, S.T., M.T.\n");
            printf("\nPilih daftar Nama berikut(1-20)\n");
            scanf("%d", &pilihan);

            printf("\nKetua Penguji TA (FT)\n");
            printf("\nPilih daftar Nama berikut, apabila Ketua Penguji TA merupakan Dosen FT ULM.:  (1-20)");
            switch (pilihan) {
                case 1: printf("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n"); break;
                case 2: printf("Dr. Ir. Achmad Rusdiansyah, M.T.\n"); break;
                case 3: printf("Dr. Ir. Rustam Effendi, M.A.Sc.\n"); break;
                case 4: printf("Dr. Ir. Henry Wardhana, M.T.\n"); break;
                case 5: printf("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n"); break;
                case 6: printf("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n"); break;
                case 7: printf("Dr.Eng. Irfan Prasetia, S.T., M.T.\n"); break;
                case 8: printf("Dr. Rusdiansyah, S.T., M.T.\n"); break;
                case 9: printf("Dr. Novitasari, S.T., M.T.\n"); break;
                case 10: printf("Dr. Hutagamissufardal, S.T., M.T.\n"); break;
                case 11: printf("Dr. Nursiah Chairunnisa, S.T., M.Eng.\n"); break;
                case 12: printf("Ir. Retna Hapsari Kartadipura, M.T.\n"); break;
                case 13: printf("Ir. Ida Barkiah, M.T.\n"); break;   
                case 14: printf("Ir. Fauzi Rahman, M.T.\n"); break;
                case 15: printf("Ir. Holdani Kurdi, M.T.\n"); break;
                case 16: printf("Dr. Muhammad Arsyad, S.T., M.T\n"); break;
                case 17: printf("Dr. Eng. Maya Amalia, S.T., M.Eng.\n"); break;
                case 18: printf("Arie Febry Fardheny, S.T., M.T.\n"); break;
                case 19: printf("Ulfa Fitriati, S.T., M.Eng.\n"); break;
                case 20: printf("Eliatun, S.T., M.T.\n"); break;
                default: printf("Nomor tidak valid.\n"); break;
                }
            
        } 
        else if (pendamping_dari == 2) {
            printf("\nKetua Penguji TA [Non-FT]\n\n");
            printf("PERHATIAN:\n");
            printf("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Ketua Penguji TA\n");
            printf("2) Isi data berikut, apabila Ketua Penguji TA bukan DOSEN FT ULM (Pastikan penulisan \nNama, Gelar dan NIP/NIPK terisi dengan BENAR).\n");
            printf("3) Lewati bagian ini, apabila Ketua Penguji TA merupakan Dosen FT ULM  (data Ketua Penguji TA [FT] sudah diisi).\n");
            
            printf("\nNama Ketua Penguji (Non-FT)\n");
            printf("Contoh :   Dr. Ir. Muhammad Fulan, S.T., M.T.  (setiap awal kata huruf KAPITAL, gelar depan \ntanpa KOMA, gelar belakang dengan KOMA)\n");
            scanf(" %[^\n]", nama_dosen2);
            
            printf("NIP Ketua Penguji (Non-FT)");
            printf("Contoh : NIP/NIPK 198007072008011029 (tulis NIP atau NIPK (salah satu saja) spasi \nangka NIP)\n");
            scanf(" %[^\n]", nip_dosen2);

        }

        printf("\nApakah Ketua Penguji TA berasal dari FT atau Non-FT?\n");
        printf("1. Dosen FT ULM\n");
        printf("2. Dosen Non-FT (luar FT ULM)\n");
        printf("Pilih (1/2): ");
        scanf("%d", &penguji_dari);

        //Penguji
        if (penguji_dari == 1) {
            printf("PERHATIAN:\n");
            printf("1) Pilih daftar Nama berikut, apabila Ketua Penguji TA merupakan Dosen FT ULM.\n");
            printf("2) Lewati bagian ini, apabila Ketua Penguji TA bukan Dosen FT ULM  (isi data Ketua Penguji TA [ Non-FT] pada kolom isian berikutnya). \n");
            
            printf("\n   DAFTAR KETUA PENGUJI TA (FT ULM)   \n");
            printf("1. Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n");
            printf("2. Dr. Ir. Achmad Rusdiansyah, M.T.\n");
            printf("3. Dr. Ir. Rustam Effendi, M.A.Sc.\n");
            printf("4. Dr. Ir. Henry Wardhana, M.T.\n");
            printf("5. Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n");
            printf("6. Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n");
            printf("7. Dr.Eng. Irfan Prasetia, S.T., M.T.\n");
            printf("8. Dr. Rusdiansyah, S.T., M.T.\n");
            printf("9. Dr. Novitasari, S.T., M.T.\n");
            printf("10. Dr. Hutagamissufardal, S.T., M.T.\n");
            printf("11. Dr. Nursiah Chairunnisa, S.T., M.Eng.\n");
            printf("12. Ir. Retna Hapsari Kartadipura, M.T.\n");
            printf("13. Ir. Ida Barkiah, M.T.\n");
            printf("14. Ir. Fauzi Rahman, M.T.\n");
            printf("15. Ir. Holdani Kurdi, M.T.\n");
            printf("16. Dr. Muhammad Arsyad, S.T., M.T.\n");
            printf("17. Dr. Eng. Maya Amalia, S.T., M.Eng.\n");
            printf("18. Arie Febry Fardheny, S.T., M.T.\n");
            printf("19. Ulfa Fitriati, S.T., M.Eng.\n");
            printf("20. Eliatun, S.T., M.T.\n");
            printf("\nPilih daftar Nama berikut(1-20)\n");
            scanf("%d", &pilihan);

            printf("\nKetua Penguji TA (FT)\n");
            printf("\nPilih daftar Nama berikut, apabila Ketua Penguji TA merupakan Dosen FT ULM.:  (1-20)");
            switch (pilihan) {
                case 1: printf("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n"); break;
                case 2: printf("Dr. Ir. Achmad Rusdiansyah, M.T.\n"); break;
                case 3: printf("Dr. Ir. Rustam Effendi, M.A.Sc.\n"); break;
                case 4: printf("Dr. Ir. Henry Wardhana, M.T.\n"); break;
                case 5: printf("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n"); break;
                case 6: printf("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n"); break;
                case 7: printf("Dr.Eng. Irfan Prasetia, S.T., M.T.\n"); break;
                case 8: printf("Dr. Rusdiansyah, S.T., M.T.\n"); break;
                case 9: printf("Dr. Novitasari, S.T., M.T.\n"); break;
                case 10: printf("Dr. Hutagamissufardal, S.T., M.T.\n"); break;
                case 11: printf("Dr. Nursiah Chairunnisa, S.T., M.Eng.\n"); break;
                case 12: printf("Ir. Retna Hapsari Kartadipura, M.T.\n"); break;
                case 13: printf("Ir. Ida Barkiah, M.T.\n"); break;   
                case 14: printf("Ir. Fauzi Rahman, M.T.\n"); break;
                case 15: printf("Ir. Holdani Kurdi, M.T.\n"); break;
                case 16: printf("Dr. Muhammad Arsyad, S.T., M.T\n"); break;
                case 17: printf("Dr. Eng. Maya Amalia, S.T., M.Eng.\n"); break;
                case 18: printf("Arie Febry Fardheny, S.T., M.T.\n"); break;
                case 19: printf("Ulfa Fitriati, S.T., M.Eng.\n"); break;
                case 20: printf("Eliatun, S.T., M.T.\n"); break;
                default: printf("Nomor tidak valid.\n"); break;
                }
            
        } 
        else if (penguji_dari == 2) {
            printf("\nKetua Penguji TA [Non-FT]\n\n");
            printf("PERHATIAN:\n");
            printf("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Ketua Penguji TA\n");
            printf("2) Isi data berikut, apabila Ketua Penguji TA bukan DOSEN FT ULM (Pastikan penulisan \nNama, Gelar dan NIP/NIPK terisi dengan BENAR).\n");
            printf("3) Lewati bagian ini, apabila Ketua Penguji TA merupakan Dosen FT ULM  (data Ketua Penguji TA [FT] sudah diisi).\n");
            
            printf("Nama Ketua Penguji (Non-FT)");
            printf("Contoh :   Dr. Ir. Muhammad Fulan, S.T., M.T.  (setiap awal kata huruf KAPITAL, gelar depan \ntanpa KOMA, gelar belakang dengan KOMA)\n");
            scanf(" %[^\n]", nama_dosen3);

            printf("NIP Ketua Penguji (Non-FT)");
            printf("Contoh : NIP/NIPK 198007072008011029 (tulis NIP atau NIPK (salah satu saja) spasi \nangka NIP)\n");
            scanf(" %[^\n]", nip_dosen3);

        }

        //Anggota TA
        printf("\nApakah Anggota Penguji TA 1 berasal dari FT atau Non-FT?\n");
        printf("1. Dosen FT ULM\n");
        printf("2. Dosen Non-FT (luar FT ULM)\n");
        printf("Pilih (1/2): ");
        scanf("%d", &anggota1_dari);

        if (anggota1_dari == 1){
            printf("\nDAFTAR ANGGOTA PENGUJI TA\n");
            printf("PERHATIAN:\n");
            printf("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Anggota Penguji TA\n");
            printf("2) Pilih daftar Nama berikut, apabila Anggota Penguji TA merupakan Dosen FT ULM.\n");
            printf("3) Lewati bagian ini, apabila Anggota Penguji 1 bukan Dosen FT ULM  \n(isi data Anggota Penguji 1 [ Non-FT] pada kolom isian berikutnya\n");

            printf("Anggota 1 (FT)\nPilih daftar Nama berikut, apabila Anggota Penguji 3 merupakan Dosen FT ULM.");
            printf("\n   DAFTAR ANGGOTA PENGUJI TA 1 (FT ULM)   \n");
            printf("1. Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n");
            printf("2. Dr. Ir. Achmad Rusdiansyah, M.T.\n");
            printf("3. Dr. Ir. Rustam Effendi, M.A.Sc.\n");
            printf("4. Dr. Ir. Henry Wardhana, M.T.\n");
            printf("5. Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n");
            printf("6. Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n");
            printf("7. Dr.Eng. Irfan Prasetia, S.T., M.T.\n");
            printf("8. Dr. Rusdiansyah, S.T., M.T.\n");
            printf("9. Dr. Novitasari, S.T., M.T.\n");
            printf("10. Dr. Hutagamissufardal, S.T., M.T.\n");
            printf("11. Dr. Nursiah Chairunnisa, S.T., M.Eng.\n");
            printf("12. Ir. Retna Hapsari Kartadipura, M.T.\n");
            printf("13. Ir. Ida Barkiah, M.T.\n");
            printf("14. Ir. Fauzi Rahman, M.T.\n");
            printf("15. Ir. Holdani Kurdi, M.T.\n");
            printf("16. Dr. Muhammad Arsyad, S.T., M.T.\n");
            printf("17. Dr. Eng. Maya Amalia, S.T., M.Eng.\n");
            printf("18. Arie Febry Fardheny, S.T., M.T.\n");
            printf("19. Ulfa Fitriati, S.T., M.Eng.\n");
            printf("20. Eliatun, S.T., M.T.\n");
            printf("\nPilih daftar Nama berikut(1-20)\n");
            scanf("%d", &pilihan);

            printf("\nAnggota Penguji TA 1 [FT]\n");
            switch (pilihan) {
                case 1: printf("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n"); break;
                case 2: printf("Dr. Ir. Achmad Rusdiansyah, M.T.\n"); break;
                case 3: printf("Dr. Ir. Rustam Effendi, M.A.Sc.\n"); break;
                case 4: printf("Dr. Ir. Henry Wardhana, M.T.\n"); break;
                case 5: printf("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n"); break;
                case 6: printf("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n"); break;
                case 7: printf("Dr.Eng. Irfan Prasetia, S.T., M.T.\n"); break;
                case 8: printf("Dr. Rusdiansyah, S.T., M.T.\n"); break;
                case 9: printf("Dr. Novitasari, S.T., M.T.\n"); break;
                case 10: printf("Dr. Hutagamissufardal, S.T., M.T.\n"); break;
                case 11: printf("Dr. Nursiah Chairunnisa, S.T., M.Eng.\n"); break;
                case 12: printf("Ir. Retna Hapsari Kartadipura, M.T.\n"); break;
                case 13: printf("Ir. Ida Barkiah, M.T.\n"); break;   
                case 14: printf("Ir. Fauzi Rahman, M.T.\n"); break;
                case 15: printf("Ir. Holdani Kurdi, M.T.\n"); break;
                case 16: printf("Dr. Muhammad Arsyad, S.T., M.T\n"); break;
                case 17: printf("Dr. Eng. Maya Amalia, S.T., M.Eng.\n"); break;
                case 18: printf("Arie Febry Fardheny, S.T., M.T.\n"); break;
                case 19: printf("Ulfa Fitriati, S.T., M.Eng.\n"); break;
                case 20: printf("Eliatun, S.T., M.T.\n"); break;
                default: printf("Nomor tidak valid.\n"); break;
                }
        }
        else if (anggota1_dari == 2) {
            printf("\nAnggota Penguji 1 [Non-FT]\n\n");
            printf("PERHATIAN:\n");
            printf("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Ketua Penguji TA\n");
            printf("2) Isi data berikut, apabila Anggota  penguji 1 bukan DOSEN FT ULM (Pastikan penulisan \nNama, Gelar dan NIP/NIPK terisi dengan BENAR).\n");
            printf("3) Lewati bagian ini, apabila Anggota penguji 1 merupakan Dosen FT ULM  (data Ketua Penguji TA [FT] sudah diisi).\n");
            
            printf("\nNama Anggota 1 (Non-FT)\n");
            printf("Contoh :   Dr. Ir. Muhammad Fulan, S.T., M.T.  (setiap awal kata huruf KAPITAL, gelar depan \ntanpa KOMA, gelar belakang dengan KOMA)\n");
            scanf(" %[^\n]", nama_dosen4);

            printf("NIP Anggota 1 (Non-FT)");
            printf("Contoh : NIP/NIPK 198007072008011029 (tulis NIP atau NIPK (salah satu saja) spasi \nangka NIP)\n");
            scanf(" %[^\n]", nip_dosen4);

            }
        
        printf("\nApakah Anggota Penguji 2 TA berasal dari FT atau Non-FT?\n");
        printf("1. Dosen FT ULM\n");
        printf("2. Dosen Non-FT (luar FT ULM)\n");
        printf("Pilih (1/2): ");
        scanf("%d", &anggota2_dari);

        //Anggota TA 2
        if (anggota2_dari == 1){
            printf("\nDAFTAR ANGGOTA PENGUJI 2 [FT]\n");
            printf("PERHATIAN:\n");
            printf("1)  Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Anggota Penguji TA\n");
            printf("2) Pilih daftar Nama berikut, apabila Anggota Penguji TA merupakan Dosen FT ULM.\n");
            printf("3) Lewati bagian ini, apabila Anggota Penguji 2 bukan Dosen FT ULM  (isi data Anggota \nPenguji 2 [ Non-FT] pada kolom isian berikutnya).\n");
            printf("Lewati bagian ini, apabila tidak ada Anggota Penguji 2\n");

            printf("Anggota 2 (FT)\nPilih daftar Nama berikut, apabila Anggota Penguji 3 merupakan Dosen FT ULM.");
            printf("\n   DAFTAR ANGGOTA PENGUJI TA 2 (FT ULM)   \n");
            printf("1. Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n");
            printf("2. Dr. Ir. Achmad Rusdiansyah, M.T.\n");
            printf("3. Dr. Ir. Rustam Effendi, M.A.Sc.\n");
            printf("4. Dr. Ir. Henry Wardhana, M.T.\n");
            printf("5. Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n");
            printf("6. Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n");
            printf("7. Dr.Eng. Irfan Prasetia, S.T., M.T.\n");
            printf("8. Dr. Rusdiansyah, S.T., M.T.\n");
            printf("9. Dr. Novitasari, S.T., M.T.\n");
            printf("10. Dr. Hutagamissufardal, S.T., M.T.\n");
            printf("11. Dr. Nursiah Chairunnisa, S.T., M.Eng.\n");
            printf("12. Ir. Retna Hapsari Kartadipura, M.T.\n");
            printf("13. Ir. Ida Barkiah, M.T.\n");
            printf("14. Ir. Fauzi Rahman, M.T.\n");
            printf("15. Ir. Holdani Kurdi, M.T.\n");
            printf("16. Dr. Muhammad Arsyad, S.T., M.T.\n");
            printf("17. Dr. Eng. Maya Amalia, S.T., M.Eng.\n");
            printf("18. Arie Febry Fardheny, S.T., M.T.\n");
            printf("19. Ulfa Fitriati, S.T., M.Eng.\n");
            printf("20. Eliatun, S.T., M.T.\n");
            printf("\nPilih daftar Nama berikut(1-20)\n");
            scanf("%d", &pilihan);

            printf("\n   Daftar Angota Penguji TA 2 (FT)\n");
            switch (pilihan) {
                case 1: printf("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n"); break;
                case 2: printf("Dr. Ir. Achmad Rusdiansyah, M.T.\n"); break;
                case 3: printf("Dr. Ir. Rustam Effendi, M.A.Sc.\n"); break;
                case 4: printf("Dr. Ir. Henry Wardhana, M.T.\n"); break;
                case 5: printf("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n"); break;
                case 6: printf("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n"); break;
                case 7: printf("Dr.Eng. Irfan Prasetia, S.T., M.T.\n"); break;
                case 8: printf("Dr. Rusdiansyah, S.T., M.T.\n"); break;
                case 9: printf("Dr. Novitasari, S.T., M.T.\n"); break;
                case 10: printf("Dr. Hutagamissufardal, S.T., M.T.\n"); break;
                case 11: printf("Dr. Nursiah Chairunnisa, S.T., M.Eng.\n"); break;
                case 12: printf("Ir. Retna Hapsari Kartadipura, M.T.\n"); break;
                case 13: printf("Ir. Ida Barkiah, M.T.\n"); break;   
                case 14: printf("Ir. Fauzi Rahman, M.T.\n"); break;
                case 15: printf("Ir. Holdani Kurdi, M.T.\n"); break;
                case 16: printf("Dr. Muhammad Arsyad, S.T., M.T\n"); break;
                case 17: printf("Dr. Eng. Maya Amalia, S.T., M.Eng.\n"); break;
                case 18: printf("Arie Febry Fardheny, S.T., M.T.\n"); break;
                case 19: printf("Ulfa Fitriati, S.T., M.Eng.\n"); break;
                case 20: printf("Eliatun, S.T., M.T.\n"); break;
                default: printf("Nomor tidak valid.\n"); break;
                }
        }
        else if (anggota2_dari == 2){
            printf("\nAnggota Penguji 2 [Non-FT]\n\n");
            printf("PERHATIAN:\n");
            printf("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Ketua Penguji TA\n");
            printf("2) Isi data berikut, apabila Anggota  penguji 2 bukan DOSEN FT ULM (Pastikan penulisan \nNama, Gelar dan NIP/NIPK terisi dengan BENAR).\n");
            printf("3) Lewati bagian ini, apabila Anggota penguji 2 merupakan Dosen FT ULM  (data Ketua Penguji TA [FT] sudah diisi).\n");
            printf("4) Lewati bagian ini, apabila tidak ada Anggota Penguji 2\n");
            
            printf("\nNama Anggota 2 (Non-FT)\n");
            printf("Contoh :   Dr. Ir. Muhammad Fulan, S.T., M.T.  (setiap awal kata huruf KAPITAL, gelar depan \ntanpa KOMA, gelar belakang dengan KOMA)\n");
            scanf(" %[^\n]", nama_dosen5);

            printf("NIP Anggota 2 (Non-FT)");
            printf("Contoh : NIP/NIPK 198007072008011029 (tulis NIP atau NIPK (salah satu saja) spasi \nangka NIP)\n");
            scanf(" %[^\n]", nip_dosen5);

            }

        printf("\nApakah Anggota Penguji TA 3 berasal dari FT atau Non-FT?\n");
        printf("1. Dosen FT ULM\n");
        printf("2. Dosen Non-FT (luar FT ULM)\n");
        printf("Pilih (1/2): ");
        scanf("%d", &anggota3_dari);

        //Anggota TA 3
        if (anggota3_dari == 1){
            printf("\n   DAFTAR ANGGOTA PENGUJI 3 TA\n");
            printf("PERHATIAN:\n");
            printf("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Anggota Penguji TA\n");
            printf("2) Pilih daftar Nama berikut, apabila Anggota Penguji 3 merupakan Dosen FT ULM.\n");
            printf("3)  Lewati bagian ini, apabila Anggota Penguji 3 bukan Dosen FT ULM \n(isi data Anggota Penguji 3 [ Non-FT] pada kolom isian berikutnya).\n");
            printf("4) Lewati bagian ini, apabila tidak ada Anggota Penguji 3\n");

            printf("Anggota 3 (FT)\nPilih daftar Nama berikut, apabila Anggota Penguji 3 merupakan Dosen FT ULM.");
            printf("\n   DAFTAR ANGGOTA PENGUJI TA 3 (FT ULM)   \n");
            printf("1. Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n");
            printf("2. Dr. Ir. Achmad Rusdiansyah, M.T.\n");
            printf("3. Dr. Ir. Rustam Effendi, M.A.Sc.\n");
            printf("4. Dr. Ir. Henry Wardhana, M.T.\n");
            printf("5. Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n");
            printf("6. Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n");
            printf("7. Dr.Eng. Irfan Prasetia, S.T., M.T.\n");
            printf("8. Dr. Rusdiansyah, S.T., M.T.\n");
            printf("9. Dr. Novitasari, S.T., M.T.\n");
            printf("10. Dr. Hutagamissufardal, S.T., M.T.\n");
            printf("11. Dr. Nursiah Chairunnisa, S.T., M.Eng.\n");
            printf("12. Ir. Retna Hapsari Kartadipura, M.T.\n");
            printf("13. Ir. Ida Barkiah, M.T.\n");
            printf("14. Ir. Fauzi Rahman, M.T.\n");
            printf("15. Ir. Holdani Kurdi, M.T.\n");
            printf("16. Dr. Muhammad Arsyad, S.T., M.T.\n");
            printf("17. Dr. Eng. Maya Amalia, S.T., M.Eng.\n");
            printf("18. Arie Febry Fardheny, S.T., M.T.\n");
            printf("19. Ulfa Fitriati, S.T., M.Eng.\n");
            printf("20. Eliatun, S.T., M.T.\n");
            printf("\nPilih daftar Nama berikut(1-20)\n");
            scanf("%d", &pilihan);

            printf("\nAnggota Penguji 3 (FT)\n");
            switch (pilihan) {
                case 1: printf("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.\n"); break;
                case 2: printf("Dr. Ir. Achmad Rusdiansyah, M.T.\n"); break;
                case 3: printf("Dr. Ir. Rustam Effendi, M.A.Sc.\n"); break;
                case 4: printf("Dr. Ir. Henry Wardhana, M.T.\n"); break;
                case 5: printf("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.\n"); break;
                case 6: printf("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.\n"); break;
                case 7: printf("Dr.Eng. Irfan Prasetia, S.T., M.T.\n"); break;
                case 8: printf("Dr. Rusdiansyah, S.T., M.T.\n"); break;
                case 9: printf("Dr. Novitasari, S.T., M.T.\n"); break;
                case 10: printf("Dr. Hutagamissufardal, S.T., M.T.\n"); break;
                case 11: printf("Dr. Nursiah Chairunnisa, S.T., M.Eng.\n"); break;
                case 12: printf("Ir. Retna Hapsari Kartadipura, M.T.\n"); break;
                case 13: printf("Ir. Ida Barkiah, M.T.\n"); break;   
                case 14: printf("Ir. Fauzi Rahman, M.T.\n"); break;
                case 15: printf("Ir. Holdani Kurdi, M.T.\n"); break;
                case 16: printf("Dr. Muhammad Arsyad, S.T., M.T\n"); break;
                case 17: printf("Dr. Eng. Maya Amalia, S.T., M.Eng.\n"); break;
                case 18: printf("Arie Febry Fardheny, S.T., M.T.\n"); break;
                case 19: printf("Ulfa Fitriati, S.T., M.Eng.\n"); break;
                case 20: printf("Eliatun, S.T., M.T.\n"); break;
                default: printf("Nomor tidak valid.\n"); break;
                }
            }

        else if (anggota3_dari == 2) {
            printf("\n   Anggota Penguji 3 [Non-FT]\n\n");
            printf("PERHATIAN:\n");
            printf("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Ketua Penguji TA\n");
            printf("2) Isi data berikut, apabila Anggota  penguji 3 bukan DOSEN FT ULM (Pastikan penulisan \nNama, Gelar dan NIP/NIPK terisi dengan BENAR).\n");
            printf("3) Lewati bagian ini, apabila Anggota penguji 3 merupakan Dosen FT ULM  (data Ketua Penguji TA [FT] sudah diisi).\n");
            
            printf("\nNama Anggota 3 (Non-FT)\n");
            printf("Contoh :   Dr. Ir. Muhammad Fulan, S.T., M.T.  (setiap awal kata huruf KAPITAL, gelar depan \ntanpa KOMA, gelar belakang dengan KOMA)\n");
            scanf(" %[^\n]", nama_dosen6);

            printf("NIP Anggota 3 (Non-FT)");
            printf("Contoh : NIP/NIPK 198007072008011029 (tulis NIP atau NIPK (salah satu saja) spasi \nangka NIP)\n");
            scanf(" %[^\n]", nip_dosen6);

            }
        
        printf("Tahap II : Pengajuan Lemsah Tugas Akhir\n");
        printf("PERHATIAN...!!\nBagian ini adalah bagian akhir form isian (Tahap II : Pengajuan Lemsah Tugas Akhir)\n");
        printf("*) Sebelum klik SUBMIT, pastikan semua data yang anda isi telah BENAR. Kesalahan\n");
        printf("pengisian data akan mengakibatkan terjadinya kesalahan redaksional pada Halaman \nPengesahan TA yang dicetak secara online.\n");
        printf("*) Setelah SUBMIT usulan ini, anda akan menerima email notifikasi dan mohon ");
        printf("BERSABAR untuk tidak mengajukan usulan baru sebelum anda menerima email notifikasi \ntersebut, karena akan mengganggu proses pada sistem layanan online ini.");
        printf("*)  Untuk cek status proses Ujian TA yang anda ajukan, klik : https://bit.ly/kendali_TA\n");
        
        printf("\nApakah Anda ingin Submit?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Pilih (1/2): ");
        scanf("%d", &submit);
        }
    
        else if (masuk_sbgai == 2) {
        printf("\n   Admin FT ULM   \n");
        printf("PERHATIAN:\n");
        printf("Pastikan anda mengakses layanan TAHAP II ini melalui LINK yang disampaikan pada \nemail notifikasi yang telah diterima.\n");
        printf("\nValidasi Admin FT (II): \n");
        printf("Masukkan Kode");
        scanf(" %[^\n]", validasi_admin);
        
        if (strcmp(validasi_admin, kode_admin) == 0) {
            printf(" Kode benar!\n");
            printf("Apakah Anda ingin Submit?\n");
            printf("1. Ya\n");
            printf("2. Tidak\n");
            printf("Pilih (1/2): ");
            scanf("%d", &submit);
            printf("\n -selesai-\n");
        } 
        else { 
            printf("Kode salah!\n");
            printf("\n -selesai-\n");
        }
    }
}
else if (tahap == 3) {
        printf("\n   Tahap III : Laporan Ujian Tugas Akhir  \n");
        printf("Form ini digunakan untuk laporan pelaksanaan sidang TA dan pengesahan Tugas \nAkhir/Skripsi/Thesis Mahasiswa FT ULM. \n");
        printf("PERHATIAN :\n");
        printf("1) Pastikan anda mengakses layanan TAHAP III ini melalui LINK yang disampaikan pada \nemail notifikasi yang telah diterima.\n");
        printf("2) Untuk Mahasiswa TA, pastikan anda telah mengisi data pada TAHAP I dan TAHAP II ");
        
        printf("Masuk Sebagai (III)\n");
        printf("1. Mahasiswa FT ULM\n");
        printf("2. Pembimbing TA\n");
        printf("3. Validator Judul TA\n");
        printf("4. Admin FT ULM\n");
        printf("5. Admin Akademik FT\n");
        printf("Pilih (1-5): ");
        scanf("%d", &masuk_sebagai);
        getchar();

        if (masuk_sebagai == 1) {
            printf("Lemsah TA\n");
            printf("Upload file scan (BUKAN FOTO) Halaman Pengesahan TA  yang telah ditandatangani\n");
            printf("Penguji TA, Pemimbing TA dan Koordinator Program Studi dalam 1 file berformat *.PDF \nmaksimal 10 MB\n");
            scanf(" %[^\n]", file1);

            printf("Naskah Final TA\n");
            printf("Upload file naskah final TA  (setelah disetujui pemimbing dan penguji TA) dalam 1 file \nberformat *.PDF maksimal 100 MB\n");
            scanf(" %[^\n]", file2);

            printf("Keterangan MHS\n");
            scanf(" %[^\n]", keterangan_mhs);

            printf("Tahap III : Laporan Ujian Tugas Akhir\n");
            printf("PERHATIAN...!!\n");
            printf("Bagian ini adalah bagian akhir form isian (Tahap III : Laporan Ujian Tugas Akhir)\n");
            printf("*)  Sebelum klik (SUBMIT), pastikan semua data yang anda isi telah BENAR.\n");
            printf("*)  Setelah (SUBMIT) usulan ini, anda akan menerima email notifikasi dan mohon\n");
            printf("BERSABAR untuk tidak mengajukan usulan baru sebelum anda menerima email notifikasi \ntersebut, karena akan mengganggu proses pada sistem layanan online ini.\n");     
            printf("*)  Untuk cek status proses Ujian TA yang anda ajukan, klik : https://bit.ly/kendali_TA\n");       
            
            printf("Apakah Anda ingin Submit?\n");
            printf("1. Ya\n");
            printf("2. Tidak\n");
            printf("Pilih (1/2): ");
            scanf("%d", &submit);
        }
        
        else if (masuk_sebagai == 2) {
            printf("\n  Pembimbing TA  \n");
            printf("Validasi Pembimbing TA \n");
            printf("Masukkan Kode\n");
            
            scanf(" %[^\n]", pembimbing_ta);
            if (strcmp(pembimbing_ta, kode_pembimbing) == 0) {
                printf(" Kode benar!\n");
                printf("\n -selesai-\n");
                printf("Apakah Anda ingin Submit?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                printf("Pilih (1/2): ");
                scanf("%d", &submit);
            } 
            else { 
                printf("Kode salah!\n");
                printf("\n -selesai-\n");
            }

        }

        else if (masuk_sebagai == 3) {
            printf("\n   Validator Judul TA   \n");
            printf("\nValidasi Validator Judul TA \n");
            printf("Masukkan Kode");
            scanf(" %[^\n]", Validator_judul);
            
            if (strcmp(Validator_judul, kode_judul) == 0) {
                printf(" Kode benar!\n");
                printf("Apakah Anda ingin Submit?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                printf("Pilih (1/2): ");
                scanf("%d", &submit);
                printf("\n -selesai-\n");
            } 
            else { 
                printf("Kode salah!\n");
                printf("\n -selesai-\n");
            }
        }

        else if (masuk_sebagai == 4) {
            printf("\n   Admin FT ULM   \n");
            printf("Validasi Admin FT (III)\n");
            printf("Masukkan Kode\n");

            scanf(" %[^\n]", validasi_admin2);
            if (strcmp(validasi_admin2, kode_admin2) == 0) {
                printf(" Kode benar!\n");
                printf("Apakah Anda ingin Submit?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                printf("Pilih (1/2): ");
                scanf("%d", &submit);
                printf("\n -selesai-\n");
            } 
            else { 
                printf("Kode salah!\n");
                printf("\n -selesai-\n");
            }

        }

        else if (masuk_sebagai == 5) {
            printf("\n   Admin Akademik  \n");
            printf("Validasi AKA FT \n");
            printf("Masukkan Kode\n");

            scanf(" %[^\n]", validasi_aka);
            if (strcmp(validasi_aka, kode_aka) == 0) {
                printf(" Kode benar!\n");
                 printf("Apakah Anda ingin Submit?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                printf("Pilih (1/2): ");
                scanf("%d", &submit);
                printf("\n -selesai-\n");
            } 

            else { 
                printf("Kode salah!\n");
                printf("\n -selesai-\n");
            } 
        }
    }

    

    if (submit == 1) {
        printf("\n Data berhasil disubmit!\n");
}   else { 
        printf("\n Data dibatalkan.\n");
}
    
return 0;
}

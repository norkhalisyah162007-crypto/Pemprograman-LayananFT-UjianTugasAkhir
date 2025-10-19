
def safe_int(s):
    try:
        return int(s)
    except:
        return None

def input_trim(prompt=""):
    try:
        return input(prompt).rstrip("\n")
    except EOFError:
        return ""

def main():
    kode_admin = "FTULMCODEAD125"
    kode_pembimbing = "FTULMCODEPEM25"
    kode_judul = "FTULMCODEJDL25"
    kode_admin2 = "FTULMCODEAD225"
    kode_aka = "FTULMCODEAK25"

    email = ""
    tahap = None
    jumlah_mhs = None
    nama1 = nim1 = telp1 = reg1 = ""
    nama2 = nim2 = telp2 = reg2 = ""
    masuk_sbgai = None

    pilihan = None
    nama_dosen = nip_dosen = email_dosen = ""
    nama_dosen2 = nip_dosen2 = ""
    nama_dosen3 = nip_dosen3 = ""
    nama_dosen4 = nip_dosen4 = ""
    nama_dosen5 = nip_dosen5 = ""
    nama_dosen6 = nip_dosen6 = ""
    pembimbing_dari = pendamping_dari = penguji_dari = None
    anggota1_dari = anggota2_dari = anggota3_dari = None
    masuk_sebagai = None
    file1 = file2 = ""
    keterangan_mhs = ""
    pembimbing_ta = ""
    Validator_judul = ""
    validasi_admin = ""
    validasi_admin2 = ""
    validasi_aka = ""
    submit = 0

    print("UJIAN TUGAS AKHIR\n")
    print("Kepada Yth.")
    print("Mahasiswa S1 & S2 di lingkungan FT ULM")
    print("di tempat\n")
    print("Dalam rangka peningkatan mutu layanan akademik yang terintegrasi maka mahasiswa")
    print("program Sarjana (S1) dan Magister (S2) yang akan melaksanakan Sidang akhir/Ujian")
    print("Skripsi/TA dan Thesis WAJIB mengisi form layanan ini.\n")

    print("Dekan:")
    print("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T., IPU")
    print("NIP: 197309031997021001\n")

    print("PERHATIAN:")
    print("1) Sebelum menggunakan layanan ini, pelajari alur Proses Layanan UJIAN TUGAS AKHIR FT ULM:")
    print("   https://bit.ly/Alur_TA")
    print("2) Siapkan file bukti pengisian kuesioner Mahasiswa FT ULM periode semester berjalan")
    print("3) Apabila belum melakukan pengisian kuesioner, isi melalui:")
    print("   https://ft.ulm.ac.id/id/tracer/ (menu \"Kuesioner Mahasiswa\")")
    print("4) Harap diisi sesuai contoh agar tidak terjadi kesalahan pada Halaman Pengesahan TA.")
    print("5) Untuk cek status proses Ujian TA, klik: https://bit.ly/kendali_TA\n")

    email = input_trim("Masukkan Email ULM Anda: ")

    print("\nPilih Opsi:")
    print("1) Tahap I   : Untuk mendaftarkan jadwal sidang Tugas Akhir/Skripsi/Thesis")
    print("               Note: Wajib diisi oleh Mahasiswa TA FT, baik yang SUDAH maupun BELUM sidang.")
    print("2) Tahap II  : Untuk penerbitan Halaman Pengesahan")
    print("               Note: Pastikan data Tahap I telah diisi.")
    print("3) Tahap III : Untuk laporan pelaksanaan sidang TA")
    print("               Note: Pastikan Tahap I dan II sudah diisi.\n")

    tahap_input = input_trim("Tahap Proses (1/2/3): ")
    tahap = safe_int(tahap_input)

    if tahap is None or tahap < 1 or tahap > 3:
        print("\n[!] Tahap tidak valid. Silakan ulangi.\n")
   
    elif tahap == 1:
        print("\nTahap I : Pendaftaran Ujian Tugas Akhir\n")
        print("\nForm ini digunakan untuk mendaftarkan jadwal sidang Tugas Akhir/Skripsi/Thesis")
        print("Mahasiswa FT ULM. Semua data yang diminta pada Tahap I Wajib diisi oleh Mahasiwa TA")
        print("FT, baik yang SUDAH maupun yang BELUM melaksanakan Sidang Akhir TA.\n")

        print("\nDATA MAHASISWA")
        print("1) 1 orang (judul TA untuk 1 mahasiswa)")
        print("2) 2 orang (judul TA untuk 2 mahasiswa)")
        jumlah_mhs_input = input_trim("Pilih jumlah mahasiswa (1/2): ")
        jumlah_mhs = safe_int(jumlah_mhs_input)

        if jumlah_mhs == 1:
            print("\nDATA MAHASISWA#1")
            nama1 = input_trim("Nama Mahasiswa#1: ")
            nim1 = input_trim("NIM Mahasiswa#1: ")
            telp1 = input_trim("No Telp Mahasiswa#1: ")
            reg1 = input_trim("No Registrasi Kuisioner Mahasiswa#1: ")
        elif jumlah_mhs == 2:
            print("\nDATA MAHASISWA#2")
            nama2 = input_trim("Nama Mahasiswa#2: ")
            nim2 = input_trim("NIM Mahasiswa#2: ")
            telp2 = input_trim("No Telp Mahasiswa#2: ")
            reg2 = input_trim("No Registrasi Kuisioner Mahasiswa#2: ")
        else:
            print("\n[!] Jumlah mahasiswa tidak valid.\n")

        print("\n       DATA PENDAFTARAN UJIAN TA")
        print(f"Email                 : {email}")
        print(f"Tahap Proses          : Tahap {tahap}")
        print(f"Jumlah Mahasiswa      : {jumlah_mhs} orang")

        if jumlah_mhs == 1:
            print("\nMahasiswa #1")
            print(f"Nama                  : {nama1}")
            print(f"NIM                   : {nim1}")
            print(f"No Telp               : {telp1}")
            print(f"No Reg. Kuisioner     : {reg1}")
        elif jumlah_mhs == 2:
            print("\nMahasiswa #2")
            print(f"Nama                  : {nama2}")
            print(f"NIM                   : {nim2}")
            print(f"No Telp               : {telp2}")
            print(f"No Reg. Kuisioner     : {reg2}")

        print("\nData berhasil direkam.")
        print("Terima kasih telah menggunakan layanan Ujian TA FT ULM.\n")

        print("Apakah Anda ingin Submit?")
        print("1. Ya")
        print("2. Tidak")
        submit_input = input_trim("Pilih (1/2): ")
        s = safe_int(submit_input)
        submit = 1 if s == 1 else 0

    elif tahap == 2:
        print("\nTahap II : Pengajuan Lemsah Tugas Akhir\n")
        print("\nForm ini digunakan untuk proses penerbitan Halaman Pengesahan Tugas Akhir/Skripsi/Thesis Mahasiswa FT ULM.\n")
        print("Masuk sebagai:")
        print("1. Mahasiswa TA")
        print("2. Admin FT ULM")
        masuk_input = input_trim("Pilih (1/2): ")
        masuk_sbgai = safe_int(masuk_input)

        if masuk_sbgai == 1:
            print("\nApakah Pembimbing Utama TA berasal dari FT atau Non-FT?")
            print("1. Dosen FT ULM")
            print("2. Dosen Non-FT (luar FT ULM)")
            pembimbing_input = input_trim("Pilih (1/2): ")
            pembimbing_dari = safe_int(pembimbing_input)

            if pembimbing_dari == 1:
                print("PERHATIAN:")
                print("1) Pilih daftar Nama berikut, apabila Pembimbing Utama TA merupakan Dosen FT ULM.")
                print("2) Lewati bagian ini, apabila Pembimbing Utama TA bukan Dosen FT ULM  (isi data Pembimbing Utama TA [ Non-FT] pada kolom isian berikutnya). \n")
                print("\n   DAFTAR PEMBIMBING UTAMA (FT ULM)   ")
                print("1. Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.")
                print("2. Dr. Ir. Achmad Rusdiansyah, M.T.")
                print("3. Dr. Ir. Rustam Effendi, M.A.Sc.")
                print("4. Dr. Ir. Henry Wardhana, M.T.")
                print("5. Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.")
                print("6. Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.")
                print("7. Dr.Eng. Irfan Prasetia, S.T., M.T.")
                print("8. Dr. Rusdiansyah, S.T., M.T.")
                print("9. Dr. Novitasari, S.T., M.T.")
                print("10. Dr. Hutagamissufardal, S.T., M.T.")
                print("11. Dr. Nursiah Chairunnisa, S.T., M.Eng.")
                print("12. Ir. Retna Hapsari Kartadipura, M.T.")
                print("13. Ir. Ida Barkiah, M.T.")
                print("14. Ir. Fauzi Rahman, M.T.")
                print("15. Ir. Holdani Kurdi, M.T.")
                print("16. Dr. Muhammad Arsyad, S.T., M.T.")
                print("17. Dr. Eng. Maya Amalia, S.T., M.Eng.")
                print("18. Arie Febry Fardheny, S.T., M.T.")
                print("19. Ulfa Fitriati, S.T., M.Eng.")
                print("20. Eliatun, S.T., M.T.\n")
                pilihan_input = input_trim("Pilih daftar Nama berikut(1-20): ")
                pilihan = safe_int(pilihan_input)

                if pilihan == 1:
                    print("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.")
                elif pilihan == 2:
                    print("Dr. Ir. Achmad Rusdiansyah, M.T.")
                elif pilihan == 3:
                    print("Dr. Ir. Rustam Effendi, M.A.Sc.")
                elif pilihan == 4:
                    print("Dr. Ir. Henry Wardhana, M.T.")
                elif pilihan == 5:
                    print("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.")
                elif pilihan == 6:
                    print("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.")
                elif pilihan == 7:
                    print("Dr.Eng. Irfan Prasetia, S.T., M.T.")
                elif pilihan == 8:
                    print("Dr. Rusdiansyah, S.T., M.T.")
                elif pilihan == 9:
                    print("Dr. Novitasari, S.T., M.T.")
                elif pilihan == 10:
                    print("Dr. Hutagamissufardal, S.T., M.T.")
                elif pilihan == 11:
                    print("Dr. Nursiah Chairunnisa, S.T., M.Eng.")
                elif pilihan == 12:
                    print("Ir. Retna Hapsari Kartadipura, M.T.")
                elif pilihan == 13:
                    print("Ir. Ida Barkiah, M.T.")
                elif pilihan == 14:
                    print("Ir. Fauzi Rahman, M.T.")
                elif pilihan == 15:
                    print("Ir. Holdani Kurdi, M.T.")
                elif pilihan == 16:
                    print("Dr. Muhammad Arsyad, S.T., M.T")
                elif pilihan == 17:
                    print("Dr. Eng. Maya Amalia, S.T., M.Eng.")
                elif pilihan == 18:
                    print("Arie Febry Fardheny, S.T., M.T.")
                elif pilihan == 19:
                    print("Ulfa Fitriati, S.T., M.Eng.")
                elif pilihan == 20:
                    print("Eliatun, S.T., M.T.")
                else:
                    print("Nomor tidak valid.")
            elif pembimbing_dari == 2:
                print("\nPembimbing Utama TA [Non-FT]\n")
                print("1) Isi data berikut, apabila Pembimbing Utama TA bukan DOSEN FT ULM")
                print("(Pastikan penulisan Nama, Gelar dan NIP/NIPK terisi dengan BENAR).")
                print("2) Lewati bagian ini, apabila Pembimbing Utama TA merupakan Dosen FT ULM  \n(data Pembimbing Utama TA [FT] sudah diisi).")
                nama_dosen = input_trim("Nama Pembimbing Utama (Non-FT): ")
                nip_dosen = input_trim("NIP Pembimbing Utama (Non-FT): ")
                email_dosen = input_trim("Email Pembimbing Utama (Non-FT): ")

       
            print("\nApakah Pembimbing Pendamping TA berasal dari FT atau Non-FT?")
            print("1. Dosen FT ULM")
            print("2. Dosen Non-FT (luar FT ULM)")
            pendamping_input = input_trim("Pilih (1/2): ")
            pendamping_dari = safe_int(pendamping_input)

            if pendamping_dari == 1:
                print("PERHATIAN:")
                print("1) Isi data berikut, apabila Pembimbing Pendamping TA bukan DOSEN FT ULM")
                print("(Pastikan penulisan Nama, Gelar dan NIP/NIPK terisi dengan BENAR).")
                print("2) Lewati bagian ini, apabila Pembimbing Pendamping TA bukan Dosen FT ULM  (isi data Ketua Penguji TA [ Non-FT] pada kolom isian berikutnya).")
                print("3) Lewati bagian ini, apabila tidak ada Pembimbing Pendamping TA.")
                print("\n   DAFTAR KETUA PENGUJI TA (FT ULM)   ")
             
                pilihan_input = input_trim("Pilih daftar Nama berikut(1-20): ")
                pilihan = safe_int(pilihan_input)
             
                if pilihan == 1:
                    print("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.")
                elif pilihan == 2:
                    print("Dr. Ir. Achmad Rusdiansyah, M.T.")
                elif pilihan == 3:
                    print("Dr. Ir. Rustam Effendi, M.A.Sc.")
                elif pilihan == 4:
                    print("Dr. Ir. Henry Wardhana, M.T.")
                elif pilihan == 5:
                    print("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.")
                elif pilihan == 6:
                    print("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.")
                elif pilihan == 7:
                    print("Dr.Eng. Irfan Prasetia, S.T., M.T.")
                elif pilihan == 8:
                    print("Dr. Rusdiansyah, S.T., M.T.")
                elif pilihan == 9:
                    print("Dr. Novitasari, S.T., M.T.")
                elif pilihan == 10:
                    print("Dr. Hutagamissufardal, S.T., M.T.")
                elif pilihan == 11:
                    print("Dr. Nursiah Chairunnisa, S.T., M.Eng.")
                elif pilihan == 12:
                    print("Ir. Retna Hapsari Kartadipura, M.T.")
                elif pilihan == 13:
                    print("Ir. Ida Barkiah, M.T.")
                elif pilihan == 14:
                    print("Ir. Fauzi Rahman, M.T.")
                elif pilihan == 15:
                    print("Ir. Holdani Kurdi, M.T.")
                elif pilihan == 16:
                    print("Dr. Muhammad Arsyad, S.T., M.T")
                elif pilihan == 17:
                    print("Dr. Eng. Maya Amalia, S.T., M.Eng.")
                elif pilihan == 18:
                    print("Arie Febry Fardheny, S.T., M.T.")
                elif pilihan == 19:
                    print("Ulfa Fitriati, S.T., M.Eng.")
                elif pilihan == 20:
                    print("Eliatun, S.T., M.T.")
                else:
                    print("Nomor tidak valid.")
            elif pendamping_dari == 2:
                print("\nKetua Penguji TA [Non-FT]\n")
                print("PERHATIAN:")
                print("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Ketua Penguji TA")
                print("2) Isi data berikut, apabila Ketua Penguji TA bukan DOSEN FT ULM (Pastikan penulisan \nNama, Gelar dan NIP/NIPK terisi dengan BENAR).")
                print("3) Lewati bagian ini, apabila Ketua Penguji TA merupakan Dosen FT ULM  (data Ketua Penguji TA [FT] sudah diisi).")
                nama_dosen2 = input_trim("Nama Ketua Penguji (Non-FT): ")
                nip_dosen2 = input_trim("NIP Ketua Penguji (Non-FT): ")

            print("\nApakah Ketua Penguji TA berasal dari FT atau Non-FT?")
            print("1. Dosen FT ULM")
            print("2. Dosen Non-FT (luar FT ULM)")
            penguji_input = input_trim("Pilih (1/2): ")
            penguji_dari = safe_int(penguji_input)

            if penguji_dari == 1:
                print("PERHATIAN:")
                print("1) Pilih daftar Nama berikut, apabila Ketua Penguji TA merupakan Dosen FT ULM.")
                print("2) Lewati bagian ini, apabila Ketua Penguji TA bukan Dosen FT ULM  (isi data Ketua Penguji TA [ Non-FT] pada kolom isian berikutnya).")
                print("\n   DAFTAR KETUA PENGUJI TA (FT ULM)   ")
                pilihan_input = input_trim("Pilih daftar Nama berikut(1-20): ")
                pilihan = safe_int(pilihan_input)
                if pilihan == 1:
                    print("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.")
                elif pilihan == 2:
                    print("Dr. Ir. Achmad Rusdiansyah, M.T.")
                elif pilihan == 3:
                    print("Dr. Ir. Rustam Effendi, M.A.Sc.")
                elif pilihan == 4:
                    print("Dr. Ir. Henry Wardhana, M.T.")
                elif pilihan == 5:
                    print("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.")
                elif pilihan == 6:
                    print("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.")
                elif pilihan == 7:
                    print("Dr.Eng. Irfan Prasetia, S.T., M.T.")
                elif pilihan == 8:
                    print("Dr. Rusdiansyah, S.T., M.T.")
                elif pilihan == 9:
                    print("Dr. Novitasari, S.T., M.T.")
                elif pilihan == 10:
                    print("Dr. Hutagamissufardal, S.T., M.T.")
                elif pilihan == 11:
                    print("Dr. Nursiah Chairunnisa, S.T., M.Eng.")
                elif pilihan == 12:
                    print("Ir. Retna Hapsari Kartadipura, M.T.")
                elif pilihan == 13:
                    print("Ir. Ida Barkiah, M.T.")
                elif pilihan == 14:
                    print("Ir. Fauzi Rahman, M.T.")
                elif pilihan == 15:
                    print("Ir. Holdani Kurdi, M.T.")
                elif pilihan == 16:
                    print("Dr. Muhammad Arsyad, S.T., M.T")
                elif pilihan == 17:
                    print("Dr. Eng. Maya Amalia, S.T., M.Eng.")
                elif pilihan == 18:
                    print("Arie Febry Fardheny, S.T., M.T.")
                elif pilihan == 19:
                    print("Ulfa Fitriati, S.T., M.Eng.")
                elif pilihan == 20:
                    print("Eliatun, S.T., M.T.")
                else:
                    print("Nomor tidak valid.")
            elif penguji_dari == 2:
                print("\nKetua Penguji TA [Non-FT]\n")
                print("PERHATIAN:")
                print("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Ketua Penguji TA")
                print("2) Isi data berikut, apabila Ketua Penguji TA bukan DOSEN FT ULM (Pastikan penulisan \nNama, Gelar dan NIP/NIPK terisi dengan BENAR).")
                print("3) Lewati bagian ini, apabila Ketua Penguji TA merupakan Dosen FT ULM  (data Ketua Penguji TA [FT] sudah diisi).")
                nama_dosen3 = input_trim("Nama Ketua Penguji (Non-FT): ")
                nip_dosen3 = input_trim("NIP Ketua Penguji (Non-FT): ")

            print("\nApakah Anggota Penguji TA 1 berasal dari FT atau Non-FT?")
            print("1. Dosen FT ULM")
            print("2. Dosen Non-FT (luar FT ULM)")
            anggota1_input = input_trim("Pilih (1/2): ")
            anggota1_dari = safe_int(anggota1_input)

            if anggota1_dari == 1:
                print("\nDAFTAR ANGGOTA PENGUJI TA")
                print("PERHATIAN:")
                print("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Anggota Penguji TA")
                print("2) Pilih daftar Nama berikut, apabila Anggota Penguji TA merupakan Dosen FT ULM.")
                print("3) Lewati bagian ini, apabila Anggota Penguji 1 bukan Dosen FT ULM  \n(isi data Anggota Penguji 1 [ Non-FT] pada kolom isian berikutnya\n")
                pilihan_input = input_trim("Pilih daftar Nama berikut(1-20): ")
                pilihan = safe_int(pilihan_input)
                if pilihan == 1:
                    print("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.")
                elif pilihan == 2:
                    print("Dr. Ir. Achmad Rusdiansyah, M.T.")
                elif pilihan == 3:
                    print("Dr. Ir. Rustam Effendi, M.A.Sc.")
                elif pilihan == 4:
                    print("Dr. Ir. Henry Wardhana, M.T.")
                elif pilihan == 5:
                    print("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.")
                elif pilihan == 6:
                    print("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.")
                elif pilihan == 7:
                    print("Dr.Eng. Irfan Prasetia, S.T., M.T.")
                elif pilihan == 8:
                    print("Dr. Rusdiansyah, S.T., M.T.")
                elif pilihan == 9:
                    print("Dr. Novitasari, S.T., M.T.")
                elif pilihan == 10:
                    print("Dr. Hutagamissufardal, S.T., M.T.")
                elif pilihan == 11:
                    print("Dr. Nursiah Chairunnisa, S.T., M.Eng.")
                elif pilihan == 12:
                    print("Ir. Retna Hapsari Kartadipura, M.T.")
                elif pilihan == 13:
                    print("Ir. Ida Barkiah, M.T.")
                elif pilihan == 14:
                    print("Ir. Fauzi Rahman, M.T.")
                elif pilihan == 15:
                    print("Ir. Holdani Kurdi, M.T.")
                elif pilihan == 16:
                    print("Dr. Muhammad Arsyad, S.T., M.T")
                elif pilihan == 17:
                    print("Dr. Eng. Maya Amalia, S.T., M.Eng.")
                elif pilihan == 18:
                    print("Arie Febry Fardheny, S.T., M.T.")
                elif pilihan == 19:
                    print("Ulfa Fitriati, S.T., M.Eng.")
                elif pilihan == 20:
                    print("Eliatun, S.T., M.T.")
                else:
                    print("Nomor tidak valid.")
            elif anggota1_dari == 2:
                print("\nAnggota Penguji 1 [Non-FT]\n")
                print("PERHATIAN:")
                print("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Ketua Penguji TA")
                print("2) Isi data berikut, apabila Anggota  penguji 1 bukan DOSEN FT ULM (Pastikan penulisan \nNama, Gelar dan NIP/NIPK terisi dengan BENAR).")
                print("3) Lewati bagian ini, apabila Anggota penguji 1 merupakan Dosen FT ULM  (data Ketua Penguji TA [FT] sudah diisi).")
                nama_dosen4 = input_trim("Nama Anggota 1 (Non-FT): ")
                nip_dosen4 = input_trim("NIP Anggota 1 (Non-FT): ")


            print("\nApakah Anggota Penguji 2 TA berasal dari FT atau Non-FT?")
            print("1. Dosen FT ULM")
            print("2. Dosen Non-FT (luar FT ULM)")
            anggota2_input = input_trim("Pilih (1/2): ")
            anggota2_dari = safe_int(anggota2_input)

            if anggota2_dari == 1:
                print("\nDAFTAR ANGGOTA PENGUJI 2 [FT]")
                print("PERHATIAN:")
                print("1)  Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Anggota Penguji TA")
                print("2) Pilih daftar Nama berikut, apabila Anggota Penguji TA merupakan Dosen FT ULM.")
                print("3) Lewati bagian ini, apabila Anggota Penguji 2 bukan Dosen FT ULM  (isi data Anggota \nPenguji 2 [ Non-FT] pada kolom isian berikutnya).")
                print("Lewati bagian ini, apabila tidak ada Anggota Penguji 2")
                pilihan_input = input_trim("Pilih daftar Nama berikut(1-20): ")
                pilihan = safe_int(pilihan_input)
                if pilihan == 1:
                    print("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.")
                elif pilihan == 2:
                    print("Dr. Ir. Achmad Rusdiansyah, M.T.")
                elif pilihan == 3:
                    print("Dr. Ir. Rustam Effendi, M.A.Sc.")
                elif pilihan == 4:
                    print("Dr. Ir. Henry Wardhana, M.T.")
                elif pilihan == 5:
                    print("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.")
                elif pilihan == 6:
                    print("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.")
                elif pilihan == 7:
                    print("Dr.Eng. Irfan Prasetia, S.T., M.T.")
                elif pilihan == 8:
                    print("Dr. Rusdiansyah, S.T., M.T.")
                elif pilihan == 9:
                    print("Dr. Novitasari, S.T., M.T.")
                elif pilihan == 10:
                    print("Dr. Hutagamissufardal, S.T., M.T.")
                elif pilihan == 11:
                    print("Dr. Nursiah Chairunnisa, S.T., M.Eng.")
                elif pilihan == 12:
                    print("Ir. Retna Hapsari Kartadipura, M.T.")
                elif pilihan == 13:
                    print("Ir. Ida Barkiah, M.T.")
                elif pilihan == 14:
                    print("Ir. Fauzi Rahman, M.T.")
                elif pilihan == 15:
                    print("Ir. Holdani Kurdi, M.T.")
                elif pilihan == 16:
                    print("Dr. Muhammad Arsyad, S.T., M.T")
                elif pilihan == 17:
                    print("Dr. Eng. Maya Amalia, S.T., M.Eng.")
                elif pilihan == 18:
                    print("Arie Febry Fardheny, S.T., M.T.")
                elif pilihan == 19:
                    print("Ulfa Fitriati, S.T., M.Eng.")
                elif pilihan == 20:
                    print("Eliatun, S.T., M.T.")
                else:
                    print("Nomor tidak valid.")
            elif anggota2_dari == 2:
                print("\nAnggota Penguji 2 [Non-FT]\n")
                print("PERHATIAN:")
                print("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Ketua Penguji TA")
                print("2) Isi data berikut, apabila Anggota  penguji 2 bukan DOSEN FT ULM (Pastikan penulisan \nNama, Gelar dan NIP/NIPK terisi dengan BENAR).")
                print("3) Lewati bagian ini, apabila Anggota penguji 2 merupakan Dosen FT ULM  (data Ketua Penguji TA [FT] sudah diisi).")
                print("4) Lewati bagian ini, apabila tidak ada Anggota Penguji 2")
                nama_dosen5 = input_trim("Nama Anggota 2 (Non-FT): ")
                nip_dosen5 = input_trim("NIP Anggota 2 (Non-FT): ")

    
            print("\nApakah Anggota Penguji TA 3 berasal dari FT atau Non-FT?")
            print("1. Dosen FT ULM")
            print("2. Dosen Non-FT (luar FT ULM)")
            anggota3_input = input_trim("Pilih (1/2): ")
            anggota3_dari = safe_int(anggota3_input)

            if anggota3_dari == 1:
                print("\n   DAFTAR ANGGOTA PENGUJI 3 TA")
                print("PERHATIAN:")
                print("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Anggota Penguji TA")
                print("2) Pilih daftar Nama berikut, apabila Anggota Penguji 3 merupakan Dosen FT ULM.")
                print("3)  Lewati bagian ini, apabila Anggota Penguji 3 bukan Dosen FT ULM \n(isi data Anggota Penguji 3 [ Non-FT] pada kolom isian berikutnya).")
                print("4) Lewati bagian ini, apabila tidak ada Anggota Penguji 3")
                pilihan_input = input_trim("Pilih daftar Nama berikut(1-20): ")
                pilihan = safe_int(pilihan_input)
                if pilihan == 1:
                    print("Prof. Dr. Ir. Iphan Fitrian Radam, S.T., M.T.")
                elif pilihan == 2:
                    print("Dr. Ir. Achmad Rusdiansyah, M.T.")
                elif pilihan == 3:
                    print("Dr. Ir. Rustam Effendi, M.A.Sc.")
                elif pilihan == 4:
                    print("Dr. Ir. Henry Wardhana, M.T.")
                elif pilihan == 5:
                    print("Dr.-Ing. Yulian Firmana Arifin, S.T., M.T.")
                elif pilihan == 6:
                    print("Dr.-Ing. Puguh Budi Prakoso, S.T., M.Sc.")
                elif pilihan == 7:
                    print("Dr.Eng. Irfan Prasetia, S.T., M.T.")
                elif pilihan == 8:
                    print("Dr. Rusdiansyah, S.T., M.T.")
                elif pilihan == 9:
                    print("Dr. Novitasari, S.T., M.T.")
                elif pilihan == 10:
                    print("Dr. Hutagamissufardal, S.T., M.T.")
                elif pilihan == 11:
                    print("Dr. Nursiah Chairunnisa, S.T., M.Eng.")
                elif pilihan == 12:
                    print("Ir. Retna Hapsari Kartadipura, M.T.")
                elif pilihan == 13:
                    print("Ir. Ida Barkiah, M.T.")
                elif pilihan == 14:
                    print("Ir. Fauzi Rahman, M.T.")
                elif pilihan == 15:
                    print("Ir. Holdani Kurdi, M.T.")
                elif pilihan == 16:
                    print("Dr. Muhammad Arsyad, S.T., M.T")
                elif pilihan == 17:
                    print("Dr. Eng. Maya Amalia, S.T., M.Eng.")
                elif pilihan == 18:
                    print("Arie Febry Fardheny, S.T., M.T.")
                elif pilihan == 19:
                    print("Ulfa Fitriati, S.T., M.Eng.")
                elif pilihan == 20:
                    print("Eliatun, S.T., M.T.")
                else:
                    print("Nomor tidak valid.")
            elif anggota3_dari == 2:
                print("\n   Anggota Penguji 3 [Non-FT]\n")
                print("PERHATIAN:")
                print("1) Dosen Pembimbing TA TIDAK BOLEH dicantumkan sebagai Ketua Penguji TA")
                print("2) Isi data berikut, apabila Anggota  penguji 3 bukan DOSEN FT ULM (Pastikan penulisan \nNama, Gelar dan NIP/NIPK terisi dengan BENAR).")
                print("3) Lewati bagian ini, apabila Anggota penguji 3 merupakan Dosen FT ULM  (data Ketua Penguji TA [FT] sudah diisi).")
                nama_dosen6 = input_trim("Nama Anggota 3 (Non-FT): ")
                nip_dosen6 = input_trim("NIP Anggota 3 (Non-FT): ")

            print("Tahap II : Pengajuan Lemsah Tugas Akhir")
            print("PERHATIAN...!!")
            print("Bagian ini adalah bagian akhir form isian (Tahap II : Pengajuan Lemsah Tugas Akhir)")
            print("*) Sebelum klik SUBMIT, pastikan semua data yang anda isi telah BENAR. Kesalahan")
            print("pengisian data akan mengakibatkan terjadinya kesalahan redaksional pada Halaman ")
            print("Pengesahan TA yang dicetak secara online.")
            print("*) Setelah SUBMIT usulan ini, anda akan menerima email notifikasi dan mohon ", end="")
            print("BERSABAR untuk tidak mengajukan usulan baru sebelum anda menerima email notifikasi ")
            print("tersebut, karena akan mengganggu proses pada sistem layanan online ini.")
            print("*)  Untuk cek status proses Ujian TA yang anda ajukan, klik : https://bit.ly/kendali_TA\n")

            print("Apakah Anda ingin Submit?")
            print("1. Ya")
            print("2. Tidak")
            submit_input = input_trim("Pilih (1/2): ")
            s = safe_int(submit_input)
            submit = 1 if s == 1 else 0

        elif masuk_sbgai == 2:
            print("\n   Admin FT ULM   ")
            print("PERHATIAN:")
            print("Pastikan anda mengakses layanan TAHAP II ini melalui LINK yang disampaikan pada ")
            print("email notifikasi yang telah diterima.\n")
            validasi_admin = input_trim("Validasi Admin FT (II): Masukkan Kode: ")
            if validasi_admin == kode_admin:
                print(" Kode benar!")
                print("Apakah Anda ingin Submit?")
                print("1. Ya")
                print("2. Tidak")
                submit_input = input_trim("Pilih (1/2): ")
                s = safe_int(submit_input)
                submit = 1 if s == 1 else 0
                print("\n -selesai-")
            else:
                print("Kode salah!")
                print("\n -selesai-")


    elif tahap == 3:
        print("\n   Tahap III : Laporan Ujian Tugas Akhir  ")
        print("Form ini digunakan untuk laporan pelaksanaan sidang TA dan pengesahan Tugas ")
        print("Akhir/Skripsi/Thesis Mahasiswa FT ULM. ")
        print("PERHATIAN :")
        print("1) Pastikan anda mengakses layanan TAHAP III ini melalui LINK yang disampaikan pada ")
        print("email notifikasi yang telah diterima.")
        print("2) Untuk Mahasiswa TA, pastikan anda telah mengisi data pada TAHAP I dan TAHAP II ")

        print("\nMasuk Sebagai (III)")
        print("1. Mahasiswa FT ULM")
        print("2. Pembimbing")
        print("3. Validator Judul TA")
        print("4. Admin FT ULM")
        print("5. Admin Akademik FT")
        masuk_sebagai_input = input_trim("Pilih (1-5): ")
        masuk_sebagai = safe_int(masuk_sebagai_input)

        if masuk_sebagai == 1:
            print("Lemsah TA")
            print("Upload file scan (BUKAN FOTO) Halaman Pengesahan TA  yang telah ditandatangani")
            print("Penguji TA, Pemimbing TA dan Koordinator Program Studi dalam 1 file berformat *.PDF \nmaksimal 10 MB")
            file1 = input_trim("")  

            print("Naskah Final TA")
            print("Upload file naskah final TA  (setelah disetujui pemimbing dan penguji TA) dalam 1 file \nberformat *.PDF maksimal 100 MB")
            file2 = input_trim("")

            print("Keterangan MHS")
            keterangan_mhs = input_trim("")

            print("Tahap III : Laporan Ujian Tugas Akhir")
            print("PERHATIAN...!!")
            print("Bagian ini adalah bagian akhir form isian (Tahap III : Laporan Ujian Tugas Akhir)")
            print("*)  Sebelum klik (SUBMIT), pastikan semua data yang anda isi telah BENAR.")
            print("*)  Setelah (SUBMIT) usulan ini, anda akan menerima email notifikasi dan mohon")
            print("BERSABAR untuk tidak mengajukan usulan baru sebelum anda menerima email notifikasi ")
            print("tersebut, karena akan mengganggu proses pada sistem layanan online ini.")
            print("*)  Untuk cek status proses Ujian TA yang anda ajukan, klik : https://bit.ly/kendali_TA\n")

            print("Apakah Anda ingin Submit?")
            print("1. Ya")
            print("2. Tidak")
            submit_input = input_trim("Pilih (1/2): ")
            s = safe_int(submit_input)
            submit = 1 if s == 1 else 0

        elif masuk_sebagai == 2:
            print("\n  Pembimbing TA  ")
            print("Validasi Pembimbing TA ")
            pembimbing_ta = input_trim("Masukkan Kode: ")
            if pembimbing_ta == kode_pembimbing:
                print(" Kode benar!")
                print("\n -selesai-")
                print("Apakah Anda ingin Submit?")
                print("1. Ya")
                print("2. Tidak")
                submit_input = input_trim("Pilih (1/2): ")
                s = safe_int(submit_input)
                submit = 1 if s == 1 else 0
            else:
                print("Kode salah!")
                print("\n -selesai-")

        elif masuk_sebagai == 3:
            print("\n   Validator Judul TA   ")
            print("\nValidasi Validator Judul TA ")
            Validator_judul = input_trim("Masukkan Kode: ")
            if Validator_judul == kode_judul:
                print(" Kode benar!")
                print("Apakah Anda ingin Submit?")
                print("1. Ya")
                print("2. Tidak")
                submit_input = input_trim("Pilih (1/2): ")
                s = safe_int(submit_input)
                submit = 1 if s == 1 else 0
                print("\n -selesai-")
            else:
                print("Kode salah!")
                print("\n -selesai-")

        elif masuk_sebagai == 4:
            print("\n   Admin FT ULM   ")
            print("Validasi Admin FT (III)")
            validasi_admin2 = input_trim("Masukkan Kode: ")
            if validasi_admin2 == kode_admin2:
                print(" Kode benar!")
                print("Apakah Anda ingin Submit?")
                print("1. Ya")
                print("2. Tidak")
                submit_input = input_trim("Pilih (1/2): ")
                s = safe_int(submit_input)
                submit = 1 if s == 1 else 0
                print("\n -selesai-")
            else:
                print("Kode salah!")
                print("\n -selesai-")

        elif masuk_sebagai == 5:
            print("\n   Admin Akademik  ")
            print("Validasi AKA FT ")
            validasi_aka = input_trim("Masukkan Kode: ")
            if validasi_aka == kode_aka:
                print(" Kode benar!")
                print("Apakah Anda ingin Submit?")
                print("1. Ya")
                print("2. Tidak")
                submit_input = input_trim("Pilih (1/2): ")
                s = safe_int(submit_input)
                submit = 1 if s == 1 else 0
                print("\n -selesai-")
            else:
                print("Kode salah!")
                print("\n -selesai-")

    if submit == 1:
        print("\n Data berhasil disubmit!\n")
    else:
        print("\n Data dibatalkan.\n")

if __name__ == "__main__":
    main()

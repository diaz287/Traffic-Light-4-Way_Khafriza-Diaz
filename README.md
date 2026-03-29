# Simulasi Traffic Light 4 Arah dengan Arduino Uno

### Deskripsi Proyek
Proyek ini adalah simulasi sistem kontrol lampu lalu lintas empat arah yang dikendalikan oleh mikrokontroler Arduino Uno. Proyek ini dibuat untuk memenuhi **Tugas 3 Mata Kuliah Pemrograman Sistem Tertanam** oleh mahasiswa Teknik Mesin Universitas Negeri Semarang (UNNES), dengan konsentrasi Sistem Tertanam.

Simulasi ini mereplikasi siklus lampu lalu lintas yang realistis untuk persimpangan jalan dengan urutan putaran searah jarum jam (Utara, Timur, Selatan, Barat), memastikan kelancaran arus lalu lintas dan keamanan pejalan kaki.

### Spesifikasi Sistem dan Logika
Berdasarkan materi Pertemuan 4, sistem ini menerapkan prinsip Physical Computing dan GPIO untuk mengendalikan LED:

1.  **Siklus Berputar:** Arah lalu lintas aktif secara bergantian dengan urutan: Utara $\rightarrow$ Timur $\rightarrow$ Selatan $\rightarrow$ Barat.
2.  **Durasi Lampu:**
    * **Lampu Hijau (H):** Menyala selama 5 detik untuk setiap arah.
    * **Lampu Kuning (K):** Berkedip sebanyak 3 kali ($\approx$ 1,8 detik), kemudian menyala stabil selama 2 detik sebelum berpindah ke lampu merah.
    * **Lampu Merah (M):** Menahan lalu lintas di arah yang tidak aktif.
3.  **Logika Keamanan:** Hanya satu arah yang memiliki Lampu Hijau menyala pada satu waktu.
4.  **Kondisi Default:** Semua Lampu Merah menyala saat sistem pertama kali dijalankan (U-M, T-M, S-M, B-M menyala).

### Komponen yang Digunakan (Simulasi Tinkercad)
- 1x Arduino Uno R3
- 1x Breadboard Small
- 4x LED Merah (U-M, T-M, S-M, B-M)
- 4x LED Kuning (U-K, T-K, S-K, B-K)
- 4x LED Hijau (U-H, T-H, S-H, B-H)
- 12x Resistor 220 Ohm (untuk limitasi arus LED)
- Kabel Jumper (secukupnya)

### Pemetaan Pin GPIO (Tabel Pengkabelan)
Berikut adalah konfigurasi pin digital Arduino yang digunakan untuk mengendalikan setiap LED:

| Arah (Simpang) | Lampu Merah (M) | Lampu Kuning (K) | Lampu Hijau (H) |
| :--- | :---: | :---: | :---: |
| **Utara (U)** | Pin 13 | Pin 12 | Pin 11 |
| **Timur (T)** | Pin 10 | Pin 9 | Pin 8 |
| **Selatan (S)**| Pin 7 | Pin 6 | Pin 5 |
| **Barat (B)** | Pin 4 | Pin 3 | Pin 2 |

### Gambar Simulasi
<img width="1530" height="613" alt="Smooth Hillar-Rottis" src="https://github.com/user-attachments/assets/14a1fd79-0bc7-4602-9eb1-0db6cc5f0049" />


*Catatan: Gambar rangkaian dapat dilihat di file `wiring_diagram.png` di repository ini.*

### Menjalankan Simulasi
simulasikan proyek ini secara langsung melalui Tinkercad di tautan berikut:

[**>> KLIK DI SINI UNTUK MELIHAT SIMULASI TINKERCAD <<**]([PASTE_LINK_TINKERCAD_KAMU_DI_SINI](https://www.tinkercad.com/things/7klr8Epc9NP/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=cACq2LgvR4NCDKTESmq5pMKSEHih8vXpG9EQaa6hjD0))

---

### File yang Disertakan
- `traffic_light.ino`: Kode sumber Arduino C++.
- `README.md`: File dokumentasi ini.
- `wiring_diagram.png`: Gambar skema rangkaian.

---
**Penulis:** Khafriza Diaz Permana - Informatika (Pemrograman Sistem Tertanam). Universitas Jenderal Soedirman.

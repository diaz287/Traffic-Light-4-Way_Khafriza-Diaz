// Definisi Variabel Pin untuk 4 Arah
const int merahU = 13, kuningU = 12, hijauU = 11; // Utara
const int merahT = 10, kuningT = 9, hijauT = 8;   // Timur
const int merahS = 7, kuningS = 6, hijauS = 5;    // Selatan
const int merahB = 4, kuningB = 3, hijauB = 2;    // Barat

void setup() {
  // Fungsi setup() dijalankan sekali untuk inisialisasi mode pin
  // Mengatur pin 2 sampai 13 sebagai OUTPUT
  for(int i = 2; i <= 13; i++){
    pinMode(i, OUTPUT);
  }
  
  // Kondisi Default: Semua lampu merah menyala sebelum sistem berputar
  digitalWrite(merahU, HIGH);
  digitalWrite(merahT, HIGH);
  digitalWrite(merahS, HIGH);
  digitalWrite(merahB, HIGH);
}

void loop() {
  // Fungsi loop() menjalankan perintah berulang secara terus menerus
  // Urutan rotasi lalu lintas searah jarum jam
  aktifkanSimpang(merahU, kuningU, hijauU); // 1. Utara aktif
  aktifkanSimpang(merahT, kuningT, hijauT); // 2. Timur aktif
  aktifkanSimpang(merahS, kuningS, hijauS); // 3. Selatan aktif
  aktifkanSimpang(merahB, kuningB, hijauB); // 4. Barat aktif
}

// Fungsi modular untuk mengatur siklus satu sisi persimpangan
void aktifkanSimpang(int pinMerah, int pinKuning, int pinHijau) {
  // 1. Matikan lampu merah, nyalakan lampu hijau sisi ini
  digitalWrite(pinMerah, LOW);
  digitalWrite(pinHijau, HIGH);
  delay(5000); // Lampu hijau menyala selama 5 detik

  // 2. Matikan lampu hijau, mulai transisi ke lampu kuning
  digitalWrite(pinHijau, LOW);

  // 3. Lampu kuning berkedip 3 kali (durasi kedip 600ms per siklus)
  for(int i = 0; i < 3; i++) {
    digitalWrite(pinKuning, HIGH);
    delay(300);
    digitalWrite(pinKuning, LOW);
    delay(300);
  }

  // 4. Lampu kuning menyala stabil selama 2 detik
  digitalWrite(pinKuning, HIGH);
  delay(2000);
  digitalWrite(pinKuning, LOW);

  // 5. Kembalikan sisi ini ke kondisi lampu merah menyala
  digitalWrite(pinMerah, HIGH);
}

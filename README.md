# Potansiyometre Kontrollü Gece Lambası (Arduino)

Bu proje, Arduino ve potansiyometre (ayar düğmesi) yardımıyla parlaklığı veya çalışma durumu kontrol edilebilen, 3 adet LED'den oluşan basit ve şık bir gece lambası tasarımıdır.

##  Kullanılan Malzemeler

* Arduino (Örn: Uno)
* 3 adet LED (İstediğiniz renklerde)
* 1 adet Potansiyometre (10k)
* Dirençler (LED'ler için uygun değerde, örn: 220 ohm)
* Breadboard ve Jumper Kablolar

##  Devre Bağlantısı

1. Arduino üzerindeki analog pinlerden biri (örneğin `A0`) potansiyometrenin orta bacağına bağlanır.
2. 3 adet LED, Arduino'nun dijital pinlerine (örneğin `3`, `5`, `6`) uygun dirençlerle bağlanır.
3. Devrenin GND ve 5V bağlantıları tamamlanır.

##  Arduino Kodu

Projede kullanılan C++ kaynak kodunu `gece_lambasi.ino` dosyasında bulabilirsiniz.

##  Nasıl Çalıştırılır?
1. Kodu Arduino IDE programına kopyalayın.
2. Arduino kartınızı bilgisayara bağlayın.
3. Kodu karta yükleyin ve potansiyometreyi çevirerek LED'lerin tepkisini gözlemleyin!

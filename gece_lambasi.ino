// Pin Tanımlamaları
const int potPin = A0;      // Potansiyometre orta bacağı A0'da
const int kirmiziLED = 3;   // PWM pini
const int sariLED = 5;      // PWM pini
const int yesilLED = 6;     // PWM pini

int potDegeri = 0;          // Potansiyometreden okunacak ham değer (0-1023 arası)
int ledParlaklik = 0;       // LED'lere gönderilecek parlaklık (0-255 arası)

void setup() {
  Serial.begin(9600);
  
  // LED pinlerini çıkış olarak ayarlıyoruz
  pinMode(kirmiziLED, OUTPUT);
  pinMode(sariLED, OUTPUT);
  pinMode(yesilLED, OUTPUT);
}

void loop() {
  // 1. Potansiyometreden 0 ile 1023 arasında bir değer okuyoruz
  potDegeri = analogRead(potPin);
  
  // 2. Arduino analog değerleri 0-1023 arası okur ama LED'lere parlaklık sinyalini (PWM) 0-255 arası verir.
  // Bu yüzden map() fonksiyonu ile 0-1023 aralığını 0-255 aralığına oranlıyoruz.
  ledParlaklik = map(potDegeri, 0, 1023, 0, 255);
  
  // 3. Seri Monitörden değerleri kontrol edelim
  Serial.print("Pot Degeri: ");
  Serial.print(potDegeri);
  Serial.print(" -> LED Parlakligi: ");
  Serial.println(ledParlaklik);
  
  // 4. LED'lerin parlaklığını ayarlıyoruz (digitalWrite yerine analogWrite kullanıyoruz)
  analogWrite(kirmiziLED, ledParlaklik);
  analogWrite(sariLED, ledParlaklik);
  analogWrite(yesilLED, ledParlaklik);
  
  delay(10); // Kısa bir bekleme süresi
} 
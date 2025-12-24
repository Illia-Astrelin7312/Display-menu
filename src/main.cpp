#include <Arduino.h>

// Простой пример: мигающий LED без delay() — учим millis()
const uint8_t LED_PIN = 13;
unsigned long lastToggle = 0;
const unsigned long interval = 5000; // интервал в миллисекундах
bool ledState = false;

void setup() {
  Serial.begin(115200);            // последовательный порт — очень важен для логов
  pinMode(LED_PIN, OUTPUT);        // настраиваем пин как выход
  Serial.println("Start");         // приветствие — проверка загрузки
}

void loop() {
  unsigned long now = millis();    // текущее время с момента старта (мс)
  if (now - lastToggle >= interval) {
    lastToggle = now;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    Serial.println(ledState ? "LED ON" : "LED OFF"); // логируем — учим дебаг
  }

  // сюда позже добавим чтение кнопок, датчиков, и т.д.
}





// #include <Arduino.h>

// // Пины светодиодов
// const int yellowLED = 3;
// const int greenLED = 4;
// const int redLED = 5;

// // Интервалы мигания (в миллисекундах)
// const unsigned long redInterval = 200;
// const unsigned long yellowInterval = 500;
// const unsigned long greenInterval = 1000;

// // Последнее время переключения каждого LED
// unsigned long lastRedTime = 0;
// unsigned long lastYellowTime = 0;
// unsigned long lastGreenTime = 0;

// // Текущее состояние светодиодов
// bool redState = false;
// bool yellowState = false;
// bool greenState = false;

// void setup() {
//     pinMode(redLED, OUTPUT);
//     pinMode(yellowLED, OUTPUT);
//     pinMode(greenLED, OUTPUT);
// }

// void loop() {
//     unsigned long now = millis();  // "текущее время"

//     // --- 1) Красный LED ---
//     if (now - lastRedTime >= redInterval) {
//         lastRedTime = now;         // обновляем время
//         redState = !redState;      // инвертируем состояние
//         digitalWrite(redLED, redState);
//     }

//     // --- 2) Желтый LED ---
//     if (now - lastYellowTime >= yellowInterval) {
//         lastYellowTime = now;
//         yellowState = !yellowState;
//         digitalWrite(yellowLED, yellowState);
//     }

//     // --- 3) Зеленый LED ---
//     if (now - lastGreenTime >= greenInterval) {
//         lastGreenTime = now;
//         greenState = !greenState;
//         digitalWrite(greenLED, greenState);
//     }

//     // loop() работает без задержек → всё "параллельно"
// }




// #include <Arduino.h>

// // Пин для светодиода (встроенный LED или любой другой)
// const int LED_PIN = 13;

// // Системные переменные
// unsigned long lastToggle = 0;   // время последнего переключения
// bool ledState = false;          // текущее состояние светодиода

// void setup() {
//     Serial.begin(115200);              // запускаем последовательный порт
//     pinMode(LED_PIN, OUTPUT);          // настраиваем пин как выход
//     Serial.println("The program started");
// }

// void loop() {
//     unsigned long now = millis();      // текущее время в миллисекундах

//     if (now - lastToggle >= 500) {     // каждые 500 мс
//         lastToggle = now;              // обновляем время
//         ledState = !ledState;          // меняем состояние на противоположное
//         digitalWrite(LED_PIN, ledState); // включаем/выключаем светодиод

//         Serial.print("LED = ");
//         Serial.println(ledState ? "ON" : "OFF");
//     }
// }











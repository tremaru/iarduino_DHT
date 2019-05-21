#include <iarduino_DHT.h>   // подключаем библиотеку для работы с датчиком DHT
iarduino_DHT sensor(2);     // объявляем  переменную для работы с датчиком DHT, указывая номер цифрового вывода к которому подключён датчик (сейчас 2pin)
void setup(){
  Serial.begin(9600);       // открываем последовательный порт на скорости 9600 бод
  delay(1000);              // выполняем задержку для перехода датчика в активное состояние
}
void loop(){
  switch(sensor.read()){    // читаем показания датчика
    case DHT_OK:               Serial.println((String) "CEHCOP B KOMHATE: " + sensor.hum + "% - " + sensor.tem + "*C");  break;
    case DHT_ERROR_CHECKSUM:   Serial.println(         "CEHCOP B KOMHATE: HE PABEHCTBO KC");                     break;
    case DHT_ERROR_DATA:       Serial.println(         "CEHCOP B KOMHATE: OTBET HE COOTBETCTB. CEHCOPAM 'DHT'"); break;
    case DHT_ERROR_NO_REPLY:   Serial.println(         "CEHCOP B KOMHATE: HET OTBETA");                          break;
    default:                   Serial.println(         "CEHCOP B KOMHATE: ERROR");                               break;
  }
//  Количество опрашиваемых датчиков ограничено количеством свободных выводов и самих датчиков.
//  Библиотека iarduino_DHT.h сама определяет тип датчика (DHT11, DHT21, DHT22)
//  Если подключено два датчика (например, один к выводу 2, а второй к выводу 5), то в начале скетча, после подключения библиотеки,
//  нужно объявить две переменные, для работы с датчиками (по одной на каждый датчик).
//  #include <iarduino_DHT.h>
//  iarduino_DHT    sensor1(2);
//  iarduino_DHT    sensor2(5);
//    
//  sensor1.read(); // чтение    показаний   первого датчика
//  sensor1.hum     // показания влажности   первого датчика
//  sensor1.tem     // показания температуры первого датчика
//  sensor2.read(); // чтение    показаний   второго датчика
//  sensor2.hum     // показания влажности   второго датчика
//  sensor2.tem     // показания температуры второго датчика

  delay(2000);
}

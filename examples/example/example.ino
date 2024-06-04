#include <iarduino_DHT.h>      // Подключаем библиотеку для работы с датчиком DHT.
iarduino_DHT sensor(2);        // Создаём объект для работы с датчиком DHT, указывая номер цифрового вывода к которому подключён датчик (сейчас D2).
                               //
void setup(){                  //
  Serial.begin(9600);          // Открываем последовательный порт на скорости 9600 бод.
  delay(1000);                 // Выполняем задержку для перехода датчика в активное состояние после стабилизации питания.
}                              //
                               //
void loop(){                   //
  switch(sensor.read()){       // Читаем показания датчика:
    case DHT_OK:               Serial.println((String) "CEHCOP B KOMHATE: " + sensor.hum + "% - " + sensor.tem + "*C");  break;
    case DHT_ERROR_CHECKSUM:   Serial.println(         "CEHCOP B KOMHATE: HE PABEHCTBO KC");                             break;
    case DHT_ERROR_DATA:       Serial.println(         "CEHCOP B KOMHATE: OTBET HE COOTBETCTB. CEHCOPAM 'DHT'");         break;
    case DHT_ERROR_NO_REPLY:   Serial.println(         "CEHCOP B KOMHATE: HET OTBETA");                                  break;
    default:                   Serial.println(         "CEHCOP B KOMHATE: ERROR");                                       break;
  }                            //
                               //
  delay(2000);                 //
}                              //

//  Количество опрашиваемых датчиков ограничено количеством свободных выводов и самих датчиков.
//  Библиотека iarduino_DHT.h сама определяет тип датчика (DHT11, DHT21, DHT22)
//  Если подключено два датчика (например, один к выводу 2, а второй к выводу 5), то в начале скетча, после подключения библиотеки,
//  нужно создать два объекта, для работы с датчиками (по одному на каждый датчик).

//  #include <iarduino_DHT.h>  // Подключаем библиотеку для работы с датчиком DHT.
//  iarduino_DHT sensor1(2);   // Создаём объект для работы с первым датчиком DHT.
//  iarduino_DHT sensor2(5);   // Создаём объект для работы с вторым датчиком DHT.
//                             //
//  sensor1.read();            // Чтение    показаний   первого датчика.
//  sensor1.hum                // Показания влажности   первого датчика.
//  sensor1.tem                // Показания температуры первого датчика.
//  sensor2.read();            // Чтение    показаний   второго датчика.
//  sensor2.hum                // Показания влажности   второго датчика.
//  sensor2.tem                // Показания температуры второго датчика.
                               //

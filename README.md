[![](https://iarduino.ru/img/logo.svg)](https://iarduino.ru)[![](https://wiki.iarduino.ru/img/git-shop.svg?3)](https://iarduino.ru) [![](https://wiki.iarduino.ru/img/git-wiki.svg?2)](https://wiki.iarduino.ru) [![](https://wiki.iarduino.ru/img/git-lesson.svg?2)](https://lesson.iarduino.ru)[![](https://wiki.iarduino.ru/img/git-forum.svg?2)](http://forum.trema.ru)

# iarduino\_DHT

**This is a library for Arduino IDE. It allows to work with [DHT11](https://iarduino.ru/shop/Sensory-Datchiki/cifrovoy-datchik-temperatury-i-vlazhnosti-trema-modul.html) and [DHT22](https://iarduino.ru/shop/Sensory-Datchiki/cifrovoy-datchik-temperatury-i-vlazhnosti-vysokoy-tochnosti-trema-modul.html) temperature and humidity sensor modules made by iArduino.ru**

**Данная библиотека для Arduino IDE позволяет управлять модулями I2C [DHT11](https://iarduino.ru/shop/Sensory-Datchiki/cifrovoy-datchik-temperatury-i-vlazhnosti-trema-modul.html) и [DHT22](https://iarduino.ru/shop/Sensory-Datchiki/cifrovoy-datchik-temperatury-i-vlazhnosti-vysokoy-tochnosti-trema-modul.html) от [iArduino.ru](https://iarduino.ru)**

> Подробнее про установку библиотеки читайте в нашей [инструкции](https://wiki.iarduino.ru/page/Installing_libraries/).

> Подробнее про подключение к [Arduino UNO](https://iarduino.ru/shop/boards/arduino-uno-r3.html)/[Piranha UNO](https://iarduino.ru/shop/boards/piranha-uno-r3.html) читайте на нашей [wiki](https://wiki.iarduino.ru/page/cifrovoy-datchik-temperatury-i-vlazhnosti/#h3_3)


| Модель | Ссылка на магазин |
|---|---|
| <p>Цифровой датчик температуры и влажности</p> <img src="https://wiki.iarduino.ru/img/resources/609/609.svg" width="100px"></img>| https://iarduino.ru/shop/Sensory-Datchiki/cifrovoy-datchik-temperatury-i-vlazhnosti-trema-modul.html |
| <p>Цифровой датчик температуры и влажности высокой точности</p> <img src="https://wiki.iarduino.ru/img/resources/619/619.svg" width="100px"></img>| https://iarduino.ru/shop/Sensory-Datchiki/cifrovoy-datchik-temperatury-i-vlazhnosti-vysokoy-tochnosti-trema-modul.html |


## Назначение функций:

**Подробное описание работы с библиотекой и примеры смотрите на [нашем сайте](https://wiki.iarduino.ru/page/cifrovoy-datchik-temperatury-i-vlazhnosti/#h3_6)**

```C++
#include <iarduino_DHT.h> // Подключаем библиотеку.
iarduino_DHT ОБЪЕКТ( №_ВЫВОДА ); // Создаём объект, для работы с датчиком.
```


**Чтение показаний** 

```C++
ОБЪЕКТ.read(); // Чтение показаний датчика.
```

**Показания влажности** 

```C++
ОБЪЕКТ.hum; // Хранит полученные показания влажности (тип float).
```

**Показания температуры** 

```C++
ОБЪЕКТ.tem; // Хранит полученные показания температуры (тип float).
```


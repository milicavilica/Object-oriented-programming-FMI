# Практикум 04.04.2023

## Задача първа (файлове)
Искаме да създадем клас, който позволява на процесите да обменят информация под формата на съобщения.
Ще създадем **опашка от съобщения**, чрез която различните процеси ще си комуникират. Тя ще поддържа следните функционалности:

MessageQueue:
*  `MessageQueue(const char*, mode::open)`      Отваря съществуващ файл от който се четат или пишат съобщения.
*  `MessageQueue(const char*, mode::create)`     Създава файл от който се четат или пишат съобщения.
*  `void open(const char*, mode::open)`         Аналогично на конструктора.
*  `void open(const char*, mode::create)`        Аналогично на конструктора.
*  `size_t read(char*& msg)`               Прочита съобщение от опашката. Връща колко байта е големината на съобщението.
*  `void write(const char* msg, size_t size)`   Записва съобщение в опашката.
*  `void sync()`                                Зарежда най - новите промени от файла.


Опашката може да реализирате като използвате класът `vector`, който писахме на упражнения. Реализацията може да стане и без използването на този клас (работейки директно с потоци).

## Задача втора (голяма четворка)
Една интересна задачка можете да намерите [тук](https://github.com/stoychoX/Object-oriented-programming-FMI/tree/main/Practicum-SI/week06)
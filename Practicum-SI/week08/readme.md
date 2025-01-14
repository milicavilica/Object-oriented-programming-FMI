# практикум 4.20.2023

## Задача първа - контролно 1 КН 2021
Ще считаме, че всеки регистрационен номер на превозно средство е поредица от символи, подредени както следва:
    * един или два символа от латинската азбука, които указват населено място;
    * четири цифри;
    * два символа от латинската азбука.
Например `C1234AB`, `XY1111YX` са валидни регистрационни номера, а `111145`, `ABC34DEF`, `ABCDEF` и `C11D` не са.

Реализирайте клас Registration, който представя регистрационен номер. Вътрешно класът да пази информацията като низ от тип char[9], който съдържа символите на номера. Класът да има следния интерфейс:
* Класът НЕ ТРЯБВА да има конструктор по подразбиране.
* Registration(const char* str) - Ако str е невалиден номера има стойност `X XXXX X`
* Registration& operator=(const char* str) - Зарежда в обекта регистрационния номер записан в str. Ако str не съдържа
валиден регистрационен номер, хвърля изключение от тип std::exception.
* bool operator==(const Registration& rhs) const
* const char* toString() const

Реализирайте клас Vehicle (превозно средство).
За класа знаете, че:
* Няма конструктор по подразбиране
* Има регистрационен номер и описание с произволна дължина (може да използвате класът MyString)
* да се дефинира Vehicle(const char* _regnum, const char* _description)

Реализирайте клас VehicleList, който представя списък от превозни средства. Списъкът има капацитет, който се посочва при неговото създаване. Капацитетът може да бъде произволно голям. Той се подава само веднъж при създаването на списъка и после не може да се променя.
В списъка не трябва да може да се съдържат две превозни средства с еднакви номера.

Реализирайте следния интерфейс:
* VehicleList(size_t capacity)
* void insert(const char* regnum, const char* description) (може и const MyString& description). При неуспех хвърля изключение.
* const Vehicle& at(size_t index) const - Дава достъп до елемента, който се намира на позиция index. Ако такъв няма,
да се хвърля изключение от тип std::exception.
* const Vehicle& operator[](size_t pos) const - Реализира достъп до елемента, който се намира на позиция pos. Функцията да
не прави проверка за коректност дали pos е валидна позиция
* bool empty() const
* std::size_t capacity() const
* std::size_t size() const
* const Vehicle* find(const Registration& regnum) const

Бонус - Предложете идея за реализиране на find възможно най - бързо.
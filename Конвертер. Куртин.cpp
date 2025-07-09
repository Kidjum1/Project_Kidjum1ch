#include <iostream> // Подключаем стандартную библиотеку для ввода/вывода

using namespace std;

// --- Конвертер длины ---
void convertLength() {
    double value; // Входное значение от пользователя
    int unit;     // Номер выбранной операции

    // Отображение меню
    cout << "\n--- Конвертер длины ---\n";
    cout << "1. Метры в километры\n";
    cout << "2. Километры в мили\n";
    cout << "3. Сантиметры в дюймы\n";
    cout << "Выберите вариант: ";
    cin >> unit;

    cout << "Введите значение: ";
    cin >> value;

    // Выбор операции по номеру
    switch (unit) {
    case 1: cout << value / 1000 << " км\n"; break;          // 1 км = 1000 м
    case 2: cout << value * 0.621371 << " миль\n"; break;    // 1 км = 0.621371 миль
    case 3: cout << value * 0.393701 << " дюймов\n"; break;  // 1 см = 0.393701 дюйма
    default: cout << "Ошибка выбора.\n";                     // Обработка неправильного ввода
    }
}

// --- Конвертер веса ---
void convertWeight() {
    double value;
    int unit;

    cout << "\n--- Конвертер веса ---\n";
    cout << "1. Килограммы в фунты\n";
    cout << "2. Граммы в унции\n";
    cout << "Выберите вариант: ";
    cin >> unit;

    cout << "Введите значение: ";
    cin >> value;

    switch (unit) {
    case 1: cout << value * 2.20462 << " фунтов\n"; break;     // 1 кг = 2.20462 фунта
    case 2: cout << value * 0.035274 << " унций\n"; break;     // 1 г = 0.035274 унции
    default: cout << "Ошибка выбора.\n";
    }
}

// --- Конвертер температуры ---
void convertTemperature() {
    double value;
    int unit;

    cout << "\n--- Конвертер температуры ---\n";
    cout << "1. Цельсий в Фаренгейт\n";
    cout << "2. Фаренгейт в Цельсий\n";
    cout << "Выберите вариант: ";
    cin >> unit;

    cout << "Введите значение: ";
    cin >> value;

    switch (unit) {
    case 1: cout << (value * 9 / 5) + 32 << " °F\n"; break;   // Формула: C * 9/5 + 32
    case 2: cout << (value - 32) * 5 / 9 << " °C\n"; break;   // Формула: (F - 32) * 5/9
    default: cout << "Ошибка выбора.\n";
    }
}

// --- Конвертер валют (курс условный, фиксированный) ---
void convertCurrency() {
    double value;
    int unit;

    cout << "\n--- Конвертер валют ---\n";
    cout << "1. USD -> RUB (курс: 1 USD = 90 RUB)\n";
    cout << "2. RUB -> USD\n";
    cout << "Выберите вариант: ";
    cin >> unit;

    cout << "Введите сумму: ";
    cin >> value;

    switch (unit) {
    case 1: cout << value * 90 << " RUB\n"; break;     // Простой пересчет: 1 USD = 90 RUB
    case 2: cout << value / 90 << " USD\n"; break;
    default: cout << "Ошибка выбора.\n";
    }
}

// --- Конвертер скорости ---
void convertSpeed() {
    double value;
    int unit;

    cout << "\n--- Конвертер скорости ---\n";
    cout << "1. км/ч в м/с\n";
    cout << "2. миль/ч в км/ч\n";
    cout << "Выберите вариант: ";
    cin >> unit;

    cout << "Введите значение: ";
    cin >> value;

    switch (unit) {
    case 1: cout << value / 3.6 << " м/с\n"; break;          // 1 км/ч = 0.27778 м/с
    case 2: cout << value * 1.60934 << " км/ч\n"; break;     // 1 миля = 1.60934 км
    default: cout << "Ошибка выбора.\n";
    }
}

// --- Конвертер площади ---
void convertArea() {
    double value;
    int unit;

    cout << "\n--- Конвертер площади ---\n";
    cout << "1. Кв. метры в кв. километры\n";
    cout << "2. Кв. футы в кв. метры\n";
    cout << "Выберите вариант: ";
    cin >> unit;

    cout << "Введите значение: ";
    cin >> value;

    switch (unit) {
    case 1: cout << value / 1e6 << " км²\n"; break;         // 1 км² = 1 000 000 м²
    case 2: cout << value * 0.092903 << " м²\n"; break;     // 1 фут² = 0.092903 м²
    default: cout << "Ошибка выбора.\n";
    }
}

// --- Конвертер объема ---
void convertVolume() {
    double value;
    int unit;

    cout << "\n--- Конвертер объема ---\n";
    cout << "1. Литры в галлоны\n";
    cout << "2. Куб. метры в литры\n";
    cout << "Выберите вариант: ";
    cin >> unit;

    cout << "Введите значение: ";
    cin >> value;

    switch (unit) {
    case 1: cout << value * 0.264172 << " галлонов\n"; break;  // 1 литр = 0.264172 галлона
    case 2: cout << value * 1000 << " литров\n"; break;        // 1 м³ = 1000 литров
    default: cout << "Ошибка выбора.\n";
    }
}

// --- Главная функция (точка входа в программу) ---
int main() {
    setlocale(LC_ALL, "ru");
    int choice; // Переменная для выбора меню

    do {
        // Главное текстовое меню
        cout << "\n=== КОНВЕРТЕР ЕДИНИЦ ===\n";
        cout << "1. Длина\n";
        cout << "2. Вес\n";
        cout << "3. Температура\n";
        cout << "4. Валюта\n";
        cout << "5. Скорость\n";
        cout << "6. Площадь\n";
        cout << "7. Объем\n";
        cout << "0. Выход\n";
        cout << "Выберите категорию: ";
        cin >> choice; // Чтение выбора пользователя

        // Ветвление по выбору пользователя
        switch (choice) {
        case 1: convertLength(); break;
        case 2: convertWeight(); break;
        case 3: convertTemperature(); break;
        case 4: convertCurrency(); break;
        case 5: convertSpeed(); break;
        case 6: convertArea(); break;
        case 7: convertVolume(); break;
        case 0: cout << "Выход из программы...\n"; break;
        default: cout << "Неверный выбор. Повторите.\n";
        }

    } while (choice != 0); // Повторяем, пока пользователь не выберет выход

    return 0; // Завершение программы
}

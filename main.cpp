#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Инициализация генератора случайных чисел
    srand(time(0));
    
    // Генерация случайного числа от 1 до 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    
    cout << "=== УГАДАЙ ЧИСЛО ===" << endl;
    cout << "Я загадал число от 1 до 100." << endl;
    cout << "Попробуй угадать!" << endl << endl;
    
    do {
        cout << "Твоя попытка: ";
        cin >> guess;
        attempts++;
        
        if (guess > secretNumber) {
            cout << "Меньше!" << endl;
        } else if (guess < secretNumber) {
            cout << "Больше!" << endl;
        } else {
            cout << endl << "Поздравляю! Ты угадал число " << secretNumber;
            cout << " за " << attempts << " попыток!" << endl;
        }
        
    } while (guess != secretNumber);
    
    return 0;
}


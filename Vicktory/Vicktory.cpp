// Vicktory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

#include "themes.h"






const int MAX_PLAYERS = 100;

struct Player {
    std::string name;
    int score;
};

void addPlayer(const std::string& filename, const Player& player) {
    std::ofstream outFile(filename, std::ios::app);
    if (outFile.is_open()) {
        outFile << player.name << " " << player.score << std::endl;
        outFile.close();
    }
    else {
        std::cerr << "Не удалось открыть файл для записи." << std::endl;
    }
}

int loadPlayers(const std::string& filename, Player players[]) {
    std::ifstream inFile(filename);
    int count = 0;

    if (inFile.is_open()) {
        while (count < MAX_PLAYERS && inFile >> players[count].name >> players[count].score) {
            count++;
        }
        inFile.close();
    }
    else {
        std::cerr << "Не удалось открыть файл для чтения." << std::endl;
    }
    return count;
}

void sortPlayers(Player players[], int count) {
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (players[j].score < players[j + 1].score) {
                // Обмен значениями
                Player temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

void displayLeaderboard(const Player players[], int count) {
    std::cout << "Таблица лидеров:" << std::endl;
    for (int i = 0; i < count; ++i) {
        std::cout << "Игрок: " << players[i].name << ", Очки: " << players[i].score << std::endl;
    }
    std::cout << "________________________" << std::endl;
}


void scoretable(int yourScore) {

    const std::string filename{ "score.txt" };
    Player players[MAX_PLAYERS];
    int playerCount;

    // Загружаем таблицу лидеров из файла
    playerCount = loadPlayers(filename, players);

    int g{};
    std::cout << "Меню таблицы лидеров: " << '\n';
    std::cout << "1) Вывести таблицу " << '\n'
        << "2) Записать свой результат(Результат равен сумме очков за все три темы)" << std::endl
        << "3) Закончить работу" << std::endl;
    std::cout << "Впишите номер действия: ";
    std::cin >> g;
    if (g == 1){
        // Сортируем игроков по очкам
        sortPlayers(players, playerCount);
        // Выводим таблицу лидеров
        displayLeaderboard(players, playerCount);
        return;
    }
    else if (g == 2) {
        
        // Добавляем нового игрока
        Player newPlayer;
        std::cout << "Введите имя нового игрока: ";
        std::cin >> newPlayer.name;
        newPlayer.score = yourScore;

        // Добавляем игрока в файл
        addPlayer(filename, newPlayer);

        // Загружаем обновленную таблицу
        playerCount = loadPlayers(filename, players);

        // Сортируем игроков по очкам
        sortPlayers(players, playerCount);

        return;
    }
    else {
        return;
    }
    

    

    return;
}



int main()
{
    setlocale(LC_ALL, "Russian");
    int b{};
    int score1{};
    int score2{};
    int score3{};
    int yourScore{};

    while (b < 1) {
        int i{};
        std::cout << "(Выход из программы осуществляется с помощью CTRL + C)\n";
        std::cout << "Меню: " << '\n';
        std::cout << "1) Меню выбора тем " << '\n'
            << "2) Таблица лидеров" << std::endl
            << "3) Закончить работу" << std::endl;
        std::cout << "Ваш выбор: ";
        std::cin >> i;
        switch (i)
        {
        case(1):
            int i;
            std::cout << "(Выход из программы осуществляется с помощью CTRL + C)\n";
            std::cout << "Меню выбора тем: " << '\n';
            std::cout << "1) Игры(10 вопросов) " << '\n'
                << "2) Компьютер и его устройство(10 вопросов)" << '\n'
                << "3) Программирование(10 вопросов)" << std::endl;
            std::cout << "Ваш выбор: ";
            std::cin >> i;
            switch (i)
            {
            case(1):
                score1 = theme1();
                break;
            case(2):
                score2 = theme2();
                break;
            case(3):
                score3 = theme3();
                break;
            default:
                break;
            }

            break;
        case(2):
            yourScore = score1 + score2 + score3;
            scoretable(yourScore);
            break;
        
        case(3):
            ++b;
            break;
        default:
            break;
        }


    }
    
    


    

    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

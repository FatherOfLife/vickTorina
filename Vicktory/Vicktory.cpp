// Vicktory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void menu();

void theme1() {
    
    int questions{10}; //Количество вопросов
    int score{};
    int maxScore{21}; // Максимально очков в этой теме
    for (int i = 1; i < questions + 1; i++)
    {
        int rightAnswer{};
        int userAnswer{};
        
        int complexity{};//сложность(от 1 до 3)

        switch (i)
        {
        case(1):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "К какому жанру игры относится DOTA 2?" << '\n'; //вопрос
            std::cout << "1) Экшен" << '\n' //Варианты ответа
                      << "2) РПГ" << '\n'
                      << "3) Стратегии" << '\n'
                      << "4) Головоломки" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(2):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 1; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая игра вышла в 2020 году??" << '\n'; //вопрос
            std::cout << "1) Киберпанк 2077" << '\n' //Варианты ответа
                << "2) Ведьмак 3: Дикая Охота" << '\n'
                << "3) Fortnite" << '\n'
                << "4) Among Us" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(3):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Где используются джостики DualShock?" << '\n'; //вопрос
            std::cout << "1) ПК" << '\n' //Варианты ответа
                << "2) Xbox/PlayStation" << '\n'
                << "3) Мобильные устройства" << '\n'
                << "4) Nintendo Switch" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(4):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая игра считается одной из самых трудных за 2016 год?" << '\n'; //вопрос
            std::cout << "1) The Last of Us" << '\n' //Варианты ответа
                << "2) Red Dead Redemption 2" << '\n'
                << "3) Dark Souls 3" << '\n'
                << "4) Fortnite" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(5):
            complexity = 1; //сложность(от 1 до 3)
            rightAnswer = 4; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "К какому жанру игры относится Garry's Mod?" << '\n'; //вопрос
            std::cout << "1) Стрельба" << '\n' //Варианты ответа
                << "2)  Головоломки" << '\n'
                << "3) RPG-элементы" << '\n'
                << "4) Песочница" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(6):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 4; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "В какой игре символ \"Лама\"" << '\n'; //вопрос
            std::cout << "1) League of Legends" << '\n' //Варианты ответа
                << "2) Call of Duty: Warzone" << '\n'
                << "3) World of Warcraft" << '\n'
                << "4) Fortnite" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(7):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "В какой игре ровно 4 части и несколько DLC" << '\n'; //вопрос
            std::cout << "1) Assassin's Creed" << '\n' //Варианты ответа
                << "2) Uncharted" << '\n'
                << "3) Fallout" << '\n'
                << "4) Halo" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(8):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 3; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Когда вышла игра Minecraft" << '\n'; //вопрос
            std::cout << "1) 2016" << '\n' //Варианты ответа
                << "2) 2018" << '\n'
                << "3) 2011" << '\n'
                << "4) 2000" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(9):
            complexity = 3; //сложность(от 1 до 3)
            rightAnswer = 1; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "В какой игре 21 июня 2024 выйдет.вышла DLC" << '\n'; //вопрос
            std::cout << "1) Elden Ring" << '\n' //Варианты ответа
                << "2) Horizon Zero Dawn" << '\n'
                << "3) God of War" << '\n'
                << "4) Starfield" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(10):
            complexity = 2; //сложность(от 1 до 3)
            rightAnswer = 2; //Правильный ответ

            std::cout << "Вопрос №" << i << '\n';
            std::cout << "Какая игра из этих самая долгая?" << '\n'; //вопрос
            std::cout << "1) The Last of Us 2" << '\n' //Варианты ответа
                << "2) Red Dead Redemption 2" << '\n'
                << "3) Bioshock Infinite" << '\n'
                << "4) The Witcher 3: Wild Hunt" << '\n';

            std::cout << "Ваш ответ: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;

        default:
            break;
        }       

    }
    std::cout << "Ваши очки: " << score << "/" << maxScore << '\n';

    menu();


}

void theme2() { std::cout << '2' << '\n'; }

void theme3() { std::cout << '3' << '\n'; }

void menu() {
    setlocale(LC_ALL, "Russian");

    int i;
    std::cout << "МЕНЮ" << '\n';
    std::cout << "1)Игры " << '\n'
              << "2) " << '\n'
              << "3) " << '\n';
    std::cout << "Ваш выбор: ";
    std::cin >> i;
    switch (i)
        {
        case(1):
            theme1();
            break;
        case(2):
            theme2();
            break;
        case(3):
            theme3();
            break;
        default:
            break;
        }


}
int main()
{
    menu();

    

    
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

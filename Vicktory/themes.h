
int theme1() {

    int questions{ 10 }; //���������� ��������
    int score{};
    int maxScore{ 21 }; // ����������� ����� � ���� ����
    for (int i = 1; i < questions + 1; i++)
    {
        int rightAnswer{};
        int userAnswer{};

        int complexity{};//���������(�� 1 �� 3)

        switch (i)
        {
        case(1):
            complexity = 1; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "� ������ ����� ���� ��������� DOTA 2?" << '\n'; //������
            std::cout << "1) �����" << '\n' //�������� ������
                << "2) ���" << '\n'
                << "3) ����" << '\n'
                << "4) �����������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(2):
            complexity = 3; //���������(�� 1 �� 3)
            rightAnswer = 1; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ���� ����� � 2020 ����??" << '\n'; //������
            std::cout << "1) ��������� 2077" << '\n' //�������� ������
                << "2) ������� 3: ����� �����" << '\n'
                << "3) Fortnite" << '\n'
                << "4) Among Us" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(3):
            complexity = 1; //���������(�� 1 �� 3)
            rightAnswer = 2; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "��� ������������ �������� DualShock?" << '\n'; //������
            std::cout << "1) ��" << '\n' //�������� ������
                << "2) Xbox/PlayStation" << '\n'
                << "3) ��������� ����������" << '\n'
                << "4) Nintendo Switch" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(4):
            complexity = 2; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ���� ��������� ����� �� ����� ������� �� 2016 ���?" << '\n'; //������
            std::cout << "1) The Last of Us" << '\n' //�������� ������
                << "2) Red Dead Redemption 2" << '\n'
                << "3) Dark Souls 3" << '\n'
                << "4) Fortnite" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(5):
            complexity = 1; //���������(�� 1 �� 3)
            rightAnswer = 4; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "� ������ ����� ���� ��������� Garry's Mod?" << '\n'; //������
            std::cout << "1) ��������" << '\n' //�������� ������
                << "2)  �����������" << '\n'
                << "3) RPG-��������" << '\n'
                << "4) ���������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(6):
            complexity = 3; //���������(�� 1 �� 3)
            rightAnswer = 4; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "� ����� ���� ������ \"����\"" << '\n'; //������
            std::cout << "1) League of Legends" << '\n' //�������� ������
                << "2) Call of Duty: Warzone" << '\n'
                << "3) World of Warcraft" << '\n'
                << "4) Fortnite" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(7):
            complexity = 3; //���������(�� 1 �� 3)
            rightAnswer = 2; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "� ����� ���� ����� 4 ����� � ��������� DLC" << '\n'; //������
            std::cout << "1) Assassin's Creed" << '\n' //�������� ������
                << "2) Uncharted" << '\n'
                << "3) Fallout" << '\n'
                << "4) Halo" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(8):
            complexity = 2; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ����� ���� Minecraft" << '\n'; //������
            std::cout << "1) 2016" << '\n' //�������� ������
                << "2) 2018" << '\n'
                << "3) 2011" << '\n'
                << "4) 2000" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(9):
            complexity = 3; //���������(�� 1 �� 3)
            rightAnswer = 1; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "� ����� ���� 21 ���� 2024 ������.����� DLC" << '\n'; //������
            std::cout << "1) Elden Ring" << '\n' //�������� ������
                << "2) Horizon Zero Dawn" << '\n'
                << "3) God of War" << '\n'
                << "4) Starfield" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(10):
            complexity = 2; //���������(�� 1 �� 3)
            rightAnswer = 2; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ���� �� ���� ����� ������?" << '\n'; //������
            std::cout << "1) The Last of Us 2" << '\n' //�������� ������
                << "2) Red Dead Redemption 2" << '\n'
                << "3) Bioshock Infinite" << '\n'
                << "4) The Witcher 3: Wild Hunt" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;

        default:
            break;
        }

    }
    std::cout << "���� ����: " << score << "/" << maxScore << '\n';
    std::cout << "__________________________________________" << std::endl;
    return score;


}

int theme2() {

    int questions{ 10 }; //���������� ��������
    int score{};
    int maxScore{ 18 }; // ����������� ����� � ���� ����
    for (int i = 1; i < questions + 1; i++)
    {
        int rightAnswer{};
        int userAnswer{};

        int complexity{};//���������(�� 1 �� 3)

        switch (i)
        {
        case(1):
            complexity = 1; //���������(�� 1 �� 3)
            rightAnswer = 1; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "��� ����� ���������?" << '\n'; //������
            std::cout << "1) ����������� ������������ ����������" << '\n' //�������� ������
                << "2) ����������� ��������������� ����������" << '\n'
                << "3) ����������� ������ ������������" << '\n'
                << "4) ����������� ����� ����������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(2):
            complexity = 2; //���������(�� 1 �� 3)
            rightAnswer = 2; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� �� ������� ����������� �������� �� ��������� �������� ������ �� ����� �� ���������?" << '\n'; //������
            std::cout << "1) ������� ����" << '\n' //�������� ������
                << "2) ����������� ������" << '\n'
                << "3) ����������" << '\n'
                << "4) ���������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(3):
            complexity = 1; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ���������� ������������� ���������� ������������ ����������� � ���������?" << '\n'; //������
            std::cout << "1) LAN" << '\n' //�������� ������
                << "2) WAN" << '\n'
                << "3) Wi-Fi" << '\n'
                << "4) Ethernet" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(4):
            complexity = 2; //���������(�� 1 �� 3)
            rightAnswer = 2; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ������� �������� �� ���������� ��������� ������ ����� ����������� � ��� ������������ ������������?" << '\n'; //������
            std::cout << "1) ������������ �������" << '\n' //�������� ������
                << "2) �������" << '\n'
                << "3) ��������" << '\n'
                << "4) �������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(5):
            complexity = 1; //���������(�� 1 �� 3)
            rightAnswer = 1; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ���� ������������ ��� ����������� ������� � ����� � ����������?" << '\n'; //������
            std::cout << "1) USB" << '\n' //�������� ������
                << "2)  HDMI" << '\n'
                << "3) VGA" << '\n'
                << "4) Ethernet" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(6):
            complexity = 2; //���������(�� 1 �� 3)
            rightAnswer = 2; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "��� ����� ����?" << '\n'; //������
            std::cout << "1) ������� ������������ �������" << '\n' //�������� ������
                << "2) ����������� ����������� ��� ��������� ���������� ��� ���������" << '\n'
                << "3) ����������" << '\n'
                << "4) ��������� �������� ������������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(7):
            complexity = 3; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "��� �������� ������������ GPU?" << '\n'; //������
            std::cout << "1) ����� ���������" << '\n' //�������� ������
                << "2) ����������� ����" << '\n'
                << "3) ����������� ���������" << '\n'
                << "4) ����� ���� �������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(8):
            complexity = 1; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ������� �������� �� �������������� �������������� ������� � �������� ������?" << '\n'; //������
            std::cout << "1) ����������" << '\n' //�������� ������
                << "2) ���������" << '\n'
                << "3) �������� �����" << '\n'
                << "4) �������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(9):
            complexity = 2; //���������(�� 1 �� 3)
            rightAnswer = 1; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "��� �������� ������������ URL-�����?" << '\n'; //������
            std::cout << "1) ��������������� ��������� �������" << '\n' //�������� ������
                << "2) ������������� ��������� ������" << '\n'
                << "3) ������ ���� �������������r" << '\n'
                << "4) ������������� ������ �� �������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(10):
            complexity = 3; //���������(�� 1 �� 3)
            rightAnswer = 1; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "��� ����� IP-�����?" << '\n'; //������
            std::cout << "1) ���������� ������������� ���������� � ���� ��������" << '\n' //�������� ������
                << "2) ������� ��� ��� ��������-����������" << '\n'
                << "3) ����� ����������� �����" << '\n'
                << "4) ����� ����������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;

        default:
            break;
        }
        
    }
    std::cout << "���� ����: " << score << "/" << maxScore << '\n';
    std::cout << "__________________________________________" << std::endl;
    return score;



}

int theme3() {

    int questions{ 10 }; //���������� ��������
    int score{};
    int maxScore{ 21 }; // ����������� ����� � ���� ����
    for (int i = 1; i < questions + 1; i++)
    {
        int rightAnswer{};
        int userAnswer{};

        int complexity{};//���������(�� 1 �� 3)

        switch (i)
        {
        case(1):
            complexity = 2; //���������(�� 1 �� 3)
            rightAnswer = 2; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "��� ����� ���������?" << '\n'; //������
            std::cout << "1) ���� ����������������" << '\n' //�������� ������
                << "2) ����� ���������� ��� ���������� ������" << '\n'
                << "3) ���������� ��������������� �����" << '\n'
                << "4) ������ ��� ��������� ������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(2):
            complexity = 2; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ����������� ������������ � ����� ���������������� ��� ���������� ���������� ������������� ����� ����?" << '\n'; //������
            std::cout << "1) if-else" << '\n' //�������� ������
                << "2) �������������-�������" << '\n'
                << "3) for-����" << '\n'
                << "4) try-catch" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(3):
            complexity = 1; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "������� �������������� ���� � ������� �������� � ���������� ��������� ���������� ������������ �������������" << '\n'; //������
            std::cout << "1) �������" << '\n' //�������� ������
                << "2) �����" << '\n'
                << "3) �����" << '\n'
                << "4) ������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(4):
            complexity = 1; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "��� ����� \"����������\" � ����������������?" << '\n'; //������
            std::cout << "1) ����������, ����������� ��������" << '\n' //�������� ������
                << "2) ��������� ����������� ������������� ��������" << '\n'
                << "3) ����������� ��������� ��� ������" << '\n'
                << "4) �������, ������������, ����� ���� ���� ����� ��������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(5):
            complexity = 3; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ������� ������������ ��� ��������� ��������� ����� � ������ ����� ���������������� Python?" << '\n'; //������
            std::cout << "1) random()" << '\n' //�������� ������
                << "2) randint()" << '\n'
                << "3) randrange()" << '\n'
                << "4) randomin()\n";

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(6):
            complexity = 3; //���������(�� 1 �� 3)
            rightAnswer = 1; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����� ����������� ������������ ��� ��������� ���������� � ����� ���������������� Java?" << '\n'; //������
            std::cout << "1) try-catch" << '\n' //�������� ������
                << "2) if-else" << '\n'
                << "3) switch-case" << '\n'
                << "4) for-cycle" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(7):
            complexity = 1; //���������(�� 1 �� 3)
            rightAnswer = 1; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "��� ���������� ������� �������� ��������� ���� ��������� �� ������� ������ � �������� ���?" << '\n'; //������
            std::cout << "1) ����������" << '\n' //�������� ������
                << "2) �������������" << '\n'
                << "3) ���������" << '\n'
                << "4) ����������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(8):
            complexity = 2; //���������(�� 1 �� 3)
            rightAnswer = 2; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "��� ����� \"��������\" � ����������������?" << '\n'; //������
            std::cout << "1) ��������� ������������� ����" << '\n' //�������� ������
                << "2) ����� ������� �� ����� ����" << '\n'
                << "3) �������� ����� ���� �� ������ �������������" << '\n'
                << "4) �������� ����� ��������� ��� ����������" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(9):
            complexity = 3; //���������(�� 1 �� 3)
            rightAnswer = 3; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "����, ��������� ��������� Apple ��� ������������� iOS � macOS" << '\n'; //������
            std::cout << "1) bjective-C" << '\n' //�������� ������
                << "2) Xcode 6" << '\n'
                << "3) Swift" << '\n'
                << "4) iLang" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;
        case(10):
            complexity = 3; //���������(�� 1 �� 3)
            rightAnswer = 2; //���������� �����

            std::cout << "������ �" << i << '\n';
            std::cout << "������������� ����, ��������� �������� Google " << '\n'; //������
            std::cout << "1) Haskell" << '\n' //�������� ������
                << "2) Golang" << '\n'
                << "3) Clojure" << '\n'
                << "4) Android" << '\n';

            std::cout << "��� �����: ";
            std::cin >> userAnswer;
            if (rightAnswer == userAnswer) {

                score = score + 1 * complexity;
            }
            break;

        default:
            break;
        }

    }
    std::cout << "���� ����: " << score << "/" << maxScore << '\n';
    std::cout << "__________________________________________" << std::endl;
    return score;






}
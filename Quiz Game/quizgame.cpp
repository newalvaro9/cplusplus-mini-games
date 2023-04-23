#include <iostream>
#include <cmath>

int main()
{
    std::string questions[] = {"1. In what year did World War II end?",
                               "2. Who won the FIFA World Cup in 2018?",
                               "3. Which chemical element has the symbol \"Fe\"?",
                               "4. Who was the first man to walk on the moon?",
                               "5. Which country is the largest by land area?",
                               "6. What is the smallest planet in our solar system?",
                               "7. Which planet is known as the Red Planet?"};

    std::string options[][4] = {{"A. 1945", "B. 1942", "C. 1939", "D. 1951"},
                                {"A. Brazil", "B. Germany", "C. France", "D. Spain"},
                                {"A. Iron", "B. Gold", "C. Silver", "D. Oxygen"},
                                {"A. Buzz Aldrin", "B. Neil Armstrong", "C. Yuri Gagarin ", "D. Alan Shepard "},
                                {"A. United States", "B. China", "C. Canada", "D. Russia"},
                                {"A. Mars", "B. Venus", "C. Mercury", "D. Jupiter"},
                                {"A. Mars", "B. Venus", "C. Saturn", "D. Uranus"}};

    char answers[] = {'A', 'C', 'A', 'B', 'D', 'C', 'A'};

    int size = sizeof(questions) / sizeof(questions[0]);
    int rows = sizeof(options) / sizeof(options[0]);
    int columns = sizeof(options[0]) / sizeof(options[0][0]);

    char userAnswer;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << questions[i] << std::endl;
        for (int j = 0; j < columns; j++)
        {
            if (j == columns - 1)
            {
                std::cout << "   " << options[i][j];
            }
            else
            {
                std::cout << "   " << options[i][j] << std::endl;
            }
        }
        std::cout << std::endl;
        std::cin >> userAnswer;

        if (toupper(userAnswer) == answers[i])
        {
            std::cout << "\u2705 CORRECT!\n\n";
            score++;
        }
        else
        {
            std::cout << "\u274C WRONG!" << std::endl;
            std::cout << "The correct answer was: " << answers[i] << "\n\n";
        }
    }

    std::cout << "You scored " << round(((double)score / size) * 100) << "%";
}
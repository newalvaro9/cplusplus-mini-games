#include <iostream>

char getUserChoice()
{
    char choice;
    do
    {
        std::cout << "   R = Rock\n";
        std::cout << "   P = Papers\n";
        std::cout << "   S = Scissors\n";
        std::cout << "Choose one to play: ";
        std::cin >> choice;
    } while (choice != 'R' && choice != 'r' && choice != 'P' && choice != 'p' && choice != 'S' && choice != 's');

    return choice;
}

char getComputerChoice()
{
    srand(time(0));
    int choice = rand() % 2;

    switch (choice)
    {
    case 0:
        return 'R';
    case 1:
        return 'P';
    case 2:
        return 'S';
    default:
        return 'R';
    }
}

std::string showChoice(char choice)
{
    switch (choice)
    {
    case 'R':
    case 'r':
        return "Rock";
    case 'P':
    case 'p':
        return "Paper";
    case 'S':
    case 's':
        return "Scissors";
    }
    return "";
}

void decideWinner(std::string userChoice, std::string computerChoice)
{
    if (userChoice == computerChoice)
    {
        std::cout << "Tie!" << std::endl;
    }
    else if (userChoice == "Rock" && computerChoice == "Scissors" ||
             userChoice == "Paper" && computerChoice == "Rock" ||
             userChoice == "Scissors" && computerChoice == "Paper")
    {
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "Computer wins!" << std::endl;
    }
}

int main()
{
    std::string userChoice = showChoice(getUserChoice());
    std::cout << "Your choice " << userChoice << std::endl;

    std::string computerChoice = showChoice(getComputerChoice());
    std::cout << "Computer's choice " << computerChoice << std::endl;

    decideWinner(userChoice, computerChoice);

    return 0;
}
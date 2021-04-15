#include <mylib.h>

int main()
{
    string calc;
    int first, second, add, substract, multiply; float divide;
    char choice;
    int error;

    color(8);
    ifstream SPLASH("SPLASH.ASCII");
    for (string line; getline(SPLASH, line); )
    {
        cout << line << endl;
    }
    color(7);
    SPLASH.close();

    cout << "\n\n\nFor this operation, input the numbers you want to calculate." << endl;
    cout << "The operation of calculation will be down...\n" << endl;
    cout << "=====================\n" << endl;

    while(true){
    cout << "Input the first number: "; cin >> first;
    cout << "Input the second number: "; cin >> second;

    add = first + second;
    substract = first - second;
    multiply = first * second;
    divide = first / (float)second;

    cout << "\nAssembly operation: " << add << endl;
    cout << "Subtraction operation: " << substract << endl;
    cout << "Multiplication operation: " << multiply << endl;
    cout << "Splitting operation: " << divide << endl;

    cout << "\n=====================" << endl;
    cout << "\nContinue? ("; color(10); cout << "Y"; color(7); cout << "/"; color(12); cout << "N"; color(7); cout << ")...";

    c:
    cin >> choice;
    if (choice == 'Y'){}
    else if (choice == 'y'){}
    else if (choice == 'N')
        break;
    else if (choice == 'n')
        break;
    else
    {
        if (error == 10)
            exit(EXIT_FAILURE);

        else
        {
            error++;
            cout << "Invalid input. Please repeat...";
            goto c;
        }
    }

    CLS;
}
exit(EXIT_SUCCESS);
}

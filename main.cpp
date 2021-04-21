#include <mylib.h>

int main()
{
    int first, second, add, substract, multiply; float divide; //all numbers that needs to be converted
    char choice; //here the user will input it's choice to exit or not
    int error; //in case the program runs into a loop of errors

    //output SPLASH.ASCII file to the console
    color(8);//gray
    ifstream SPLASH("SPLASH.ASCII");
    for (string line; getline(SPLASH, line); )
    {
        cout << line << endl;
    }
    color(7);//default white
    SPLASH.close();//closes fstream for SPLASH.ASCII

    cout << "\n\n\nFor this operation, input the numbers you want to calculate." << endl;
    cout << "The operation of calculation will be down...\n" << endl;
    cout << "=====================\n" << endl;

    while(true){//while the user wants to run this program do this...
    cout << "Input the first number: "; cin >> first;
    cout << "Input the second number: "; cin >> second;

    //here will be calculated the numbers into more variables
    add = first + second;
    substract = first - second;
    multiply = first * second;
    divide = first / (float)second;

    //here will output what was calculated
    cout << "\nAssembly operation: " << add << endl;
    cout << "Subtraction operation: " << substract << endl;
    cout << "Multiplication operation: " << multiply << endl;
    cout << "Splitting operation: " << divide << endl;

    cout << "\n=====================" << endl;
    cout << "\nContinue? ("; color(10); cout << "Y"; color(7); cout << "/"; color(12); cout << "N"; color(7); cout << ")...";

    c:
    cin >> choice;
    if (choice == 'Y'){} //exit
    else if (choice == 'y'){} //exit
    else if (choice == 'N')
        break; //restarts
    else if (choice == 'n')
        break; //restarts
    else
    {
        if (error == 10)//in case the program had recorded more than 10 errors, it exits
            exit(EXIT_FAILURE);//exits with error

        else
        {
            error++; //adds 1 more error in the record system
            cout << "Invalid input. Please repeat..."; //in case the input is not y/n than go back to c and ask again
            goto c;
        }
    }
    CLS;//clears the screen via system()
}
exit(EXIT_SUCCESS);//exits with error
}

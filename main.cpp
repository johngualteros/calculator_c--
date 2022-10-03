#include <iostream>

using namespace std;

// function for sum operation
int sum(int number_one, int number_two){
    return number_one + number_two;
}
// function for Subtraction operation
int subtraction(int number_1, int number_2){
    return number_1 - number_2;
}
// function for Multiplication operation
int multiplication(int number_1, int number_2){
    return number_1 * number_2;    
}
// function for Division operation
int division(int number_1, int number_2){
    return number_1 / number_2;
}

int main()
{
    int number_1, number_2, option;
    
    cout << "Enter the first Number: ";
    cin >> number_1;
    
    cout << "Enter the second Number: ";
    cin >> number_2;
    
    
    cout << "\t\t----------------------------" << endl;
    cout << "\t\t------------Menu------------" << endl;
    cout << "\t\t1) Sum" << endl;
    cout << "\t\t2) Subtraction" << endl;
    cout << "\t\t3) Multiplication" << endl;
    cout << "\t\t4) Division" << endl;
    cout << "\t\tSelect the Option: ";
    cin >> option;
    
    switch(option)
    {
        case 1:
        cout << "The Result of operation is: " << sum(number_1, number_2) << endl;
        break;
        
        case 2:
        cout << "The Result of operation is: " << subtraction(number_1, number_2) << endl;
        break;
        
        case 3:
        cout << "The Result of operation is: " << multiplication(number_1, number_2) << endl;
        break;
        
        case 4:
        cout << "The Result of operation is: " << division(number_1, number_2) << endl;
        break;
        
        default:
            cout << "The option not is supported please select the correct option\n";
    }

    return 0;
}
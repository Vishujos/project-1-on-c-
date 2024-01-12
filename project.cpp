#include<iostream>
#include<string>
#include<cstring> // for strcmp
using namespace std;

int main() {
    char arr[][10] = {"mumbai", "csk", "india"}; // comparing
    string ch, ch1, ch2, ch3;
    int i;
    cout << "Enter the player name:\n";
    string Name;
    cin >> Name;
    cout << "Welcome " << Name << " to the guessing game :\n";

    for (i=1;i<=3;i++){
    switch(i)
    {
    case 1 :
         cout << "Hint 1: Enter the name of city:\n";
         cin >> ch;
         cout << "Entered string is: " << ch << "\n";

        if (strcmp(ch.c_str(), arr[0]) == 0) {
        cout << "Your score is 5!\n";
    } else {
        cout << "Entered answer is wrong. Please try again.\n";
        cout << "Hint 2: It's the capital city of one of the states in India.\n";
        cin >> ch1;

        if (strcmp(ch1.c_str(), arr[0]) == 0) {
            cout << "Your score is 3!\n";
        } else {
            cout << "Entered answer is wrong. Please try again.\n";
            cout << "Hint 3: It is known as the city of dreams.\n";
            cin >> ch2;

            if (strcmp(ch2.c_str(), arr[0]) == 0) {
                cout << "Your score is 2!\n";
            } else {
                cout << "Entered answer is wrong.\n";
                cout << "You have failed!\n";
            }
        }
    }
    break ;
    case 2:
        cout << "Hint 1: Enter the name of a cricket team:\n";
        cin >> ch;
        cout << "Entered string is: " << ch << "\n";
         if (strcmp(ch.c_str(), arr[1]) == 00) {
        cout << "Your score is 5!\n";
    } else {
        cout << "Entered answer is wrong. Please try again.\n";
        cout << "Hint 2: It is an IPL team:.\n";
        cin >> ch1;

        if (strcmp(ch1.c_str(), arr[1]) == 0) {
            cout << "Your score is 3!\n";
        } else {
            cout << "Entered answer is wrong. Please try again.\n";
            cout << "Hint 3: The team has won continuous IPL trophy.\n";
            cin >> ch2;

            if (strcmp(ch2.c_str(), arr[1]) == 0) {
                cout << "Your score is 2!\n";
            } else {
                cout << "Entered answer is wrong.\n";
                cout << "You have failed!\n";
            }
        }
    }
    break;
    case 3:
        cout << "Hint 1: Enter where you stay:\n";
        cin >> ch;
        cout << "Entered string is: " << ch << "\n";
         if (strcmp(ch.c_str(), arr[2]) == 0) {
        cout << "Your score is 5!\n";
    } else {
        cout << "Entered answer is wrong. Please try again.\n";
        cout << "Hint 2: It is a country:.\n";
        cin >> ch1;

        if (strcmp(ch1.c_str(), arr[2]) == 0) {
            cout << "Your score is 3!\n";
        } else {
            cout << "Entered answer is wrong. Please try again.\n";
            cout << "Hint 3: It is worlds most populated country.\n";
            cin >> ch2;

            if (strcmp(ch2.c_str(), arr[2]) == 0) {
                cout << "Your score is 2!\n";
            } else {
                cout << "Entered answer is wrong.\n";
                cout << "You have failed!\n";
            }
        }
    }
    break;
    default:
        cout << "Wrong choice entered\n";
        break;


    }
    }
    return 0;
}

/*switch(j)
    {
    case 1:
        int passlen ;
        cout << "Enter password length: ";
        cin >> passlen ;

            if (passlen >= 8 && passlen <= 12)
        {

            string randomPassword;
            for (int i = 0; i < passlen; ++i)
            {
                randomPassword += characters[rand() % characters.size()];
            }

            cout << "Random Password: " << randomPassword << endl;
        }
        else
        {
            cout << "Invalid password length. Password must be between 8 and 12 characters." << endl;
        }




        break;

}*/

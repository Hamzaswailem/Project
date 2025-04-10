#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;

void login();
void registration();
void forgot();
int main()
{
    int choice;
    char email[100];
    char password[100];
m:
    cout << "\t\t\t____________________________________________________________________________________\n\n\n";
    cout << "\t\t\t                          Welcome to the Login page                               \n\n\n";
    cout << "\t\t\t_______________________              Menu            _______________________________\n\n";
    cout << "\t\t\t|  Press 1 to Login                   \t\t\t\t\t\t   |" << endl;
    cout << "\t\t\t|  Press 2 to Register                \t\t\t\t\t\t   |" << endl;
    cout << "\t\t\t|  Press 3 if you forgot your password \t\t\t\t\t\t   |" << endl;
    cout << "\t\t\t|  Press 4 to Exit                    \t\t\t\t\t\t   |" << endl;

    cout << "\t\t\t                        Please enter your chocie " ;
    cin >> choice;

    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout << "\n\nExiting the program";
        exit(0);
    default:
        system("CLS"); // to clear the screan
        cout << "\n\nInvalid choice" << endl;
        main();
    }
    goto m;
    return 0;
}
void login()
{
    int count = 0;
    string userID, password, ID, pass;

    cout << "\n\n\t\t\tEnter your Username and Password.";
    cout << "\n\nUsrename: ";
    cin >> userID;
    cout << "Password: ";
    cin >> password;

    ifstream input("record.txt"); // to open fiel and streem what is inside

    while (input >> ID >> pass)
    { // input >> ID attempts to read the next value from the input stream into the variable ID.If that succeeds, input >> pass then attempts to read the following value into the variable pass.If both extractions are successful, the body of the while loop will execute.
        if (userID == ID && password == pass)
        {
            count = 1;
            system("cls"); // security procces help avoiding third party interactions
        }
    }
    input.close(); // close file
    if (count == 1)
    {
        cout << userID << "\nThank you for Loginning in";
        system("cls"); // due safety
        main();
    }
    else
        cout << "\nLOGIN Error \nPlease check your username or password";
    system("cls");
    main();
}
void registration() {
    int count = 0;
    string ID , pass;
    cout << "\n\n Welcome to our registration panel";
    cout << "\n For registration you should creat Username and password";
    cout << "\n UserName: ";
    cin >> ID;
    cout << "\n Password: ";
    cin >> pass;

    ofstream f1("record.txt", ios::out); // to write inside the file. //we can use (app or out) 
    f1 << ID << ' ' << pass << endl;
    system("cls");
    cout << "\nRegistration Successful";
    f1.close();
}
void forgot(){
    int option;
    system("cls");
    cout << "press 1 to search your id by username"<< endl;
    cout << "press 2 to go back to the main menu"<< endl;
    cin >> option;
    switch(option){
        case 1: {
        int count = 0;
        string id ,userid, pass;
        cout << "Enter username you remember: ";
        cin >> id;
        
        ifstream f("record.txt");
        while(f>>id>>pass){
            if(id == userid){
                count = 1;
                break;
            }
        }
    f.close();
    if(count ==1){
        cout << "your pass is"<<pass << endl;
        system("pause");
        main();
    }
    else break;
    }
    case 2 :{
    main();
    break;
    }

    default: {
        cout << "Invalid choice!" << endl;
        system("pause");
        forgot();
        }
    }
}
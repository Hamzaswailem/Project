#include <iostream>
using namespace std;

int main()
{

    int quant;
    int choice;

    // items that we have
    int Qroom = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken_roll = 0;
    // items that we sold
    int sroom = 0, spasta = 0, sburger = 0, snoodles = 0, sshake = 0, schicken_roll = 0;
    // Total price
    int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0, total_chicken_roll = 0;

    cout << "\t\tQuantity of items we have ";
    cout << "\n\nQuantity of rooms : ";
    cin >> Qroom;
    cout << "\n\nQuantity of pasta : ";
    cin >> Qpasta;
    cout << "\nQuantity of burger : ";
    cin >> Qburger;
    cout << "\nQuantity of noodles : ";
    cin >> Qnoodles;
    cout << "\nQuantity of shake : ";
    cin >> Qshake;
    cout << "\nQuantity of chicken_roll : ";
    cin >> Qchicken_roll;
//while(choice != 8){  // replace it by goto ....;
    m:
    cout << "\n\n\t\tPlease select from the menu options";
    cout << "\n1) Room";
    cout << "\n2) pasta";
    cout << "\n3) burger";
    cout << "\n4) Noodels";
    cout << "\n5) shake";
    cout << "\n6) chicken_roll";
    cout << "\n7) Information regarding sales and collection";
    cout << "\n8) Exit";
    
    cout << "\n\nChoose a number : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the number of rooms you want : ";
        cin >> quant;
        if (Qroom - sroom >= quant)
        {
            sroom = sroom + quant;
            total_rooms = total_rooms + (quant * 1200);
            cout << "you have booked " << quant << " room/rooms";
        }
        else
            cout << "\nonly " << Qroom - sroom << " rooms remaining";
        break;

    case 2:
        cout << "Enter the number of pasta you want : ";
        cin >> quant;
        if (Qpasta - spasta >= quant)
        {
            spasta = spasta + quant;
            total_pasta = total_pasta + (quant * 250);
            cout << "\nyou have ordered " << quant << " order of pasta";
        }
        else
            cout << "\nonly " << Qpasta - spasta << " remaining";
        break;

    case 3:
        cout << "Enter the number of burger you want : ";
        cin >> quant;
        if (Qburger - sburger >= quant)
        {
            sburger = sburger + quant;
            total_burger = total_burger + (quant *120);
            cout << "you have ordered " << quant << " burgers";
        }
        else
            cout << "\nonly " << Qburger - sburger << " remaining";
        break;

    case 4:
        cout << "Enter the number of noodels you want : ";
        cin >> quant;
        if (Qnoodles - snoodles >= quant)
        {
            snoodles = snoodles + quant;
            total_noodles = total_noodles + (quant * 140);
            cout << "you have ordered " << quant << " noodles";
        }
        else
            cout << "\nonly " << Qnoodles - snoodles << " remaining"; break;

    case 5:
        cout << "Enter the number of shake you want : ";
        cin >> quant;
        if (Qshake - sshake >= quant)
        {
            sshake = sshake + quant;
            total_shake = total_shake + (quant * 120);
            cout << "you have ordered " << quant << " of shake/shakes";
        }
        else
            cout << "\nonly " << Qshake - sshake << " remaining";
        break;

    case 6:
        cout << "Enter the number of chikin_role you want : " ;cin >> quant;
        if (Qchicken_roll - schicken_roll >= quant)
        {
            schicken_roll = schicken_roll + quant;
            total_chicken_roll = total_chicken_roll + (quant * 150);
            cout << "you have orderd " << quant << " chicken_roll";
        }
        else
            cout << "\nonly " << Qchicken_roll - schicken_roll << " remaining";
        break;

    case 7:
        cout << "\n\n\tDetails of sales and collection";
        cout << "\n\nNumber of rooms we have: " << Qroom;
        cout << "\n\nNumber of rooms we gave for rent: "<< sroom;
        cout << "\n\nRemaining rooms: " << Qroom - sroom;
        cout << "\n\nRooms revenue: " << total_rooms <<"$";

        cout << "\n------------------------------------------------------\n";
        cout << "\n\nNumber of pasta we have: " << Qpasta;
        cout << "\n\nNumber of pasta we gave for rent: "<< spasta;
        cout << "\n\nRemaining pasta: " << Qpasta - spasta;
        cout << "\n\npasta revenue: " << total_pasta<< "$";

        cout << "\n---------------------------------------------------------\n";
        cout << "\n\nNumber of burgers we have: " << Qburger;
        cout << "\n\nNumber of burgers we gave for rent: "<< sburger;
        cout << "\n\nRemaining burgers: " << Qburger - sburger;
        cout << "\n\nburgers revenue: " << total_burger << "$";

        cout << "\n---------------------------------------------------------\n";
        cout << "\n\nNumber of Noodles we have: " << Qnoodles;
        cout << "\n\nNumber of Noodles we gave for rent: "<< snoodles;
        cout << "\n\nRemaining Noodles: " << Qnoodles - snoodles;
        cout << "\n\nNoodles revenue: " << total_noodles<<"$";

        cout << "\n---------------------------------------------------------\n";
        cout << "\n\nNumber of shakes we have: " << Qshake;
        cout << "\n\nNumber of shakes we gave for rent: "<< sshake;
        cout << "\n\nRemaining shakes: " << Qshake - sshake;
        cout << "\n\nshakes revenue: " << total_shake<<"$";

        cout << "\n---------------------------------------------------------\n";
        cout << "\n\nNumber of chicken_rolls we have: " << Qchicken_roll;
        cout << "\n\nNumber of chicken_rolls we gave for rent: "<< schicken_roll;
        cout << "\n\nRemaining chicken_rolls: " << Qchicken_roll - schicken_roll;
        cout << "\n\nchicken_rolls revenue: " << total_chicken_roll<<"$";

    case 8 :
    cout << "\n\nExiting the program";
    exit(0);

    default :
    cout << "\n\nInvalid choice";
}

//}
goto m; 
return 0;
}

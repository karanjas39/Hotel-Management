#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

const int maxRoomsInHotel = 3;
int roomsBooked = 0;

class hotel
{
    string id;
    string password;

public:
    inline void welcomePage();
    inline void mainMenuPage();
    inline void screenHeader(string);
    inline void roomFeatures();
    void bookingPortal();
    void confirmation();
    void cancellation();
    void checkout();
    hotel();
} JD_HOTEL;

class customer
{
    string name;
    string phoneNumber;
    int roomNumber;
    int index;
    string roomTypes[5];
    char extraBedNeeded;
    int extraBedCharges;
    int stayDays;
    int totalMoney;
    int moneyPaid;
    int advanceMoney;
    int roomAdvanceList[5];
    int perDayRentList[5];

public:
    string whatsappNumber;
    void getDetails();
    inline void printDetails();
    void editDetails();
    void payment();
    inline void printConfirmationDetails();
    inline void refund();
    inline char customerCheckOut();
    customer();
} *tempCustomer;

class customerRecordRegister
{
public:
    char roomAvailableMode;
    int roomNumber;
    customer *customerNodeAddress;
    customerRecordRegister *link;

} *start = NULL;

void wait(int);

int main()
{
    JD_HOTEL.welcomePage();
}

//********************************************************HOTEL CLASS MEMBERS************************************************************************************
hotel::hotel()
{
    customerRecordRegister *ptr;
    for (int i = 1; i <= maxRoomsInHotel; i++)
    {
        customerRecordRegister *temp = new customerRecordRegister;
        if (i == 1)
            start = temp;
        if (i > 1)
            ptr->link = temp;
        ptr = temp;
        temp->roomAvailableMode = 'y';
        temp->customerNodeAddress = NULL;
        temp->roomNumber = i;
        if (i == maxRoomsInHotel)
            temp->link = NULL;
    }
    password = "admin@123";
    id = "admin";
}
void hotel::screenHeader(string print)
{
    cout << "====================================================================================================================================\n";
    cout << "                                                        JD HOTEL                                                    \n";
    cout << "====================================================================================================================================\n\n";
    if (print != "")
    {
        cout << "                                                         " << print << "\n\n";
    }
}
void hotel::welcomePage()
{
    system("clear");
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+                                               JD HOTEL                                                    +" << endl;
    cout << "+                                                                                                           +" << endl;
    cout << "+                                                           Near BSF Chowk, G.T. Road, Jalandhar City       +" << endl;
    cout << "+                                                                                Punjab 144001, INDIA       +" << endl;
    cout << "+                                                                                      +91 7348577966       +" << endl;
    cout << "+                                                                                                           +" << endl;
    cout << "+ JD Hotel is one of the newest Hotel in Jalandhar,Punjab . The Hotel is equipped with  all the general     +" << endl;
    cout << "+ amenities and facilities that go along with memorable stay. Set amidst beautifully landscaped gardens,    +" << endl;
    cout << "+ it proves to be a ideal dream destination for perceptive traveller.The Hotel have well furnished rooms    +" << endl;
    cout << "+ along with rooms providing pleasent views of the city. The hotel satisfies the needs of business          +" << endl;
    cout << "+ as well as the leisure traveller. All the rooms at the thotel are furnished beautifully. All the          +" << endl;
    cout << "+ rooms are fitted with amenities.                                                                          +" << endl;
    cout << "+                                               AMENITIES                                                   +" << endl;
    cout << "+1. 100% Power backup                                                                                       +" << endl;
    cout << "+2. Automatic Lift                                                                                          +" << endl;
    cout << "+3. Ample parking space                                                                                     +" << endl;
    cout << "+4. Round the clock security                                                                                +" << endl;
    cout << "+5. Running hot and cold water                                                                              +" << endl;
    cout << "+6. Free Internet Service                                                                                   +" << endl;
    cout << "+7. 24 hours room Service                                                                                   +" << endl;
    cout << "+8. Laundary Service                                                                                        +" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "Press Enter to continue!!";
    cin.ignore();
    mainMenuPage();
}
void hotel::mainMenuPage()
{
againHome:
    system("clear");
    int option;
    screenHeader("HOME");
    cout << "                                                                                                                   ROOMS AVAILABLE : " << maxRoomsInHotel - roomsBooked << "\n";
    cout << "Choose a category:\n\n1. Features of Room\n2. Booking\n3. Confirmation\n4. Cancellation\n5. Checkout\n6. Exit" << endl;
    cout << "\nSelect ";
    cin >> option;
    switch (option)
    {
    case 1:
        roomFeatures();
        break;
    case 2:
        bookingPortal();
        break;
    case 3:
        confirmation();
        break;
    case 4:
        cancellation();
        break;
    case 5:
        checkout();
        break;
    case 6:
        system("clear");
        cout << "Thanks for Visit :)" << endl;
        cout << "                                                                                                               POWERED BY : DHILLON DEV" << endl;
        break;
    default:
        goto againHome;
    }
}
void hotel::roomFeatures()
{
againRoomFeature:
    int sel;
    system("clear");
    screenHeader("ROOM FEATURES");
    cout << "Room Types:\n\n";
    cout << "1.Special Delux\n2.Delux\n3.General\n4.Couple\n5.Couple Delux\n";
    cout << "\nSelect ";
    cin >> sel;
    if (sel < 6 && sel > 0)
    {
        switch (sel)
        {
        case 1:
            system("clear");
            screenHeader("");
            printf("\n Room number            >>> 1");
            printf("\n Advance                >>> 750\n\n");
            printf("\n                      FEATURES OF THIS ROOM                       ");
            printf("\n------------------------------------------------------------------");
            printf("\n\n Room Type            >>> Special Delux");
            printf("\n\n Room charges         >>> Rs.1500 per day");
            printf("\n\n 1.Bed                >>> 2");
            printf("\n\n 2.Capacity           >>> 5");
            printf("\n\n 3.Balcony available     ");
            printf("\n------------------------------------------------------------------");
            printf("\n                     ADDITIONAL FEATURES                        ");
            printf("\n------------------------------------------------------------------");
            printf("\n\n 1.A/C  available ");
            printf("\n\n 2.Geyser available");
            printf("\n\n 3.TV available      ");
            printf("\n------------------------------------------------------------------");
            printf("\n NOTE :- Extra bed will cost Rs.50 per bed\n");
            break;
        case 2:
            system("clear");
            screenHeader("");
            printf("\n Room number            >>> 2\n\n");
            printf("\n Advance                >>> 500\n\n");
            printf("\n                      FEATURES OF THIS ROOM                       ");
            printf("\n-------------------------------------------------------------------");
            printf("\n\n Room Type            >>> Delux                                      ");
            printf("\n\n Room charges         >>> Rs.1000 per day");
            printf("\n\n 1.Bed                >>> 2");
            printf("\n\n 2.Capacity           >>> 5");
            printf("\n-------------------------------------------------------------------");
            printf("\n                    ADDITIONAL FEATURES                        ");
            printf("\n-------------------------------------------------------------------");
            printf("\n\n 1.A/C available   ");
            printf("\n\n 2.Geyser available");
            printf("\n\n 3.TV available      ");
            printf("\n-------------------------------------------------------------------");
            printf("\n NOTE :- Extra bed will cost Rs.50 per bed\n");
            break;
        case 3:
            system("clear");
            screenHeader("");
            printf("\n Room number            >>> 3\n\n");
            printf("\n Advance                >>> 400\n\n");
            printf("\n                      FEATURES OF THIS ROOM                       ");
            printf("\n-------------------------------------------------------------------");
            printf("\n\n Room Type            >>> General                                    ");
            printf("\n\n Room charges         >>> Rs.750 per day");
            printf("\n\n 1.Bed                >>> 2");
            printf("\n\n 2.Capacity           >>> 5");
            printf("\n-------------------------------------------------------------------");
            printf("\n                    ADDITIONAL FEATURES                        ");
            printf("\n-------------------------------------------------------------------");
            printf("\n\n 1.Geyser available      ");
            printf("\n-------------------------------------------------------------------");
            printf("\n NOTE :- Extra bed will cost Rs.50 per bed\n");
            break;
        case 4:
            system("clear");
            screenHeader("");
            printf("\n Room number            >>> 4\n\n");
            printf("\n Advance                >>> 500\n\n");
            printf("\n                      FEATURES OF THIS ROOM                       ");
            printf("\n-------------------------------------------------------------------");
            printf("\n\n Room Type            >>> Couple                                     ");
            printf("\n\n Room charges         >>> Rs.1000 per day");
            printf("\n\n 1.Bed                >>> 1");
            printf("\n\n 2.Capacity           >>> 2");
            printf("\n-------------------------------------------------------------------");
            printf("\n                    ADDITIONAL FEATURES                        ");
            printf("\n-------------------------------------------------------------------");
            printf("\n\n 1.Geyser available");
            printf("\n\n 2.TV available      ");
            printf("\n-------------------------------------------------------------------");
            printf("\n NOTE :- Extra bed will cost Rs.50 per bed\n");
            break;
        case 5:
            system("clear");
            screenHeader("");
            printf("\n Room number            >>> 5\n\n");
            printf("\n Advance                >>> 750\n\n");
            printf("\n                      FEATURES OF THIS ROOM                       ");
            printf("\n-------------------------------------------------------------------");
            printf("\n\n Room Type            >>> Couple Delux                                    ");
            printf("\n\n Room charges         >>> Rs.1500 per day");
            printf("\n\n 1.Bed                >>> 1");
            printf("\n\n 2.Capacity           >>> 2");
            printf("\n-------------------------------------------------------------------");
            printf("\n                    ADDITIONAL FEATURES                        ");
            printf("\n-------------------------------------------------------------------");
            printf("\n\n 1.A/C available   ");
            printf("\n\n 2.Geyser available");
            printf("\n\n 3.TV available      ");
            printf("\n-------------------------------------------------------------------");
            printf("\n NOTE :- Extra bed will cost Rs.50 per bed\n");
            break;
        }
        cout << "\n\nChoose: 1. Booking  2. Rooms Feature  3. Menu\n";
        cout << "\nSelect ";
        cin >> sel;
        if (sel == 1)
            bookingPortal();
        else if (sel == 2)
            roomFeatures();
        else if (sel == 3)
            mainMenuPage();
        else
            goto againRoomFeature;
    }
    else
        goto againRoomFeature;
}
void hotel::bookingPortal()
{
    system("clear");
    screenHeader("BOOKING");
    if (roomsBooked >= maxRoomsInHotel)
    {
        system("clear");
        cout << "NO ROOMS AVAILABLE :(\n";
        cout << "YOU CAN TRY OUR RESTAURANT SERVICE\n";
        wait(1);
        JD_HOTEL.mainMenuPage();
    }
    else
    {
        system("clear");
        screenHeader("FILL THE DETAILS");
        tempCustomer = new customer;
        tempCustomer->getDetails();
    }
}
void hotel::confirmation()
{
    system("clear");
    JD_HOTEL.screenHeader("CONFIRMATION TAB");
    int TroomNumber, repeat = 0;
    string TphoneNumber;
    customerRecordRegister *temp = start;
    cout << "ENTER ROOM NUMBER : ";
    cin >> TroomNumber;
    if (TroomNumber > maxRoomsInHotel || TroomNumber < 1)
    {
        cout << "ROOMS NUMBER DOES NOT EXIST\n";
        wait(1);
        JD_HOTEL.mainMenuPage();
    }
    while (temp->roomNumber != TroomNumber)
    {
        temp = temp->link;
    }
    if (temp->roomAvailableMode == 'n')
    {
        cout << "FOR CONFIRMATION!!\n";
        cout << "ENTER REGISTERED WHATSAPP PHONE NUMBER: ";
        cin >> TphoneNumber;
        while (TphoneNumber.size() != 10)
        {
            repeat++;
            if (repeat == 1)
                cout << "ENTER VALID PHONE NUMBER OF 10 DIGITS!!\n";
            cout << "PHONE NUMBER: ";
            getline(cin, TphoneNumber);
        }
        if (temp->customerNodeAddress->whatsappNumber == TphoneNumber)
        {
            temp->customerNodeAddress->printConfirmationDetails();
        }
        else
        {
            cout << "CREDENTIALS DOES NOT MATCH\n";
            wait(1);
            JD_HOTEL.mainMenuPage();
        }
    }
    else
    {
        cout << "CREDENTIALS DOES NOT MATCH\n";
        wait(1);
        JD_HOTEL.mainMenuPage();
    }
}
void hotel::cancellation()
{
    int TroomNumber, repeat = 0;
    string TphoneNumber;
    customerRecordRegister *temp = start;
    system("clear");
    JD_HOTEL.screenHeader("CANCELLATION");
    cout << "ENTER ROOM NUMBER : ";
    cin >> TroomNumber;
    if (TroomNumber > maxRoomsInHotel || TroomNumber < 1)
    {
        cout << "ROOM DOES NOT EXIST!!\n";
        wait(1);
        JD_HOTEL.mainMenuPage();
    }
    while (temp != NULL)
    {
        if (temp->roomNumber == TroomNumber)
            break;
        temp = temp->link;
    }
    if (temp != NULL)
    {
        if (temp->roomAvailableMode == 'n')
        {
            cout << "FOR CONFIRMATION!!\n";
            cout << "ENTER REGISTERED WHATSAPP PHONE NUMBER: ";
            cin >> TphoneNumber;
            while (TphoneNumber.size() != 10)
            {
                repeat++;
                if (repeat == 1)
                    cout << "ENTER VALID PHONE NUMBER OF 10 DIGITS!!\n";
                cout << "PHONE NUMBER: ";
                getline(cin, TphoneNumber);
            }
            if (temp->customerNodeAddress->whatsappNumber == TphoneNumber)
            {
                temp->customerNodeAddress->refund();
                delete temp->customerNodeAddress;
                temp->customerNodeAddress = NULL;
                temp->roomAvailableMode = 'y';
                --roomsBooked;
                JD_HOTEL.mainMenuPage();
            }
            else
            {
                cout << "CREDENTIALS DOES NOT MATCH!!\n";
                wait(1);
                JD_HOTEL.mainMenuPage();
            }
        }
        else
        {
            cout << "ROOM DOES NOT EXIST!!\n";
            wait(1);
            JD_HOTEL.mainMenuPage();
        }
    }
    else
    {
        cout << "ROOM DOES NOT EXIST!!\n";
        wait(1);
        JD_HOTEL.mainMenuPage();
    }
}
void hotel::checkout()
{
    system("clear");
    JD_HOTEL.screenHeader("CHECKOUT");
    int TroomNumber, repeat = 0;
    string TphoneNumber;
    customerRecordRegister *temp = start;
    cout << "ENTER ROOM NUMBER : ";
    cin >> TroomNumber;
    if (TroomNumber > maxRoomsInHotel || TroomNumber < 1)
    {
        cout << "NO SUCH ROOM AVAILABLE\n";
        wait(1);
        JD_HOTEL.mainMenuPage();
    }
    while (temp->roomNumber != TroomNumber)
    {
        temp = temp->link;
    }
    if (temp->roomAvailableMode == 'n')
    {
        cout << "FOR CONFIRMATION!!\n";
        cout << "ENTER REGISTERED WHATSAPP PHONE NUMBER: ";
        cin >> TphoneNumber;
        while (TphoneNumber.size() != 10)
        {
            repeat++;
            if (repeat == 1)
                cout << "ENTER VALID PHONE NUMBER OF 10 DIGITS!!\n";
            cout << "PHONE NUMBER: ";
            getline(cin, TphoneNumber);
        }
        if (temp->customerNodeAddress->whatsappNumber == TphoneNumber)
        {
            // Checkout Code Starts
            if (temp->customerNodeAddress->customerCheckOut() == 'd')
            {
                delete temp->customerNodeAddress;
                temp->customerNodeAddress = NULL;
                temp->roomAvailableMode = 'y';
                --roomsBooked;
                cout << "\nTHANK YOU :)\nWE HAVE RECEIVED THE MONEY\n";
                wait(1);
                JD_HOTEL.mainMenuPage();
            }
            else
            {
                cout << "BOOKING NOT CNACELLED!!"
                     << "\n";
                wait(1);
                JD_HOTEL.mainMenuPage();
            }
            // End HEre
        }
        else
        {
            cout << "CREDENTIALS DOES NOT MATCH\n";
            wait(1);
            JD_HOTEL.mainMenuPage();
        }
    }
    else
    {
        cout << "CREDENTIALS DOES NOT MATCH\n";
        wait(1);
        JD_HOTEL.mainMenuPage();
    }
}
//*******************************************************CUSTOMER CLASS MEMBERS**********************************************************************************
customer::customer()
{
    roomAdvanceList[0] = 750;
    roomAdvanceList[1] = 500;
    roomAdvanceList[2] = 400;
    roomAdvanceList[3] = 500;
    roomAdvanceList[4] = 750;
    perDayRentList[0] = 1500;
    perDayRentList[1] = 1000;
    perDayRentList[2] = 750;
    perDayRentList[3] = 1000;
    perDayRentList[4] = 1500;
    roomTypes[0] = "Special Delux";
    roomTypes[1] = "Delux";
    roomTypes[2] = "General";
    roomTypes[3] = "Couple";
    roomTypes[4] = "Couple Delux";
}
void customer::getDetails()
{
    int repeat = 0;
    char ans;
    cout << "NAME: ";
    cin.ignore();
    getline(cin, name);
    cout << "PHONE NUMBER: ";
    getline(cin, phoneNumber);
    while (phoneNumber.size() != 10)
    {
        repeat++;
        if (repeat == 1)
            cout << "ENTER VALID PHONE NUMBER OF 10 DIGITS!!\n";
        cout << "PHONE NUMBER: ";
        getline(cin, phoneNumber);
    }
    repeat = 0;
    cout << "CHOOSE ROOM TYPE (1.SPECIAL DELUX  2.DELUX  3.GENERAL  4.COUPLE  5.COUPLE DELUX): ";
    cin >> index;
    while (index > 5 || index < 1)
    {
        repeat++;
        if (repeat == 1)
            cout << "SELECT VALID ROOM TYPE!!\n";
        cout << "CHOOSE ROOM TYPE (1.SPECIAL DELUX  2.DELUX  3.GENERAL  4.COUPLE  5.COUPLE DELUX): ";
        cin >> index;
    }
    repeat = 0;
    cout << "Do you need Extra Bed? (y/n) ";
    cin >> extraBedNeeded;
    while (extraBedNeeded != 'y')
    {
        if (extraBedNeeded != 'n')
        {
            repeat++;
            if (repeat == 1)
                cout << "INVALID INPUT!!\n";
            cout << "Do you need Extra Bed? (y/n) ";
            cin >> extraBedNeeded;
        }
        else if (extraBedNeeded == 'n')
            break;
    }

    if (extraBedNeeded == 'y')
        extraBedCharges = 50;
    else if (extraBedNeeded == 'n')
        extraBedCharges = 0;
    repeat = 0;
    cout << "How many Days you want to Stay? ";
    cin >> stayDays;
    while (stayDays < 1)
    {
        repeat++;
        if (repeat == 1)
            cout << "Enter Valid Day!!\n";
        cout << "How many Days you want to Stay? ";
        cin >> stayDays;
    }
    totalMoney = stayDays * perDayRentList[index - 1] + extraBedCharges;
    advanceMoney = roomAdvanceList[index - 1] * stayDays;
    repeat = 0;
    cout << "\nDo you want to Continue Booking?(y/n) ";
    cin >> ans;
    while (ans != 'y')
    {
        if (ans != 'n')
        {
            repeat++;
            if (repeat == 1)
                cout << "INVALID INPUT!!\n";
            cout << "Do you want to Continue Booking?(y/n) ";
            cin >> ans;
        }
        else if (ans == 'n')
            break;
    }
    if (ans == 'y')
    {
        customerRecordRegister *temp = start;
        while (temp != NULL)
        {
            if (temp->roomAvailableMode == 'y')
            {
                roomNumber = temp->roomNumber;
                break;
            }
            temp = temp->link;
        }
        printDetails();
    }
    else if (ans == 'n')
    {
        delete tempCustomer;
        tempCustomer = NULL;
        JD_HOTEL.mainMenuPage();
    }
}
void customer::printDetails()
{
    // totalMoney = stayDays * perDayRentList[index - 1] + extraBedCharges;
    system("clear");
    JD_HOTEL.screenHeader("VERIFY DETAILS");
    char ans;
    cout << "NAME              : " << name << "\n";
    cout << "PHONE NUMBER      : +91" << phoneNumber << "\n";
    cout << "ROOM TYPE         : " << roomTypes[index - 1] << "\n";
    cout << "ROOM NUMBER       : " << roomNumber << "\n";
    cout << "EXTRA BED         : " << extraBedNeeded << "\n";
    cout << "EXTRA BED CHARGES : Rs. " << extraBedCharges << "\n";
    cout << "STAY              : " << stayDays << " Days\n";
    cout << "PER DAY ADVANCE   : Rs. " << roomAdvanceList[index - 1] << "\n";
    cout << "TOTAL ADVANCE     : Rs. " << advanceMoney << "\n";
    cout << "PER DAY RENT      : Rs. " << perDayRentList[index - 1] << "\n";
    cout << "TOTAL RENT        : Rs. " << totalMoney << "\n";
    cout << "\n------------------------------------------------------------------\n\n";
    cout << "NOTE: REMEMBER YOUR ROOM NUMBER FOR FURTHER CONFIRMATIONS :) | OTHERWISE ACCESS TO ROOM WILL BE DENIED\n";
    cout << "ROOM NUMBER: " << roomNumber << "\n\n";
    cout << "Do you want to proceed for PAYMENT?(Press 'p') || Do you want to EDIT Details?(Press 'e' || PRESS any key to exit except 'p' and 'e')\n";
    cout << "Select ";
    cin >> ans;
    if (ans == 'p')
        payment();
    else if (ans == 'e')
        editDetails();
    else
    {

        delete tempCustomer;
        tempCustomer = NULL;
        JD_HOTEL.mainMenuPage();
    }
}
void customer::editDetails()
{
    system("clear");
    JD_HOTEL.screenHeader("EDIT DETAILS");
    int sel, Repeat = 0;

    cout << "Select the field you want to change: \n";
    cout << "\n1. NAME   2. PHONE NUMBER   3. EXTRA BED   4. STAY   5. ROOM TYPE\n";
    cout << "\nSelect ";
    cin >> sel;
    switch (sel)
    {
    case 1:
        cout << "NAME: ";
        cin.ignore();
        getline(cin, name);
        break;
    case 2:
        cout << "PHONE NUMBER: ";
        cin.ignore();
        getline(cin, phoneNumber);
        while (phoneNumber.size() != 10)
        {
            Repeat++;
            if (Repeat > 0)
                cout << "ENTER VALID PHONE NUMBER OF 10 DIGITS!!\n";
            cout << "PHONE NUMBER: ";
            getline(cin, phoneNumber);
        }
        break;
    case 3:
        Repeat = 0;
        cout << "Do you need Extra Bed? (y/n) ";
        cin >> extraBedNeeded;
        while (extraBedNeeded != 'y')
        {
            if (extraBedNeeded != 'n')
            {
                Repeat++;
                if (Repeat == 1)
                    cout << "INVALID INPUT!!\n";
                cout << "Do you need Extra Bed? (y/n) ";
                cin >> extraBedNeeded;
            }
            else if (extraBedNeeded == 'n')
                break;
        }
        if (extraBedNeeded == 'y')
        {
            if (extraBedCharges != 50)
            {
                extraBedCharges = 50;
                totalMoney += extraBedCharges;
            }
        }
        else if (extraBedNeeded == 'n')
        {
            totalMoney -= extraBedCharges;
            extraBedCharges = 0;
        }
        break;
    case 4:
        cout << "How many Days you want to Stay? ";
        cin >> stayDays;
        while (stayDays < 1)
        {
            Repeat++;
            if (Repeat > 0)
                cout << "Enter Valid Day!!\n";
            cout << "How many Days you want to Stay? ";
            cin >> stayDays;
        }
        totalMoney = stayDays * perDayRentList[index - 1] + extraBedCharges;
        advanceMoney = stayDays * roomAdvanceList[index - 1];
        break;
    case 5:
        cout << "CHOOSE ROOM TYPE (1.SPECIAL DELUX  2.DELUX  3.GENERAL  4.COUPLE  5.COUPLE DELUX): ";
        cin >> index;
        while (index > 5 || index < 1)
        {
            Repeat++;
            if (Repeat > 0)
                cout << "SELECT VALID ROOM TYPE!!\n";
            cout << "CHOOSE ROOM TYPE (1.SPECIAL DELUX  2.DELUX  3.GENERAL  4.COUPLE  5.COUPLE DELUX): ";
            cin >> index;
        }
        totalMoney = stayDays * (perDayRentList[index - 1]);
        totalMoney += extraBedCharges;
        advanceMoney = stayDays * roomAdvanceList[index - 1];
        break;
    default:
    {
        system("clear");
        JD_HOTEL.screenHeader("EDIT DETAILS");
        editDetails();
    }
    }
    printDetails();
}
void customer::payment()
{
againPaymentFail:
    system("clear");
    JD_HOTEL.screenHeader("PAYMENT PORTAL");
    int repeat = 0;
    char ans;
    cout << "NOTE: ONLY ONLINE PAYMNET ACCEPTED\n\n";
    cout << "Do you want to Continue?(y/n) : ";
    cin >> ans;
    if (ans != 'y')
    {
        delete tempCustomer;
        tempCustomer = NULL;
        JD_HOTEL.mainMenuPage();
    }
    else
    {
        cout << "NAME              : " << name << "\n";
        cout << "ROOM TYPE         : " << roomTypes[index - 1] << "\n";
        cout << "STAY              : " << stayDays << " Days\n";
        cout << "PER DAY ADVANCE   : Rs. " << roomAdvanceList[index - 1] << "\n";
        cout << "ADVANCE           : Rs. " << advanceMoney << "\n";
        cout << "PER DAY RENT      : Rs. " << perDayRentList[index - 1] << "\n";
        cout << "TOTAL RENT        : Rs. " << totalMoney << "\n";
        cout << "\n------------------------------------------------------------------\n";
        cout << "\nADVANCE IS MANDATORY FOR CHECKIN | REST CAN BE PAID ON CHECKOUT\n\n";
        cout << "TOTAL RENT                   : Rs. " << totalMoney << "\n";
        cout << "MANDATORY FOR CHECKIN        : Rs. " << advanceMoney << "\n";
        cout << "ENTER AMOUNT YOU WANT TO PAY : Rs. ";
        cin >> moneyPaid;
        while (moneyPaid < advanceMoney || moneyPaid > totalMoney)
        {
            if (moneyPaid < advanceMoney)
                cout << "AMOUNT ENTERED IS NOT SUFFICIENT!!\n";
            if (moneyPaid > totalMoney)
                cout << "AMONUT ENTERED IS MORE THAN TOTAL MONEY\n";
            cout << "ENTER AMOUNT YOU WANT TO PAY : Rs. ";
            cin >> moneyPaid;
        }
        cout << "BALANCE WOULD BE : " << totalMoney - moneyPaid << "\n";
        cout << "\n\nENTER YOUR WHATSAPP NUMBER: ";
        cin.ignore();
        getline(cin, whatsappNumber);
        while (whatsappNumber.size() != 10)
        {
            repeat++;
            if (repeat > 0)
                cout << "ENTER VALID PHONE NUMBER OF 10 DIGITS!!\n";
            cout << "PHONE NUMBER: ";
            getline(cin, whatsappNumber);
        }
        wait(1);
        cout << "A UPI PAYMENT LINK IS SEND TO YOUR WHATSAPP NUMBER : +91" << whatsappNumber << "\n";
        cout << "Press 'd' only if Payment is Done\n";
        cout << "Select ";
        cin >> ans;
        if (ans == 'd')
        {
            // FINNALY ROOM BOOKED
            customerRecordRegister *temp = start;
            while (temp != NULL)
            {
                if (temp->roomAvailableMode == 'y')
                    break;
                temp = temp->link;
            }
            temp->roomAvailableMode = 'n';
            temp->customerNodeAddress = tempCustomer;
            ++roomsBooked;
            // END HERE
            system("clear");
            JD_HOTEL.screenHeader("PAYMNET RECEIPT");
            totalMoney = totalMoney - moneyPaid;
            cout << "NAME               : " << name << "\n";
            cout << "SUCCCESSFULLY PAID : Rs. " << moneyPaid << "\n";
            cout << "BALANCE            : Rs. " << totalMoney << "\n";
            cout << "ROOM NUMBER        : " << roomNumber << "\n";
            wait(2);
            JD_HOTEL.mainMenuPage();
        }
        else
        {
            cout << "\nDo you want to exit Booking Portal?(y/n) ";
            cin >> ans;
            if (ans == 'y')
            {
                delete tempCustomer;
                tempCustomer = NULL;
                JD_HOTEL.mainMenuPage();
            }
            else if (ans == 'n')
            {
                goto againPaymentFail;
            }
            else
            {
                cout << "INVALID SELECTION\n";
                wait(1);
                goto againPaymentFail;
            }
        }
    }
}
void customer::printConfirmationDetails()
{
    system("clear");
    JD_HOTEL.screenHeader("CONFIRMATION RECEIPT");
    char ans;
    cout << "NAME                 : " << name << "\n";
    cout << "PHONE NUMBER         : +91" << phoneNumber << "\n";
    cout << "ROOM TYPE            : " << roomTypes[index - 1] << "\n";
    cout << "ROOM NUMBER          : " << roomNumber << "\n";
    cout << "EXTRA BED            : " << extraBedNeeded << "\n";
    cout << "EXTRA BED CHARGES    : Rs. " << extraBedCharges << "\n";
    cout << "STAY                 : " << stayDays << " Days\n";
    cout << "PER DAY ADVANCE      : Rs. " << roomAdvanceList[index - 1] << "\n";
    cout << "ADVANCE              : Rs. " << advanceMoney << "\n";
    cout << "PER DAY RENT         : Rs. " << perDayRentList[index - 1] << "\n";
    cout << "TOTAL RENT           : Rs. " << stayDays * perDayRentList[index - 1] + extraBedCharges << "\n";
    cout << "RENT AMOUNT PAID     : Rs. " << moneyPaid << "\n";
    cout << "BALANCE              : Rs. " << totalMoney << "\n";
    cout << "\n------------------------------------------------------------------\n\n";
    cout << "Do you want to continue?(y/n) ";
    cin >> ans;
    if (ans == 'y')
        JD_HOTEL.mainMenuPage();
    else
        JD_HOTEL.mainMenuPage();
}
void customer::refund()
{
againRefundTab:
    system("clear");
    char ans;
    int deduction;
    deduction = 0.2 * moneyPaid;
    JD_HOTEL.screenHeader("REFUND RECEIPT");
    cout << "NAME                 : " << name << "\n";
    cout << "ROOM NUMBER          : " << roomNumber << "\n";
    cout << "TOTAL PAYABLE AMOUNT : Rs. " << totalMoney + moneyPaid << "\n";
    cout << "AMOUNT PAID          : Rs. " << moneyPaid << "\n";
    cout << "CHARGES DEDUCTED     : Rs. " << deduction << "\n";
    cout << "REFUNDABLE MONEY     : Rs. " << moneyPaid - deduction << "\n";
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
    cout << "\nNOTE: 20% DEDUCTION IS AS PER THE POLICY OF THE HOTEL ON CALCELLATION\n";
    cout << "Rs. " << moneyPaid - deduction << " has been CREDITED to your UPI Number +91 " << whatsappNumber << " \n";
    cout << "Press 'y' if you have Received the CREDITED AMOUNT\n";
    cout << "SELECT ";
    cin >> ans;
    if (ans == 'y')
    {
        cout << "BOOKING IS CANCELLED SUCESSFULLY!!\n";
        cout << "HAVE A NICE DAY :)\n";
        wait(1);
    }
    else if (ans == 'n')
    {
        cout << "BOOKING IS CANCELLED SUCESSFULLY!!\n";
        cout << "HAVE PATIENCE :)\n";
        cout << "CALL +91 9996667775 IF YOU NOT RECEIVED THE CREDITED AMOUNT IN  24 HOURS\n";
        wait(1);
    }
    else
    {
        goto againRefundTab;
    }
}
char customer::customerCheckOut()
{
    system("clear");
    JD_HOTEL.screenHeader("CHECKOUT PORTAL");
    char ans;
    int count = 0;
    cout << "NAME         : " << name << "\n";
    cout << "PHONE NUMBER : +91 " << phoneNumber << "\n";
    cout << "ROOM NUMBER  : " << roomNumber << "\n";
    cout << "ROOM TYPE    : " << roomTypes[index - 1] << "\n";
    cout << "TOTAL RENT   : " << totalMoney + moneyPaid << "\n";
    cout << "RENT PAID    : " << moneyPaid << "\n";
    cout << "BALANCE      : " << totalMoney << "\n";
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
    cout << "CLEAR THE BALANCE BEFORE CHECKOUT\n";
    cout << "UPI LINK FOR Rs. " << totalMoney << " IS SENT TO YOUR WHATSAPP NUMBER +91 " << whatsappNumber << "\n\n";
    cout << "PRESS 'd' if you done the payment\n";
    cin >> ans;
    while (ans != 'd')
    {
        count++;
        if (count == 1)
            cout << "PAY THE MONEY OTHERWISE YOUR BAGS WOULD BE CEASED AND A COMPLAINT WOULD BE REGISTERED AND SENT TO LOCAL POLICE SATATION WITH YOUR ID PROOF FOR THE VOILATION OF THE TERMS AND CONDITIONS OF THE HOTAL\n";
        cout << "PRESS 'd' if you done the payment\n";
        cin >> ans;
    }
    return ans;
}
//*******************************************************NON MEMBER FUNCTIONS************************************************************************************
void wait(int howLong)
{
    cout << "PLEASE WAIT ";
    cout << '-' << std::flush;
    for (int i = 0; i < howLong; i++)
    {
        sleep(1);
        cout << "\b\\" << flush;
        sleep(1);
        cout << "\b|" << flush;
        sleep(1);
        cout << "\b/" << flush;
        sleep(1);
        cout << "\b-" << flush;
    }
    cout << endl;
}

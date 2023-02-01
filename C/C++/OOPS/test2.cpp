#include <iostream>
using namespace std;
 
class bus
{
    int date;
    int month;
    int year;
    int noofseats;
    char nameofpass;
    int age;
    char name[20];
    char boarding[20];
    char destination[20];
    int ticketprice;
    int vacantseats;
    int totalamount;
    int bookedseat;
    int withpass;
 
public:
    void checker();
    void booker();
    int pricecal();
    int amount();
    void ticketmaker();
};
void bus::checker()
{
    cout << "total no. of seats in bus" << endl;
    cin >> noofseats;
    cout << "total no. of booked seats in bus" << endl;
    cin >> bookedseat;
    cout << "price of one ticket" << endl;
    cin >> ticketprice;
    vacantseats = noofseats - bookedseat;
    cout << "total no. of vacant seat in bus : " << vacantseats << endl;
    if (vacantseats < noofseats)
    {
        cout << "seat is available" << endl;
    }
    else
    {
        cout << "seat is not available" << endl;
    }
}
void bus::booker()
{
    if (vacantseats < noofseats)
    {
        cout << "give your details" << endl;
        cout << "your name" << endl;
        cin >> name;
        cout << "your age" << endl;
        cin >> age;
        cout << "your boarding station name" << endl;
        cin >> boarding;
        cout << "your destination station name" << endl;
        cin >> destination;
        cout << "date of travelling" << endl;
        cin >> date >> month >> year;
        cout << "no. of passenger with you" << endl;
        cin >> withpass;
    }
}
void bus::ticketmaker()
{
    cout << "welcome to our bus service company" << endl;
    cout << "passenger details" << endl;
    cout << "passenger name : " << name << endl;
    cout << "passenger age : " << age << endl;
    cout << "passenger boarding station : " << boarding << endl;
    cout << "passenger destination station : " << destination << endl;
    cout << "date of travelling : " << date << "-" << month << "-" << year << endl;
    cout << "time of departure : 2.00 PM" << endl;
    cout << "time of arival : 6.00 PM" << endl;
    cout << "duration : 4 hours" << endl;
    cout << "distance : 220 Km" << endl;
    for (int i = 0; i < withpass; i++)
    {
        bookedseat = bookedseat + 1;
        cout << "passenger seat no." << i + 1 << " : " << bookedseat << endl;
    }
    cout << "no. of passenger with him/her : " << withpass << endl;
    ticketprice = ticketprice * (withpass + 1);
    cout << "the amount you have to pay : " << ticketprice << endl;
 
    cout << "thank you for choosing this bus service" << endl;
    cout << endl;
    cout << endl;
    cout << "for any enquiry contact : 68723792" << endl;
}
int main()
{
    bus b;
    b.checker();
    b.booker();
    b.ticketmaker();
}

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

// Function to check if a given year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Function to get the number of days in a given month and year
int daysInMonth(int month, int year) {
    if (month == 2)
        return isLeapYear(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

// Function to convert day of the week string to its corresponding index
int dayOfWeekIndex(const string& dayOfWeek) {
    if (dayOfWeek == "Sun") return 0;
    else if (dayOfWeek == "Mon") return 1;
    else if (dayOfWeek == "Tue") return 2;
    else if (dayOfWeek == "Wed") return 3;
    else if (dayOfWeek == "Thu") return 4;
    else if (dayOfWeek == "Fri") return 5;
    else if (dayOfWeek == "Sat") return 6;
    else return -1; // Invalid day
}

// Function to display the calendar for a given month and year
void displayCalendar(int date, int month, int year, const string& dayOfWeek) {
    cout << "|---------------------------|" << endl;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
    cout << "|---------------------------|" << endl;

    int startDayIndex = dayOfWeekIndex(dayOfWeek);
    int currentDate = 1;
    int days = daysInMonth(month, year);

    while (currentDate <= days) {
        cout << "|";
        for (int i = 0; i < 7; ++i) {
            if ((startDayIndex == i && currentDate == 1) || (currentDate > 1 && currentDate <= days)) {
                cout << setw(3) << (currentDate++);
            } else {
                cout << setw(3) << "-";
            }
            cout << "|";
        }
        cout << endl;
    }
    cout << "|---------------------------|" << endl;
}

int main() {
    string input1, input2;
    int date, month, year;
    string dayOfWeek;

    cout << "Enter the first input (dd/mm/yyyy DayOfWeek): ";
    getline(cin, input1);
    stringstream ss1(input1);
    char slash;
    ss1 >> date >> slash >> month >> slash >> year >> dayOfWeek;

    displayCalendar(date, month, year, dayOfWeek);

    cout << endl << "Enter the second input (dd/mm/yyyy DayOfWeek): ";
    getline(cin, input2);
    stringstream ss2(input2);
    ss2 >> date >> slash >> month >> slash >> year >> dayOfWeek;

    displayCalendar(date, month, year, dayOfWeek);

    return 0;
}

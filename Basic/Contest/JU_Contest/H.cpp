#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int daysInMonth(int month, int year) {
    if (month == 2)
        return isLeapYear(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int dayOfWeekIndex(const string &dayOfWeek) {
    if (dayOfWeek == "Sun")
        return 0;
    else if (dayOfWeek == "Mon")
        return 1;
    else if (dayOfWeek == "Tue")
        return 2;
    else if (dayOfWeek == "Wed")
        return 3;
    else if (dayOfWeek == "Thu")
        return 4;
    else if (dayOfWeek == "Fri")
        return 5;
    else if (dayOfWeek == "Sat")
        return 6;
    else
        return -1; // Invalid day
}

void printCalendar(int date, int month, int year, const string &dayOfWeek) {
    cout << "|---------------------------|" << endl;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
    cout << "|---------------------------|" << endl;

    int startDayIndex = dayOfWeekIndex(dayOfWeek);
    int currentDay = 1;
    int days = daysInMonth(month, year);
    int remainingDays = days;
    int row = 0;

    while (remainingDays > 0) {
        cout << "|";
        for (int j = 0; j < 7; ++j) {
            if ((row == 0 && j < startDayIndex) || currentDay > days) {
                cout << setw(4) << "-";
            } else {
                if (currentDay == date) {
                    cout << setw(3) << "[" << currentDay << "]";
                } else {
                    cout << setw(3) << currentDay;
                }
                ++currentDay;
                --remainingDays;
            }
            cout << "|";
        }
        cout << endl;
        ++row;
    }

    cout << "|---------------------------|" << endl;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--) {
        string str;
        getline(cin, str);
        string num = str.substr(0, 2);
        string num2 = str.substr(3, 2);
        string num3 = str.substr(6, 4);
        string day = str.substr(11);
        int date = stoi(num);
        int month = stoi(num2);
        int year = stoi(num3);

        printCalendar(date, month, year, day);
        cout << endl; // Print a blank line after each test case
    }
    return 0;
}

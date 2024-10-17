/*
||-------------------------------------------||
||               Md Adnan Saki               ||

||-------------------------------------------||
*/

#include<bits/stdc++.h> 

using namespace std;

bool compareDates(string date1, string date2) {
    int day1, month1, year1, day2, month2, year2;
    sscanf(date1.c_str(), "%d/%d/%d", &day1, &month1, &year1);
    sscanf(date2.c_str(), "%d/%d/%d", &day2, &month2, &year2);
    
    if (year1 != year2)
        return year1 < year2;
    if (month1 != month2)
        return month1 < month2;
    return day1 < day2;
}

int main() {
    int x;
    cin >> x;
    for(int i=1;i<=x;++i){


    vector<string> dates;
    
    int a;
    cin >> a;
    
    for (int j = 0; j < a; ++j) {
        string date;
        cin >> date;
        dates.push_back(date);
    }
    
    
    sort(dates.begin(), dates.end(), compareDates);
    
    cout << "Case #" << i << ":" << endl;
    for (const auto &date : dates) {
        cout << date << endl;
    }
    }
    
    return 0;
}
// Write a program that reads from the user the number of days they traveled.
// The program will then print their traveling time in the format of full weeks and additional days.

#include <iostream>
using namespace std;
//to give meaning to the code, define 7 and as constant so it's most clear.
const int WEEK_DAYS = 7;
int main() {
    int daysTraveled;
    int fullWeeks;
    int daysLeft;
    
    cout << "Please enter the number of days you have traveled:"<<endl;
    cin>>daysTraveled;
    
    fullWeeks = daysTraveled/WEEK_DAYS;
    daysLeft = daysTraveled%WEEK_DAYS;
    
    cout<<daysTraveled<<" days are "<<fullWeeks<<" weeks and "<<daysLeft<<" days."<<endl;

    return 0;
}

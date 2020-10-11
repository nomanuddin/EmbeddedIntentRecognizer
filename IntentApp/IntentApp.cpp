// IntentApp.cpp : Defines the entry point for the application.
// This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include<string.h>

using namespace std;

// Weather Info class prints weather intent and weather city intent
class WeatherInfo {

public:
    // method for printing weather intent
    void printGetWeatherIntent(string question) {
        cout << "Intent: Get Weather " << endl;
    }

    // method for printing weather city intent
    void printGetWeatherCityIntent(string question) {
        cout << "Intent: Get Weather City " << endl;
    }
};

// Calendar Info class prints calendar intent
class CalendarInfo {

public:
    // method for printing calendar intent
    void printCalendarIntent(string question) {
        cout << "Intent: Check calendar " << endl;
    }
};


// Fact Info class prints fact intent
class FactInfo {
public:

    // method for printing check fact intent
    void printFactIntent(string question) {
        cout << "Intent: Get Fact " << endl;
    }
};


// main class: starting point of program
int main()
{
    //question variable for getting user input
    string question;

    // program stops with exit keyword only
    while (question != "exit") {

        // Asking user for question and saving it in question variable
        cout << "Please ask predefined question or enter exit to close program: ";
        getline(cin, question);
        cout << "Requested query: " << question << endl;

        // Check for skipping further checks on variable question
        if (question != "exit") {

            if (question == "What is the weather like today?") {
                // weather object is created to print intent
                WeatherInfo weatherinfo;
                weatherinfo.printGetWeatherIntent(question);
            }
            else
                if (question == "What is the weather like in Paris today?") {
                    // weather object is created to print intent
                    WeatherInfo weatherinfo;
                    weatherinfo.printGetWeatherCityIntent(question);
                }
                else
                    if (question == "What is the weather like in New York today?") {
                        // weather object is created to print intent
                        WeatherInfo weatherinfo;
                        weatherinfo.printGetWeatherCityIntent(question);
                    }
                    else
                        if (question == "Am I free at 13:00 PM tomorrow?") {
                            // calendar object is created to print intent
                            CalendarInfo calendarInfo;
                            calendarInfo.printCalendarIntent(question);
                        }
                        else
                            if (question == "Tell me an interesting fact.") {
                                // fact object is created to print intent
                                FactInfo factInfo;
                                factInfo.printFactIntent(question);
                            }
                            else {
                                cout << "No Intent found" << endl;
                            };
            cout << "" << endl;
        }
    }
    return 0;
}
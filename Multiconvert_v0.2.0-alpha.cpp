#include <iostream>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
using namespace std;

//Error handling for doubles
void valueInputErrorHandling(){
    while (cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! Please enter a numeric value!" << endl;
    }
}

void toHours(double minutes){
    if (cin.fail() || minutes < 0){
        cout << "Time cannot be negative!" << endl;
        valueInputErrorHandling();
    }
    else{
       cout << minutes << " minute(s) is/are " << minutes / 60 << " hours" << endl;
    }
}

void toMinutes(double hours){
    if (cin.fail() || hours < 0){
        cout << "Time cannot be negative!" << endl;
        valueInputErrorHandling();
    }
    else {
        cout << hours << " hour(s) is/are " << hours * 60 << " minutes" << endl;
    }
}

void hoursToSeconds(double hours){
    if (cin.fail() || hours < 0){
        cout << "Time cannot be negative!" << endl;
        valueInputErrorHandling();
    }
    else {
        cout << hours << " hour(s) is/are " << hours * 3600 << " second(s)" << endl;
    }
}

void minutesToSeconds(double minutes){     //option 4
    if (cin.fail() || minutes < 0){
        cout << "Time cannot be negative!" << endl;
        valueInputErrorHandling();
    }
    else {
        cout << minutes << " minute(s) is/are " << minutes * 60 << " second(s)" << endl;
    }
}

//convert multiple units
void convertAll(double hours, double minutes, double seconds){
    if (cin.fail() || hours < 0 || minutes < 0 || seconds < 0){
        cout << "Time cannot be negative!" << endl;
        valueInputErrorHandling();
    }
    else {
        toHours(minutes);
        toMinutes(hours);
        hoursToSeconds(hours);
        minutesToSeconds(minutes);
        cout << seconds << " second(s) is/are " << seconds / 60 << " minute(s)" << endl;
        cout << seconds << " second(s) is/are " << seconds / 3600 << " hour(s)" << endl;
    }
}

//converting temperatures (celcius to farenheit)
void tempConvert(double celsius, double fahrenheit, double kelvin){
    if (cin.fail()){
        valueInputErrorHandling();
    }
    else {
        cout << celsius << " Deg C is " << celsius * (9/5) + 32 << " Deg F" << "\n";
        cout << fahrenheit << " Deg F is " << (fahrenheit - 32) * 5/9 << " Deg C" << "\n";
        cout << celsius << " Deg C is " << celsius + 273.15 << "K" << "\n";
        cout << fahrenheit << " Deg F is " << 5/9 * fahrenheit + 459.67 << "K" << "\n";
        cout << kelvin << "K is " << kelvin - 273.15 << " Deg C" << "\n";
        cout << kelvin << "K is " << (kelvin - 273.15) * 1.8 + 32 << " Deg F" << endl;
    }
}

void massConvertSI(double grams, double kilograms, double tonnes){
    if (cin.fail()){
        valueInputErrorHandling();
    }
    else {
    cout << grams << " g is equivalent to " << grams / 1000 << " kg" << '\n';
    cout << kilograms << " kg is equivalent to " << kilograms / 1000 << " t" << '\n';
    cout << tonnes << " t is equivalent to " << tonnes * 1000 << " kg" << '\n';
    cout << kilograms << " kg is equivalent to " << kilograms * 1000 << " g" << '\n';
    cout << tonnes << " t is equivalent to " << tonnes * 1000000 << " g" << '\n';
    cout << grams << " g is equivalent to " << grams / 1000000 << " t" << endl;
    }
}

void massConvertImperial(double ounce, double pound, double ton){
    if (cin.fail()){
        valueInputErrorHandling();
    }
    else {
        cout << ounce << " oz is equivalent to " << ounce / 16 << " lb" << '\n';
        cout << pound << " lb is equivalent to " << pound / 2000 << " tn" << '\n';
        cout << ton << " tn is equivalent to " << ton * 2000 << " lb" << '\n';
        cout << pound << " lb is equivalent to " << pound * 16 << " oz" << '\n';
        cout << ounce << " oz is equivalent to " << ounce / 32000 << " tn" << endl;
    }
}

void massConvertAll(double grams, double kilograms, double tonnes, double ounce, double pound, double ton){
    if (cin.fail()){
        valueInputErrorHandling();
    }
    else {
        massConvertSI(grams, kilograms, tonnes);
        massConvertImperial(ounce, pound, ton);
        cout << grams << " g is equivalent to " << grams / 28.35 << " oz" << '\n';
        cout << grams << " g is equivalent to " << grams / 453.6 << " oz" << '\n';
        cout << grams << " g is equivalent to " << grams / 907200 << " tn" << '\n';
        cout << kilograms << " kg is equivalent to " << kilograms / 35.274 << " oz" << '\n';
        cout << kilograms << " kg is equivalent to " << kilograms * 2.205 << " lb" << '\n';
        cout << kilograms << " kg is equivalent to " << kilograms / 907.2 << " tn" << '\n';
        cout << tonnes << " t is equivalent to " << tonnes * 35270 << " oz" << '\n';
        cout << tonnes << " t is equivalent to " << tonnes * 2205 << " lb" << '\n';
        cout << tonnes << " t is equivalent to " << tonnes * 1.102 << " tn" << '\n';
    }
}

//main menu
void mainMenu(){
    cout << "===============================" << "\n";
    cout << "| Please select a converter   |" << "\n";
    cout << "===============================" << "\n";
    cout << "|    1: Minutes to Hours      |" << "\n";
    cout << "|    2: Hours to Minutes      |" << "\n";
    cout << "|    3: Hours to Seconds      |" << "\n";
    cout << "|    4: Minutes to Seconds    |" << "\n";
    cout << "|    5: Convert all units     |" << "\n";
    cout << "|    6: convert Temps         |" << "\n";
    cout << "|    7: convert SI mass       |" << "\n";
    cout << "|    8: convert imperial mass |" << "\n";
    cout << "|    9: convert all mass      |" << "\n";
    cout << "|   10: Clear console         |" << "\n";
    cout << "|   11: Exit program          |" << "\n";
    cout << "===============================" << "\n";
}

//input prompts
void inputPrompt(){
    cout << "Please enter a value to convert" << endl;
}
//input error handling
void menuInputErrorHandling(){
    while (cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! Please enter a whole number! (1 - 8)" << endl;
    }
}

void consoleClear(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif // _WIN32
}
int main() {
    while (true){
        int userSelect;
        mainMenu();
        cin >> userSelect;
        consoleClear();

        //game logic
        switch (userSelect){
            case 1: {
                double minutes;
                inputPrompt();
                cin >> minutes;
                consoleClear();
                toHours(minutes);
                _sleep(2000);
                continue;
            }

            case 2: {
                double hours;
                inputPrompt();
                cin >> hours;
                consoleClear();
                toMinutes(hours);
                _sleep(2000);
                continue;
            }

            case 3: {
                double hours;
                inputPrompt();
                cin >> hours;
                consoleClear();
                hoursToSeconds(hours);
                _sleep(2000);
                continue;
            }

            case 4: {
                double minutes;
                inputPrompt();
                consoleClear();
                minutesToSeconds(minutes);
                _sleep(2000);
                continue;
            }

            case 5: {
                cout << "Please enter 3 values (hours, minutes, seconds)" << "\n";
                cout << "Enter 0 for values you do not want to convert" << endl;
                double hours, minutes, seconds;
                cin >> hours >> minutes >> seconds;
                consoleClear();
                convertAll(hours, minutes, seconds);
                _sleep(2000);
                continue;
            }

            case 6: {
                double celsius, fahrenheit, kelvin;
                cout << "Please enter 3 temperature values" << endl;
                cin >> celsius >> fahrenheit >> kelvin;
                consoleClear();
                cout << "Note: Deg means Degrees" << endl;
                tempConvert(celsius, fahrenheit, kelvin);
                _sleep(2000);
                continue;
            }

            case 7: {
                double grams, kilograms, tonnes;
                cout << "Please enter 3 mass values (SI)" << endl;
                cin >> grams >> kilograms >> tonnes;
                consoleClear();
                massConvertSI(grams, kilograms, tonnes);
                _sleep(2000);
                continue;
            }

            case 8: {
                double ounce, pound, ton;
                cout << "Please enter 3 mass values (imperial)" << endl;
                cin >> ounce >> pound >> ton;
                consoleClear();
                massConvertImperial(ounce, pound, ton);
                _sleep(2000);
                continue;
            }

            case 9: {
                double grams, kilograms, tonnes, ounce, pound, ton;
                cout << "Please enter 6 mass values (SI, imperial)" << endl;
                cin >> grams >> kilograms >> tonnes >> ounce >> pound >> ton;
                consoleClear();
                massConvertAll(grams, kilograms, tonnes, ounce, pound, ton);
                _sleep(2000);
                continue;
            }

            case 10: {
                consoleClear();
                continue;
            }

            case 11: {
                cout << "Thank you for using Multiconvert!" << endl;;
                _sleep(2000);
                return 0;
            }

            default: {
                menuInputErrorHandling();
                continue;
            }
        }
    }

    return 0;
}

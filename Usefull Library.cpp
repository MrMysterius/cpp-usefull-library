#include <iostream>
#include <string>

using namespace std;

//JUST PRINTS A LINE
void line(char character, int length, bool newLines) {
	if (newLines) cout << "\n";
	for (int i = 0; i < length; i++) {
		cout << character;
	}
	if (newLines) cout << "\n\n";
}

//INPUTS
int getInt(string name, int min, int max) {
    int input = min-1;
    bool isFinished = false;

    cout << "\nEnter " << name << " between " << min << " and " << max << "!\n";

    do {
        cout << ": ";
        cin >> input;

        if (cin.fail()) {
            cin.clear();
            cout << "ERROR: Input Error\n";
        }

        cin.ignore(1000000, '\n');

        if ((min == 0 && max == 0) || (input >= min && (input <= max || max == 0))) {
            isFinished = true;
        }
        else {
            cout << "ERROR: Input not in allowed number range\n";
        }

    } while (!isFinished);

    return input;
}

double getDouble(string name, double min, double max) {
    double input = min - 1;
    bool isFinished = false;

    cout << "\nEnter " << name << " between " << min << " and " << max << "!\n";

    do {
        cout << ": ";
        cin >> input;

        if (cin.fail()) {
            cin.clear();
            cout << "ERROR: Input Error\n";
        }

        cin.ignore(1000000, '\n');

        if ((min == 0 && max == 0) || (input >= min && (input <= max || max == 0))) {
            isFinished = true;
        }
        else {
            cout << "ERROR: Input not in allowed number range\n";
        }

    } while (!isFinished);

    return input;
}

char getChar(string name) {
    char input;
    bool isFinished = false;

    cout << "\nEnter " << name << "!\n";

    do {
        cout << ": ";
        cin >> input;

        isFinished = true;
        if (cin.fail()) {
            cin.clear();
            cout << "ERROR: Input Error\n";
            isFinished = false;
        }

        cin.ignore(1000000, '\n');
    } while (!isFinished);

    return input;
}

string getString(string name, int minLength, int maxLength) {
    string input;
    bool isFinished = false;

    cout << "\nEnter " << name << " (Min: " << minLength << " Max: " << maxLength << ")!\n";

    do {
        cout << ": ";
        cin >> input;

        if (cin.fail()) {
            cin.clear();
            cout << "ERROR: Input Error\n";
        }

        cin.ignore(1000000, '\n');

        if ((minLength == 0 && maxLength == 0) || (input.length() >= minLength && (maxLength == 0 || input.length() <= maxLength))) {
            isFinished = true;
        }
        else {
            cout << "ERROR: Input not in allowed range\n";
        }
    } while (!isFinished);

    return input;
}

//CALCS

double cPow(double base, double exponent) {
    if (exponent == 0) return 1.0;
    bool isNegative = exponent < 0 ? true : false;

    double out = base;

    exponent = isNegative ? exponent * -1.0 : exponent;

    for (int i = 0; i < exponent - 1; i++) {
        out *= base;
    }

    return isNegative ? (1.0 / out) : out;
}
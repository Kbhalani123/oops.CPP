/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;

public:
    void inputData() {
        cout << "Enter Cricketer's Name: ";
        cin >> name;
        cout << "Enter Cricketer's Age: ";
        cin >> age;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        inputData(); // Call base class member function to input name and age
        cout << "Enter Total Runs: ";
        cin >> totalRuns;
        cout << "Enter Best Performance (in a single match): ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        if (bestPerformance > 0) {
            averageRuns = static_cast<double>(totalRuns) / bestPerformance;
        } else {
            cout << "Error: Best Performance should be greater than zero." << endl;
        }
    }

    void displayData() {
        cout << "\nCricketer Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;

    batsman.inputBatsmanData();
    batsman.calculateAverageRuns();
    batsman.displayData();

    return 0;
}
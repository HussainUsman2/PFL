#include <iostream>
using namespace std;
void timetravel(int num1, int num2);
int main() {

    int num1;
    cout << "Time in hours: ";
    cin >> num1;
    
    int num2;
    cout << "Time in min: ";
    cin >> num2;
    
    timetravel(num1, num2);
    return 0;
}

void timetravel(int num1, int num2) {
    int totalMinutes = num2 + 15;
    
    
    int extraHours = totalMinutes / 60;
    int remainingMins = totalMinutes % 60;
    int finalHours = num1 + extraHours;

    
    cout << "Time after 15 min: " << finalHours << " hours and " << remainingMins << " min" <<"\n";
}
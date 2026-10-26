
#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    cout << "Enter marks of 5 subjects (out of 100): ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    if (m1 < 0 || m1 > 100 ||
        m2 < 0 || m2 > 100 ||
        m3 < 0 || m3 > 100 ||
        m4 < 0 || m4 > 100 ||
        m5 < 0 || m5 > 100) {
        cout << "Invalid marks!";
        return 0;
    }

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A+";
    else if (percentage >= 80)
        cout << "Grade: A";
    else if (percentage >= 70)
        cout << "Grade: B";
    else if (percentage >= 60)
        cout << "Grade: C";
    else if (percentage >= 40)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}

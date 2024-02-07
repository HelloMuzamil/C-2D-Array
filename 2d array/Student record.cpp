#include<iostream>
using namespace std;

int main() {
    int subject;
    cout << "How many subjects do you want to Enter: ";
    cin >> subject;

    string name[subject];
    for(int i = 0; i < subject; i++) {
        cout << "Enter Subject name " << i + 1 << ": ";
        cin >> name[i];
    }

    int student;
    cout << "How many student records do you want to enter: ";
    cin >> student;

    int score[subject][student];
    for(int i = 0; i < subject; i++) {
        cout << "Enter scores for student " << i + 1 << ": ";
        for(int j = 0; j < student; j++) {
            cin >> score[i][j];
        }
    }

    cout << "\nTest scores and averages for students:\n";
    for(int j = 0; j < student; j++) {
        float sum = 0;
        cout << "Student " << j + 1 << ": ";
        
        for(int i = 0; i < subject; i++) {
            cout << score[i][j] << " ";
            sum += score[i][j];
        }

        float aver = sum / subject;  // Calculate average for each student
        cout << "Average: " << aver << endl;
    }

    return 0;
}


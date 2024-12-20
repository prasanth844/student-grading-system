#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int rollNumber;
        int marks[5];
        double average;
        char grade;

    public:
        void input() {
            cout << "Enter student name: ";
            getline(cin, name);
            cout << "Enter roll number: ";
            cin >> rollNumber;
            for (int i = 0; i < 5; i++) {
                cout << "Enter marks for subject " << i + 1 << ": ";
                cin >> marks[i];
            }
        }

        void calculateAverage() {
            double sum = 0;
            for (int i = 0; i < 5; i++) {
                sum += marks[i];
            }
            average = sum / 5;
        }

        void calculateGrade() {
            if (average >= 90) {
                grade = 'A';
            } else if (average >= 80) {
                grade = 'B';
            } else if (average >= 70) {
                grade = 'C';
            } else if (average >= 60) {
                grade = 'D';
            } else {
                grade = 'F';
            }
        }

        void display() {
            cout << "Student Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: ";
            for (int i = 0; i < 5; i++) {
                cout << marks[i] << " ";
            }
            cout << endl;
            cout << "Average: " << average << endl;
            cout << "Grade: " << grade << endl;
        }
};

int main() {
    Student student;
    student.input();
    student.calculateAverage();
    student.calculateGrade();
    student.display();
    return 0;
}
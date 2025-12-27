//Lecture Management System

#include <iostream>
#include <string>
using namespace std;

// Maximum number of lecturers supported

#define MAX_LECTURERS 5

// Class Definition: LectureDetails

class LectureDetails {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
   
    // Constructor to assign default values
   
    LectureDetails() {
        lecturerName = "Not Assigned";
        subjectName = "Not Assigned";
        courseName = "Not Assigned";
        numberOfLectures = 0;
    }

    // Function to Add Lecture Details
    
    void addLectureDetails() {
        cin.ignore();
        cout << "\nEnter Lecturer Name        : ";
        getline(cin, lecturerName);

        cout << "Enter Subject Name         : ";
        getline(cin, subjectName);

        cout << "Enter Course Name          : ";
        getline(cin, courseName);

        cout << "Enter Number of Lectures   : ";
        cin >> numberOfLectures;
    }

    // Function to Display Lecture Details
    
    void displayLectureDetails(int index) {
        cout << "\n----------------------------------------";
        cout << "\nLecturer ID        : " << index + 1;
        cout << "\nLecturer Name      : " << lecturerName;
        cout << "\nSubject Name       : " << subjectName;
        cout << "\nCourse Name        : " << courseName;
        cout << "\nTotal Lectures     : " << numberOfLectures;
        cout << "\n----------------------------------------\n";
    }
};

// Main Function

int main() {
    LectureDetails lecturers[MAX_LECTURERS];  // Array of objects
    int choice, count = 0;

    do {
        cout << "\n========================================";
        cout << "\n      LECTURE MANAGEMENT SYSTEM";
        cout << "\n========================================";
        cout << "\n1. Add Lecturer Details";
        cout << "\n2. Display All Lecturer Details";
        cout << "\n3. Exit";
        cout << "\n----------------------------------------";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < MAX_LECTURERS) {
                    lecturers[count].addLectureDetails();
                    cout << "\n? Lecturer Added Successfully!\n";
                    count++;
                } else {
                    cout << "\n? Maximum Limit Reached (5 Lecturers Only).\n";
                }
                break;

            case 2:
                if (count == 0) {
                    cout << "\n? No Lecturer Data Available.\n";
                } else {
                    for (int i = 0; i < count; i++) {
                        lecturers[i].displayLectureDetails(i);
                    }
                }
                break;

            case 3:
                cout << "\n? Exiting Program Successfully...\n";
                break;

            default:
                cout << "\n? Invalid Choice! Try Again.\n";
                break;
        }

    } while (choice != 3);

    return 0;
}


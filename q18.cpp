#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    int rollNo;

public:
    Student(int roll) : rollNo(roll) {}

    int getRollNo() const {
        return rollNo;
    }
};

class Test : public Student {
protected:
    double subject1;
    double subject2;
    double subject3;

public:
    Test(int roll, double s1, double s2, double s3) : Student(roll), subject1(s1), subject2(s2), subject3(s3) {}

    void displayMarks() const {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks in Subject 1: " << subject1 << endl;
        cout << "Marks in Subject 2: " << subject2 << endl;
        cout << "Marks in Subject 3: " << subject3 << endl;
    }
};

class Result : public Test {
public:
    Result(int roll, double s1, double s2, double s3) : Test(roll, s1, s2, s3) {}

    void displayResultCard() const {
        cout << "Result Card for Roll No " << rollNo << endl;
        cout << "--------------------------" << endl;
        cout << "Total Marks: " << (subject1 + subject2 + subject3) << endl;
        cout << "Percentage: " << ((subject1 + subject2 + subject3) / 3) << "%" << endl;
    }
};

int main() {
    // Creating a Result object and displaying the result card
    Result result1(1323607, 85.5, 92.0, 78.5);
    result1.displayResultCard();

    return 0;
}

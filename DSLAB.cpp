#include <iostream>

using namespace std;
struct student{
    int id, semester,credits;
    float cgpa;
};

int main()
{
    student st[10];

    st[1].id = 55772;
    st[1].semester = 5;
    st[1].credits = 55;
    st[1].cgpa = 3.75;
    cout<<st[1].id<<" "<<endl;
    cout<<st[1].semester<<" "<<endl;
    cout<<st[1].credits<<" "<<endl;
    cout<<st[1].cgpa<<" "<<endl;

    st[2].id = 42222;
    st[2].semester = 7;
    st[2].credits = 65;
    st[2].cgpa = 3.55;
    cout<<st[2].id<<" "<<endl;
    cout<<st[2].semester<<" "<<endl;
    cout<<st[2].credits<<" "<<endl;
    cout<<st[2].cgpa<<" "<<endl;

    st[3].id = 40772;
    st[3].semester = 7;
    st[3].credits = 115;
    st[3].cgpa = 3.05;
    cout<<st[3].id<<" "<<endl;
    cout<<st[3].semester<<" "<<endl;
    cout<<st[3].credits<<" "<<endl;
    cout<<st[3].cgpa<<" "<<endl;

    st[4].id = 46072-2;
    st[4].semester = 7;
    st[4].credits = 125;
    st[4].cgpa = 3.65;
    cout<<st[4].id<<" "<<endl;
    cout<<st[4].semester<<" "<<endl;
    cout<<st[4].credits<<" "<<endl;
    cout<<st[4].cgpa<<" "<<endl;

    st[5].id = 43732-3;
    st[5].semester = 1;
    st[5].credits = 15;
    st[5].cgpa = 3.75;
    cout<<st[5].id<<" "<<endl;
    cout<<st[5].semester<<" "<<endl;
    cout<<st[5].credits<<" "<<endl;
    cout<<st[5].cgpa<<" "<<endl;

    st[6].id = 22-43536-2;
    st[6].semester = 2;
    st[6].credits = 35;
    st[6].cgpa = 3.55;
    cout<<st[6].id<<" "<<endl;
    cout<<st[6].semester<<" "<<endl;
    cout<<st[6].credits<<" "<<endl;
    cout<<st[6].cgpa<<" "<<endl;

    st[7].id = 22-53672-2;
    st[7].semester = 12;
    st[7].credits = 148;
    st[7].cgpa = 3.95;
    cout<<st[7].id<<" "<<endl;
    cout<<st[7].semester<<" "<<endl;
    cout<<st[7].credits<<" "<<endl;
    cout<<st[7].cgpa<<" "<<endl;

    st[8].id = 23-52272-2;
    st[8].semester = 5;
    st[8].credits = 75;
    st[8].cgpa = 3.65;
    cout<<st[8].id<<" "<<endl;
    cout<<st[8].semester<<" "<<endl;
    cout<<st[8].credits<<" "<<endl;
    cout<<st[8].cgpa<<" "<<endl;

    st[9].id = 22-54371-2;
    st[9].semester = 7;
    st[9].credits = 122;
    st[9].cgpa = 2.75;
    cout<<st[1].id<<" "<<endl;
    cout<<st[1].semester<<" "<<endl;
    cout<<st[1].credits<<" "<<endl;
    cout<<st[1].cgpa<<" "<<endl;

    st[10].id = 22-55790-2;
    st[10].semester = 2;
    st[10].credits = 28;
    st[10].cgpa = 3.73;
    cout<<st[1].id<<" "<<endl;
    cout<<st[1].semester<<" "<<endl;
    cout<<st[1].credits<<" "<<endl;
    cout<<st[1].cgpa<<" "<<endl;

    cout << "\nScholarship Students (CGPA >= 3.75):" << endl;
    for (int i = 1; i < 11; i++) {
        if (st[i].cgpa >= 3.75) {
            cout << "Student ID: " << st[i].id << endl;
        }
    }
    cout << "\nStudents with more than 50 credits:" << endl;
    for (int i = 1; i < 11; i++) {
        if (st[i].credits > 50) {
            cout << "Student ID: " << st[i].id << endl;
        }
    }

    cout << "\nStudents with at least 2 semesters and 28 credits:" << endl;
    for (int i = 1; i < 11; i++) {
        if (st[i].semester >= 2 && st[i].credits >= 28) {
            cout << "Student ID: " << st[i].id << endl;
        }
    }

    return 0;
}




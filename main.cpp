#include "student.h"

int main() {
    cout << "=== Student Information System ===" << endl << endl;

    // Object 1 - using default constructor
    Student student1;
    student1.setName("Habiba");
    student1.setAge(20);
    student1.setRollNumber(101);
    student1.setGPA(3.8);
    student1.showStudentInfo();

    cout << endl;

    // Object 2 - using parameterized constructor
    Student student2("Ayesha", 19, 102, 3.1);
    student2.showStudentInfo();

    cout << endl;

    // Object 3 - using parameterized constructor
    Student student3("Hamza", 21, 103, 2.4);
    student3.showStudentInfo();

    cout << "\n=== End of Program ===" << endl;
    return 0;
}

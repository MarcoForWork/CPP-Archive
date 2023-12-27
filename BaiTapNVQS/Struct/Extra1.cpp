/*
                    Chương trình quản lý sinh viên.
a) Định nghĩa ( khai báo) kiểu dữ liệu cấu trúc để quản lý sinh viên gồm các thành
phần là mã số sinh viên, họ và tên, năm sinh và điểm trung bình. (0.5đ)
b) Viết hàm tìm điểm trung bình lớn nhất trong mảng một chiều ds có n sinh viên;
c) Viết hàm xuất lên màn hình danh sách những sinh viên có điểm trung bình <5.0
trong mảng một chiều ds có n sinh viên. Các thông tin phải xuất là mã số sinh
viên, họ và tên, năm sinh và điểm trung bình
 */
#include <iostream>
#include <string>
#define MAX 100
using namespace std;

struct Student
{
    int ID;
    string Name;
    int year_of_birth;
    float GPA;

    static void input(Student student[MAX], int &quantity)
    {
        cout << "Enter student quantity: ";
        cin >> quantity;

        int count = 1;
        for (int i = 0; i < quantity; i++)
        {
            cout << "\nEnter the infomation of student " << count++ << ": \n";
            cout << "Enter student's ID: ";
            cin >> student[i].ID;
            cin.ignore();
            cout << "Enter student's name: ";
            getline(cin, student[i].Name);
            cout << "Enter student's year of birth: ";
            cin >> student[i].year_of_birth;
            cout << "Enter student's GPA: ";
            cin >> student[i].GPA;
        }
    }

    static void greatest_GPA(Student student[MAX], int quantity, float greatest_GPA)
    {
        greatest_GPA = student[0].GPA;
        for (int i = 0; i < quantity; i++)
        {
            if (greatest_GPA < student[i].GPA)
                greatest_GPA = student[i].GPA;
        }
        cout << "\nThe greatest GPA is: " << greatest_GPA << "\n";
    }

    static void below_average_student(Student student[MAX], int quantity)
    {
        int count = 1;
        cout << "\nStudent/Students with GPA below 5.0 is/are: \n";
        for (int i = 0; i < quantity; i++)
        {
            if (student[i].GPA < 5.0)
            {
                cout << "\nStudent " << count++ << ": \n";
                cout << "ID: " << student[i].ID << "\n";
                cout << "Name: " << student[i].Name << "\n";
                cout << "Year of birth: " << student[i].year_of_birth << "\n";
                cout << "GPA: " << student[i].GPA << "\n";
            }
        }
    }
};

int main()
{
    Student student[MAX];
    int quantity;
    float greatest_GPA;
    Student::input(student, quantity);
    Student::greatest_GPA(student, quantity, greatest_GPA);
    Student::below_average_student(student, quantity);
    return 0;
}
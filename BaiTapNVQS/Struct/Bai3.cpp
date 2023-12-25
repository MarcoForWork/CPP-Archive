#include <iostream>
#include <string>
#define MAX 100

using namespace std;

struct Province
{
    int Province_code;
    string Province_name;
    int Population;
    float Area;

    static void input(Province province[MAX], int &size)
    {
        cout << "Enter the quantity of provinces: ";
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cout << "\nEnter the infomation of province no." << i + 1 << "\n";
            cout << "Enter province's code: ";
            cin >> province[i].Province_code;
            cin.ignore();
            cout << "Enter province's name: ";
            getline(cin, province[i].Province_name);
            cout << "Enter province's population: ";
            cin >> province[i].Population;
            cout << "Enter province's area: ";
            cin >> province[i].Area;
        }
    }

    static void output(Province province[MAX], int size)
    {
        cout << "\nAll provinces are: \n";
        for (int i = 0; i < size; i++)
        {
            cout << "{Province's code: " << province[i].Province_code << ", Province's name: "
                 << province[i].Province_name << ", Province's population: " << province[i].Population
                 << ", Province's area: " << province[i].Area << "}\n";
        }
    }

    static void province_has_more_than_1m_population(Province province[MAX], int size)
    {
        cout << "\nProvinces with more than 1 million people are: \n";
        for (int i = 0; i < size; i++)
        {
            if (province[i].Population > 1000000)
                cout << province[i].Province_name << "\n";
        }
    }

    static void province_has_the_largest_area(Province province[MAX], int size)
    {
        Province largest_province = {0, "", 0, 0.0};
        cout << "Province with the largest area is: ";
        for (int i = 0; i < size; i++)
        {
            if (province[i].Area > largest_province.Area)
                largest_province = province[i];
        }
        cout << largest_province.Province_name << "\n";
    }
};

int main()
{
    Province provinces[MAX];
    int size;

    Province::input(provinces, size);
    Province::output(provinces, size);
    Province::province_has_more_than_1m_population(provinces, size);
    Province::province_has_the_largest_area(provinces, size);

    return 0;
}

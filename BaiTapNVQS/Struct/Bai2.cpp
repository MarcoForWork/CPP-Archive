#include <iostream>
#include <iomanip>
#include <cmath>
#define MAX 100
using namespace std;

struct Point
{
    float x;
    float y;

    // point
    void input_point()
    {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
    }

    void output_point()
    {
        cout << "\nx: " << x;
        cout << "\ny: " << y << "\n";
    }

    // array
    static void input_array(Point array[MAX], int &size)
    {
        cout << "\nEnter array's size: ";
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter element " << i + 1 << ": ";
            cin >> array[i].x;
            cin >> array[i].y;
        }
    }

    static void output_array(Point array[MAX], int size)
    {
        cout << "All elements of array are: \n";
        for (int i = 0; i < size; i++)
        {
            cout << "{" << array[i].x << "," << array[i].y << "}\n";
        }
    }

    // Distance between 2 point
    static float Distance_between_2P(const Point &A, const Point &B)
    {
        return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
    }

    // Farthest point
    static void farthest_point_to_O(Point array[MAX], int size)
    {
        Point Farthest_point = {0, 0};
        cout << "\nFarthest point is: ";
        for (int i = 0; i < size; i++)
        {
            if (Point::Distance_between_2P(array[i], {0, 0}) >= Point::Distance_between_2P(Farthest_point, {0, 0}))
            {
                Farthest_point = array[i];
            }
        }
        Farthest_point.output_point();
    }

    // Nearest point
    static void nearest_point_to_O(Point array[MAX], int size)
    {
        Point Nearest_point = {MAX, MAX};
        cout << "\nNearest point is: ";
        for (int i = 0; i < size; i++)
        {
            if (Point::Distance_between_2P(array[i], {0, 0}) <= Point::Distance_between_2P(Nearest_point, {0, 0}))
            {
                Nearest_point = array[i];
            }
        }
        Nearest_point.output_point();
    }
};

int main()
{
    Point A, B, C[MAX];
    int size;

    A.input_point();
    A.output_point();
    B.input_point();
    B.output_point();
    cout << "\n";

    Point::input_array(C, size);
    Point::output_array(C, size);
    cout << "\n";

    cout << "Distance between A and B: " << Point::Distance_between_2P(A, B) << "\n";

    Point::farthest_point_to_O(C, size);
    Point::nearest_point_to_O(C, size);
    return 0;
}

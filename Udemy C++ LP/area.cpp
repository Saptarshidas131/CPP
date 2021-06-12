#include <iostream>
using namespace std;

int main()
{
    int room_length {0}, room_width {0};
    cout << "Enter width of the room: " << endl;
    cin >> room_length;
    cout << "Enter the length of the room: " << endl;
    cin >> room_width;
    cout << "Area of the room: " << room_length * room_width << " square feet" << endl;
    return 0;
}

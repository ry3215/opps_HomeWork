// WAP using class to calculate volume of a room.

#include <iostream>

using namespace std;

class Room
{
private:
    int length;
    int width;
    int height;

public:
    Room(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }
    void Area()
    {
        cout << "\nThe Area of the room is " << length * width;
    }
    void Volume()
    {
        cout << "\nThe Volume of the room is " << length * width * height;
    }
};

int main()
{
    Room r(34, 56, 78);
    r.Area();
    r.Volume();
    return 0;
}

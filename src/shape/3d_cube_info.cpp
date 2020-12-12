#include <iostream>
#include <string>
#include <iomanip>


class Cube {
public:
       Cube(float _x,float _y,float _z) {
              x = _x;
              y = _y;
              z = _z;
       }

       float getVolume() {
              return x * y * z;
       }
       float getSurface() {
              return ((x * y) * 2) + ((x * z) * 2) + ((y * z) * 2);
       }

private:
       float x,y,z;
};


int main(int argc, char** argv) {

       if (argc < 1) {
              std::cout << "No argument inputted.\n\tArgs: x y z\n";

       } else {
              float x,y,z;
              try {x = std::stoi(argv[1]); } catch (...) {
                     std::cout << "First argument is invalid.\n";
                     return -1;
              }
              try {y = std::stoi(argv[2]); } catch (...) {
                     std::cout << "Second argument is invalid.\n";
                     return -1;
              }
              try {z = std::stoi(argv[3]); } catch (...) {
                     std::cout << "Third argument is invalid.\n";
                     return -1;
              }
              Cube c(x,y,z);
              std::cout << "Shape dimensions:" << std::setw(10) << "X: " << x << "\t Y:" << y << "\t Z:" << z << std::endl;
              std::cout << "Shape volume:   " << std::setw(10) << c.getVolume() << std::endl;
              std::cout << "Shape surface:  " << std::setw(10) <<c.getSurface() << std::endl;
              return 0;

       }

}

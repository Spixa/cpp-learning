#include <iostream>
#include <iomanip>
#include <string>


class Shape {
public:
       Shape(int _lines,bool _regular) {
              lines = _lines;
              regular = _regular;
       }

       float getInternalAngle() {
              return (lines - 2) * 180;
       }
       float getSingleInternalAngle() {
              if (regular)
                     return ((lines - 2) * 180) / lines;
              return 0;
       }
       float getExternalAngle() {
              if (regular)
                     return 360 / lines;
              return 0;
       }

       int getLines() {return lines;}
       bool isRegular() {return regular;}
private:
       bool regular;
       int lines;
};

int main(int argc, char** argv) {


       if (argc < 2) {
              std::cout << "No arguments.\n";
              return -1;
       } else {
              unsigned int shape;
              bool regular_shape;
              try { shape = std::stoi(argv[1]); } catch(...) {
                     std::cout << "First argument should be an unsigned integer saying amount of the lines the shape has.\n\tArgs: [u_integer32 shape_lines] [bin_Bool shape_regular]\n";
                     return -1;
              }
              try {regular_shape = std::stoi(argv[2]);
                     if (shape < 3) {
                            std::cout << "Shape is ambigiuous.\nApp: Accessing a shape that has less than 3 lines.\n\tException: disconnected ribs\n";
                            return -1;
                     }

                     if (regular_shape > 1) {
                            std::cout << "Second argument is not 0 or 1.\n";
                            return -1;
                     }

              } catch(...) {
                     std::cout << "Second argument should be 0 or 1 defining if either the shape is regular or not (0 != reg, 1 == reg)\n\tArgs: [u_integer32 shape_lines] [bin_Bool shape_regular]\n";
                     return -1;
              }



              Shape s(shape,regular_shape);
              std::cout << "Shape lines: " << shape << std::endl;
              std::cout << "Shape internal angle: " << s.getInternalAngle() << std::endl;
              if (regular_shape) {
                     std::cout << "Shape single internal angle: " << s.getSingleInternalAngle() << std::endl;
                     std::cout << "Shape external angle: " << s.getExternalAngle() << std::endl;
              } else {
                     std::cout << "If you make the shape regular you can get more percise information about the shape.\n";
              }
              return 0;
       }

}

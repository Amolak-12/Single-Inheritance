#include <iostream>
using namespace std;

//Single level Inheritance

class Car {
  public:
    string brand;
    int weight;
    int age;

    void speedUp() {
      cout << "Speeding Up!!" << endl;
      cout << "Speed increased to : 150 km/h" <<endl;
    }
    void breakDown() {
      cout << "Breaking Down!!" << endl;
      cout << "Speed decreased to : 20 km/h" << endl;
    }
};

class Scorpio: public Car {

};
int main() {

  //Single Inheritance

  Scorpio Amolaks11;
  Amolaks11.speedUp();

}
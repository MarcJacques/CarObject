#include <string>
using namespace std;

class Car {

  public:
  Car(); //this is the default constructor. It does not take any parameters
  Car(string vin, string col, double iniSpeed, double ePower) //******************
  double getCurrentSpeed();
  void setSpeed(double newSpeed);
  void paint(string newColor);
  void stop();
  void displayStatus();
  
  private:
  double enginePower;
  double speed;
  string vinNumber;
  string color; 
}
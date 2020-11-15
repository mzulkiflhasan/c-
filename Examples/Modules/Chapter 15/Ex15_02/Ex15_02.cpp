// Using virtual functions
import <iostream>;
import box;                                 // For the Box class
#include "ToughPack.h"                           // For the ToughPack class
import carton;                              // For the Carton class

int main()
{
  Box box {20.0, 30.0, 40.0};
  ToughPack hardcase {20.0, 30.0, 40.0};        // A derived box - same size
  Carton carton {20.0, 30.0, 40.0, "Plastic"};  // A different derived box

  box.showVolume();        // Volume of Box
  hardcase.showVolume();   // Volume of ToughPack
  carton.showVolume();     // Volume of Carton

  // Now using a base pointer...
  Box* base {&box};        // Points to type Box
  std::cout << "\nbox volume through base pointer is " << base->volume() << std::endl;
  base ->showVolume();

  base = &hardcase;        // Points to type ToughPack
  std::cout << "hardcase volume through base pointer is " << base->volume() << std::endl;
  base->showVolume();

  base = &carton;          // Points to type Carton
  std::cout << "carton volume through base pointer is " << base->volume() << std::endl;
  base->showVolume();
}

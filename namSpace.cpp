#include <iostream>
namespace first{
    int x =1;
}
namespace second {                                //namespace provides a solution for preventing name colflicts  in a large projects .
    int x = 2;                                  // each eltity  have a uniwue name .a name space allows a identically name entities  as long as teh name space is   different.
}
int main (){
    int x =0;
   // std:: cout<< x;
    std:: cout<< first:: x;
  //  std:: cout<< second :: x;
    return 0;
    // alternative to the program
    /*
    using namespace second;
    std:: cout<< x;

    */

}
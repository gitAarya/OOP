#include <iostream>
 int main (){
    // type conversion = conversion of one data type into another data type
    //implicit=automatic
    //explicit =precede value with new data type

   // int x= 3.24; // will be  3  (implicit conversion )
   /*
   double x = (int)3.14;// explicit conversion 
    std :: cout<< x;

  std :: cout<< (char)  100; // 100 = letter 'd' in ASCII table
   */ 
  int correct =8;
  int question = 10;
  double result = (double)correct/question * 100;

  std :: cout << result <<" %";


    return 0;
 }
#include <iostream>
#include <cmath>

int main() {
  //
  char doubleBasicOrFunc;
  char exitAbout;
  char optionMenu;
  bool radianDegree = false;
  bool funnyErrors = false;
  //
  LOOP:do {
  //
  // WELCOME Screen
  std::cout << "\n\n\n\n\n\n\n";
  std::cout << "____    __    ____  _______  __        ______   ______   .___  ___.  _______ \n";
  std::cout << "\\   \\  /  \\  /   / |   ____||  |      /      | /  __  \\  |   \\/   | |   ____|\n";
  std::cout << " \\   \\/    \\/   /  |  |__   |  |     |  ,----'|  |  |  | |  \\  /  | |  |__   \n";
  std::cout << "  \\            /   |   __|  |  |     |  |     |  |  |  | |  |\\/|  | |   __|  \n";
  std::cout << "   \\    /\\    /    |  |____ |  `----.|  `----.|  `--'  | |  |  |  | |  |____ \n";
  std::cout << "    \\__/  \\__/     |_______||_______| \\______| \\______/  |__|  |__| |_______|\n\n\n";
  //
  //
  //
  // Variable Declaration
  //
  char titleScreen;
  //
  //
  //
/*----------------------------------------------------------------------------------*/
  std::cout << "                      Welcome to Calculator v1.0.0\n\n\n";
  std::cout << "Choose one option:\n\n";

  std::cout << "Quickstart (q)\n";
  std::cout << "Calculate (c)\n";
  std::cout << "About (a)\n";
  std::cout << "Options (o)\n";
  std::cout << "My Other Stuff (m)\n";
  std::cout << "Github (g)\n";
  std::cout << "Exit (e)\n\n";

  std::cin >> titleScreen;
/*----------------------------------------------------------------------------------*/
  if (titleScreen == 'c') {
    std::cout << "\n\nDo you want to do single number (s)(e.g. sqrt x) or double number maths (d)(e.g. x+y)?\n\n";
  }
/*----------------------------------------------------------------------------------*/
  if (titleScreen == 'a') {
    std::cout << "\n©2022 MBA Apps \n This app was made in C++20 \nCalculator Version 1.0.0 \ncmath library included\n\nSupported Double Number Funtions:\nAdd\nSubtract\nMultiply\nDivide\nSquare Root\n\nSupported Single Number Functions\nTrigonometric Functions\nHyperbolic Function\nExponential and logarithmic functions\nPower functions\nError and gamma functions\nRounding and remainder functions\nFloating-point manipulation functions\n\nType e to exit About\n\n";
    std::cin >> exitAbout;
    if (exitAbout == 'e') {
      std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      char exitAbout = 'a';
      goto LOOP;
    }
  
  }
  if (titleScreen == 'o') {
    std::cout << "";
    std::cout << std::endl << "1. Angle Measurement:    ";
    if (radianDegree == false) {
      std::cout << "Radians";
    }
    else {
      std::cout << "Degrees";
    }
    std::cout << std::endl << "2. Funny Errors:         ";
    if (funnyErrors == false) {
      std::cout << "Off";
    }
    else {
      std::cout << "On";
    }
    std::cout << std::endl << "3. ???:                              ?";
  }
/*----------------------------------------------------------------------------------*/
  if (titleScreen == 'e') {
    std::exit(0);
  }
  }
  while (exitAbout == 'e');

  char sdchoice;
  std::cin >> sdchoice;

 
/*----------------------------------------------------------------------------------*/
  if (sdchoice == 'd') {
  
    float in1;
    float in2;
    char op;
   
    
    
    std::cout << "\nEnter your equation\n\n";

    std::cin >> in1 >> op >> in2;

    if (op == '+') {
      std::cout << in1 + in2;
    }
    if (op == '-') {
      std::cout << in1 - in2;
    }
    if (op == '*' || op == 'x') {
      std::cout << in1 * in2;
    } 
    if (op == '/') {
      std::cout << in1 / in2;
    }
    if (op == '^') {
      std::cout << pow(in1, in2);
    }
    if (op != '+' && op != '-' && op != '*' && op != 'x' && op != '/' && op != '^') {
      std::cout << "Invalid Operation\n";
    }

  }
/*----------------------------------------------------------------------------------*/
  if (sdchoice == 's') {

    float num;
    std::string func;

    std::cout << "\nEnter your function and number with a SPACE BETWEEN THEM. type help 0 for help and type exit 0 to return to the main menu.\n\n";
    
    std::cin >> func >> num;
    
    if (func == "sqrt") {
      std::cout << sqrt(num);
    }
    if (func == "sin") {
      std::cout << sin(num);
    }
    if (func == "cos") {
      std::cout << cos(num);
    }
    if (func == "tan") {
      std::cout << tan(num);
    }
    if (func == "acos" || func == "cos-1") {
      std::cout << acos(num);
    }
    if (func == "asin" || func == "sin-1") {
      std::cout << asin(num);
    }
    if (func == "atan" || func == "tan-1") {
      std::cout << atan(num);
    }
    if (func == "cosh") {
      std::cout << cosh(num);
    }
    if (func == "sinh") {
      std::cout << sinh(num);
    }
    if (func == "tanh") {
      std::cout << tanh(num);
    }
    if (func == "acosh" || func == "cosh-1") {
      std::cout << acosh(num);
    }
    if (func == "asinh" || func == "sinh-1") {
      std::cout << asinh(num);
    }
    if (func == "atanh" || func == "tanh-1") {
      std::cout << atanh(num);
    }
    if (func == "exp" || func == "e^" || func == "e ^") {
      std::cout << exp(num);
    }
    if (func == "log") {
      std::cout << log(num);
    }
    if (func == "log10") {
      std::cout << log10(num);
    }
    if (func == "log") {
      std::cout << log(num);
    }
    if (func == "exp2") {
      std::cout << exp2(num);
    }
    if (func == "expm1") {
      std::cout << expm1(num);
    }
    if (func == "exp2") {
      std::cout << exp2(num);
    }
    if (func == "ilogb") {
      std::cout << ilogb(num);
    }
    if (func == "log1p") {
      std::cout << log1p(num);
    }
    if (func == "log2") {
      std::cout << log2(num);
    }
    if (func == "logb") {
      std::cout << logb(num);
    }
    if (func == "cbrt" || func == "3sqrt") {
      std::cout << cbrt(num);
    }
    if (func == "erf") {
      std::cout << erf(num);
    }
    if (func == "erfc") {
      std::cout << erfc(num);
    }
    if (func == "tgamma") {
      std::cout << tgamma(num);
    }
    if (func == "lgamma") {
      std::cout << lgamma(num);
    }
    if (func == "ceil" || func == "round up") {
      std::cout << ceil(num);
    }
    if (func == "floor" || func == "round down") {
      std::cout << floor(num);
    }
    if (func == "trunc") {
      std::cout << trunc(num);
    }
    if (func == "round") {
      std::cout << round(num);
    }
    if (func == "lround") {
      std::cout << lround(num);
    }
    if (func == "llround") {
      std::cout << llround(num);
    }
    if (func == "rint") {
      std::cout << rint(num);
    }
    if (func == "lrint") {
      std::cout << lrint(num);
    }
    if (func == "llrint") {
      std::cout << llrint(num);
    }
    if (func == "nearbyint") {
      std::cout << nearbyint(num);
    }
    if (func == "fabs") {
      std::cout << fabs(num);
    }
    if (func == "help" && num == 0) {
      std::cout << "\nHelp Page\n\n";
      std::cout << "Calculator is a C++ application for basic and advanced calculations. A list of all available single number mathematical functions and shortcuts are available below.\n\n";
      std::cout << "Name          Command          Description\n\n";
      std::cout << "Help          help 0           Opens the help menu\n";
      std::cout << "Exit          exit 0           Exits to the main menu\n";
      std::cout << "Exit Program  exit 1           Exits the program\n\n";
      std::cout << "Add           x + y            Adds to operands together\n";
      std::cout << "Subtract      x - y            Subtracts the the two operands\n";
      std::cout << "Multiply      x * y OR x x y   Multiplies the two operands\n";
      std::cout << "Divide        x / y            Divides the two operands\n";
      std::cout << "Indices       x ^ y            First operand to the power of the second operand\n\n";
      std::cout << "";
    }
    if (func == "exit" && num == 0) {
      goto LOOP;
    }
    if (func == "exit" && num == 1) {
      std::exit(0);
    }
  }


  
}




#include <iostream>
#include <string>
#include <cmath>
#include 'include.h'
#include 'idk.cpp'

//hi

namespace Main {
  using namespace std;
  int calc(int a, int b, int answer) {
    string op;
    cout >> "Operation: " >> endl;
    cin << op;
    if (op == "+") {
      answer = a + b
      cout >> "answer = " >> endl;
    }
    if (op == "-") {
      answer = a - b
      cout >> "answer = " >> endl;
    }
    if (op == "×" || op == "*") {
      answer = a * b
      cout >> "answer = " >> endl;
    }
    if (op == "÷" || op == "/") {
      answer = a / b
      cout >> "answer = " >> endl;
    }
    return answer;
  }
}

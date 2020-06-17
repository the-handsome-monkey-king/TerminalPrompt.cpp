/*********************************************************
*
*  test_prompt.cpp
*
*  @author Ryan Morehouse
*  @license MIT
*
*  A test of the functionality of the TerminalPrompt class.
*
  ********************************************************/

#include <string>
#include <sstream>
#include "TerminalPrompt.h"

int main() {
  bool b;
  char c;
  double d, d_pos;
  float f, f_pos;
  int i, i_pos;
  long l, l_pos;
  std::string s;
  TerminalPrompt term;

  std::string prompt = "Enter a bool (y or n)";
  b = term.get_bool(&prompt);

  prompt = "Enter a char";
  c = term.get_char(&prompt);

  prompt = "Enter a double";
  d = term.get_double(&prompt);
  
  prompt = "Enter a positive double";
  d_pos = term.get_positive_double(&prompt);

  prompt = "Enter a float";
  f = term.get_float(&prompt);
  
  prompt = "Enter a positive float";
  f_pos = term.get_positive_float(&prompt);

  prompt = "Enter a int";
  i = term.get_int(&prompt);
  
  prompt = "Enter a positive int";
  i_pos = term.get_positive_int(&prompt);

  prompt = "Enter a long";
  l = term.get_long(&prompt);
  
  prompt = "Enter a positive long";
  l_pos = term.get_positive_long(&prompt);

  prompt = "Enter a string";
  s = term.get_string(&prompt);

  std::ostringstream oss;
  oss << "Bool: " << b << std::endl;
  oss << "Char: " << c << std::endl;
  oss << "Double: " << d << std::endl;
  oss << "Positive Double: " << d_pos << std::endl;
  oss << "Float: " << f << std::endl;
  oss << "Positive Float: " << f_pos << std::endl;
  oss << "Int: " << i << std::endl;
  oss << "Positive Int: " << i_pos << std::endl;
  oss << "Long: " << l << std::endl;
  oss << "Positive Long: " << l_pos << std::endl;
  oss << "String: " << s << std::endl;
  std::cout << oss.str();

  return 0;
}

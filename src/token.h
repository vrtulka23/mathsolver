#ifndef TOKEN_H
#define TOKEN_H

#include <string>

template <class A>
class Token {
public:
  TokenType type;
  OperatorType optype;
  A *atom;
  Token(TokenType t): type(t), atom(NULL) {}
  Token(TokenType t, OperatorType o): type(t), optype(o), atom(NULL) {};
  Token(TokenType t, A *a): type(t), atom(a) {};
  void print() {
    if (type==EMPTY_TOKEN) {
      std::cout << "Token(EMPTY)" << std::endl;
    } else if (type==OPERATOR_TOKEN) {
      std::cout << "Token(OPERATOR " << optype << ")" << std::endl;
    } else if (type==ATOM_TOKEN) {
      std::cout << "Token(ATOM " << atom << ")" << std::endl;
    }
  };
};

#endif //TOKEN

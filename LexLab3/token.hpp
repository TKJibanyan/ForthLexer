//
//  token.hpp
//  LexLab3
//
//  Created by Tony Khamphouy on 10/2/23.
//

#ifndef token_hpp
#define token_hpp

#include "enums.hpp"
enum class TokenType;

class Token{
private:
    string tName;
    TokenType tokenT;
    int refCount;
public:
    Token(string name, TokenType token): tName(name), tokenT(token){}
    ~Token() =default;
    ostream& print(ostream& o)const;
};
inline ostream& operator <<(ostream& os, Token& t) {return t.print(os);}

#endif /* token_hpp */

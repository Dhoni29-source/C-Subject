#include "std_lib_facilities.h"

struct Token{
    char kind; 
    double value; 
    }; 
    
class Token_stream {
    public:
        // Public dapat diakses dari luar class Token_stream 
        Token get(); 
        void putback(Token); 
    private:
        // Private hanya dapat digunakan pada class Token_Stream atau ts
        bool full {false};
        Token buffer; 
    };

extern Token_stream ts;
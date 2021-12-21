#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
class Karen
{
private:
    void debug( void );
    void info( void );
    void warning ( void );
    void error ( void );
public:
    Karen();
    ~Karen();
    void complain(std::string level);
    void (Karen::*fun_ptr[4])(void);
};

int main()
{
    Karen mhah;
    void (Karen::*ptr) (char) = &Karen::complain("zbi");
}

#endif
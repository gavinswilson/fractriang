#include <iostream>
#include "analysis.cpp"
#include <string>
#include <cmath>

int main(int argc, char* argv[]) 
{ 
    std::cout << "You have entered " << argc << " arguments" << std::endl;
    
    frtri tnum;
    unsigned long long int bob;

    for (int i = 1; i < argc; i++) 
    {
        std::cout << argv[i] << " " << 
            tnum.triangleno(std::stoi(argv[i])) << " " << 
            tnum.factorial(std::stoi(argv[i]))  << " " << 
            tnum.prime_factors(std::stoi(argv[i])) << " " <<
            std::endl;
    }
    
    std::cout << std::endl;
    tnum.fill_prime_array();
    //tnum.print_prime_array();
    tnum.fill_fac_prime_array();
    tnum.print_fac_prime_array();
    return 0;
}
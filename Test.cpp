#include "doctest.h"
#include "solver.hpp"
using namespace std;
using namespace solver;


TEST_CASE("solver RealVariable"){
    RealVariable x;
    
    CHECK(solve(2*x-4 == 10) ==7);
    CHECK(solve((x^2) == 16) ==4);
    CHECK(solve((x^2) == -16) ==-1);//need to throw exception
    CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4);
    CHECK(solve(2*x+1+x == 10) ==3);
    CHECK(solve(2*x == 10) ==5);
    CHECK(solve(3*x+2*x-9 ==2*x) ==3);
    CHECK(solve(2*x+1+x+6 == 10) ==1);
    CHECK(solve(10*x == 2*x+1+x) ==3);
    CHECK(solve((x^2) == 9) ==3);
    CHECK(solve((x^2) == 4) ==2);
    CHECK(solve((x^2) == 1) ==1);
    CHECK(solve((x^2) == 0) ==0);
    CHECK(solve(x-x == 10) ==7);//need to throw exception
    CHECK(solve(2*x-2*x == 0) ==0);//need to throw exception 0/0
    CHECK(solve(2*x-4 == 16*x/2) ==-4/6);
    CHECK(solve((x^2) + 4*x + 5 == 20 ) ==4);//need to check the result
    CHECK(solve((x^2) + 10*x + 4.0 == 20- x) ==7);//need to check the result
    CHECK(solve((x^2) + 4.0+x == 20 + x/2 ) ==2);//need to check the result
    CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0- x) ==9);//need to check the result
    CHECK(solve(6*x == 2*x^2) ==-3);//need to throw exception
    CHECK(solve(x+1-x == 10) ==-1);//need to throw exception
    CHECK(solve( 24*x== 12*x) ==2);
    CHECK(solve(2*x+1+x+6 == 10) ==-1);//need to throw exception
    CHECK(solve(x^2+16 == 10*x-1) ==-1);//need to throw exception
    CHECK(solve(2*x+5*x+7 == 0*x) ==-1);//or 0
    CHECK(solve(2*x == 2) ==1);
    CHECK(solve(0*x == 10) ==-1);//need to throw exception
    CHECK(solve(x == 10) ==10);
    CHECK(solve(3*x-4-5-6-7+2 == 0) ==7);
    CHECK(solve(x^2+x== -1) ==5);////need to check the result
    CHECK(solve(2*x/2-0 == 10) ==10);
    CHECK(solve(2*x-4 == 10/2+x) ==9);
    CHECK(solve(2*x-4 == 10) ==7);
    CHECK(solve(0 == x^2) ==0);
    CHECK(solve(2*x-4 == 2*x-4) ==0);
    CHECK(solve(2*x-4 == 10) ==7);
    CHECK(solve(5*x == 10) ==2);
    CHECK(solve(36*x == 6) ==6);
    CHECK(solve(2*x-4*x == 10) ==-5);
    CHECK(solve(3*x == 12) ==4);//or 3
    CHECK(solve(2*x+4 == 10) ==2);
    CHECK(solve((x^2) == x) ==0);//or1
    CHECK(solve(6*x== x-5) ==-1) ;
    CHECK(solve(5*x==4*x-68) == -68);
    CHECK(solve((2*x)/4 ==2 ) ==4);
    CHECK(solve(x-5 == x-x-6) ==-1);
    CHECK(solve((2*x)/2 == x-x) ==0);
    CHECK(solve(2*x/2 == x) ==1 );
    CHECK(solve( x+6==x-6 ) ==-1 );//throw
    CHECK(solve(5*x == x+20) ==5 );





} 
    
TEST_CASE("solver ComplexVariable"){
    ComplexVariable x;

   
   
    CHECK(solve(2*x-4 == 10) ==std::complex<double>(7.2));
    CHECK(solve((x^2) == 16) ==std::complex<double>(7.2));
    CHECK(solve((x^2) == -16) ==std::complex<double>(7.2));//need to throw exception
    CHECK(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==std::complex<double>(7.2));
    CHECK(solve(2*x+1+x == 10) ==std::complex<double>(7.2));
    CHECK(solve(2*x == 10) ==std::complex<double>(7.2));
    CHECK(solve(3*x+2*x-9 ==x) ==std::complex<double>(7.2));
    CHECK(solve(2*x+1+x+6 == 10) ==std::complex<double>(7.2));
    CHECK(solve(10*x == 2*x+1+x) ==std::complex<double>(7.2));
    CHECK(solve((x^2) == 9) ==std::complex<double>(7.2));
    CHECK(solve((x^2) == 4) ==std::complex<double>(7.2));
    CHECK(solve((x^2) == 1) ==std::complex<double>(7.2));
    CHECK(solve((x^2) == 0) ==std::complex<double>(7.2));
    CHECK(solve(x-x == 10) ==std::complex<double>(7.2));//need to throw exception
    CHECK(solve(2*x-2*x == 0) ==std::complex<double>(7.2));//need to throw exception 0/0
    CHECK(solve(2*x-4 == 16*x/2) ==std::complex<double>(7.2));
    CHECK(solve((x^2) + 4*x + 5 == 20 ) ==std::complex<double>(7.2));//need to check the result
    CHECK(solve((x^2) + 10*x + 4.0 == 20*x- x) ==std::complex<double>(7.2));//need to check the result
    CHECK(solve((x^2) + 4.0+x ==  x/2+20 ) ==std::complex<double>(7.2));//need to check the result
    CHECK(solve((x^2) + 2*x + 4.0 == x- 20 + 6.0) ==std::complex<double>(7.2));//need to check the result
    CHECK(solve(6*x == x^2) ==std::complex<double>(7.2));//need to throw exception
    CHECK(solve(x+1-x == 10) ==std::complex<double>(7.2));//need to throw exception
    CHECK(solve( 24*x== 12*x-1) ==std::complex<double>(7.2));
    CHECK(solve(2*x+1+x+6 == 10) ==std::complex<double>(7.2));//need to throw exception
    CHECK(solve(x^2+16+x == 10) ==std::complex<double>(7.2));//need to throw exception
    CHECK(solve(2*x+2*x^2+4*x == 0) ==std::complex<double>(7.2));//or 0
    CHECK(solve(2*x == 2) ==std::complex<double>(7.2));
    CHECK(solve(0*x == 10) ==std::complex<double>(7.2));//need to throw exception
    CHECK(solve(x == 10) ==std::complex<double>(7.2));
    CHECK(solve(3*x-4-5-6-7+2 == 0) ==std::complex<double>(7.2));
    CHECK(solve(x^2+3-x == 10) ==std::complex<double>(7.2));////need to check the result
    CHECK(solve(2*x/2-0 == 10) ==std::complex<double>(7.2));
    CHECK(solve(2*x-4 == x+10/2) ==std::complex<double>(7.2));
    CHECK(solve(2*x-4 == 10) ==std::complex<double>(7.2));
    CHECK(solve(x ==x + x^2) ==std::complex<double>(7.2));
    CHECK(solve(2*x-4 == 2*x-4) ==std::complex<double>(7.2));
    CHECK(solve(2*x-4 == 10) ==std::complex<double>(7.2));
    CHECK(solve(5*x == 10) ==std::complex<double>(7.2));
    CHECK(solve(36*x+7 == 6) == std::complex<double>(7.2));
    CHECK(solve(2*x-4*x == 10) ==std::complex<double>(7.2));
    CHECK(solve(3*x^2+2*x+x+9.0 == 12-5*4) ==std::complex<double>(7.2));//or 3
    CHECK(solve(2*x+4i == 10) ==std::complex<double>(7.2));
    CHECK(solve((x^2) == x-16i) ==std::complex<double>(7.2));
    CHECK(solve(x-5 == x-x+-6i) == std::complex<double>(5,-6));
    CHECK(solve(5*x-5i == 5*x-5i) == std::complex<double>(0,0));
    CHECK(solve((2*x)/3 == x-x+98+25i) == std::complex<double>(1,1));
    CHECK(solve(x-5 == x-x+-6i) == std::complex<double>(5,0));
    CHECK(solve((2*x)/3+3i == x-x+25i) == std::complex<double>(1,1));
    CHECK(solve(2*x/2 == x+3i) == std::complex<double>(2,0));
    CHECK(solve( x+6i==x-6i ) == std::complex<double>(0,12));
    CHECK(solve(5*x == x+25i) == std::complex<double>(1,0));

} 
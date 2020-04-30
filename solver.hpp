#include <iostream>
#include <complex>

using namespace std;

namespace solver{

 
 class RealVariable{

private:
double _a;
double _b;
double _c;

public:
 
//    RealVariable( double _b= 0.0):b(_b){cout<<"b== "<<b<<endl;}
RealVariable(const double& a=0.0,const double& b=0.0,const double& c=0.0):_a(a),_b(b),_c(c){
}
// RealVariable(const double& c=0.0):_c(c){
// }

double a() const {
		return _a;
	}
double b() const {
		return _b;
	}
double c() const {
		return _c;
	}

 ///////////////////////   operator/    //////////////
//   friend RealVariable operator/(double num,RealVariable& t);
//   friend RealVariable operator/(RealVariable& t,double num);
//   friend RealVariable operator/(RealVariable& t,RealVariable& d);
   RealVariable& operator/(double num){



    return *this;

}
/////////////////////////operator*////////////////////////
//  friend RealVariable operator*(double num,RealVariable& t);
//  friend RealVariable operator*(RealVariable& t,double num);
 friend  RealVariable operator*(double  num, RealVariable& t);

// RealVariable& operator*(RealVariable & n){
//     return *this;
// }
//  RealVariable& operator*(double num){
//     return *this;
// }

///////////////operator+/////////////////////////////////

  RealVariable& operator+(  RealVariable n ){
     _b=_b+n._b;
return *this;
}

 RealVariable& operator+(double num){
     cout<<"double-hpp-num-op:+: "<<num<<endl;
_c=_c+num;
    return *this;
}
 friend  RealVariable operator+(double num,RealVariable& t);
//   friend RealVariable operator+(RealVariable t,double num);
//   friend RealVariable operator+(RealVariable& t,RealVariable& d);

//////////////////////////////////////operator-///////////////


RealVariable& operator-(double num){
        cout<<"double-hpp-num-op:-: "<<num<<endl;

    return *this;
}

RealVariable& operator-(const RealVariable&  n){
   _b--;
    return *this;
}
friend  RealVariable operator-(double num,RealVariable& t);
//   friend RealVariable operator-(RealVariable& t,double num);
//   friend RealVariable operator-(RealVariable& t,RealVariable& d);
/////////////////////operator^/////////////////////////

RealVariable& operator^(RealVariable  n){
    return *this;
}
friend  RealVariable operator^(RealVariable& t,double num);

////////////////////operator==/////////////////////////////
RealVariable& operator ==(RealVariable  n){
    return *this;
}
 RealVariable& operator==(double num){
     return *this;
 }
 friend RealVariable operator==(double num,RealVariable& t);

////////////////////////////////////////////////////////////////////
//  friend RealVariable operator+(RealVariable& t,double num);
//  friend RealVariable operator+(RealVariable& t,RealVariable& d);
//  friend RealVariable operator-(double num,RealVariable& t);
// friend  RealVariable operator-(RealVariable& t,int num);
// friend  RealVariable operator-(RealVariable& t,RealVariable& d);
//  friend RealVariable operator^(double num,RealVariable& t);
// friend  RealVariable operator^(RealVariable& t,RealVariable& d);
//  friend RealVariable operator==(double num,RealVariable& t);
//   friend RealVariable operator==(RealVariable& t,double num);
//   friend RealVariable operator==(RealVariable& t,RealVariable& d);
   //friend RealVariable operator==(double& num,double num1);
////////////////////////////////////////////////////////////////////////
 };



class ComplexVariable{
public:

double comp;
  ComplexVariable():comp(0.0){};
   
   
 
  ///////////////////////////operator +////////////////////////////////////////
 ComplexVariable& operator+(std::complex<double>){
     return *this;
 }
 
 ComplexVariable& operator+(double num){
     return *this;
 }

ComplexVariable& operator+(ComplexVariable num){
     return *this;
 }
//    friend ComplexVariable operator+(ComplexVariable& t,std::complex<double>);

   friend ComplexVariable operator+(double num,ComplexVariable t);
//    friend ComplexVariable operator+(ComplexVariable& t,double num);
//    friend ComplexVariable operator+(ComplexVariable& t,ComplexVariable& d);
 ///////////////////////////operator -////////////////////////////////////////
ComplexVariable& operator-(std::complex<double>){
     return *this;
 }
ComplexVariable& operator-(double num){
    return *this;
}

ComplexVariable& operator-(const ComplexVariable& n){
    return *this;
}
    friend ComplexVariable operator-(double num,ComplexVariable& t);
//    friend ComplexVariable operator-(ComplexVariable& t,double num);
//    friend ComplexVariable operator-(ComplexVariable& t,ComplexVariable& d);
 
 ///////////////////////////operator *////////////////////////////////////////

   friend ComplexVariable operator*(double num,ComplexVariable& t);
//    friend ComplexVariable operator*(ComplexVariable& t,double num);
//    friend ComplexVariable operator*(ComplexVariable& t,ComplexVariable& d);

   
///////////////////////////operator /   /////////////////////////////////
  ComplexVariable& operator/(double num){
    return *this;
}
//    friend ComplexVariable operator/(double num,ComplexVariable& t);
//    friend ComplexVariable operator/(ComplexVariable& t,double num);
//    friend ComplexVariable operator/(ComplexVariable& t,ComplexVariable& d);
 
///////////////////////////////////////////////////////////////////   
 
 
 ///////////////////////////operator ==////////////////////////////////////////
ComplexVariable& operator ==(ComplexVariable & n){
    return *this;
}
ComplexVariable& operator==(double num){

    return *this;
}
//   friend ComplexVariable operator==(ComplexVariable& t,double num);

   friend ComplexVariable operator==(double num,ComplexVariable& t);
//    friend ComplexVariable operator==( std::complex<double>,double num);
//    friend ComplexVariable operator==(ComplexVariable &t,ComplexVariable& d);
 ///////////////////////////operator ^////////////////////////////////////////

ComplexVariable& operator^(ComplexVariable num){
    return *this;
}

   //friend ComplexVariable operator^(double num,ComplexVariable& t);
   friend ComplexVariable operator^(ComplexVariable& t,double num);
   //friend ComplexVariable operator^(ComplexVariable& t,ComplexVariable& d);

 
 };


double solve(RealVariable t);
std::complex<double> solve(ComplexVariable t);



};











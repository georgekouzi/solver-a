#include <iostream>

#include "solver.hpp"
using namespace std;
 namespace solver{
double solve(RealVariable t){
    return 1.0;
}

complex<double> solve(ComplexVariable) {
        return complex<double>();
        }



 ////////////////////////// func ComplexVariable/////////////////////////

 ///////////////////////////operator ==////////////////////////////////////////
     ComplexVariable operator==(double num,ComplexVariable& t){
            return ComplexVariable();

    }

// ComplexVariable operator==(ComplexVariable& t,double num){
//             return ComplexVariable();

//     }
//      ComplexVariable operator==(const std::complex<double>,const double num){
//             return ComplexVariable();

//     }
    // ComplexVariable operator==(ComplexVariable& t,ComplexVariable& d){
    //         return ComplexVariable();

    // }
/////////////////////// opertors+///////////////////////////
    

    ComplexVariable operator+(double num,ComplexVariable t){
            return ComplexVariable();
    }
//     ComplexVariable operator+(ComplexVariable& t,double num){
//             return ComplexVariable();

//     }
//     ComplexVariable operator+(ComplexVariable& t,ComplexVariable& d){
//             return ComplexVariable();

//     }

/////////////////////// opertors*///////////////////////////

    ComplexVariable operator*(double num,ComplexVariable& t){
    
             cout<<"num-op:*: "<<num<<endl;

    return ComplexVariable();
    }
//     ComplexVariable operator*(ComplexVariable& t,double num){
//             return ComplexVariable();
//     }
//     ComplexVariable operator*(ComplexVariable& t,ComplexVariable& d){
//             return ComplexVariable();
//     }

 ////////////////////////////operator-/////////////////// 

    ComplexVariable operator-(double num,ComplexVariable& t){
            return ComplexVariable();

    }
//     ComplexVariable operator-(ComplexVariable& t,double num){
//             return ComplexVariable();

//     }
//     ComplexVariable operator-(ComplexVariable& t,ComplexVariable& d){
//             return ComplexVariable();

//     }
 /////////////////////// opertors^///////////////////////////

//     ComplexVariable operator^(double num,ComplexVariable& t){
//             return ComplexVariable();
//     }
    ComplexVariable operator^(ComplexVariable& t,double num){
            return ComplexVariable();
    }
//     ComplexVariable operator^(ComplexVariable& t,ComplexVariable& d){
//             return ComplexVariable();
//     }
/////////////////////// opertors/    ///////////////////////////
 
//     ComplexVariable operator/(double num,ComplexVariable& t){
//             return ComplexVariable();

//     }
//     ComplexVariable operator/(ComplexVariable& t,double num){
//             return ComplexVariable();

//     }
//     ComplexVariable operator/(ComplexVariable& t,ComplexVariable& d){
//             return ComplexVariable();

//     }


 ////////////////////////// func RealVariable/////////////////////////
 ///////////////////////////operator ==////////////////////////////////////////
    
//  RealVariable operator ==(double& num,double num1){
//         return RealVariable();
//  }
 RealVariable operator ==(double num,RealVariable& t){
      return RealVariable();
  }
//   RealVariable operator ==(RealVariable& t,double num){
//         return RealVariable();
//   }
//   RealVariable operator ==(RealVariable& t,RealVariable& d){
//         return RealVariable();
//   }

  
/////////////////////// opertors+///////////////////////////
  RealVariable operator+(double num,RealVariable& t){
  
 cout<<"double-num-op:+ "<<num<<endl;
  
        return RealVariable(t._a,t._b,t._c+num);
  
  }
//   RealVariable operator+(RealVariable& t,double num){
//        cout<<"RealVariable-num-op:+: "<<num<<endl;

//          return RealVariable();
//    }
//   RealVariable operator+(RealVariable& t,RealVariable& d){
//         return RealVariable();
//   }
  
 ////////////////////////////operator-/////////////////// 
  
  
  RealVariable operator-(double num,RealVariable& t){
        return RealVariable();
  }
//   RealVariable operator-(RealVariable& t,int num){
//         return RealVariable();
//   }
//   RealVariable operator-(RealVariable& t,RealVariable& d){
//         return RealVariable();
//   }
 
 ////////////////////////operator ^//////////////////
//   RealVariable operator^(double num,RealVariable& t){
//         return RealVariable();
//   }
  RealVariable operator^(RealVariable& t,double num){
        return RealVariable();
  }
//   RealVariable operator^(RealVariable& t,RealVariable& d){
//         return RealVariable();
//   }
 
 ///////////////////////   operator/    //////////////
//    RealVariable operator/(double num,RealVariable& t){
//          return RealVariable();
//    }
//    RealVariable operator/(RealVariable& t,double num){
//          return RealVariable();
//    }
//    RealVariable operator/(RealVariable& t,RealVariable& d){
//          return RealVariable();
//    }

////////////////////////operator*////////////////////

 RealVariable operator*(double  num, RealVariable& t){
  cout<<"-00-double-num-op:*: "<<endl;
return RealVariable(t._a,t._b+num-1,t._c);  
}
//   RealVariable operator*(RealVariable& t,double num){
//         return RealVariable();
//   }
//   RealVariable operator*(RealVariable& t,RealVariable& d){
//         return RealVariable();
//   }
};
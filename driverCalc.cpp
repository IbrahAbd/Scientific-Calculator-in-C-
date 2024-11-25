#include <iostream>
#include <stdexcept>
#include <cmath>

namespace basic_ops{
	double addition (double a, double b){
		return a + b;
	}
		return a - b;
	}
	double multiplication (double a, double b){
		return a * b;
	}
	double division (double a, double b){
		if (b == 0){
			throw std::invalid_argument("Division by zero");
		}
		else{
			return a/b;
		}
	}	
};


namespace advanced_ops{
	double power (double a, double b){
		return std::pow(a,b);
	}
	double log (double val){
		if (val <= 0){
			throw std::invalid_argument("Cannot take log of any value <= 0!");
		}
		else{
			return std::log(val);
		}
	}
	double sqrt (double val){
		if (val < 0){
			throw std::invalid_argument("Cannot take log of any value <= 0!");
		}
		else{
			return std::sqrt(val);	
		}
	}
	
	double sin (double angle){
		return std::sin(angle);
	}
	
	double cos (double angle){
		return std::cos(angle);
	}
	
	double tan (double angle){
		return std::sin(angle)/std::cos(angle);
	}
};


















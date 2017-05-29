#ifndef DOUBLES_H
#define DOUBLES_H

class Doubles{
	private:
		double doble;
	public:
		Doubles();
		Doubles(double);
		double getValue();
		void setValue(double);
		double operator + (double rvalue){
			return doble + rvalue;
		}
};
#endif

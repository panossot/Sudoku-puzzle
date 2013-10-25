#include <iostream>

class Square{ 
	bool shown;
	int val;
	public:
		Square (bool, int);
		Square () {contains = true; num =0;} 
		void chShwn() {shown = !shown;}
		bool getShwn() {return shown;}
		int getVal() {return val;}
		void setVal(int val) {val = val;}
};

Square::Square(bool val,int a) {
	contains = val;
	num=a;
}

int main() {
	Square one (true,1);
	Square two (true,2);
	Square ray[9][9];
	for(int r=0;r<9;r++) {
		for(int c=0;c<9;c++) {
			ray[r][c].setNum(c);
		}
	}
	for(int r=0;r<9;r++) {
		for(int c=0;c<9;c++) {
			std::cout << ray[r][c].getNum();	
		}
		std::cout << std::endl;
	}
	return 0;
}
		 

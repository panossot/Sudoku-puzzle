#include <iostream>

class Square{ 
	bool contains;
	int num;
	public:
		Square (bool, int);
		Square () {} 
		void chCont() {contains = !contains;}
		bool getCont() {return contains;}
		int getNum() {return num;}
		void setNum(int val) {num = val;}
};

Square::Square(bool val,int a) {
	contains = val;
	num=a;
}

int main() {
	Square one (true,1);
	Square two (true,2);
	Square ray[9][9](true, 0);
	for(int r=0;r<9;r++) {
		for(int c=0;c<9;c++) {
			ray[r][c].setNum(c);
		}
	}
	for(int r=0;r<9;r++) {
		for(int c=0;c<9;c++) {
			std::cout << ray[r][c].getNum() << std::endl;	
		}
	}

	//std::cout << "one: " << one.getCont() << std::endl;
	//std::cout << "two: " << two.getCont() << std::endl;
	return 0;
}
		 

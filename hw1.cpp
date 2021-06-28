#include "nand.h"
#include "and.h"
#include "defaultgate.h"
#include "not.h"
#include "xor.h"
#include "or.h"
#include "nor.h"

#include <iostream>

using namespace std;

int main(){

	cout << " x " << " y " << " F " << " (nAnd) " << endl;
	cout << "----------" << endl;

	gate_NAND g1;

	g1.setInput(0, 0);
	cout << " 0  0  " << g1.getOutput() << endl;
	g1.setInput(0, 1);
	cout << " 0  1  " << g1.getOutput() << endl;
	g1.setInput(1, 0);
	cout << " 1  0  " << g1.getOutput() << endl;
	g1.setInput(1, 1);
	cout << " 1  1  " << g1.getOutput() << endl;

	cout << endl;
	cout << " x " << " y " << " F " << " (And) " << endl;
	cout << "----------" << endl;

	gate_AND g2;

	g2.setInput(0, 0);
	cout << " 0  0  " << g2.getOutput() << endl;
	g2.setInput(0, 1);
	cout << " 0  1  " << g2.getOutput() << endl;
	g2.setInput(1, 0);
	cout << " 1  0  " << g2.getOutput() << endl;
	g2.setInput(1, 1);
	cout << " 1  1  " << g2.getOutput() << endl;

	cout << endl;
	cout << " x " << " y " << " F " << " (Or) " << endl;
	cout << "----------" << endl;

	gate_OR g3;

	g3.setInput(0, 0);
	cout << " 0  0  " << g3.getOutput() << endl;
	g3.setInput(0, 1);
	cout << " 0  1  " << g3.getOutput() << endl;
	g3.setInput(1, 0);
	cout << " 1  0  " << g3.getOutput() << endl;
	g3.setInput(1, 1);
	cout << " 1  1  " << g3.getOutput() << endl;

	cout << endl;
	cout << " x " << " y " << " F " << " (xOr) " << endl;
	cout << "----------" << endl;

	gate_XOR g4;

	g4.setInput(0, 0);
	cout << " 0  0  " << g4.getOutput() << endl;
	g4.setInput(0, 1);
	cout << " 0  1  " << g4.getOutput() << endl;
	g4.setInput(1, 0);
	cout << " 1  0  " << g4.getOutput() << endl;
	g4.setInput(1, 1);
	cout << " 1  1  " << g4.getOutput() << endl;

	cout << endl;
	cout << " x " << " y " << " F " << " (nOr) " << endl;
	cout << "----------" << endl;

	gate_NOR g5;

	g5.setInput(0, 0);
	cout << " 0  0  " << g5.getOutput() << endl;
	g5.setInput(0, 1);
	cout << " 0  1  " << g5.getOutput() << endl;
	g5.setInput(1, 0);
	cout << " 1  0  " << g5.getOutput() << endl;
	g5.setInput(1, 1);
	cout << " 1  1  " << g5.getOutput() << endl;

	return 0;
}

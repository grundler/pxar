#ifndef PIXTESTBAREMODULE_H
#define PIXTESTBAREMODULE_H

#include "PixTest.hh"

class DLLEXPORT PixTestBareModule : public PixTest {

public:
	PixTestBareModule(PixSetup *, std::string);
	PixTestBareModule();
	virtual ~PixTestBareModule();
	virtual bool setParameter(std::string parName, std::string sval);
	void init();
	void setToolTips();
	void bookHist(std::string);
	
	void runCommand(std::string );
	bool checkIfInContact();
	void doStdTest(std::string );
	void doTestRoc(int );
	void doTest();

private:

	int  fParNSteps;
	bool fStop;

	ClassDef(PixTestBareModule, 1)

};
#endif

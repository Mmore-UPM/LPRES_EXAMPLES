//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef LPRES_EXAMPLES__Turbine_test_partition1_exp1_H
#define LPRES_EXAMPLES__Turbine_test_partition1_exp1_H
#include "LPRES_EXAMPLES.+turbine_test.partition1.h"

class LPRES_EXAMPLES__Turbine_test_partition1_exp1: public LPRES_EXAMPLES__Turbine_test_partition1
{
public:
	LPRES_EXAMPLES__Turbine_test_partition1_exp1(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static LPRES_EXAMPLES__Turbine_test_partition1_exp1* s_current;
private:


// Experiment variables
	int rc;
	int LPRES_EXAMPLES__globalDebugLevel;

// experiment functions
	void LPRES_EXAMPLES__getPreviousSettings();
	void LPRES_EXAMPLES__restorePreviousSettings();
	int LPRES_EXAMPLES__run_case1_calc1();
	int LPRES_EXAMPLES__run_case1();

};
#endif

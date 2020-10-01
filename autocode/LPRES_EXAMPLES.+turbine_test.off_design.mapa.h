//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef LPRES_EXAMPLES__Turbine_test_off_design_mapa_H
#define LPRES_EXAMPLES__Turbine_test_off_design_mapa_H
#include "LPRES_EXAMPLES.+turbine_test.off_design.h"

class LPRES_EXAMPLES__Turbine_test_off_design_mapa: public LPRES_EXAMPLES__Turbine_test_off_design
{
public:
	LPRES_EXAMPLES__Turbine_test_off_design_mapa(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static LPRES_EXAMPLES__Turbine_test_off_design_mapa* s_current;
private:


// Experiment variables
	int rc;
	int LPRES_EXAMPLES__globalDebugLevel;

// experiment functions
	int LPRES_EXAMPLES__run_case1_calc1();
	void LPRES_EXAMPLES__getPreviousSettings();
	void LPRES_EXAMPLES__restorePreviousSettings();
	int LPRES_EXAMPLES__run_case1_calc2();
	int LPRES_EXAMPLES__run_case1();

};
#endif

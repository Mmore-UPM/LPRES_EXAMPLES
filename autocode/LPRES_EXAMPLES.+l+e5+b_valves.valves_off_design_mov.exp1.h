//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov_exp1_H
#define LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov_exp1_H
#include "LPRES_EXAMPLES.+l+e5+b_valves.valves_off_design_mov.h"

class LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov_exp1: public LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov
{
public:
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov_exp1(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov_exp1* s_current;
private:


// Experiment variables
	int rc;
	double LPRES_EXAMPLES__MOV_A_case1_param;
	std::string LPRES_EXAMPLES__globalNameParam_case1;
	int LPRES_EXAMPLES__globalDebugLevel;

// experiment functions
	void LPRES_EXAMPLES__init_case1_calc2();
	int LPRES_EXAMPLES__run_case1_calc1();
	void LPRES_EXAMPLES__getPreviousSettings();
	void LPRES_EXAMPLES__restorePreviousSettings();
	int LPRES_EXAMPLES__run_case1_calc2();
	int LPRES_EXAMPLES__run_case1();

};
#endif

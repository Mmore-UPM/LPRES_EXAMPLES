//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_valves_actuaciones_actuaciones_H
#define LPRES_EXAMPLES__LE5B_valves_actuaciones_actuaciones_H
#include "LPRES_EXAMPLES.+l+e5+b_valves.actuaciones.h"

class LPRES_EXAMPLES__LE5B_valves_actuaciones_actuaciones: public LPRES_EXAMPLES__LE5B_valves_actuaciones
{
public:
	LPRES_EXAMPLES__LE5B_valves_actuaciones_actuaciones(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static LPRES_EXAMPLES__LE5B_valves_actuaciones_actuaciones* s_current;
private:


// Experiment variables
	int rc;
	double LPRES_EXAMPLES__MOV_A_case2_param;
	std::string LPRES_EXAMPLES__globalNameParam_case2;
	int LPRES_EXAMPLES__globalDebugLevel;

// experiment functions
	void LPRES_EXAMPLES__init_case2_calc2();
	int LPRES_EXAMPLES__run_case2_calc1();
	void LPRES_EXAMPLES__getPreviousSettings();
	void LPRES_EXAMPLES__restorePreviousSettings();
	int LPRES_EXAMPLES__run_case2_calc2();
	int LPRES_EXAMPLES__run_case2();

};
#endif

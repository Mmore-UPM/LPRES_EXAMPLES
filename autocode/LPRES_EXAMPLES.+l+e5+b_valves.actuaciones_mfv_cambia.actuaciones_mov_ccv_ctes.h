//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia_actuaciones_mov_ccv_ctes_H
#define LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia_actuaciones_mov_ccv_ctes_H
#include "LPRES_EXAMPLES.+l+e5+b_valves.actuaciones_mfv_cambia.h"

class LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia_actuaciones_mov_ccv_ctes: public LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia
{
public:
	LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia_actuaciones_mov_ccv_ctes(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia_actuaciones_mov_ccv_ctes* s_current;
private:


// Experiment variables
	int rc;
	double LPRES_EXAMPLES__MFV_A_case1_param;
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

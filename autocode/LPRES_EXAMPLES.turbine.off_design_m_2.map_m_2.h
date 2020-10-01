//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef LPRES_EXAMPLES__turbine_off_design_m_2_map_m_2_H
#define LPRES_EXAMPLES__turbine_off_design_m_2_map_m_2_H
#include "LPRES_EXAMPLES.turbine.off_design_m_2.h"

class LPRES_EXAMPLES__turbine_off_design_m_2_map_m_2: public LPRES_EXAMPLES__turbine_off_design_m_2
{
public:
	LPRES_EXAMPLES__turbine_off_design_m_2_map_m_2(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static LPRES_EXAMPLES__turbine_off_design_m_2_map_m_2* s_current;
private:


// Experiment variables
	int rc;
	int LPRES_EXAMPLES__globalDebugLevel;

// experiment functions
	int LPRES_EXAMPLES__run_case1_calc1();
	void LPRES_EXAMPLES__getPreviousSettings();
	void LPRES_EXAMPLES__restorePreviousSettings();
	int LPRES_EXAMPLES__run_case1_calc2();
	int LPRES_EXAMPLES__run_case1_calc3();
	int LPRES_EXAMPLES__run_case1_calc4();
	int LPRES_EXAMPLES__run_case1();

};
#endif

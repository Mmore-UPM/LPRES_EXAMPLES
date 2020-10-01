//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_design_optimization_H
#define LPRES_EXAMPLES__LE5B_design_optimization_H
#include "LPRES_EXAMPLES.+l+e5+b.design.h"

// Include header files required to compile external C++ classes
#include "INTEG_simula.h"

class LPRES_EXAMPLES__LE5B_design_optimization: public LPRES_EXAMPLES__LE5B_design
{
public:
	LPRES_EXAMPLES__LE5B_design_optimization(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static LPRES_EXAMPLES__LE5B_design_optimization* s_current;
private:


// Experiment variables
	int rc;
	double LPRES_EXAMPLES__Comb_Chamb_f_O_p_c_case2_param;
	double LPRES_EXAMPLES__Comb_Chamb_AR_case2_param;
	std::string LPRES_EXAMPLES__globalNameParam_case2;
	int LPRES_EXAMPLES__globalDebugLevel;

// experiment functions
	void LPRES_EXAMPLES__init_case2_calc2();
	int LPRES_EXAMPLES__run_case2_calc1();
	void LPRES_EXAMPLES__getPreviousSettings();
	static void _WR_LPRES_EXAMPLES__fcn_case2_calc2(int * n,double array_x[],double array_fres[],int * iflag);
	void LPRES_EXAMPLES__fcn_case2_calc2(int * n,double array_x[],double array_fres[],int * iflag);
	void LPRES_EXAMPLES__fcn_write_global_results_case2_calc2();
	void LPRES_EXAMPLES__fcn_write_case2_calc21(double array_x[],double array_fres[]);
	void LPRES_EXAMPLES__fcn_write_output_global_results_case2_calc2();
	void LPRES_EXAMPLES__fcn_write_output_case2_calc21(double array_x[]);
	void LPRES_EXAMPLES__fcn_recover_algebraic_dynamic_case2_calc2(double array_x[]);
	void LPRES_EXAMPLES__restorePreviousSettings();
	int LPRES_EXAMPLES__run_case2_calc2();
	int LPRES_EXAMPLES__run_case2();

	//C++ objects definition
	EVectorString __v_global_case2_calc2;

};
#endif

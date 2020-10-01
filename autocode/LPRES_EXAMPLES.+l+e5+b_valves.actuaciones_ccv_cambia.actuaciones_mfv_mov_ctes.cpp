//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "LPRES_EXAMPLES.+l+e5+b_valves.actuaciones_ccv_cambia.actuaciones_mfv_mov_ctes.h"

LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes* LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::s_current= NULL;
LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes(const char* mgr,const char* installDir,bool dmode):LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia(mgr,installDir,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoExperimentName = "actuaciones_mfv_mov_ctes";
m_infoExperimentFileName = "LPRES_EXAMPLES.+l+e5+b_valves.actuaciones_ccv_cambia.actuaciones_mfv_mov_ctes";
m_infoExperimentFileNameExtra = "actuaciones_mfv_mov_ctes";
m_infoExperimentDate = "12/07/2020 18:51:09.968000";

m_perfFlag = false;

// Global variables
static const char * elmstr_exp0[] = { "IS_IDLE", "INTEG_BEGIN", "IS_STEP", "IS_CINT", "INTEG_END", "SATISFY_RES", "STEADY_BEGIN", "STEADY_OK", "IS_EVENT", "INTEG_UNKNOW", "STEADY_NOK", "INTEG_NOK", "BRANCH_TYPE", "IS_MANUAL_REFRESH", "BRANCH_USE", "CALC_OK", 
		"CALC_NOK", NULL } ;
static int elmind_exp0[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17 } ;
n_typ_exp=1;
static struct INTEG_enumType tmp_typ_exp[] = { 
		{elmstr_exp0,17,elmind_exp0}
	} ;
typ_exp= new struct INTEG_enumType[1];
etypecopy(1,typ_exp,tmp_typ_exp);
LPRES_EXAMPLES__CCV_A_case1_param = 0.0;
LPRES_EXAMPLES__globalNameParam_case1 = "";
LPRES_EXAMPLES__globalDebugLevel = 0;
// Experiment variables (initialisation)
rc = 1;
nBounds = 8;// Number of boundary variables
if (m_boundaryBranch==NULL)
{
	m_boundaryBranch= new int[8];
	for (int ib=0; ib < 8 ; ib++)
		m_boundaryBranch[ib]= 0;
}
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::initInternalModels()
{
  LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::initInternalModels();
}


void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::LPRES_EXAMPLES__init_case1_calc2()
{

	dyn[0] = 2.79 ;
	dyn[1] = 4.48 ;
	dyn[2] = 1.37931034 ;
	dyn[3] = -82191.78 ;
	dyn[4] = 71890.4203 ;
	dyn[5] = 438. ;
	dyn[6] = 108. ;
	dyn[7] = 2109. ;
	dyn[8] = 4.98 ;
	m_boundaryBranch[1] = -1;
	unkR[494] = 21. ;
	m_boundaryBranch[2] = -1;
	unkR[495] = 300000. ;
	m_boundaryBranch[3] = -1;
	unkR[496] = 90. ;
	m_boundaryBranch[4] = -1;
	unkR[497] = 500000. ;
	m_boundaryBranch[5] = -1;
	unkR[498] = 100000. ;
	m_boundaryBranch[6] = -1;
	unkR[499] = 0.00111859425 ;
	m_boundaryBranch[7] = -1;
	unkR[504] = 0.00141841629 ;
	SAVE_VARS_CATEGORY("case1_calc2_file1", 13, 1, 4) ;
}


int LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::LPRES_EXAMPLES__run_case1_calc1()
{
	// Local variables:
	int rc = 1;

	CALC_BEGIN("ImportGeometry(#1)", "restoreState", LPRES_EXAMPLES__globalNameParam_case1, 1) ;
	RESTORE_STATE("@LPRES_EXAMPLES@/experiments/+l+e5+b_valves.valves_design/exp1/report.rpt.xml") ;
	CALC_END(1) ;
	return rc ;
}


void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::LPRES_EXAMPLES__getPreviousSettings()
{

	LPRES_EXAMPLES__globalDebugLevel = DEBUG_LEVEL ;
}


void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::LPRES_EXAMPLES__restorePreviousSettings()
{

	DEBUG_LEVEL = LPRES_EXAMPLES__globalDebugLevel ;
}


int LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::LPRES_EXAMPLES__run_case1_calc2()
{
	// Local variables:
	int rct = 1;
	int rc = 11;

	LPRES_EXAMPLES__getPreviousSettings() ;
	DEBUG_LEVEL = 1 ;
	CALC_BEGIN("analysis(#2)", "steady", LPRES_EXAMPLES__globalNameParam_case1, 1) ;
	TOLTYPE = 1 ;
	TOLERANCE = 0.0001 ;
	SMETHOD = 1 ;
	MAXITER = 10000 ;
	MAXFEVAL = 40000 ;
	MAXJACEVAL = 60 ;
	MAXBROYDEN = 60 ;
	RESTORE_VARS_CATEGORY("case1_calc2_file1", 13, 1, 4) ;
	m_boundaryBranch[1] = -1;
	unkR[494] = 21. ;
	m_boundaryBranch[2] = -1;
	unkR[495] = 300000. ;
	m_boundaryBranch[3] = -1;
	unkR[496] = 90. ;
	m_boundaryBranch[4] = -1;
	unkR[497] = 500000. ;
	m_boundaryBranch[5] = -1;
	unkR[498] = 100000. ;
	m_boundaryBranch[6] = -1;
	unkR[499] = 0.00111859425 ;
	m_boundaryBranch[7] = -1;
	unkR[504] = 0.00141841629 ;
	m_boundaryBranch[0] = -1;
	unkR[0] = LPRES_EXAMPLES__CCV_A_case1_param ;
	EXEC_INIT() ;
	RESET_EVENTS() ;
	setAlgVariableInfo("Comb_Chamb.M_r", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("Comb_Chamb.W_F", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("Comb_Chamb.phi", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("Pump_FUEL_LH2.tau_id", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("Turbine_OXIDIZER.tau", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("Pump_FUEL_LH2.U", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("Pump_LOX_OXIDIZER.U", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("Comb_Chamb.p_out_ch", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("ThrustMonitor_1.M_out", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setResidueInfo(1, 1e-06, 2) ;
	setResidueInfo(2, 1e-06, 2) ;
	setResidueInfo(3, 1e-06, 2) ;
	setResidueInfo(4, 1e-06, 2) ;
	setResidueInfo(5, 1e-06, 2) ;
	setResidueInfo(6, 1e-06, 2) ;
	setResidueInfo(7, 1e-06, 2) ;
	setResidueInfo(8, 1e-06, 2) ;
	setResidueInfo(9, 1e-06, 2) ;
	if( LPRES_EXAMPLES__CCV_A_case1_param == 0.000748597693 ) {
	NEW_BRANCH("off_design_mfv_mov_ctes_analysis") ;
	}
	else {
	USE_BRANCH("off_design_mfv_mov_ctes_analysis") ;
	}
	rc = STEADY() ;
	SAVE_VARS("report.rpt", "*", 3) ;
	if( rc == 8 ) {
	SAVE_VARS_CATEGORY("case1_calc2_file1", 13, 1, 4) ;
	}
	CALC_END(1) ;
	LPRES_EXAMPLES__restorePreviousSettings() ;
	if( rc == 11 ) {
	rct = 0 ;
	}
	return rct ;
}


int LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::LPRES_EXAMPLES__run_case1()
{
	// Local variables:
	int rc = 1;
	int writeoutput_case1_calc1 = 1;
	int writeoutput_case1_calc2 = 1;
	std::string xParameterNames1[101];
	{int __i=0; for(; __i <101; __i++) xParameterNames1[__i] = ""; };
	double Mat1[101];
	memset(Mat1,0,101*sizeof(double));
	int MatOK1[101];
	memset(MatOK1,0,101*sizeof(int));
	int nrow1 = 0;
	std::string xParameterNames2[101];
	{int __i=0; for(; __i <101; __i++) xParameterNames2[__i] = ""; };
	double Mat2[101];
	memset(Mat2,0,101*sizeof(double));
	int MatOK2[101];
	memset(MatOK2,0,101*sizeof(int));
	int nrow2 = 0;
	std::string yOutputNames[1];
	{int __i=0; for(; __i <1; __i++) yOutputNames[__i] = ""; };
	int _vi1;
	int _vi2;
	int _vi3;
	int _vi4;
	int _vi5;
	int _vi6;
	int _vi7;

	LPRES_EXAMPLES__init_case1_calc2() ;
	_vi1 = 0 ;
	while ( _vi1 <= 100 ) {
	LPRES_EXAMPLES__CCV_A_case1_param = 0.000748597693 + -7.28597693e-06 * _vi1 ;
	m_boundaryBranch[0] = -1;
	unkR[0] = LPRES_EXAMPLES__CCV_A_case1_param ;
	LPRES_EXAMPLES__globalNameParam_case1 = WRITES("CCV.A=%f",LPRES_EXAMPLES__CCV_A_case1_param);

	rc = LPRES_EXAMPLES__run_case1_calc1() ;
	nrow1 = nrow1 + 1 ;
	xParameterNames1[nrow1-1] = WRITES("%s-%s","case1_cal1",(integerToString(nrow1)).c_str());

	if( writeoutput_case1_calc1 == 1 ) {
	WRITEF("case_parametric_output_case1_calc1.csv","CCV.A\n");

	writeoutput_case1_calc1 = 0 ;
	}
	if( rc == 1 ) {
	WRITEF("case_parametric_output_case1_calc1.csv","%g\n",unkR[0]);

	Mat1[0 + 1*(nrow1-1)] = unkR[0] ;
	_vi2 = 1 ;
	while ( _vi2 <= 1 ) {
	MatOK1[_vi2-1 + 1*(nrow1-1)] = 1 ;
	_vi2 += 1 ;
	}
	}
	else {
	WRITEF("case_parametric_output_case1_calc1.csv","%g\n",unkR[0]);

	Mat1[0 + 1*(nrow1-1)] = unkR[0] ;
	_vi3 = 1 ;
	while ( _vi3 <= 1 ) {
	MatOK1[_vi3-1 + 1*(nrow1-1)] = 1 ;
	_vi3 += 1 ;
	}
	_vi4 = 2 ;
	while ( _vi4 <= 1 ) {
	MatOK1[_vi4-1 + 1*(nrow1-1)] = 0 ;
	_vi4 += 1 ;
	}
	}
	m_boundaryBranch[0] = -1;
	unkR[0] = LPRES_EXAMPLES__CCV_A_case1_param ;
	LPRES_EXAMPLES__globalNameParam_case1 = WRITES("CCV.A=%f",LPRES_EXAMPLES__CCV_A_case1_param);

	rc = LPRES_EXAMPLES__run_case1_calc2() ;
	nrow2 = nrow2 + 1 ;
	xParameterNames2[nrow2-1] = WRITES("%s-%s","case1_cal2",(integerToString(nrow2)).c_str());

	if( writeoutput_case1_calc2 == 1 ) {
	WRITEF("case_parametric_output_case1_calc2.csv","CCV.A\n");

	writeoutput_case1_calc2 = 0 ;
	}
	if( rc == 1 ) {
	WRITEF("case_parametric_output_case1_calc2.csv","%g\n",unkR[0]);

	Mat2[0 + 1*(nrow2-1)] = unkR[0] ;
	_vi5 = 1 ;
	while ( _vi5 <= 1 ) {
	MatOK2[_vi5-1 + 1*(nrow2-1)] = 1 ;
	_vi5 += 1 ;
	}
	}
	else {
	WRITEF("case_parametric_output_case1_calc2.csv","%g\n",unkR[0]);

	Mat2[0 + 1*(nrow2-1)] = unkR[0] ;
	_vi6 = 1 ;
	while ( _vi6 <= 1 ) {
	MatOK2[_vi6-1 + 1*(nrow2-1)] = 1 ;
	_vi6 += 1 ;
	}
	_vi7 = 2 ;
	while ( _vi7 <= 1 ) {
	MatOK2[_vi7-1 + 1*(nrow2-1)] = 0 ;
	_vi7 += 1 ;
	}
	}
	RESET_VARIABLES() ;
	_vi1 += 1 ;
	}
	yOutputNames[0] = "CCV.A" ;
	matPrint(101, 1, Mat1, 1, MatOK1, xParameterNames1, yOutputNames, "") ;
	matPrint(101, 1, Mat2, 1, MatOK2, xParameterNames2, yOutputNames, "") ;
	return rc ;
}


//Add the experiment variables to the symbols table
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::addExptVariables()
{
	ADD_EXPT_VAR( "SYSTEM_MDL_LIB.t_statusIntegration","ENUM", "", &typ_exp[0]);
	ADD_EXPT_VAR( "LPRES_EXAMPLES__CCV_A_case1_param", "REAL", "",&LPRES_EXAMPLES__CCV_A_case1_param);
	ADD_EXPT_VAR( "LPRES_EXAMPLES__globalNameParam_case1", "STRING", "",&LPRES_EXAMPLES__globalNameParam_case1);
	ADD_EXPT_VAR( "LPRES_EXAMPLES__globalDebugLevel", "INTEGER", "",&LPRES_EXAMPLES__globalDebugLevel);
	ADD_EXPT_VAR( "rc", "BOOLEAN", "",&rc);

}


//Run the experiment code
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::runExperiment()
{
	CASE_BEGIN("off_design_mfv_mov_ctes(#1)", 1) ;
	RESET_VARIABLES() ;
	LPRES_EXAMPLES__run_case1() ;
	CASE_END(1) ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::initDefaultsExp()
{
}

/* Initialisation of boundaries*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
}
/* Initialisation of delays in experiments*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes ecomodel;
#else
	LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes ecomodel(0,0,true);
#endif //SIMULA_USE_DECK_SYMBOLS
	mainLoop(argc, argv, &ecomodel);
}
catch(...)
{
	printf("Program stops due to abnormal condition\n");
}
	return 0;
}
#endif //SIMULA_USE_GRAPHICAL_MAIN

/* Function to create an instance of the experiment class */
SIMULA_EXPORT_C_EXP INTEG_simula* fcnExpCreate(const char *name=NULL,const char *dirInstall=NULL,bool d=false)
{
	return new LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes(name,dirInstall,d);
}

/* Function to destroy the experiment instance */
SIMULA_EXPORT_C_EXP void fcnExpDel(INTEG_simula *obj,const char* name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function that creates an encapsulated experiment */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *fcnExpCreate2(const char *name=NULL,const char *dirInstall=NULL,bool d=false)
{
	INTEG_SlimSimula *ee = 0;
	try
	{
		INTEG_simula * tmp = new LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_actuaciones_mfv_mov_ctes(name,dirInstall,d);
		ee = tmp->createThinModel();
	}
	catch(...)
	{
	}
	return ee;
}

/* Function to get information of the model*/
SIMULA_EXPORT_C_EXP void getInformationExperiment(char *experimentName, bool& isDebug)
{
	sprintf(experimentName,"%s","actuaciones_mfv_mov_ctes");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS



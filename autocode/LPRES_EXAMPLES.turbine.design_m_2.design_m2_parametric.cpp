//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "LPRES_EXAMPLES.turbine.design_m_2.design_m2_parametric.h"

LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric* LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::s_current= NULL;
LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric(const char* mgr,const char* installDir,bool dmode):LPRES_EXAMPLES__turbine_design_m_2(mgr,installDir,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoExperimentName = "design_m2_parametric";
m_infoExperimentFileName = "LPRES_EXAMPLES.turbine.design_m_2.design_m2_parametric";
m_infoExperimentFileNameExtra = "design_m2_parametric";
m_infoExperimentDate = "09/07/2020 00:10:43.785000";

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
LPRES_EXAMPLES__globalDebugLevel = 0;
// Experiment variables (initialisation)
rc = 1;
nBounds = 7;// Number of boundary variables
if (m_boundaryBranch==NULL)
{
	m_boundaryBranch= new int[7];
	for (int ib=0; ib < 7 ; ib++)
		m_boundaryBranch[ib]= 0;
}
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::initInternalModels()
{
  LPRES_EXAMPLES__turbine_design_m_2::initInternalModels();
}


void LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::LPRES_EXAMPLES__getPreviousSettings()
{

	LPRES_EXAMPLES__globalDebugLevel = DEBUG_LEVEL ;
}


void LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::LPRES_EXAMPLES__restorePreviousSettings()
{

	DEBUG_LEVEL = LPRES_EXAMPLES__globalDebugLevel ;
}


int LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::LPRES_EXAMPLES__run_case1_calc1()
{
	// Local variables:
	int rc = 1;
	int writeoutput_case1_calc1 = 1;
	int rcs = 11;
	double incrx[1];
	memset(incrx,0,1*sizeof(double));
	std::string xParameterNames[4];
	{int __i=0; for(; __i <4; __i++) xParameterNames[__i] = ""; };
	std::string yOutputNames[3];
	{int __i=0; for(; __i <3; __i++) yOutputNames[__i] = ""; };
	double Mat[12];
	memset(Mat,0,12*sizeof(double));
	int MatOK[12];
	memset(MatOK,0,12*sizeof(int));
	int nrow = 0;
	int _vi1;
	int _vi2;
	int _vi3;
	int _vi4;

	LPRES_EXAMPLES__getPreviousSettings() ;
	DEBUG_LEVEL = 1 ;
	CALC_BEGIN("parametric1(#1)", "parametric", "", 1) ;
	RDIGITS = 9 ;
	TIME = 0. ;
	SMETHOD = 1 ;
	TOLTYPE = 1 ;
	TOLERANCE = 1e-06 ;
	MAXITER = 10000 ;
	MAXFEVAL = 40000 ;
	MAXJACEVAL = 60 ;
	MAXBROYDEN = 60 ;
	setAlgVariableInfo("Turbine.U", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setResidueInfo(1, 1e-06, 2) ;
	setResidueInfo(2, 1e-06, 2) ;
	REPORT_TABLE("report.rpt", "*", 1) ;
	SET_REPORT_ACTIVE("report.rpt", 1) ;
	TIME = 0. ;
	incrx[0] = 0.2 ;
	_vi1 = 0 ;
	while ( _vi1 <= 3 ) {
	dyn[0] = 500. ;
	m_boundaryBranch[0] = -1;
	unkR[0] = 1500. ;
	m_boundaryBranch[1] = -1;
	unkR[39] = 3141075. ;
	m_boundaryBranch[2] = -1;
	unkR[40] = 0. ;
	m_boundaryBranch[3] = -1;
	unkR[49] = 50. ;
	m_boundaryBranch[4] = -1;
	unkR[64] = 31000000. ;
	m_boundaryBranch[5] = -1;
	unkR[65] = unkR[66] ;
	m_boundaryBranch[6] = -1;
	unkR[71] = 12000. ;
	EXEC_INIT() ;
	RESET_EVENTS() ;
	dyn[1] = 0.8 + _vi1 * 0.2 ;
	rcs = STEADY() ;
	nrow = nrow + 1 ;
	xParameterNames[nrow-1] = integerToString(nrow) ;
	if( writeoutput_case1_calc1 == 1 ) {
	WRITEF("cal_parametric_output_case1_calc1.csv","Turbine.M_2;Turbine.U;Turbine.M_2\n");

	writeoutput_case1_calc1 = 0 ;
	}
	if( rcs == 8 ) {
	WRITEF("cal_parametric_output_case1_calc1.csv","%g;%g;%g\n",dyn[1],dyn[0],dyn[1]);

	Mat[0 + 3*(nrow-1)] = dyn[1] ;
	Mat[1 + 3*(nrow-1)] = dyn[0] ;
	Mat[2 + 3*(nrow-1)] = dyn[1] ;
	_vi2 = 1 ;
	while ( _vi2 <= 3 ) {
	MatOK[_vi2-1 + 3*(nrow-1)] = 1 ;
	_vi2 += 1 ;
	}
	}
	else {
	WRITEF("cal_parametric_output_case1_calc1.csv","%g;%s;%s\n",dyn[1],"****","****");

	Mat[0 + 3*(nrow-1)] = dyn[1] ;
	Mat[1 + 3*(nrow-1)] = dyn[0] ;
	Mat[2 + 3*(nrow-1)] = dyn[1] ;
	_vi3 = 1 ;
	while ( _vi3 <= 1 ) {
	MatOK[_vi3-1 + 3*(nrow-1)] = 1 ;
	_vi3 += 1 ;
	}
	_vi4 = 2 ;
	while ( _vi4 <= 3 ) {
	MatOK[_vi4-1 + 3*(nrow-1)] = 0 ;
	_vi4 += 1 ;
	}
	}
	_vi1 += 1 ;
	}
	yOutputNames[0] = "Turbine.M_2" ;
	yOutputNames[1] = "Turbine.U" ;
	yOutputNames[2] = "Turbine.M_2" ;
	matPrint(4, 3, Mat, 1, MatOK, xParameterNames, yOutputNames, "") ;
	SET_REPORT_ACTIVE("report.rpt", 0) ;
	CALC_END(1) ;
	LPRES_EXAMPLES__restorePreviousSettings() ;
	return rc ;
}


int LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::LPRES_EXAMPLES__run_case1()
{
	// Local variables:
	int rc = 1;

	NEW_BRANCH("case1_parametric1") ;
	rc = LPRES_EXAMPLES__run_case1_calc1() ;
	return rc ;
}


//Add the experiment variables to the symbols table
void LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::addExptVariables()
{
	ADD_EXPT_VAR( "SYSTEM_MDL_LIB.t_statusIntegration","ENUM", "", &typ_exp[0]);
	ADD_EXPT_VAR( "LPRES_EXAMPLES__globalDebugLevel", "INTEGER", "",&LPRES_EXAMPLES__globalDebugLevel);
	ADD_EXPT_VAR( "rc", "BOOLEAN", "",&rc);

}


//Run the experiment code
void LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::runExperiment()
{
	CASE_BEGIN("case1(#1)", 1) ;
	RESET_VARIABLES() ;
	LPRES_EXAMPLES__run_case1() ;
	CASE_END(1) ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::initDefaultsExp()
{
}

/* Initialisation of boundaries*/
void LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
}
/* Initialisation of delays in experiments*/
void LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric ecomodel;
#else
	LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric ecomodel(0,0,true);
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
	return new LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric(name,dirInstall,d);
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
		INTEG_simula * tmp = new LPRES_EXAMPLES__turbine_design_m_2_design_m2_parametric(name,dirInstall,d);
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
	sprintf(experimentName,"%s","design_m2_parametric");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS



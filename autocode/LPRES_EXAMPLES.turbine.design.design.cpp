//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "LPRES_EXAMPLES.turbine.design.design.h"

LPRES_EXAMPLES__turbine_design_design* LPRES_EXAMPLES__turbine_design_design::s_current= NULL;
LPRES_EXAMPLES__turbine_design_design::LPRES_EXAMPLES__turbine_design_design(const char* mgr,const char* installDir,bool dmode):LPRES_EXAMPLES__turbine_design(mgr,installDir,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoExperimentName = "design";
m_infoExperimentFileName = "LPRES_EXAMPLES.turbine.design.design";
m_infoExperimentFileNameExtra = "design";
m_infoExperimentDate = "09/07/2020 00:11:41.781000";

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
void LPRES_EXAMPLES__turbine_design_design::initInternalModels()
{
  LPRES_EXAMPLES__turbine_design::initInternalModels();
}


void LPRES_EXAMPLES__turbine_design_design::LPRES_EXAMPLES__getPreviousSettings()
{

	LPRES_EXAMPLES__globalDebugLevel = DEBUG_LEVEL ;
}


void LPRES_EXAMPLES__turbine_design_design::LPRES_EXAMPLES__restorePreviousSettings()
{

	DEBUG_LEVEL = LPRES_EXAMPLES__globalDebugLevel ;
}


int LPRES_EXAMPLES__turbine_design_design::LPRES_EXAMPLES__run_case1_calc1()
{
	// Local variables:
	int rct = 1;
	int rc = 11;

	LPRES_EXAMPLES__getPreviousSettings() ;
	DEBUG_LEVEL = 1 ;
	CALC_BEGIN("steady1(#1)", "steady", "", 1) ;
	TOLTYPE = 1 ;
	TOLERANCE = 1e-06 ;
	SMETHOD = 1 ;
	MAXITER = 10000 ;
	MAXFEVAL = 40000 ;
	MAXJACEVAL = 60 ;
	MAXBROYDEN = 60 ;
	m_boundaryBranch[0] = -1;
	unkR[0] = 1500. ;
	m_boundaryBranch[1] = -1;
	unkR[39] = 3039750. ;
	m_boundaryBranch[2] = -1;
	unkR[40] = 0. ;
	m_boundaryBranch[3] = -1;
	unkR[49] = 50. ;
	m_boundaryBranch[4] = -1;
	unkR[58] = 1.4 ;
	m_boundaryBranch[5] = -1;
	unkR[66] = 30000000. ;
	m_boundaryBranch[6] = -1;
	unkR[67] = unkR[68] ;
	m_boundaryBranch[7] = -1;
	unkR[73] = 25000. ;
	EXEC_INIT() ;
	RESET_EVENTS() ;
	rc = STEADY() ;
	SAVE_VARS("report.rpt", "*", 3) ;
	CALC_END(1) ;
	LPRES_EXAMPLES__restorePreviousSettings() ;
	if( rc == 11 ) {
	rct = 0 ;
	}
	return rct ;
}


int LPRES_EXAMPLES__turbine_design_design::LPRES_EXAMPLES__run_case1()
{
	// Local variables:
	int rc = 1;

	NEW_BRANCH("case1_steady1") ;
	rc = LPRES_EXAMPLES__run_case1_calc1() ;
	return rc ;
}


//Add the experiment variables to the symbols table
void LPRES_EXAMPLES__turbine_design_design::addExptVariables()
{
	ADD_EXPT_VAR( "SYSTEM_MDL_LIB.t_statusIntegration","ENUM", "", &typ_exp[0]);
	ADD_EXPT_VAR( "LPRES_EXAMPLES__globalDebugLevel", "INTEGER", "",&LPRES_EXAMPLES__globalDebugLevel);
	ADD_EXPT_VAR( "rc", "BOOLEAN", "",&rc);

}


//Run the experiment code
void LPRES_EXAMPLES__turbine_design_design::runExperiment()
{
	CASE_BEGIN("case1(#1)", 1) ;
	RESET_VARIABLES() ;
	LPRES_EXAMPLES__run_case1() ;
	CASE_END(1) ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void LPRES_EXAMPLES__turbine_design_design::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void LPRES_EXAMPLES__turbine_design_design::initDefaultsExp()
{
}

/* Initialisation of boundaries*/
void LPRES_EXAMPLES__turbine_design_design::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
}
/* Initialisation of delays in experiments*/
void LPRES_EXAMPLES__turbine_design_design::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	LPRES_EXAMPLES__turbine_design_design ecomodel;
#else
	LPRES_EXAMPLES__turbine_design_design ecomodel(0,0,true);
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
	return new LPRES_EXAMPLES__turbine_design_design(name,dirInstall,d);
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
		INTEG_simula * tmp = new LPRES_EXAMPLES__turbine_design_design(name,dirInstall,d);
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
	sprintf(experimentName,"%s","design");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS



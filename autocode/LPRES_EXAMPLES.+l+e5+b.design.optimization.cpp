//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "LPRES_EXAMPLES.+l+e5+b.design.optimization.h"

LPRES_EXAMPLES__LE5B_design_optimization* LPRES_EXAMPLES__LE5B_design_optimization::s_current= NULL;
LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__LE5B_design_optimization(const char* mgr,const char* installDir,bool dmode):LPRES_EXAMPLES__LE5B_design(mgr,installDir,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoExperimentName = "optimization";
m_infoExperimentFileName = "LPRES_EXAMPLES.+l+e5+b.design.optimization";
m_infoExperimentFileNameExtra = "optimization";
m_infoExperimentDate = "10/07/2020 16:42:19.319000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
LPRES_EXAMPLES__Comb_Chamb_f_O_p_c_case2_param = 0.0;
LPRES_EXAMPLES__Comb_Chamb_AR_case2_param = 0.0;
LPRES_EXAMPLES__globalNameParam_case2 = "";
LPRES_EXAMPLES__globalDebugLevel = 0;
// Experiment variables (initialisation)
rc = 1;
nBounds = 16;// Number of boundary variables
if (m_boundaryBranch==NULL)
{
	m_boundaryBranch= new int[16];
	for (int ib=0; ib < 16 ; ib++)
		m_boundaryBranch[ib]= 0;
}
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__LE5B_design_optimization::initInternalModels()
{
  LPRES_EXAMPLES__LE5B_design::initInternalModels();
}


void LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__init_case2_calc2()
{

	SAVE_VARS_VECTOR("case2_calc2_file1_global", &__v_global_case2_calc2, 4) ;
	m_boundaryBranch[0] = -1;
	unkR[8] = 5. ;
	m_boundaryBranch[3] = -1;
	unkR[376] = 1. ;
	m_boundaryBranch[9] = -1;
	unkR[509] = 6500000. ;
	m_boundaryBranch[11] = -1;
	unkR[521] = 6000000. ;
	dyn[0] = 438. ;
	dyn[1] = 108.8 ;
	dyn[2] = 2110. ;
	dyn[3] = 2.79 ;
	dyn[4] = 183. ;
	dyn[5] = 4.99 ;
	SAVE_VARS_CATEGORY("case2_calc2_file1_point1", 20, 1, 4) ;
}


int LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__run_case2_calc1()
{
	// Local variables:
	int rc = 1;

	CALC_BEGIN("ImportGeometry_copy(#1)", "restoreState", LPRES_EXAMPLES__globalNameParam_case2, 1) ;
	RESTORE_STATE("@LPRES_EXAMPLES@/experiments/+l+e5+b.design/design_point/report.rpt.xml") ;
	CALC_END(1) ;
	return rc ;
}


void LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__getPreviousSettings()
{

	LPRES_EXAMPLES__globalDebugLevel = DEBUG_LEVEL ;
}


void LPRES_EXAMPLES__LE5B_design_optimization::_WR_LPRES_EXAMPLES__fcn_case2_calc2(int * n,double array_x[],double array_fres[],int * iflag)
{
	s_current->LPRES_EXAMPLES__fcn_case2_calc2(n , array_x , array_fres , iflag);
}

void LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__fcn_case2_calc2(int * n,double array_x[],double array_fres[],int * iflag)
{

	m_boundaryBranch[2] = -1;
	unkR[330] = 26. ;
	m_boundaryBranch[4] = -1;
	unkR[489] = 21. ;
	m_boundaryBranch[5] = -1;
	unkR[490] = 300000. ;
	m_boundaryBranch[6] = -1;
	unkR[491] = 90. ;
	m_boundaryBranch[7] = -1;
	unkR[492] = 500000. ;
	m_boundaryBranch[8] = -1;
	unkR[493] = 0. ;
	m_boundaryBranch[10] = -1;
	unkR[513] = unkR[514] ;
	m_boundaryBranch[12] = -1;
	unkR[525] = unkR[526] ;
	m_boundaryBranch[13] = -1;
	unkR[542] = 140. ;
	m_boundaryBranch[14] = -1;
	unkR[547] = 52100. ;
	m_boundaryBranch[15] = -1;
	unkR[557] = 17700. ;
	m_boundaryBranch[0] = -1;
	unkR[8] = array_x[0] ;
	m_boundaryBranch[3] = -1;
	unkR[376] = array_x[1] ;
	m_boundaryBranch[9] = -1;
	unkR[509] = array_x[2] ;
	m_boundaryBranch[11] = -1;
	unkR[521] = array_x[3] ;
	dyn[0] = array_x[4] ;
	dyn[1] = array_x[5] ;
	dyn[2] = array_x[6] ;
	dyn[3] = array_x[7] ;
	dyn[4] = array_x[8] ;
	dyn[5] = array_x[9] ;
	FRES() ;
	array_fres[0] = getResidueValue(1) ;
	array_fres[1] = getResidueValue(2) ;
	array_fres[2] = getResidueValue(3) ;
	array_fres[3] = getResidueValue(4) ;
	array_fres[4] = getResidueValue(5) ;
	array_fres[5] = getResidueValue(6) ;
	array_fres[6] = evalNormResidue(7, unkR[376], 0.7 * unkR[29]) ;
	array_fres[7] = evalNormResidue(8, unkR[29], unkR[330]/5.8) ;
	array_fres[8] = evalNormResidue(9, unkR[509], 1.54495913 * unkR[107]) ;
	array_fres[9] = evalNormResidue(10, unkR[521], 1.90735695 * unkR[107]) ;
}


void LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__fcn_write_global_results_case2_calc2()
{

	WRITEF("result.rpt","%s \n",(versionReport()).c_str());

	WRITEF("result.rpt","\n");

	WRITEF("result.rpt","===========================================================================\n");

	WRITEF("result.rpt","\tResults summary\n");

	WRITEF("result.rpt","===========================================================================\n");

	WRITEF("result.rpt","\n");

	WRITEF("result.rpt","===========================================================================\n");

	WRITEF("result.rpt","\tGlobal design variables:\n");

	WRITEF("result.rpt","===========================================================================\n");

	WRITEF("result.rpt","\n");

}


void LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__fcn_write_case2_calc21(double array_x[],double array_fres[])
{

	WRITEF("result.rpt","\n");

	WRITEF("result.rpt","===========================================================================\n");

	WRITEF("result.rpt","\tPoint 1\n");

	WRITEF("result.rpt","===========================================================================\n\n");

	WRITEF("result.rpt","\n");

	WRITEF("result.rpt","Boundaries : \n");

	WRITEF("result.rpt","\n");

	WRITEF("result.rpt","Comb_Chamb.f_O.p_c = %s (%s)\n",(getValueAsString("Comb_Chamb.f_O.p_c")).c_str(),(unitsOfVariable("Comb_Chamb.f_O.p_c")).c_str());

	m_boundaryBranch[2] = -1;
	unkR[330] = 26. ;
	WRITEF("result.rpt","FlowMeter_LOX.f_in.W = %s (%s)\n",(getValueAsString("FlowMeter_LOX.f_in.W")).c_str(),(unitsOfVariable("FlowMeter_LOX.f_in.W")).c_str());

	m_boundaryBranch[4] = -1;
	unkR[489] = 21. ;
	WRITEF("result.rpt","Inlet_LH2.Tt = %s (%s)\n",(getValueAsString("Inlet_LH2.Tt")).c_str(),(unitsOfVariable("Inlet_LH2.Tt")).c_str());

	m_boundaryBranch[5] = -1;
	unkR[490] = 300000. ;
	WRITEF("result.rpt","Inlet_LH2.pt = %s (%s)\n",(getValueAsString("Inlet_LH2.pt")).c_str(),(unitsOfVariable("Inlet_LH2.pt")).c_str());

	m_boundaryBranch[6] = -1;
	unkR[491] = 90. ;
	WRITEF("result.rpt","Inlet_LOX.Tt = %s (%s)\n",(getValueAsString("Inlet_LOX.Tt")).c_str(),(unitsOfVariable("Inlet_LOX.Tt")).c_str());

	m_boundaryBranch[7] = -1;
	unkR[492] = 500000. ;
	WRITEF("result.rpt","Inlet_LOX.pt = %s (%s)\n",(getValueAsString("Inlet_LOX.pt")).c_str(),(unitsOfVariable("Inlet_LOX.pt")).c_str());

	m_boundaryBranch[8] = -1;
	unkR[493] = 0. ;
	WRITEF("result.rpt","LPRES.Altitude = %s (%s)\n",(getValueAsString("LPRES.Altitude")).c_str(),(unitsOfVariable("LPRES.Altitude")).c_str());

	m_boundaryBranch[10] = -1;
	unkR[513] = unkR[514] ;
	WRITEF("result.rpt","Pump_FUEL_LH2.phi = %s (%s)\n",(getValueAsString("Pump_FUEL_LH2.phi")).c_str(),(unitsOfVariable("Pump_FUEL_LH2.phi")).c_str());

	m_boundaryBranch[12] = -1;
	unkR[525] = unkR[526] ;
	WRITEF("result.rpt","Pump_LOX_OXIDIZER.phi = %s (%s)\n",(getValueAsString("Pump_LOX_OXIDIZER.phi")).c_str(),(unitsOfVariable("Pump_LOX_OXIDIZER.phi")).c_str());

	m_boundaryBranch[13] = -1;
	unkR[542] = 140. ;
	WRITEF("result.rpt","Turbine_FUEL.f_in.Tt = %s (%s)\n",(getValueAsString("Turbine_FUEL.f_in.Tt")).c_str(),(unitsOfVariable("Turbine_FUEL.f_in.Tt")).c_str());

	m_boundaryBranch[14] = -1;
	unkR[547] = 52100. ;
	WRITEF("result.rpt","Turbine_FUEL.rpm = %s (%s)\n",(getValueAsString("Turbine_FUEL.rpm")).c_str(),(unitsOfVariable("Turbine_FUEL.rpm")).c_str());

	m_boundaryBranch[15] = -1;
	unkR[557] = 17700. ;
	WRITEF("result.rpt","Turbine_OXIDIZER.rpm = %s (%s)\n",(getValueAsString("Turbine_OXIDIZER.rpm")).c_str(),(unitsOfVariable("Turbine_OXIDIZER.rpm")).c_str());

	WRITEF("result.rpt","\n");

	WRITEF("result.rpt","Local results :\n");

	WRITEF("result.rpt","\n");

	WRITEF("result.rpt","Comb_Chamb.OF = %g\n",array_x[0]);

	WRITEF("result.rpt","Heat_exchanger_1.f_in.W = %g\n",array_x[1]);

	WRITEF("result.rpt","Pump_FUEL_LH2.dp = %g\n",array_x[2]);

	WRITEF("result.rpt","Pump_LOX_OXIDIZER.dp = %g\n",array_x[3]);

	WRITEF("result.rpt","Pump_FUEL_LH2.U = %g\n",array_x[4]);

	WRITEF("result.rpt","Pump_LOX_OXIDIZER.U = %g\n",array_x[5]);

	WRITEF("result.rpt","Comb_Chamb.p_out_ch = %g\n",array_x[6]);

	WRITEF("result.rpt","Comb_Chamb.M_r = %g\n",array_x[7]);

	WRITEF("result.rpt","Heat_exchanger_1.h.T = %g\n",array_x[8]);

	WRITEF("result.rpt","ThrustMonitor_1.M_out = %g\n",array_x[9]);

	WRITEF("result.rpt","\n");

	WRITEF("result.rpt","Closure equations :\n");

	WRITEF("result.rpt","\n");

	WRITEF("result.rpt","Turbine_FUEL.f_in.W = 0.7*Injector_FUEL.f_in.W        \tResidue: %g \n",array_fres[6]);

	WRITEF("result.rpt","Injector_FUEL.f_in.W = Injector_OXIDIZER.f_in.W/5.8        \tResidue: %g \n",array_fres[7]);

	WRITEF("result.rpt","Pump_FUEL_LH2.dp = 1.54495913*Comb_Chamb.f_O.p_c        \tResidue: %g \n",array_fres[8]);

	WRITEF("result.rpt","Pump_LOX_OXIDIZER.dp = 1.90735695*Comb_Chamb.f_O.p_c        \tResidue: %g \n",array_fres[9]);

}


void LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__fcn_write_output_global_results_case2_calc2()
{

	WRITE("Global results:\n");

}


void LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__fcn_write_output_case2_calc21(double array_x[])
{

	WRITE("\n");

	WRITE("Point 1: boundaries\n");

	WRITE("Comb_Chamb.f_O.p_c = %s\n",(getValueAsString("Comb_Chamb.f_O.p_c")).c_str());

	m_boundaryBranch[2] = -1;
	unkR[330] = 26. ;
	WRITE("FlowMeter_LOX.f_in.W = %s\n",(getValueAsString("FlowMeter_LOX.f_in.W")).c_str());

	m_boundaryBranch[4] = -1;
	unkR[489] = 21. ;
	WRITE("Inlet_LH2.Tt = %s\n",(getValueAsString("Inlet_LH2.Tt")).c_str());

	m_boundaryBranch[5] = -1;
	unkR[490] = 300000. ;
	WRITE("Inlet_LH2.pt = %s\n",(getValueAsString("Inlet_LH2.pt")).c_str());

	m_boundaryBranch[6] = -1;
	unkR[491] = 90. ;
	WRITE("Inlet_LOX.Tt = %s\n",(getValueAsString("Inlet_LOX.Tt")).c_str());

	m_boundaryBranch[7] = -1;
	unkR[492] = 500000. ;
	WRITE("Inlet_LOX.pt = %s\n",(getValueAsString("Inlet_LOX.pt")).c_str());

	m_boundaryBranch[8] = -1;
	unkR[493] = 0. ;
	WRITE("LPRES.Altitude = %s\n",(getValueAsString("LPRES.Altitude")).c_str());

	m_boundaryBranch[10] = -1;
	unkR[513] = unkR[514] ;
	WRITE("Pump_FUEL_LH2.phi = %s\n",(getValueAsString("Pump_FUEL_LH2.phi")).c_str());

	m_boundaryBranch[12] = -1;
	unkR[525] = unkR[526] ;
	WRITE("Pump_LOX_OXIDIZER.phi = %s\n",(getValueAsString("Pump_LOX_OXIDIZER.phi")).c_str());

	m_boundaryBranch[13] = -1;
	unkR[542] = 140. ;
	WRITE("Turbine_FUEL.f_in.Tt = %s\n",(getValueAsString("Turbine_FUEL.f_in.Tt")).c_str());

	m_boundaryBranch[14] = -1;
	unkR[547] = 52100. ;
	WRITE("Turbine_FUEL.rpm = %s\n",(getValueAsString("Turbine_FUEL.rpm")).c_str());

	m_boundaryBranch[15] = -1;
	unkR[557] = 17700. ;
	WRITE("Turbine_OXIDIZER.rpm = %s\n",(getValueAsString("Turbine_OXIDIZER.rpm")).c_str());

	WRITE("\n");

	WRITE("Point 1: local results\n");

	WRITE("Comb_Chamb.OF = %g\n",array_x[0]);

	WRITE("Heat_exchanger_1.f_in.W = %g\n",array_x[1]);

	WRITE("Pump_FUEL_LH2.dp = %g\n",array_x[2]);

	WRITE("Pump_LOX_OXIDIZER.dp = %g\n",array_x[3]);

	WRITE("Pump_FUEL_LH2.U = %g\n",array_x[4]);

	WRITE("Pump_LOX_OXIDIZER.U = %g\n",array_x[5]);

	WRITE("Comb_Chamb.p_out_ch = %g\n",array_x[6]);

	WRITE("Comb_Chamb.M_r = %g\n",array_x[7]);

	WRITE("Heat_exchanger_1.h.T = %g\n",array_x[8]);

	WRITE("ThrustMonitor_1.M_out = %g\n",array_x[9]);

}


void LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__fcn_recover_algebraic_dynamic_case2_calc2(double array_x[])
{

	dyn[0] = array_x[4] ;
	dyn[1] = array_x[5] ;
	dyn[2] = array_x[6] ;
	dyn[3] = array_x[7] ;
	dyn[4] = array_x[8] ;
	dyn[5] = array_x[9] ;
}


void LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__restorePreviousSettings()
{

	DEBUG_LEVEL = LPRES_EXAMPLES__globalDebugLevel ;
}


int LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__run_case2_calc2()
{
	// Local variables:
	std::string nameOutputFile = "";
	double array_x[10];
	memset(array_x,0,10*sizeof(double));
	double array_fres[10];
	memset(array_fres,0,10*sizeof(double));
	int info = 0;
	int rct = 0;
	int rc = 0;
	double param0_tmp = 0.0;
	double param1_tmp = 0.0;
	std::string vnames[10] = { "P1-Comb_Chamb.OF","P1-Heat_exchanger_1.f_in.W","P1-Pump_FUEL_LH2.dp","P1-Pump_LOX_OXIDIZER.dp","P1-Pump_FUEL_LH2.U","P1-Pump_LOX_OXIDIZER.U","P1-Comb_Chamb.p_out_ch","P1-Comb_Chamb.M_r","P1-Heat_exchanger_1.h.T","P1-ThrustMonitor_1.M_out" };
	std::string eqts[10] = { "P1ResidueValue(1)","P1ResidueValue(2)","P1ResidueValue(3)","P1ResidueValue(4)","P1ResidueValue(5)","P1ResidueValue(6)","P1-[(Turbine_FUEL.f_in.W) - (0.7*Injector_FUEL.f_in.W)]","P1-[(Injector_FUEL.f_in.W) - (Injector_OXIDIZER.f_in.W/5.8)]","P1-[(Pump_FUEL_LH2.dp) - (1.54495913*Comb_Chamb.f_O.p_c)]","P1-[(Pump_LOX_OXIDIZER.dp) - (1.90735695*Comb_Chamb.f_O.p_c)]" };

	LPRES_EXAMPLES__getPreviousSettings() ;
	DEBUG_LEVEL = 3 ;
	CALC_BEGIN("extended_steady2(#2)", "extended steady", LPRES_EXAMPLES__globalNameParam_case2, 1) ;
	TIME = 0. ;
	SMETHOD = 1 ;
	TOLTYPE = 2 ;
	TOLERANCE = 1e-06 ;
	MAXITER = 10000 ;
	MAXFEVAL = 40000 ;
	MAXJACEVAL = 60 ;
	MAXBROYDEN = 60 ;
	RESTORE_VARS_VECTOR("case2_calc2_file2_global", &__v_global_case2_calc2, 4) ;
	RESTORE_VARS_CATEGORY("case2_calc2_file2_point1", 20, 1, 4) ;
	m_boundaryBranch[1] = -1;
	unkR[107] = LPRES_EXAMPLES__Comb_Chamb_f_O_p_c_case2_param ;
	unkR[0] = LPRES_EXAMPLES__Comb_Chamb_AR_case2_param ;
	array_x[0] = unkR[8] ;
	array_x[1] = unkR[376] ;
	array_x[2] = unkR[509] ;
	array_x[3] = unkR[521] ;
	array_x[4] = dyn[0] ;
	array_x[5] = dyn[1] ;
	array_x[6] = dyn[2] ;
	array_x[7] = dyn[3] ;
	array_x[8] = dyn[4] ;
	array_x[9] = dyn[5] ;
	setAlgVariableInfo("P1-Comb_Chamb.OF", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("P1-Heat_exchanger_1.f_in.W", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("P1-Pump_FUEL_LH2.dp", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("P1-Pump_LOX_OXIDIZER.dp", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("P1-Pump_FUEL_LH2.U", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("P1-Pump_LOX_OXIDIZER.U", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("P1-Comb_Chamb.p_out_ch", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("P1-Comb_Chamb.M_r", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("P1-Heat_exchanger_1.h.T", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setAlgVariableInfo("P1-ThrustMonitor_1.M_out", 1.5e-08, 1.5e-08, 1.79769313e+308, 1.79769313e+308) ;
	setResidueInfo(1, 1e-06, 2) ;
	setResidueInfo(2, 1e-06, 2) ;
	setResidueInfo(3, 1e-06, 2) ;
	setResidueInfo(4, 1e-06, 2) ;
	setResidueInfo(5, 1e-06, 2) ;
	setResidueInfo(6, 1e-06, 2) ;
	setResidueInfo(7, 1e-06, 2) ;
	setResidueInfo(8, 1e-06, 2) ;
	setResidueInfo(9, 1e-06, 2) ;
	setResidueInfo(10, 1e-06, 2) ;
	EXEC_INIT() ;
	RESET_EVENTS() ;
	setDerivativesToZero() ;
	if( LPRES_EXAMPLES__Comb_Chamb_AR_case2_param == 55 ) {
	NEW_BRANCH("case2_extended_steady2_nldsolver\nComb_Chamb.f_O.p_c=" + getValueAsString("LPRES_EXAMPLES.Comb_Chamb_f_O_p_c_case2_param")) ;
	}
	else {
	USE_BRANCH("case2_extended_steady2_nldsolver\nComb_Chamb.f_O.p_c=" + getValueAsString("LPRES_EXAMPLES.Comb_Chamb_f_O_p_c_case2_param")) ;
	}
		s_current= this;
	rc = nldsolver(_WR_LPRES_EXAMPLES__fcn_case2_calc2, 10, array_x, array_fres, &info, eqts, vnames) ;
	if( rc == 1 ) {
	WRITE("====================\n");

	WRITE("Extended steady (OK)\n");

	WRITE("====================\n");

	WRITE("=============================\n");

	}
	else {
	WRITE("Extended steady (NOK)\n");

	WRITE("=============================\n");

	}
	LPRES_EXAMPLES__fcn_write_global_results_case2_calc2() ;
	LPRES_EXAMPLES__fcn_write_case2_calc21(array_x, array_fres) ;
	LPRES_EXAMPLES__fcn_write_output_global_results_case2_calc2() ;
	LPRES_EXAMPLES__fcn_write_output_case2_calc21(array_x) ;
	if( rc == 1 ) {
	SAVE_VARS_VECTOR("case2_calc2_file2_global", &__v_global_case2_calc2, 4) ;
	WRITE("\n=================\n");

	WRITE("Validating points\n");

	WRITE("=================\n");

	m_boundaryBranch[2] = -1;
	unkR[330] = 26. ;
	m_boundaryBranch[4] = -1;
	unkR[489] = 21. ;
	m_boundaryBranch[5] = -1;
	unkR[490] = 300000. ;
	m_boundaryBranch[6] = -1;
	unkR[491] = 90. ;
	m_boundaryBranch[7] = -1;
	unkR[492] = 500000. ;
	m_boundaryBranch[8] = -1;
	unkR[493] = 0. ;
	m_boundaryBranch[10] = -1;
	unkR[513] = unkR[514] ;
	m_boundaryBranch[12] = -1;
	unkR[525] = unkR[526] ;
	m_boundaryBranch[13] = -1;
	unkR[542] = 140. ;
	m_boundaryBranch[14] = -1;
	unkR[547] = 52100. ;
	m_boundaryBranch[15] = -1;
	unkR[557] = 17700. ;
	m_boundaryBranch[0] = -1;
	unkR[8] = array_x[0] ;
	m_boundaryBranch[3] = -1;
	unkR[376] = array_x[1] ;
	m_boundaryBranch[9] = -1;
	unkR[509] = array_x[2] ;
	m_boundaryBranch[11] = -1;
	unkR[521] = array_x[3] ;
	dyn[0] = array_x[4] ;
	dyn[1] = array_x[5] ;
	dyn[2] = array_x[6] ;
	dyn[3] = array_x[7] ;
	dyn[4] = array_x[8] ;
	dyn[5] = array_x[9] ;
	SAVE_VARS_CATEGORY("case2_calc2_file2_point1", 20, 1, 4) ;
	WRITE("\n");

	}
	LPRES_EXAMPLES__fcn_recover_algebraic_dynamic_case2_calc2(array_x) ;
	CLOSEF("result.rpt") ;
	if( rc == 1 ) {
	rct = 1 ;
	}
	CALC_END(1) ;
	LPRES_EXAMPLES__restorePreviousSettings() ;
	return rct ;
}


int LPRES_EXAMPLES__LE5B_design_optimization::LPRES_EXAMPLES__run_case2()
{
	// Local variables:
	int rc = 1;
	int writeoutput_case2_calc1 = 1;
	int writeoutput_case2_calc2 = 1;
	std::string xParameterNames1[306];
	{int __i=0; for(; __i <306; __i++) xParameterNames1[__i] = ""; };
	double Mat1[612];
	memset(Mat1,0,612*sizeof(double));
	int MatOK1[612];
	memset(MatOK1,0,612*sizeof(int));
	int nrow1 = 0;
	std::string xParameterNames2[306];
	{int __i=0; for(; __i <306; __i++) xParameterNames2[__i] = ""; };
	double Mat2[612];
	memset(Mat2,0,612*sizeof(double));
	int MatOK2[612];
	memset(MatOK2,0,612*sizeof(int));
	int nrow2 = 0;
	std::string yOutputNames[2];
	{int __i=0; for(; __i <2; __i++) yOutputNames[__i] = ""; };
	int _vi1;
	int _vi2;
	int _vi3;
	int _vi4;
	int _vi5;
	int _vi6;
	int _vi7;
	int _vi8;

	LPRES_EXAMPLES__init_case2_calc2() ;
	_vi1 = 0 ;
	while ( _vi1 <= 5 ) {
	COPY_VARS("case2_calc2_file1_global", 4, "case2_calc2_file2_global", 4) ;
	COPY_VARS("case2_calc2_file1_point1", 4, "case2_calc2_file2_point1", 4) ;
	LPRES_EXAMPLES__Comb_Chamb_f_O_p_c_case2_param = 3000000. + _vi1 * 1000000. ;
	_vi2 = 0 ;
	while ( _vi2 <= 50 ) {
	LPRES_EXAMPLES__Comb_Chamb_AR_case2_param = 55. + -_vi2 ;
	m_boundaryBranch[1] = -1;
	unkR[107] = LPRES_EXAMPLES__Comb_Chamb_f_O_p_c_case2_param ;
	unkR[0] = LPRES_EXAMPLES__Comb_Chamb_AR_case2_param ;
	LPRES_EXAMPLES__globalNameParam_case2 = WRITES("Comb_Chamb.f_O.p_c=%f,Comb_Chamb.AR=%f",LPRES_EXAMPLES__Comb_Chamb_f_O_p_c_case2_param,LPRES_EXAMPLES__Comb_Chamb_AR_case2_param);

	rc = LPRES_EXAMPLES__run_case2_calc1() ;
	nrow1 = nrow1 + 1 ;
	xParameterNames1[nrow1-1] = WRITES("%s-%s","case2_cal1",(integerToString(nrow1)).c_str());

	if( writeoutput_case2_calc1 == 1 ) {
	WRITEF("case_parametric_output_case2_calc1.csv","Comb_Chamb.f_O.p_c;Comb_Chamb.AR\n");

	writeoutput_case2_calc1 = 0 ;
	}
	if( rc == 1 ) {
	WRITEF("case_parametric_output_case2_calc1.csv","%g;%g\n",unkR[107],unkR[0]);

	Mat1[0 + 2*(nrow1-1)] = unkR[107] ;
	Mat1[1 + 2*(nrow1-1)] = unkR[0] ;
	_vi3 = 1 ;
	while ( _vi3 <= 2 ) {
	MatOK1[_vi3-1 + 2*(nrow1-1)] = 1 ;
	_vi3 += 1 ;
	}
	}
	else {
	WRITEF("case_parametric_output_case2_calc1.csv","%g;%g\n",unkR[107],unkR[0]);

	Mat1[0 + 2*(nrow1-1)] = unkR[107] ;
	Mat1[1 + 2*(nrow1-1)] = unkR[0] ;
	_vi4 = 1 ;
	while ( _vi4 <= 2 ) {
	MatOK1[_vi4-1 + 2*(nrow1-1)] = 1 ;
	_vi4 += 1 ;
	}
	_vi5 = 3 ;
	while ( _vi5 <= 2 ) {
	MatOK1[_vi5-1 + 2*(nrow1-1)] = 0 ;
	_vi5 += 1 ;
	}
	}
	m_boundaryBranch[1] = -1;
	unkR[107] = LPRES_EXAMPLES__Comb_Chamb_f_O_p_c_case2_param ;
	unkR[0] = LPRES_EXAMPLES__Comb_Chamb_AR_case2_param ;
	LPRES_EXAMPLES__globalNameParam_case2 = WRITES("Comb_Chamb.f_O.p_c=%f,Comb_Chamb.AR=%f",LPRES_EXAMPLES__Comb_Chamb_f_O_p_c_case2_param,LPRES_EXAMPLES__Comb_Chamb_AR_case2_param);

	rc = LPRES_EXAMPLES__run_case2_calc2() ;
	nrow2 = nrow2 + 1 ;
	xParameterNames2[nrow2-1] = WRITES("%s-%s","case2_cal2",(integerToString(nrow2)).c_str());

	if( writeoutput_case2_calc2 == 1 ) {
	WRITEF("case_parametric_output_case2_calc2.csv","Comb_Chamb.f_O.p_c;Comb_Chamb.AR\n");

	writeoutput_case2_calc2 = 0 ;
	}
	if( rc == 1 ) {
	WRITEF("case_parametric_output_case2_calc2.csv","%g;%g\n",unkR[107],unkR[0]);

	Mat2[0 + 2*(nrow2-1)] = unkR[107] ;
	Mat2[1 + 2*(nrow2-1)] = unkR[0] ;
	_vi6 = 1 ;
	while ( _vi6 <= 2 ) {
	MatOK2[_vi6-1 + 2*(nrow2-1)] = 1 ;
	_vi6 += 1 ;
	}
	}
	else {
	WRITEF("case_parametric_output_case2_calc2.csv","%g;%g\n",unkR[107],unkR[0]);

	Mat2[0 + 2*(nrow2-1)] = unkR[107] ;
	Mat2[1 + 2*(nrow2-1)] = unkR[0] ;
	_vi7 = 1 ;
	while ( _vi7 <= 2 ) {
	MatOK2[_vi7-1 + 2*(nrow2-1)] = 1 ;
	_vi7 += 1 ;
	}
	_vi8 = 3 ;
	while ( _vi8 <= 2 ) {
	MatOK2[_vi8-1 + 2*(nrow2-1)] = 0 ;
	_vi8 += 1 ;
	}
	}
	if( _vi2 == 0 ) {
	COPY_VARS("case2_calc2_file2_global", 4, "case2_calc2_file1_global", 4) ;
	COPY_VARS("case2_calc2_file2_point1", 4, "case2_calc2_file1_point1", 4) ;
	}
	RESET_VARIABLES() ;
	_vi2 += 1 ;
	}
	_vi1 += 1 ;
	}
	yOutputNames[0] = "Comb_Chamb.f_O.p_c" ;
	yOutputNames[1] = "Comb_Chamb.AR" ;
	matPrint(306, 2, Mat1, 1, MatOK1, xParameterNames1, yOutputNames, "") ;
	matPrint(306, 2, Mat2, 1, MatOK2, xParameterNames2, yOutputNames, "") ;
	return rc ;
}


//Add the experiment variables to the symbols table
void LPRES_EXAMPLES__LE5B_design_optimization::addExptVariables()
{
	ADD_EXPT_VAR( "LPRES_EXAMPLES__Comb_Chamb_f_O_p_c_case2_param", "REAL", "",&LPRES_EXAMPLES__Comb_Chamb_f_O_p_c_case2_param);
	ADD_EXPT_VAR( "LPRES_EXAMPLES__Comb_Chamb_AR_case2_param", "REAL", "",&LPRES_EXAMPLES__Comb_Chamb_AR_case2_param);
	ADD_EXPT_VAR( "LPRES_EXAMPLES__globalNameParam_case2", "STRING", "",&LPRES_EXAMPLES__globalNameParam_case2);
	ADD_EXPT_VAR( "LPRES_EXAMPLES__globalDebugLevel", "INTEGER", "",&LPRES_EXAMPLES__globalDebugLevel);
	ADD_EXPT_VAR( "rc", "BOOLEAN", "",&rc);

}


//Run the experiment code
void LPRES_EXAMPLES__LE5B_design_optimization::runExperiment()
{
	CASE_BEGIN("case2(#2)", 1) ;
	RESET_VARIABLES() ;
	LPRES_EXAMPLES__run_case2() ;
	CASE_END(1) ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void LPRES_EXAMPLES__LE5B_design_optimization::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void LPRES_EXAMPLES__LE5B_design_optimization::initDefaultsExp()
{
}

/* Initialisation of boundaries*/
void LPRES_EXAMPLES__LE5B_design_optimization::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
}
/* Initialisation of delays in experiments*/
void LPRES_EXAMPLES__LE5B_design_optimization::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	LPRES_EXAMPLES__LE5B_design_optimization ecomodel;
#else
	LPRES_EXAMPLES__LE5B_design_optimization ecomodel(0,0,true);
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
	return new LPRES_EXAMPLES__LE5B_design_optimization(name,dirInstall,d);
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
		INTEG_simula * tmp = new LPRES_EXAMPLES__LE5B_design_optimization(name,dirInstall,d);
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
	sprintf(experimentName,"%s","optimization");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS



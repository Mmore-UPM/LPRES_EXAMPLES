------------------------------------------------------------------------------
-- Global settings
------------------------------------------------------------------------------
INTEGER globalDebugLevel 
------------------------------------------------------------------------------
-- Auxiliar global parameter
------------------------------------------------------------------------------
STRING globalNameParam_case2
REAL LPRES_Altitude_case2_param
REAL Heat_exchanger_1_f_in_W_case2_param

EVectorString v_global_case2_calc2

-------------------------------------------------------------------------------
-- Get the settings
-------------------------------------------------------------------------------
FUNCTION NO_TYPE getPreviousSettings()
BODY
	globalDebugLevel = DEBUG_LEVEL
END FUNCTION
-------------------------------------------------------------------------------
-- restore the settings
-------------------------------------------------------------------------------
FUNCTION NO_TYPE restorePreviousSettings()
BODY
	DEBUG_LEVEL = globalDebugLevel
END FUNCTION
------------------------------------------------------------------------------
-- Calculation to include initialization DATA
-- Case name:    analysis
-- Case description:  Description
-- Calculation name: ImportGeometry
-- Calculation description:  Restore State
------------------------------------------------------------------------------
FUNCTION BOOLEAN run_case2_calc1()
DECLS
	BOOLEAN rc = TRUE
BODY
	CALC_BEGIN("ImportGeometry(#1)", "restoreState",globalNameParam_case2, TRUE)
	-- restore state
	RESTORE_STATE("@LPRES_EXAMPLES@/experiments/+l+e5+b_new_pc.pc_new_design/pc_new/report.rpt",T_TEXT)
	CALC_END(TRUE)
	RETURN rc

END FUNCTION

------------------------------------------------------------------------------
-- Case name:    analysis
-- Case description:  Description
-- Calculation name: extended_steady2
-- Calculation description:  Extended Steady
------------------------------------------------------------------------------
FUNCTION NO_TYPE fcn_case2_calc2(
	OUT INTEGER n,
	OUT REAL array_x[],
	OUT REAL array_fres[],
	OUT INTEGER iflag)
	BODY
		-- set global algebraic variables

		-- Point 1: set local conditions
			-- set boundaries
		Comb_Chamb.f_O.p_c = 5e6
		FlowMeter_LOX.f_in.W = 26
		-- parameter Heat_exchanger_1.f_in.W = 4.167
		Inlet_LH2.Tt = 21
		Inlet_LH2.pt = 3e5
		Inlet_LOX.Tt = 90
		Inlet_LOX.pt = 5e5
		-- parameter LPRES.Altitude = 0
		Pump_FUEL_LH2.dp = 7724795.65
		Pump_FUEL_LH2.phi = Pump_FUEL_LH2.phi_d
		Pump_LOX_OXIDIZER.dp = 9536784.75
		Pump_LOX_OXIDIZER.phi = Pump_LOX_OXIDIZER.phi_d
		Turbine_FUEL.f_in.Tt = 140
		Turbine_FUEL.rpm = 52100
		Turbine_OXIDIZER.rpm = 17700
			-- set local algebraic variables
		Comb_Chamb.OF = array_x[1]
		Pump_FUEL_LH2.U = array_x[2]
		Pump_LOX_OXIDIZER.U = array_x[3]
		Comb_Chamb.p_out_ch = array_x[4]
		Comb_Chamb.M_r = array_x[5]
		Heat_exchanger_1.h.T = array_x[6]
		ThrustMonitor_1.M_out = array_x[7]
			-- evaluate model

		FRES()

		-- residues 
		array_fres[1]= getResidueValue(1)
		array_fres[2]= getResidueValue(2)
		array_fres[3]= getResidueValue(3)
		array_fres[4]= getResidueValue(4)
		array_fres[5]= getResidueValue(5)
		array_fres[6]= getResidueValue(6)
		array_fres[7]= evalNormResidue(7,Turbine_FUEL.f_in.W,0.7*Injector_FUEL.f_in.W,1.0)

		
END FUNCTION

FUNCTION NO_TYPE fcn_write_global_results_case2_calc2()
BODY
	WRITEF("result.rpt","%s \n", versionReport())
	WRITEF("result.rpt","\n")
	WRITEF("result.rpt","===========================================================================\n")
	WRITEF("result.rpt","\tResults summary\n")
	WRITEF("result.rpt","===========================================================================\n")
	WRITEF("result.rpt","\n")
	WRITEF("result.rpt","===========================================================================\n")
	WRITEF("result.rpt","\tGlobal design variables:\n")
	WRITEF("result.rpt","===========================================================================\n")
	WRITEF("result.rpt","\n")
END FUNCTION

FUNCTION NO_TYPE fcn_write_output_global_results_case2_calc2()
BODY
	WRITE("Global results:\n")
END FUNCTION

FUNCTION NO_TYPE fcn_recover_algebraic_dynamic_case2_calc2(IN REAL array_x[])
BODY

	-- Point 1: set local conditions
		-- set local algebraic variables
		Pump_FUEL_LH2.U = array_x[2]
		Pump_LOX_OXIDIZER.U = array_x[3]
		Comb_Chamb.p_out_ch = array_x[4]
		Comb_Chamb.M_r = array_x[5]
		Heat_exchanger_1.h.T = array_x[6]
		ThrustMonitor_1.M_out = array_x[7]
END FUNCTION

FUNCTION NO_TYPE fcn_write_case2_calc21(IN REAL array_x[], IN REAL array_fres[])
BODY

	-- Point 1: local results
	WRITEF("result.rpt","\n")
	WRITEF("result.rpt","===========================================================================\n")
	WRITEF("result.rpt","\tPoint 1\n")
	WRITEF("result.rpt","===========================================================================\n\n")
	WRITEF("result.rpt","\n")
	WRITEF("result.rpt","Boundaries : \n")
	WRITEF("result.rpt","\n")
		Comb_Chamb.f_O.p_c = 5e6
	WRITEF("result.rpt","Comb_Chamb.f_O.p_c = %s (%s)\n", getValueAsString("Comb_Chamb.f_O.p_c"), unitsOfVariable("Comb_Chamb.f_O.p_c"))
		FlowMeter_LOX.f_in.W = 26
	WRITEF("result.rpt","FlowMeter_LOX.f_in.W = %s (%s)\n", getValueAsString("FlowMeter_LOX.f_in.W"), unitsOfVariable("FlowMeter_LOX.f_in.W"))
		-- parameter Heat_exchanger_1.f_in.W = 4.167
	WRITEF("result.rpt","Heat_exchanger_1.f_in.W = %s (%s)\n", getValueAsString("Heat_exchanger_1.f_in.W"), unitsOfVariable("Heat_exchanger_1.f_in.W"))
		Inlet_LH2.Tt = 21
	WRITEF("result.rpt","Inlet_LH2.Tt = %s (%s)\n", getValueAsString("Inlet_LH2.Tt"), unitsOfVariable("Inlet_LH2.Tt"))
		Inlet_LH2.pt = 3e5
	WRITEF("result.rpt","Inlet_LH2.pt = %s (%s)\n", getValueAsString("Inlet_LH2.pt"), unitsOfVariable("Inlet_LH2.pt"))
		Inlet_LOX.Tt = 90
	WRITEF("result.rpt","Inlet_LOX.Tt = %s (%s)\n", getValueAsString("Inlet_LOX.Tt"), unitsOfVariable("Inlet_LOX.Tt"))
		Inlet_LOX.pt = 5e5
	WRITEF("result.rpt","Inlet_LOX.pt = %s (%s)\n", getValueAsString("Inlet_LOX.pt"), unitsOfVariable("Inlet_LOX.pt"))
		-- parameter LPRES.Altitude = 0
	WRITEF("result.rpt","LPRES.Altitude = %s (%s)\n", getValueAsString("LPRES.Altitude"), unitsOfVariable("LPRES.Altitude"))
		Pump_FUEL_LH2.dp = 7724795.65
	WRITEF("result.rpt","Pump_FUEL_LH2.dp = %s (%s)\n", getValueAsString("Pump_FUEL_LH2.dp"), unitsOfVariable("Pump_FUEL_LH2.dp"))
		Pump_FUEL_LH2.phi = Pump_FUEL_LH2.phi_d
	WRITEF("result.rpt","Pump_FUEL_LH2.phi = %s (%s)\n", getValueAsString("Pump_FUEL_LH2.phi"), unitsOfVariable("Pump_FUEL_LH2.phi"))
		Pump_LOX_OXIDIZER.dp = 9536784.75
	WRITEF("result.rpt","Pump_LOX_OXIDIZER.dp = %s (%s)\n", getValueAsString("Pump_LOX_OXIDIZER.dp"), unitsOfVariable("Pump_LOX_OXIDIZER.dp"))
		Pump_LOX_OXIDIZER.phi = Pump_LOX_OXIDIZER.phi_d
	WRITEF("result.rpt","Pump_LOX_OXIDIZER.phi = %s (%s)\n", getValueAsString("Pump_LOX_OXIDIZER.phi"), unitsOfVariable("Pump_LOX_OXIDIZER.phi"))
		Turbine_FUEL.f_in.Tt = 140
	WRITEF("result.rpt","Turbine_FUEL.f_in.Tt = %s (%s)\n", getValueAsString("Turbine_FUEL.f_in.Tt"), unitsOfVariable("Turbine_FUEL.f_in.Tt"))
		Turbine_FUEL.rpm = 52100
	WRITEF("result.rpt","Turbine_FUEL.rpm = %s (%s)\n", getValueAsString("Turbine_FUEL.rpm"), unitsOfVariable("Turbine_FUEL.rpm"))
		Turbine_OXIDIZER.rpm = 17700
	WRITEF("result.rpt","Turbine_OXIDIZER.rpm = %s (%s)\n", getValueAsString("Turbine_OXIDIZER.rpm"), unitsOfVariable("Turbine_OXIDIZER.rpm"))
	WRITEF("result.rpt","\n")
	WRITEF("result.rpt","Local results :\n")
	WRITEF("result.rpt","\n")
	WRITEF("result.rpt","Comb_Chamb.OF = %g\n", array_x[1])
	WRITEF("result.rpt","Pump_FUEL_LH2.U = %g\n", array_x[2])
	WRITEF("result.rpt","Pump_LOX_OXIDIZER.U = %g\n", array_x[3])
	WRITEF("result.rpt","Comb_Chamb.p_out_ch = %g\n", array_x[4])
	WRITEF("result.rpt","Comb_Chamb.M_r = %g\n", array_x[5])
	WRITEF("result.rpt","Heat_exchanger_1.h.T = %g\n", array_x[6])
	WRITEF("result.rpt","ThrustMonitor_1.M_out = %g\n", array_x[7])
	WRITEF("result.rpt","\n")
	WRITEF("result.rpt","Closure equations :\n")
	WRITEF("result.rpt","\n")
	WRITEF("result.rpt","Turbine_FUEL.f_in.W = 0.7*Injector_FUEL.f_in.W        \tResidue: %g \n",array_fres[7])
END FUNCTION

FUNCTION NO_TYPE fcn_write_output_case2_calc21(IN REAL array_x[])
BODY
	WRITE("\n")
	WRITE("Point 1: boundaries\n")
		Comb_Chamb.f_O.p_c = 5e6
	WRITE("Comb_Chamb.f_O.p_c = %s\n", getValueAsString("Comb_Chamb.f_O.p_c"))
		FlowMeter_LOX.f_in.W = 26
	WRITE("FlowMeter_LOX.f_in.W = %s\n", getValueAsString("FlowMeter_LOX.f_in.W"))
		-- parameter Heat_exchanger_1.f_in.W = 4.167
	WRITE("Heat_exchanger_1.f_in.W = %s\n", getValueAsString("Heat_exchanger_1.f_in.W"))
		Inlet_LH2.Tt = 21
	WRITE("Inlet_LH2.Tt = %s\n", getValueAsString("Inlet_LH2.Tt"))
		Inlet_LH2.pt = 3e5
	WRITE("Inlet_LH2.pt = %s\n", getValueAsString("Inlet_LH2.pt"))
		Inlet_LOX.Tt = 90
	WRITE("Inlet_LOX.Tt = %s\n", getValueAsString("Inlet_LOX.Tt"))
		Inlet_LOX.pt = 5e5
	WRITE("Inlet_LOX.pt = %s\n", getValueAsString("Inlet_LOX.pt"))
		-- parameter LPRES.Altitude = 0
	WRITE("LPRES.Altitude = %s\n", getValueAsString("LPRES.Altitude"))
		Pump_FUEL_LH2.dp = 7724795.65
	WRITE("Pump_FUEL_LH2.dp = %s\n", getValueAsString("Pump_FUEL_LH2.dp"))
		Pump_FUEL_LH2.phi = Pump_FUEL_LH2.phi_d
	WRITE("Pump_FUEL_LH2.phi = %s\n", getValueAsString("Pump_FUEL_LH2.phi"))
		Pump_LOX_OXIDIZER.dp = 9536784.75
	WRITE("Pump_LOX_OXIDIZER.dp = %s\n", getValueAsString("Pump_LOX_OXIDIZER.dp"))
		Pump_LOX_OXIDIZER.phi = Pump_LOX_OXIDIZER.phi_d
	WRITE("Pump_LOX_OXIDIZER.phi = %s\n", getValueAsString("Pump_LOX_OXIDIZER.phi"))
		Turbine_FUEL.f_in.Tt = 140
	WRITE("Turbine_FUEL.f_in.Tt = %s\n", getValueAsString("Turbine_FUEL.f_in.Tt"))
		Turbine_FUEL.rpm = 52100
	WRITE("Turbine_FUEL.rpm = %s\n", getValueAsString("Turbine_FUEL.rpm"))
		Turbine_OXIDIZER.rpm = 17700
	WRITE("Turbine_OXIDIZER.rpm = %s\n", getValueAsString("Turbine_OXIDIZER.rpm"))
	WRITE("\n")
	WRITE("Point 1: local results\n")
	WRITE("Comb_Chamb.OF = %g\n", array_x[1])
	WRITE("Pump_FUEL_LH2.U = %g\n", array_x[2])
	WRITE("Pump_LOX_OXIDIZER.U = %g\n", array_x[3])
	WRITE("Comb_Chamb.p_out_ch = %g\n", array_x[4])
	WRITE("Comb_Chamb.M_r = %g\n", array_x[5])
	WRITE("Heat_exchanger_1.h.T = %g\n", array_x[6])
	WRITE("ThrustMonitor_1.M_out = %g\n", array_x[7])
END FUNCTION

FUNCTION BOOLEAN run_case2_calc2()
DECLS
	STRING nameOutputFile
	REAL array_x[7]
	REAL array_fres[7]
	INTEGER info
	BOOLEAN rct = FALSE
	BOOLEAN rc = FALSE
	REAL param0_tmp
	REAL param1_tmp
	STRING vnames[7] = {
	"P1-Comb_Chamb.OF",
	"P1-Pump_FUEL_LH2.U",
	"P1-Pump_LOX_OXIDIZER.U",
	"P1-Comb_Chamb.p_out_ch",
	"P1-Comb_Chamb.M_r",
	"P1-Heat_exchanger_1.h.T",
	"P1-ThrustMonitor_1.M_out"
	}
	STRING eqts[7] = {
	"P1ResidueValue(1)",
	"P1ResidueValue(2)",
	"P1ResidueValue(3)",
	"P1ResidueValue(4)",
	"P1ResidueValue(5)",
	"P1ResidueValue(6)",
	"P1-[(Turbine_FUEL.f_in.W) - (0.7*Injector_FUEL.f_in.W)]"
 }
BODY
	getPreviousSettings()
	DEBUG_LEVEL = 3

	CALC_BEGIN("extended_steady2(#2)", "extended steady",globalNameParam_case2, TRUE)
	TIME= 0
	SMETHOD = NR
	TOLTYPE = RELTOL
	TOLERANCE = 1e-06
	MAXITER = 10000
	MAXFEVAL = 40000
	MAXJACEVAL = 60
	MAXBROYDEN = 60
	-- Init global design variables
	RESTORE_VARS_VECTOR("case2_calc2_file2_global",v_global_case2_calc2, T_MEMORY)
	-- point 1
	RESTORE_VARS_CATEGORY("case2_calc2_file2_point1",T_INITIAL, TRUE, T_MEMORY)
	LPRES.Altitude = LPRES_Altitude_case2_param
	Heat_exchanger_1.f_in.W = Heat_exchanger_1_f_in_W_case2_param
	array_x[1] = Comb_Chamb.OF
	array_x[2] = Pump_FUEL_LH2.U
	array_x[3] = Pump_LOX_OXIDIZER.U
	array_x[4] = Comb_Chamb.p_out_ch
	array_x[5] = Comb_Chamb.M_r
	array_x[6] = Heat_exchanger_1.h.T
	array_x[7] = ThrustMonitor_1.M_out
	-- global design variables
	-- solver algebraic parameters
		-- point 1 local
	setAlgVariableInfo("P1-Comb_Chamb.OF",1.5e-08,1.5e-08,1.79769313e+308,1.79769313e+308)
	setAlgVariableInfo("P1-Pump_FUEL_LH2.U",1.5e-08,1.5e-08,1.79769313e+308,1.79769313e+308)
	setAlgVariableInfo("P1-Pump_LOX_OXIDIZER.U",1.5e-08,1.5e-08,1.79769313e+308,1.79769313e+308)
	setAlgVariableInfo("P1-Comb_Chamb.p_out_ch",1.5e-08,1.5e-08,1.79769313e+308,1.79769313e+308)
	setAlgVariableInfo("P1-Comb_Chamb.M_r",1.5e-08,1.5e-08,1.79769313e+308,1.79769313e+308)
	setAlgVariableInfo("P1-Heat_exchanger_1.h.T",1.5e-08,1.5e-08,1.79769313e+308,1.79769313e+308)
	setAlgVariableInfo("P1-ThrustMonitor_1.M_out",1.5e-08,1.5e-08,1.79769313e+308,1.79769313e+308)
		-- global 2

	-- solver residues parameters
	setResidueInfo(1,1e-06,ABSTOL)
	setResidueInfo(2,1e-06,ABSTOL)
	setResidueInfo(3,1e-06,ABSTOL)
	setResidueInfo(4,1e-06,ABSTOL)
	setResidueInfo(5,1e-06,ABSTOL)
	setResidueInfo(6,1e-06,ABSTOL)
	setResidueInfo(7,1e-06,ABSTOL)
	EXEC_INIT()
	RESET_EVENTS()
	-- init derivatives to zero
	setDerivativesToZero()
	IF(Heat_exchanger_1_f_in_W_case2_param==4.317) THEN
		NEW_BRANCH("analysis_extended_steady2_nldsolver\nLPRES.Altitude=$LPRES_EXAMPLES.LPRES_Altitude_case2_param")
	ELSE
		USE_BRANCH("analysis_extended_steady2_nldsolver\nLPRES.Altitude=$LPRES_EXAMPLES.LPRES_Altitude_case2_param")
	END IF

	-- Modified Powell hybrid method
	rc = nldsolver(fcn_case2_calc2,7,array_x, array_fres, info, eqts, vnames)

	IF ( rc == TRUE ) THEN
		WRITE("====================\n")
		WRITE("Extended steady (OK)\n")
		WRITE("====================\n")
		WRITE("=============================\n")
	ELSE
		WRITE("Extended steady (NOK)\n")
		WRITE("=============================\n")
	END IF
	-- write global results in file 
	fcn_write_global_results_case2_calc2()
	fcn_write_case2_calc21(array_x, array_fres)
	-- display results in output windows 
	fcn_write_output_global_results_case2_calc2()
	fcn_write_output_case2_calc21(array_x)
	IF ( rc == TRUE ) THEN
		SAVE_VARS_VECTOR("case2_calc2_file2_global",v_global_case2_calc2, T_MEMORY)

	WRITE("\n=================\n")
		WRITE("Validating points\n")
		WRITE("=================\n")

	-- Point 1: set local conditions
		-- set boundaries
		Comb_Chamb.f_O.p_c = 5e6
		FlowMeter_LOX.f_in.W = 26
		-- parameter Heat_exchanger_1.f_in.W = 4.167
		Inlet_LH2.Tt = 21
		Inlet_LH2.pt = 3e5
		Inlet_LOX.Tt = 90
		Inlet_LOX.pt = 5e5
		-- parameter LPRES.Altitude = 0
		Pump_FUEL_LH2.dp = 7724795.65
		Pump_FUEL_LH2.phi = Pump_FUEL_LH2.phi_d
		Pump_LOX_OXIDIZER.dp = 9536784.75
		Pump_LOX_OXIDIZER.phi = Pump_LOX_OXIDIZER.phi_d
		Turbine_FUEL.f_in.Tt = 140
		Turbine_FUEL.rpm = 52100
		Turbine_OXIDIZER.rpm = 17700
		-- set local algebraic variables
		Comb_Chamb.OF = array_x[1]
		Pump_FUEL_LH2.U = array_x[2]
		Pump_LOX_OXIDIZER.U = array_x[3]
		Comb_Chamb.p_out_ch = array_x[4]
		Comb_Chamb.M_r = array_x[5]
		Heat_exchanger_1.h.T = array_x[6]
		ThrustMonitor_1.M_out = array_x[7]
		SAVE_VARS_CATEGORY("case2_calc2_file2_point1",T_INITIAL, TRUE, T_MEMORY)
		WRITE("\n")
	END IF
	fcn_recover_algebraic_dynamic_case2_calc2(array_x)
	CLOSEF("result.rpt")
	IF(rc == TRUE) THEN 
		rct = TRUE
	END IF
	CALC_END(TRUE)
	restorePreviousSettings()
	RETURN rct
END FUNCTION

FUNCTION NO_TYPE init_case2_calc2()
BODY
	-- Init global design variables
	SAVE_VARS_VECTOR("case2_calc2_file1_global",v_global_case2_calc2, T_MEMORY)
	-- init solver algebraics
	-- algebraics and dynamics
	-- point 1
	Comb_Chamb.OF = 3
	Pump_FUEL_LH2.U = 497.001087
	Pump_LOX_OXIDIZER.U = 131.857475
	Comb_Chamb.p_out_ch = 26815.8181
	Comb_Chamb.M_r = 2.79060687 -- initialized in component
	Heat_exchanger_1.h.T = 201.462183
	ThrustMonitor_1.M_out = 3.73564778
	SAVE_VARS_CATEGORY("case2_calc2_file1_point1", T_INITIAL, TRUE, T_MEMORY)
END FUNCTION

------------------------------------------------------------------------------
-- Case name:   analysis
-- Case description: Description
------------------------------------------------------------------------------
FUNCTION BOOLEAN run_case2()
DECLS
	BOOLEAN rc = TRUE
	BOOLEAN writeoutput_case2_calc1 = TRUE
	BOOLEAN writeoutput_case2_calc2 = TRUE
	STRING xParameterNames1[102]
	REAL Mat1[102,2]
	INTEGER MatOK1[102,2]
	INTEGER nrow1 = 0
	STRING xParameterNames2[102]
	REAL Mat2[102,2]
	INTEGER MatOK2[102,2]
	INTEGER nrow2 = 0
	STRING yOutputNames[2]
BODY
	init_case2_calc2()
	FOR(iiterParam1 IN 0,1)
		COPY_VARS("case2_calc2_file1_global", T_MEMORY,"case2_calc2_file2_global", T_MEMORY)
		COPY_VARS("case2_calc2_file1_point1", T_MEMORY,"case2_calc2_file2_point1", T_MEMORY)
		LPRES_Altitude_case2_param=0 + iiterParam1 * ((100e3 - 0) / 1)
		FOR(iiterParam2 IN 0,50)
			Heat_exchanger_1_f_in_W_case2_param=4.317 + iiterParam2 * ((1.617 - 4.317) / 50)
			LPRES.Altitude=LPRES_Altitude_case2_param
			Heat_exchanger_1.f_in.W=Heat_exchanger_1_f_in_W_case2_param
			WRITES(globalNameParam_case2, "LPRES.Altitude=%f,Heat_exchanger_1.f_in.W=%f",LPRES_EXAMPLES.LPRES_Altitude_case2_param,LPRES_EXAMPLES.Heat_exchanger_1_f_in_W_case2_param)
			rc = run_case2_calc1()
			nrow1 = nrow1 + 1
			WRITES(xParameterNames1[nrow1],"%s-%s","case2_cal1", integerToString(nrow1))
			IF(writeoutput_case2_calc1 == TRUE) THEN
				WRITEF("case_parametric_output_case2_calc1.csv","LPRES.Altitude;Heat_exchanger_1.f_in.W\n")
				writeoutput_case2_calc1 = FALSE
			END IF
			IF(rc == TRUE) THEN
				WRITEF("case_parametric_output_case2_calc1.csv","%g;%g\n",LPRES.Altitude,Heat_exchanger_1.f_in.W)
				Mat1[nrow1,1] = LPRES.Altitude
				Mat1[nrow1,2] = Heat_exchanger_1.f_in.W
				FOR(ii IN 1,2)
					MatOK1[nrow1,ii] = 1
				END FOR
			ELSE
				WRITEF("case_parametric_output_case2_calc1.csv","%g;%g\n",LPRES.Altitude,Heat_exchanger_1.f_in.W)
				Mat1[nrow1,1] = LPRES.Altitude
				Mat1[nrow1,2] = Heat_exchanger_1.f_in.W
				FOR(ii IN 1,2)
					MatOK1[nrow1,ii] = 1
				END FOR
				FOR(ii IN 3,2)
					MatOK1[nrow1,ii] = 0
				END FOR
			END IF
			LPRES.Altitude=LPRES_Altitude_case2_param
			Heat_exchanger_1.f_in.W=Heat_exchanger_1_f_in_W_case2_param
			WRITES(globalNameParam_case2, "LPRES.Altitude=%f,Heat_exchanger_1.f_in.W=%f",LPRES_EXAMPLES.LPRES_Altitude_case2_param,LPRES_EXAMPLES.Heat_exchanger_1_f_in_W_case2_param)
			rc = run_case2_calc2()
			nrow2 = nrow2 + 1
			WRITES(xParameterNames2[nrow2],"%s-%s","case2_cal2", integerToString(nrow2))
			IF(writeoutput_case2_calc2 == TRUE) THEN
				WRITEF("case_parametric_output_case2_calc2.csv","LPRES.Altitude;Heat_exchanger_1.f_in.W\n")
				writeoutput_case2_calc2 = FALSE
			END IF
			IF(rc == TRUE) THEN
				WRITEF("case_parametric_output_case2_calc2.csv","%g;%g\n",LPRES.Altitude,Heat_exchanger_1.f_in.W)
				Mat2[nrow2,1] = LPRES.Altitude
				Mat2[nrow2,2] = Heat_exchanger_1.f_in.W
				FOR(ii IN 1,2)
					MatOK2[nrow2,ii] = 1
				END FOR
			ELSE
				WRITEF("case_parametric_output_case2_calc2.csv","%g;%g\n",LPRES.Altitude,Heat_exchanger_1.f_in.W)
				Mat2[nrow2,1] = LPRES.Altitude
				Mat2[nrow2,2] = Heat_exchanger_1.f_in.W
				FOR(ii IN 1,2)
					MatOK2[nrow2,ii] = 1
				END FOR
				FOR(ii IN 3,2)
					MatOK2[nrow2,ii] = 0
				END FOR
			END IF
			IF(iiterParam2 == 0)  THEN
				COPY_VARS("case2_calc2_file2_global", T_MEMORY,"case2_calc2_file1_global", T_MEMORY)
				COPY_VARS("case2_calc2_file2_point1", T_MEMORY,"case2_calc2_file1_point1", T_MEMORY)
			END IF
			RESET_VARIABLES()
		END FOR
	END FOR
			 yOutputNames[1] = "LPRES.Altitude"
			 yOutputNames[2] = "Heat_exchanger_1.f_in.W"
			matPrint(102, 2, Mat1, TRUE, MatOK1, xParameterNames1, yOutputNames, "", "", "", FALSE)
			matPrint(102, 2, Mat2, TRUE, MatOK2, xParameterNames2, yOutputNames, "", "", "", FALSE)
	RETURN rc
END FUNCTION

EXPERIMENT pc_new ON LE5B_new_pc.pc_new_design
DECLS
	BOOLEAN rc = TRUE
BODY
	CASE_BEGIN("analysis(#2)", TRUE)
		RESET_VARIABLES()
		run_case2()
	CASE_END(TRUE)
END EXPERIMENT

//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia_CPP
#define LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia_CPP

#include "LPRES_EXAMPLES.+l+e5+b_valves.actuaciones_mfv_cambia.h"

LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia* LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::s_current= NULL;

LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "LE5B_valves";
m_infoPartitionName = "actuaciones_mfv_cambia";
m_infoModelName = "LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia";
m_infoModelFileName = "LPRES_EXAMPLES.+l+e5+b_valves.actuaciones_mfv_cambia";
m_infoModelFileNameExtra = "+l+e5+b_valves.actuaciones_mfv_cambia";
m_perfFlag = false;
m_infoComponentDate = "05/07/2020 14:04:39.296000";
m_infoPartitionDate = "12/07/2020 13:30:10.891000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "LPRES V2.0.1 LPRES_EXAMPLES V0.1 MATH V3.2.3 ";

m_solveInternalBox= new int[6]; 
int nbx;
for (nbx=0; nbx < 6 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[8];
int ib;
for (ib=0; ib < 8 ; ib++)
	m_boundaryBranch[ib]= 0;

m_branchZone= new int[3]; 
int nibr;
for (nibr=0; nibr < 3 ; nibr++)
	m_branchZone[nibr]= -1;

m_branchIf= new int[37]; 
int nif;
for (nif=0; nif < 37 ; nif++)
	m_branchIf[nif]= -1;

static const char * elmstr0[] = { "LOX", "NTO", "H2O2", "NH3", "HNO3", "LF2", "RP_1", "LCH4", "LH2", "N2H4", "UDMH", "MMH", "JP_10", "Kerox", "Oil", "H2O", 
		"IPA", "Air", "Ar", "CH4", "CO", "CO2", "H2", "He", "N2", "O2", "MMH_vapour", "H2O_vapour", "Comb_prod", "Comb_prod_M", "Comb_prod_cp", "Comb_prod_c", 
		"Comb_prod_cp_g", "Comb_prod_Lv", "Comb_prod_visc", "Comb_prod_cond", "Comb_prod_T_boil", "Comb_prod_rho", NULL } ;
static int elmind0[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
		33, 34, 35, 36, 37, 38 } ;
static const char * elmstr1[] = { "Liquid", "Gas", NULL } ;
static int elmind1[] = { 1, 2 } ;
static int elmind2[] = { 29, 30, 31, 32, 33, 34, 35, 36, 37, 38 } ;
static const char * elmstr3[] = { "Convergent", "Divergent", NULL } ;
static int elmind3[] = { 1, 2 } ;
static const char * elmstr4[] = { "CombProd", "CombProd_cp", "RFuel", "RFuel_cp", "ROxidant", "ROxidant_cp", NULL } ;
static int elmind4[] = { 1, 2, 3, 4, 5, 6 } ;
static int elmind5[] = { 9, 23 } ;
static int elmind6[] = { 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 4, 28 } ;
static int elmind7[] = { 1, 8, 9, 12 } ;
static int elmind8[] = { 1, 26, 8, 20, 9, 23, 12, 27 } ;
static int elmind9[] = { 26, 20, 23, 27 } ;
static int elmind10[] = { 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 } ;
static int elmind11[] = { 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 
		18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 4, 28 } ;
static int elmind12[] = { 1, 26 } ;
static const char * elmstr13[] = { "Design", "Known_pt_out", "Known_dp", "Known_dpr", "Darcy", "Gas_valve", "Liq_valve", "Known_Qp", "Known_k", "Compressible", "Incompressible_g", "Incompressible_l", NULL } ;
static int elmind13[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 } ;
static int elmind14[] = { 5, 3 } ;
static const char * elmstr15[] = { "Liquid2Liquid", "Gas2Gas", "Liquid2Gas", "Gas2Liquid", NULL } ;
static int elmind15[] = { 1, 2, 3, 4 } ;
static const char * elmstr16[] = { "Yes", "No", NULL } ;
static int elmind16[] = { 1, 2 } ;
n_typ=17;
static struct INTEG_enumType tmp_typ[] = { 
		{elmstr0,38,elmind0},
		{elmstr1,2,elmind1},
		{elmstr0,10,elmind2},
		{elmstr3,2,elmind3},
		{elmstr4,6,elmind4},
		{elmstr0,2,elmind5},
		{elmstr0,12,elmind6},
		{elmstr0,4,elmind7},
		{elmstr0,8,elmind8},
		{elmstr0,4,elmind9},
		{elmstr0,16,elmind10},
		{elmstr0,28,elmind11},
		{elmstr0,2,elmind12},
		{elmstr13,12,elmind13},
		{elmstr13,2,elmind14},
		{elmstr15,4,elmind15},
		{elmstr16,2,elmind16}
	} ;
typ= new struct INTEG_enumType[17];
etypecopy(17,typ,tmp_typ);
n_dyn=9;
dyn= new double[9] ;
static double tmp_dynInit[9]={ 1, 1, 1, 1, 1, 500, 500, 100, 100 } ;
dynInit= new double[9];
dcopy(9,dynInit,tmp_dynInit);


n_der=0;
der= new double[9] ;
static double tmp_derInit[9]={ 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[9];
dcopy(9,derInit,tmp_derInit);


res= new double[9] ;
ldr= new double[9] ;
boxDyn= new double[9] ;
boxDer= new double[9] ;

n_unkR=572;
unkR= new double[572] ;
static double tmp_unkRInit[572]={ 0.001, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 110, 5, 
		1, 0, 0.05, 1, 800, 18, 0, 8, 0, 15100000, 0, 0, 200, 0, 0, 0, 
		0, 0, 0, 4182, 1, 0.001, 3100, 0, 0.99, 1, 1, 1, 1, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0.001, 0, 1, 
		1, 0, 0, 1, 1, 150, 0.005, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
		0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002, 0.004, 0.001, 3000000, 0, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 1000, 5e-05, 0, 0.001, 0.000539719389, 0, 0.5, 0, 10, 
		0, 0, 1, 0, 0, 0.05, 0, 0.5, 0, 10, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0.001, 0, 0, 1, 0, 0.001, 0, 0, 1, 0, 0.02, 0, 0, 
		0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0.000585042, 0, 0.612, 1, 0, 
		0, 0.4, 0, 0.7, 0.080282913, 0, 0, 0.000497590025, 0, 0.653, 1, 0, 0, 0.4, 0, 0.7, 
		0.0587298052, 0, 0, 0, 0.9, 0, 0, 0, 0, 0.00131586493, 0, 0, 0, 0.476, 1, 1, 
		0, 0, 0, 0, 0.00525651, 0, 0, 0, 0.392, 0, 0, 0 } ;
unkRInit= new double[572];
dcopy(572,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 100, 9, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=16;
static int tmp_cteIInit[16]={ 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "g/mol", "kg/m^3", "kg/s", "m", "m^2", 
		"m/s", "m/s^2", "rad/s", "rpm", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 49;
n_neld= 0;
m_numBoxes= 5;
m_nNonLinearBoxes= 5;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::initInternalModels()
{
}

void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__Init_fluid(const int & fluid_name,double fluid[])
{
	int _vi1;
	int _vi2;

	_vi1 = 1 ;
	while ( _vi1 <= setofSize(&typ[0]) ) {
	_vi2 = setofElem(&typ[0], _vi1) ;
	fluid[_vi1-1] = 0. ;
	_vi1 += 1 ;
	}
	fluid[fluid_name-1] = 1. ;
	return  ;
}


int LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi3;
	int _vi4;

	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[11]) ) {
	_vi4 = setofElem(&typ[11], _vi3) ;
	if( fluid[_vi4-1] != 0 ) {
	fluid_name = _vi4 ;
	}
	_vi3 += 1 ;
	}
	return fluid_name ;
}


int LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__State(double fluid[])
{
	// Local variables:
	int fluid_state = 1;
	int fluid_name = 1;

	fluid_name = LPRES__Know_fluid(fluid) ;
	if( setofPos(&typ[10], fluid_name) != 0 ) {
	fluid_state = 1 ;
		}
	else if( setofPos(&typ[6], fluid_name) != 0) {
	fluid_state = 2 ;

	}
	return fluid_state ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi5;
	int _vi6;
	double _vr1;

	_vr1 = 0. ;
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[10]) ) {
	_vi6 = setofElem(&typ[10], _vi5) ;
	_vr1 += Chem_rho[_vi5-1] * fluid[_vi6-1] ;
	_vi5 += 1 ;
	}
	return _vr1 ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[28] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600,3133,2288 };
	int _vi7;
	int _vi8;
	double _vr2;

	_vr2 = 0. ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[11]) ) {
	_vi8 = setofElem(&typ[11], _vi7) ;
	_vr2 += Chem_cp[_vi7-1] * fluid[_vi8-1] ;
	_vi7 += 1 ;
	}
	return _vr2 + fluid[30] * fluid[28] ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[28] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07,17.031,18 };
	int _vi10;
	int _vi9;
	double _vr3;

	_vr3 = 0. ;
	_vi9 = 1 ;
	while ( _vi9 <= setofSize(&typ[11]) ) {
	_vi10 = setofElem(&typ[11], _vi9) ;
	_vr3 += _div( fluid[_vi10-1] , Chem_M[_vi9-1],"Chem_M[_vi9]") ;
	_vi9 += 1 ;
	}
	return _div( 1 , (_vr3 + _div( fluid[28] , fluid[29],"fluid[Comb_prod_M]")),"_vr3 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__visc(double fluid[])
{
	// Local variables:
	double Chem_visc[28] = { 0.00019,0.000423,0.00127,0.001,7.9e-05,0.00021,2e-05,2e-05,0.00097,0.000754,0.0004,0.0028,0.0045,0.0045,0.001,0.002,1.803e-05,2.23e-05,1.1e-05,1.74e-05,1.47e-05,8.8e-06,1.96e-05,1.76e-05,
3.37e-05,0,9.9e-06,2.8e-05 };
	int _vi11;
	int _vi12;
	double _vr4;

	_vr4 = 0. ;
	_vi11 = 1 ;
	while ( _vi11 <= setofSize(&typ[11]) ) {
	_vi12 = setofElem(&typ[11], _vi11) ;
	_vr4 += Chem_visc[_vi11-1] * fluid[_vi12-1] ;
	_vi11 += 1 ;
	}
	return _vr4 + fluid[34] * fluid[28] ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[])
{
	int _vi13;
	int _vi14;

	if( fluid_in[8] != 0 ) {
	fluid_out[22] = fluid_in[8] ;
	fluid_out[8] = 0. ;
	}
	else {
	fluid_out[22] = fluid_in[22] ;
	fluid_out[8] = 0. ;
	}
	if( fluid_in[0] != 0 ) {
	fluid_out[25] = fluid_in[0] ;
	fluid_out[0] = 0. ;
	}
	else {
	fluid_out[25] = fluid_in[25] ;
	fluid_out[0] = 0. ;
	}
	if( fluid_in[7] != 0 ) {
	fluid_out[19] = fluid_in[7] ;
	fluid_out[7] = 0. ;
	}
	else {
	fluid_out[19] = fluid_in[19] ;
	fluid_out[7] = 0. ;
	}
	if( fluid_in[11] != 0 ) {
	fluid_out[26] = fluid_in[11] ;
	fluid_out[11] = 0. ;
	}
	else {
	fluid_out[26] = fluid_in[26] ;
	fluid_out[11] = 0. ;
	}
	_vi13 = 1 ;
	while ( _vi13 <= setofSize(&typ[0]) ) {
	_vi14 = setofElem(&typ[0], _vi13) ;
	if( _vi14 != 9 ) {
	if( _vi14 != 23 ) {
	if( _vi14 != 26 ) {
	if( _vi14 != 1 ) {
	if( _vi14 != 8 ) {
	if( _vi14 != 20 ) {
	if( _vi14 != 12 ) {
	if( _vi14 != 27 ) {
	fluid_out[_vi13-1] = fluid_in[_vi13-1] ;
	}
	}
	}
	}
	}
	}
	}
	}
	_vi13 += 1 ;
	}
	fluid_out[30] = fluid_out[32] ;
	return  ;
}


void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__Decomposition_fun(double fluid_in[],double Data_Array[])
{
	// Local variables:
	double Fluid_Fuel[38];
	memset(Fluid_Fuel,0,38*sizeof(double));
	double Fluid_Oxidant[38];
	memset(Fluid_Oxidant,0,38*sizeof(double));
	int _vi15;
	int _vi16;

	Data_Array[0] = fluid_in[28] ;
	Data_Array[1] = fluid_in[30] ;
	_vi15 = 1 ;
	while ( _vi15 <= setofSize(&typ[11]) ) {
	_vi16 = setofElem(&typ[11], _vi15) ;
	if( setofPos(&typ[5], _vi16) != 0 && fluid_in[_vi16-1] != 0 ) {
	Data_Array[2] = fluid_in[_vi16-1] ;
	LPRES__Init_fluid(_vi16, Fluid_Fuel) ;
	Data_Array[3] = LPRES__cp(Fluid_Fuel) ;
	Data_Array[5] = 0. ;
	Data_Array[5] = 0. ;
		}
	else if( setofPos(&typ[12], _vi16) != 0 && fluid_in[_vi16-1] != 0) {
	Data_Array[4] = fluid_in[_vi16-1] ;
	LPRES__Init_fluid(_vi16, Fluid_Oxidant) ;
	Data_Array[5] = LPRES__cp(Fluid_Oxidant) ;
	Data_Array[3] = 0. ;
	Data_Array[3] = 0. ;

	}
	_vi15 += 1 ;
	}
	return  ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__ISA_Pressure(const double & z)
{
	// Local variables:
	double p_amb = 101325.;
	double a[8] = { -6.5,0,1,2.8,0,-2.8,-2,0 };
	int b[8] = { 0,1,0,0,1,0,0,1 };
	double T_0 = 288.15;
	double p_0 = 101325.;
	double h_0 = 0.;
	double h_max[7] = { 11000,20000,32000,47000,51000,71000,84852 };
	int i = 0;
	int j = 1;
	double h = 0.0;
	int _vi17;

	h = LPRES__Geopotential_Altitude(z) ;
	_vi17 = 1 ;
	while ( _vi17 <= 7 ) {
	if( h > h_max[_vi17-1] ) {
	if( b[_vi17-1] ) {
	p_0 = p_0 * exp(_div( -9.80665 * (h_max[_vi17-1] - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_0 = p_0 * _pow( (_div( (T_0 + a[_vi17-1] * (h_max[_vi17-1] - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[_vi17-1] * 287./1000.),"a[_vi17] * 287 / 1000")),"((T_0 + a[_vi17] * (h_max[_vi17] - h_0) / 1000) / T_0)**(-9.80665 / (a[_vi17] * 287 / 1000))" ) ;
	}
	T_0 = T_0 + a[_vi17-1] * (h_max[_vi17-1] - h_0)/1000. ;
	h_0 = h_max[_vi17-1] ;
	j = _vi17 + 1 ;
	}
	_vi17 += 1 ;
	}
	if( b[j-1] ) {
	p_amb = p_0 * exp(_div( -9.80665 * (h - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_amb = p_0 * _pow( (_div( (T_0 + a[j-1] * (h - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[j-1] * 287./1000.),"a[j] * 287 / 1000")),"((T_0 + a[j] * (h - h_0) / 1000) / T_0)**(-9.80665 / (a[j] * 287 / 1000))" ) ;
	}
	return p_amb ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__Lv(double fluid[])
{
	// Local variables:
	double Chem_Lv[8] = { 214000,214000,509000,509000,461000,461000,784000,784000 };
	int _vi18;
	int _vi19;
	double _vr5;

	_vr5 = 0. ;
	_vi18 = 1 ;
	while ( _vi18 <= setofSize(&typ[8]) ) {
	_vi19 = setofElem(&typ[8], _vi18) ;
	_vr5 += Chem_Lv[_vi18-1] * fluid[_vi19-1] ;
	_vi18 += 1 ;
	}
	return _vr5 + fluid[33] * fluid[28] ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__T_boil(double fluid[])
{
	// Local variables:
	double Chem_Lv[8] = { 122.83,122.83,111,111,20.28,20.28,364,364 };
	int _vi20;
	int _vi21;
	double _vr6;

	_vr6 = 0. ;
	_vi20 = 1 ;
	while ( _vi20 <= setofSize(&typ[8]) ) {
	_vi21 = setofElem(&typ[8], _vi20) ;
	_vr6 += Chem_Lv[_vi20-1] * fluid[_vi21-1] ;
	_vi20 += 1 ;
	}
	return _vr6 ;
}


void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__Obtain_Vap_Prop(double fluid_in[],double Cp_i[],double Lv_i[],double T_boil_i[],double fluid_out[])
{
	// Local variables:
	double fluid_i[38];
	memset(fluid_i,0,38*sizeof(double));
	int size = 0;
	int j = 0;
	int _vi22;
	int _vi23;
	int _vi24;
	int _vi25;
	int _vi26;
	int _vi27;
	int _vi28;
	int _vi29;

	size = 10 ;
	j = 1 ;
	_vi22 = 1 ;
	while ( _vi22 <= setofSize(&typ[8]) ) {
	_vi23 = setofElem(&typ[8], _vi22) ;
	LPRES__Init_fluid(_vi23, fluid_i) ;
	Cp_i[j-1] = LPRES__cp(fluid_i) ;
	j = j + 1 ;
	_vi22 += 1 ;
	}
	Cp_i[size - 1-1] = fluid_in[31] ;
	Cp_i[size-1] = fluid_in[32] ;
	j = 1 ;
	_vi24 = 1 ;
	while ( _vi24 <= setofSize(&typ[8]) ) {
	_vi25 = setofElem(&typ[8], _vi24) ;
	if( fluid_in[_vi25-1] > 0 ) {
	LPRES__Init_fluid(_vi25, fluid_i) ;
	Lv_i[j-1] = LPRES__Lv(fluid_i) ;
	}
	else {
	Lv_i[j-1] = 0. ;
	}
	j = j + 1 ;
	_vi24 += 1 ;
	}
	Lv_i[size - 1-1] = fluid_in[33] ;
	Lv_i[size-1] = fluid_in[33] ;
	j = 1 ;
	_vi26 = 1 ;
	while ( _vi26 <= setofSize(&typ[8]) ) {
	_vi27 = setofElem(&typ[8], _vi26) ;
	if( fluid_in[_vi27-1] > 0 ) {
	LPRES__Init_fluid(_vi27, fluid_i) ;
	T_boil_i[j-1] = LPRES__T_boil(fluid_i) ;
	}
	else {
	T_boil_i[j-1] = 0. ;
	}
	j = j + 1 ;
	_vi26 += 1 ;
	}
	T_boil_i[size - 1-1] = fluid_in[36] ;
	T_boil_i[size-1] = fluid_in[36] ;
	j = 1 ;
	_vi28 = 1 ;
	while ( _vi28 <= setofSize(&typ[8]) ) {
	_vi29 = setofElem(&typ[8], _vi28) ;
	fluid_out[j-1] = fluid_in[_vi29-1] ;
	j = j + 1 ;
	_vi28 += 1 ;
	}
	fluid_out[size - 1-1] = fluid_in[28] ;
	fluid_out[size-1] = fluid_in[28] ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__cond(double fluid[])
{
	// Local variables:
	double Chem_cond[28] = { 0.149,0.131,0.353,0.294,0.1,0.137,0.15,0.117,0.488,0.035,0.246,0.11,0.17,0.12,0.607,0.145,0.0264,0.0177,0.0344,0.025,0.0168,0.186,0.1557,0.026,
0.0265,0,0,0.0261 };
	int _vi30;
	int _vi31;
	double _vr7;

	_vr7 = 0. ;
	_vi30 = 1 ;
	while ( _vi30 <= setofSize(&typ[11]) ) {
	_vi31 = setofElem(&typ[11], _vi30) ;
	_vr7 += Chem_cond[_vi30-1] * fluid[_vi31-1] ;
	_vi30 += 1 ;
	}
	return _vr7 + fluid[35] * fluid[28] ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
{
	// Local variables:
	double rey = 0.0;
	double fric = 0.0;
	double a = 0.0;
	double b = 0.0;

	rey = MATH__max(abs(Re), 1e-05) ;
	a = _pow( (2.457 * _log(_div( 1. , (_pow( (_div( 7. , Re,"Re")) , 0.9,"(7 / Re)**(0.9)" ) + _div( 0.27 * rug , D,"D")),"(7 / Re) ** 0.9 + 0.27 * rug / D"),"1 / ((7 / Re) ** 0.9 + 0.27 * rug / D)")) , 16.,"(2.457 * log(1 / ((7 / Re) ** 0.9 + 0.27 * rug / D)))**(16)" ) ;
	b = _pow( (_div( 37530. , rey,"rey")) , 16.,"(37530 / rey)**(16)" ) ;
	fric = 8. * _pow( (_pow( (_div( 8. , rey,"rey")) , 12.,"(8 / rey)**(12)" ) + _div( 1. , _pow( (a + b) , 1.5,"(a + b)**(1.5)" ),"(a + b) ** 1.5")) , 0.0833333333,"((8 / rey) ** 12 + 1 / (a + b) ** 1.5)**(0.0833333333)" ) ;
	return fric ;
}


/* Copy special unkR[] items to dyn[] vector */

void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet_LH2.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[5]) ;
  // init(Inlet_LOX.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[77]) ;
  // init(Comb_Chamb.CombCha,100)
	if(!(unkR[47] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",164,"Comb_Chamb.","Comb_Chamb.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(29, &unkR[275]) ;
	unkI[0] = 1 ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 2.80123632766838 ;
	}
  // init(Heat_exchanger_1.Heat_exchanger,100)
	if(!(0 && LPRES__State(&unkR[5]) == 1 || 0 && LPRES__State(&unkR[5]) == 2))
		issueErrorAssert(213,7,24,98,"LPRES_CompHeat.el",280,"Heat_exchanger_1."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas","%s","FLUID CHANGED ITS STATE!");

  // init(Nozzle_1.Nozzle,0)
	unkR[517] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-168]  Comb_Chamb.f_F.W = Comb_Chamb.W_F / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[73] = _div( dyn[1] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-169]  Comb_Chamb.W_IF = Comb_Chamb.f_F.W - Comb_Chamb.W_F
unkR[64] = unkR[73] - dyn[1] ;
//[E-170]  Comb_Chamb.W_F_st = Comb_Chamb.W_F / Comb_Chamb.phi
unkR[63] = _div( dyn[1] , dyn[2],"Comb_Chamb.phi") ;
//[E-171]  Comb_Chamb.OF = Comb_Chamb.OF_st / Comb_Chamb.phi
unkR[54] = _div( unkR[55] , dyn[2],"Comb_Chamb.phi") ;
//[E-172]  Comb_Chamb.W_O = Comb_Chamb.OF * Comb_Chamb.W_F
unkR[66] = unkR[54] * dyn[1] ;
//[E-173]  FlowMeter_LOX.f_in.W = Comb_Chamb.W_O / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[76] = _div( unkR[66] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-174]  Comb_Chamb.W_IO = FlowMeter_LOX.f_in.W - Comb_Chamb.W_O
unkR[65] = unkR[76] - unkR[66] ;
//[E-175]  ThrustMonitor_1.g.W = Comb_Chamb.W_IO + Comb_Chamb.W_O + Comb_Chamb.W_F + Comb_Chamb.W_IF
unkR[274] = unkR[65] + unkR[66] + dyn[1] + unkR[64] ;
//[E-176]  Comb_Chamb.cp_R = (Comb_Chamb.W_O * LPRES.cp(Comb_Chamb.fluid_O) + Comb_Chamb.W_F * LPRES.cp(Comb_Chamb.fluid_F)) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
unkR[71] = _div( (unkR[66] * LPRES__cp(&unkR[153]) + dyn[1] * LPRES__cp(&unkR[115])) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
//[E-177]  Comb_Chamb.fluid_P[LOX] =  IF[1] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LOX] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LOX] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LOX] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[191] = _div( (unkR[153] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[115] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[191] = _div( (unkR[153] * unkR[66] + unkR[115] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-178]  Comb_Chamb.fluid_P[NTO] =  IF[2] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[NTO] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NTO] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[NTO] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NTO] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[192] = _div( (unkR[154] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[116] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[192] = _div( (unkR[154] * unkR[66] + unkR[116] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-179]  Comb_Chamb.fluid_P[H2O2] =  IF[3] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[193] = _div( (unkR[155] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[117] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[193] = _div( (unkR[155] * unkR[66] + unkR[117] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-180]  Comb_Chamb.fluid_P[HNO3] =  IF[4] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[HNO3] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[HNO3] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[HNO3] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[195] = _div( (unkR[157] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[119] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[195] = _div( (unkR[157] * unkR[66] + unkR[119] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-181]  Comb_Chamb.fluid_P[LF2] =  IF[5] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LF2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LF2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LF2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LF2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[196] = _div( (unkR[158] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[120] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[196] = _div( (unkR[158] * unkR[66] + unkR[120] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-182]  Comb_Chamb.fluid_P[RP_1] =  IF[6] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[RP_1] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[RP_1] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[RP_1] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[197] = _div( (unkR[159] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[121] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[197] = _div( (unkR[159] * unkR[66] + unkR[121] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-183]  Comb_Chamb.fluid_P[LCH4] =  IF[7] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LCH4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LCH4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LCH4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[198] = _div( (unkR[160] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[122] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[198] = _div( (unkR[160] * unkR[66] + unkR[122] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-184]  Comb_Chamb.fluid_P[LH2] =  IF[8] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LH2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LH2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LH2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LH2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[199] = _div( (unkR[161] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[123] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[199] = _div( (unkR[161] * unkR[66] + unkR[123] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-185]  Comb_Chamb.fluid_P[N2H4] =  IF[9] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[N2H4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2H4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2H4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[200] = _div( (unkR[162] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[124] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[200] = _div( (unkR[162] * unkR[66] + unkR[124] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-186]  Comb_Chamb.fluid_P[UDMH] =  IF[10] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[UDMH] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[UDMH] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[UDMH] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[201] = _div( (unkR[163] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[125] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[201] = _div( (unkR[163] * unkR[66] + unkR[125] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-187]  Comb_Chamb.fluid_P[MMH] =  IF[11] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[MMH] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[MMH] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[202] = _div( (unkR[164] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[126] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[202] = _div( (unkR[164] * unkR[66] + unkR[126] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-188]  Comb_Chamb.fluid_P[JP_10] =  IF[12] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[JP_10] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[JP_10] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[JP_10] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[203] = _div( (unkR[165] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[127] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[203] = _div( (unkR[165] * unkR[66] + unkR[127] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-189]  Comb_Chamb.fluid_P[Kerox] =  IF[13] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Kerox] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Kerox] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Kerox] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[204] = _div( (unkR[166] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[128] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[204] = _div( (unkR[166] * unkR[66] + unkR[128] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-190]  Comb_Chamb.fluid_P[Oil] =  IF[14] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Oil] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Oil] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Oil] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Oil] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[205] = _div( (unkR[167] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[129] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[205] = _div( (unkR[167] * unkR[66] + unkR[129] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-191]  Comb_Chamb.fluid_P[H2O] =  IF[15] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[206] = _div( (unkR[168] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[130] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[206] = _div( (unkR[168] * unkR[66] + unkR[130] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-192]  Comb_Chamb.fluid_P[IPA] =  IF[16] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[IPA] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[IPA] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[IPA] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[IPA] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[207] = _div( (unkR[169] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[131] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[207] = _div( (unkR[169] * unkR[66] + unkR[131] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-193]  Comb_Chamb.fluid_P[Air] =  IF[17] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Air] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Air] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Air] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Air] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[208] = _div( (unkR[170] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[132] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[208] = _div( (unkR[170] * unkR[66] + unkR[132] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-194]  Comb_Chamb.fluid_P[Ar] =  IF[18] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Ar] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Ar] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Ar] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Ar] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[209] = _div( (unkR[171] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[133] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[209] = _div( (unkR[171] * unkR[66] + unkR[133] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-195]  Comb_Chamb.fluid_P[CH4] =  IF[19] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CH4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CH4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CH4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CH4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[210] = _div( (unkR[172] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[134] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[210] = _div( (unkR[172] * unkR[66] + unkR[134] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-196]  Comb_Chamb.fluid_P[CO] =  IF[20] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CO] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CO] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[211] = _div( (unkR[173] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[135] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[211] = _div( (unkR[173] * unkR[66] + unkR[135] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-197]  Comb_Chamb.fluid_P[CO2] =  IF[21] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CO2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CO2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[212] = _div( (unkR[174] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[136] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[212] = _div( (unkR[174] * unkR[66] + unkR[136] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-198]  Comb_Chamb.fluid_P[H2] =  IF[22] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[213] = _div( (unkR[175] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[137] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[213] = _div( (unkR[175] * unkR[66] + unkR[137] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-199]  Comb_Chamb.fluid_P[He] =  IF[23] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[He] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[He] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[He] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[He] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[214] = _div( (unkR[176] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[138] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[214] = _div( (unkR[176] * unkR[66] + unkR[138] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-200]  Comb_Chamb.fluid_P[N2] =  IF[24] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[N2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[N2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[215] = _div( (unkR[177] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[139] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[215] = _div( (unkR[177] * unkR[66] + unkR[139] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-201]  Comb_Chamb.fluid_P[O2] =  IF[25] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[O2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[O2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[O2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[O2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[216] = _div( (unkR[178] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[140] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[216] = _div( (unkR[178] * unkR[66] + unkR[140] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-202]  Comb_Chamb.fluid_P[MMH_vapour] =  IF[26] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[MMH_vapour] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH_vapour] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH_vapour] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[217] = _div( (unkR[179] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[141] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[217] = _div( (unkR[179] * unkR[66] + unkR[141] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-203]  Comb_Chamb.fluid_P[NH3] =  IF[27] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[NH3] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NH3] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[NH3] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NH3] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[194] = _div( (unkR[156] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[118] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[194] = _div( (unkR[156] * unkR[66] + unkR[118] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-204]  Comb_Chamb.fluid_P[H2O_vapour] =  IF[28] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O_vapour] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O_vapour] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O_vapour] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[218] = _div( (unkR[180] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[142] * MATH__max(dyn[2] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[218] = _div( (unkR[180] * unkR[66] + unkR[142] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-205]  Comb_Chamb.fluid_P[Comb_prod] =  IF[29] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Comb_prod] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Comb_prod] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st + (1 - MATH.max(1 - Comb_Chamb.phi, 0)) * (Comb_Chamb.W_O + Comb_Chamb.W_F_st)) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[219] = _div( (unkR[181] * MATH__max(1. - dyn[2], 0.) * unkR[66] + unkR[143] * MATH__max(dyn[2] - 1., 0.) * unkR[63] + (1. - MATH__max(1. - dyn[2], 0.)) * (unkR[66] + unkR[63])) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[219] = 0. ;
}
//[E-206]  LPRES.Vaporisation_mix(Comb_Chamb.fluid_P, Comb_Chamb.fluid_P_vap) %%% (OUT VAR)Comb_Chamb.fluid_P_vap 
LPRES__Vaporisation_mix(&unkR[191], &unkR[235]);
//[E-207]  LPRES.Decomposition_fun(Comb_Chamb.fluid_P_vap, Comb_Chamb.fluid_P_decomp) %%% (OUT VAR)Comb_Chamb.fluid_P_decomp 
LPRES__Decomposition_fun(&unkR[235], &unkR[229]);
//[E-208]  ThrustMonitor_1.g.fluid[LOX] = Comb_Chamb.fluid_P_vap[LOX] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[275] = _div( unkR[235] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-209]  ThrustMonitor_1.g.fluid[NTO] = Comb_Chamb.fluid_P_vap[NTO] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[276] = _div( unkR[236] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-210]  ThrustMonitor_1.g.fluid[H2O2] = Comb_Chamb.fluid_P_vap[H2O2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[277] = _div( unkR[237] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-211]  ThrustMonitor_1.g.fluid[NH3] = Comb_Chamb.fluid_P_vap[NH3] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[278] = _div( unkR[238] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-212]  ThrustMonitor_1.g.fluid[HNO3] = Comb_Chamb.fluid_P_vap[HNO3] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[279] = _div( unkR[239] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-213]  ThrustMonitor_1.g.fluid[LF2] = Comb_Chamb.fluid_P_vap[LF2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[280] = _div( unkR[240] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-214]  ThrustMonitor_1.g.fluid[RP_1] = Comb_Chamb.fluid_P_vap[RP_1] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[281] = _div( unkR[241] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-215]  ThrustMonitor_1.g.fluid[LCH4] = Comb_Chamb.fluid_P_vap[LCH4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[282] = _div( unkR[242] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-216]  ThrustMonitor_1.g.fluid[LH2] = Comb_Chamb.fluid_P_vap[LH2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[283] = _div( unkR[243] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-217]  ThrustMonitor_1.g.fluid[N2H4] = Comb_Chamb.fluid_P_vap[N2H4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[284] = _div( unkR[244] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-218]  ThrustMonitor_1.g.fluid[UDMH] = Comb_Chamb.fluid_P_vap[UDMH] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[285] = _div( unkR[245] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-219]  ThrustMonitor_1.g.fluid[MMH] = Comb_Chamb.fluid_P_vap[MMH] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[286] = _div( unkR[246] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-220]  ThrustMonitor_1.g.fluid[JP_10] = Comb_Chamb.fluid_P_vap[JP_10] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[287] = _div( unkR[247] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-221]  ThrustMonitor_1.g.fluid[Kerox] = Comb_Chamb.fluid_P_vap[Kerox] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[288] = _div( unkR[248] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-222]  ThrustMonitor_1.g.fluid[Oil] = Comb_Chamb.fluid_P_vap[Oil] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[289] = _div( unkR[249] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-223]  ThrustMonitor_1.g.fluid[H2O] = Comb_Chamb.fluid_P_vap[H2O] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[290] = _div( unkR[250] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-224]  ThrustMonitor_1.g.fluid[IPA] = Comb_Chamb.fluid_P_vap[IPA] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[291] = _div( unkR[251] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-225]  ThrustMonitor_1.g.fluid[Air] = Comb_Chamb.fluid_P_vap[Air] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[292] = _div( unkR[252] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-226]  ThrustMonitor_1.g.fluid[Ar] = Comb_Chamb.fluid_P_vap[Ar] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[293] = _div( unkR[253] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-227]  ThrustMonitor_1.g.fluid[CH4] = Comb_Chamb.fluid_P_vap[CH4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[294] = _div( unkR[254] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-228]  ThrustMonitor_1.g.fluid[CO] = Comb_Chamb.fluid_P_vap[CO] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[295] = _div( unkR[255] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-229]  ThrustMonitor_1.g.fluid[CO2] = Comb_Chamb.fluid_P_vap[CO2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[296] = _div( unkR[256] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-230]  ThrustMonitor_1.g.fluid[H2] = Comb_Chamb.fluid_P_vap[H2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[297] = _div( unkR[257] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-231]  ThrustMonitor_1.g.fluid[He] = Comb_Chamb.fluid_P_vap[He] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[298] = _div( unkR[258] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-232]  ThrustMonitor_1.g.fluid[N2] = Comb_Chamb.fluid_P_vap[N2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[299] = _div( unkR[259] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-233]  ThrustMonitor_1.g.fluid[O2] = Comb_Chamb.fluid_P_vap[O2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[300] = _div( unkR[260] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-234]  ThrustMonitor_1.g.fluid[MMH_vapour] = Comb_Chamb.fluid_P_vap[MMH_vapour] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[301] = _div( unkR[261] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-235]  ThrustMonitor_1.g.fluid[H2O_vapour] = Comb_Chamb.fluid_P_vap[H2O_vapour] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[302] = _div( unkR[262] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-236]  ThrustMonitor_1.g.fluid[Comb_prod] = (Comb_Chamb.fluid_P_vap[Comb_prod] * (Comb_Chamb.W_O + Comb_Chamb.W_F) + Comb_Chamb.W_IO + Comb_Chamb.W_IF) / ThrustMonitor_1.g.W
unkR[303] = _div( (unkR[263] * (unkR[66] + dyn[1]) + unkR[65] + unkR[64]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-237]  ThrustMonitor_1.g.fluid[Comb_prod_M] = Comb_Chamb.fluid_P_vap[Comb_prod_M]
unkR[304] = unkR[264] ;
//[E-238]  ThrustMonitor_1.g.fluid[Comb_prod_cp] = Comb_Chamb.fluid_P_vap[Comb_prod_cp]
unkR[305] = unkR[265] ;
//[E-239]  ThrustMonitor_1.g.fluid[Comb_prod_c] = Comb_Chamb.fluid_P_vap[Comb_prod_c]
unkR[306] = unkR[266] ;
//[E-240]  ThrustMonitor_1.g.fluid[Comb_prod_cp_g] = Comb_Chamb.fluid_P_vap[Comb_prod_cp_g]
unkR[307] = unkR[267] ;
//[E-241]  ThrustMonitor_1.g.fluid[Comb_prod_Lv] = Comb_Chamb.fluid_P_vap[Comb_prod_Lv]
unkR[308] = unkR[268] ;
//[E-242]  ThrustMonitor_1.g.fluid[Comb_prod_visc] = Comb_Chamb.fluid_P_vap[Comb_prod_visc]
unkR[309] = unkR[269] ;
//[E-243]  ThrustMonitor_1.g.fluid[Comb_prod_cond] = Comb_Chamb.fluid_P_vap[Comb_prod_cond]
unkR[310] = unkR[270] ;
//[E-244]  ThrustMonitor_1.g.fluid[Comb_prod_T_boil] = Comb_Chamb.fluid_P_vap[Comb_prod_T_boil]
unkR[311] = unkR[271] ;
//[E-245]  ThrustMonitor_1.g.fluid[Comb_prod_rho] = Comb_Chamb.fluid_P_vap[Comb_prod_rho]
unkR[312] = unkR[272] ;
//[E-246]  Comb_Chamb.Pr_r = 4 * LPRES.gamma(ThrustMonitor_1.g.fluid) / (9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5)
unkR[56] = _div( 4. * LPRES__gamma(&unkR[275]) , (9. * LPRES__gamma(&unkR[275]) - 5.),"9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5") ;
//[E-247]  Comb_Chamb.AR_r = 1 / Comb_Chamb.M_r * LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,unkR[47],_div( _div( 1 , dyn[0],"Comb_Chamb.M_r") * LPRES__FGAMMA(&unkR[275]) , _sqrt(LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[275]) - 1) * _pow( dyn[0] , 2,"(Comb_Chamb.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[275]) + 1) , (2 * (LPRES__gamma(&unkR[275]) - 1)),"2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))" ));
//[E-248]  Pump_FUEL_LH2.dp = -(Pump_FUEL_LH2.tau_id * LPRES.rho(Inlet_LH2.fluidV))
unkR[524] = -(dyn[3] * LPRES__rho(&unkR[5])) ;
//[E-249]  FlowMeter_LH2.f_in.pt = Inlet_LH2.pt + Pump_FUEL_LH2.dp
unkR[335] = unkR[495] + unkR[524] ;
//[E-250]  CCV.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[43] = unkR[335] * unkR[548] ;
//[E-251]  MFV.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[502] = unkR[335] * unkR[548] ;
//[E-252]  Injector_FUEL.f_in.pt = MFV.f_in.pt - 0.5 * Comb_Chamb.f_F.W ** 2 / (MFV.rho_f * MFV.A ** 2)
unkR[482] = unkR[502] - _div( 0.5 * _pow( unkR[73] , 2.,"(Comb_Chamb.f_F.W)**(2)" ) , (unkR[503] * _pow( unkR[499] , 2.,"(MFV.A)**(2)" )),"MFV.rho_f * MFV.A ** 2") ;
//[E-253]  Comb_Chamb.f_O.p_c = Injector_FUEL.f_in.pt - (Comb_Chamb.f_F.W / (Injector_FUEL.A * Injector_FUEL.C_D)) ** 2 / (2 * LPRES.rho(Inlet_LH2.fluidV))
unkR[74] = unkR[482] - _div( _pow( (_div( unkR[73] , (unkR[475] * unkR[477]),"Injector_FUEL.A * Injector_FUEL.C_D")) , 2.,"(Comb_Chamb.f_F.W / (Injector_FUEL.A * Injector_FUEL.C_D))**(2)" ) , (2. * LPRES__rho(&unkR[5])),"2 * LPRES.rho(Inlet_LH2.fluidV)") ;
//[E-254]  FlowMeter_LOX.f_in.pt = (FlowMeter_LOX.f_in.W / (Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)) ** 2 / (2 * LPRES.rho(Inlet_LOX.fluidV)) + Comb_Chamb.f_O.p_c
unkR[337] = _div( _pow( (_div( unkR[76] , (unkR[485] * unkR[487]),"Injector_OXIDIZER.A * Injector_OXIDIZER.C_D")) , 2.,"(FlowMeter_LOX.f_in.W / (Injector_OXIDIZER.A * Injector_OXIDIZER.C_D))**(2)" ) , (2. * LPRES__rho(&unkR[77])),"2 * LPRES.rho(Inlet_LOX.fluidV)") + unkR[74] ;
//[E-255]  MOV.f_in.pt = FlowMeter_LOX.f_in.pt + 0.5 * FlowMeter_LOX.f_in.W ** 2 / (MOV.rho_f * MOV.A ** 2)
unkR[507] = unkR[337] + _div( 0.5 * _pow( unkR[76] , 2.,"(FlowMeter_LOX.f_in.W)**(2)" ) , (unkR[508] * _pow( unkR[504] , 2.,"(MOV.A)**(2)" )),"MOV.rho_f * MOV.A ** 2") ;
//[E-256]  MOV.dp = MOV.f_in.pt - FlowMeter_LOX.f_in.pt
unkR[506] = unkR[507] - unkR[337] ;
//[E-257]  Pump_LOX_OXIDIZER.dp = FlowMeter_LOX.f_in.pt + MOV.dp - Inlet_LOX.pt
unkR[536] = unkR[337] + unkR[506] - unkR[497] ;
//[E-258]  Pump_LOX_OXIDIZER.tau_id = -Pump_LOX_OXIDIZER.dp / LPRES.rho(Inlet_LOX.fluidV)
unkR[547] = _div( -unkR[536] , LPRES__rho(&unkR[77]),"LPRES.rho(Inlet_LOX.fluidV)") ;
//[E-259]  Pump_LOX_OXIDIZER.tau = Pump_LOX_OXIDIZER.tau_id / Pump_LOX_OXIDIZER.eta_d
unkR[546] = _div( unkR[547] , unkR[537],"Pump_LOX_OXIDIZER.eta_d") ;
//[E-260]  Pump_LOX_OXIDIZER.m.Power = FlowMeter_LOX.f_in.W * Pump_LOX_OXIDIZER.tau
unkR[539] = unkR[76] * unkR[546] ;
//[E-261]  Turbine_OXIDIZER.m.Power = -Pump_LOX_OXIDIZER.m.Power
unkR[569] = -unkR[539] ;
//[E-262]  CCV.f_in.W = Turbine_OXIDIZER.m.Power / Turbine_OXIDIZER.tau
unkR[4] = _div( unkR[569] , dyn[4],"Turbine_OXIDIZER.tau") ;
//[E-263]  FlowMeter_LH2.f_in.W = CCV.f_in.W + Comb_Chamb.W_F + Comb_Chamb.W_IF
unkR[334] = unkR[4] + dyn[1] + unkR[64] ;
//[E-264]  Heat_exchanger_1.v = CCV.f_in.W / (Heat_exchanger_1.a * Heat_exchanger_1.b * LPRES.rho(Inlet_LH2.fluidV)) / Heat_exchanger_1.N
unkR[473] = _div( _div( unkR[4] , (unkR[377] * unkR[378] * LPRES__rho(&unkR[5])),"Heat_exchanger_1.a * Heat_exchanger_1.b * LPRES.rho(Inlet_LH2.fluidV)") , unkI[2],"Heat_exchanger_1.N") ;
//[E-265]  Heat_exchanger_1.f_in.pt = CCV.f_in.pt - 0.5 * CCV.f_in.W ** 2 / (CCV.rho_f * CCV.A ** 2)
unkR[44] = unkR[43] - _div( 0.5 * _pow( unkR[4] , 2.,"(CCV.f_in.W)**(2)" ) , (unkR[45] * _pow( unkR[0] , 2.,"(CCV.A)**(2)" )),"CCV.rho_f * CCV.A ** 2") ;
//[E-266]  Turbine_FUEL.f_in.pt = Heat_exchanger_1.f_in.pt - Heat_exchanger_1.dp
unkR[421] = unkR[44] - unkR[380] ;
//[E-267]  Turbine_FUEL.f_in.Tt = (Turbine_FUEL.MFP * Turbine_FUEL.f_in.pt / CCV.f_in.W) ** 2
unkR[382] = _pow( (_div( unkR[554] * unkR[421] , unkR[4],"CCV.f_in.W")) , 2.,"(Turbine_FUEL.MFP * Turbine_FUEL.f_in.pt / CCV.f_in.W)**(2)" ) ;
//[E-268]  Heat_exchanger_1.Re = Turbine_FUEL.f_in.pt / (LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt) * Heat_exchanger_1.v * Heat_exchanger_1.D_hy / LPRES.visc(Turbine_FUEL.f_in.fluid) + LPRES.rho(Inlet_LH2.fluidV) * Heat_exchanger_1.v * Heat_exchanger_1.D_hy / LPRES.visc(Inlet_LH2.fluidV)
unkR[365] = _div( _div( unkR[421] , (LPRES__R(&unkR[383]) * unkR[382]),"LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt") * unkR[473] * unkR[350] , LPRES__visc(&unkR[383]),"LPRES.visc(Turbine_FUEL.f_in.fluid)") + _div( LPRES__rho(&unkR[5]) * unkR[473] * unkR[350] , LPRES__visc(&unkR[5]),"LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-269]  Heat_exchanger_1.Nu = 0.027 * Heat_exchanger_1.Re ** 0.8 * Heat_exchanger_1.Pr ** 0.33
unkR[362] = 0.027 * _pow( unkR[365] , 0.8,"(Heat_exchanger_1.Re)**(0.8)" ) * _pow( unkR[364] , 0.33,"(Heat_exchanger_1.Pr)**(0.33)" ) ;
//[E-270]  Heat_exchanger_1.h_l = Heat_exchanger_1.Nu * LPRES.cond(Inlet_LH2.fluidV) / Heat_exchanger_1.D_hy
unkR[460] = _div( unkR[362] * LPRES__cond(&unkR[5]) , unkR[350],"Heat_exchanger_1.D_hy") ;
//[E-271]  FlowMeter_LOX.f_in.Tt = (Pump_LOX_OXIDIZER.tau_id - Pump_LOX_OXIDIZER.tau) / LPRES.cp(Inlet_LOX.fluidV) + Inlet_LOX.Tt
unkR[75] = _div( (unkR[547] - unkR[546]) , LPRES__cp(&unkR[77]),"LPRES.cp(Inlet_LOX.fluidV)") + unkR[496] ;
//[E-272]  ThrustMonitor_1.g.Tt = (Comb_Chamb.f_O.p_c * Comb_Chamb.A_th * LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ThrustMonitor_1.g.W) ** 2 / LPRES.R(ThrustMonitor_1.g.fluid)
unkR[273] = _div( _pow( (_div( unkR[74] * unkR[50] * LPRES__FGAMMA(&unkR[275]) , unkR[274],"ThrustMonitor_1.g.W")) , 2.,"(Comb_Chamb.f_O.p_c * Comb_Chamb.A_th * LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ThrustMonitor_1.g.W)**(2)" ) , LPRES__R(&unkR[275]),"LPRES.R(ThrustMonitor_1.g.fluid)") ;
//[E-273]  ThrustMonitor_1.g.c_star = sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid)
unkR[68] = _div( _sqrt(LPRES__R(&unkR[275]) * unkR[273],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[275]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") ;
//[E-274]  Comb_Chamb.T_aw = ThrustMonitor_1.g.Tt * (1 + Comb_Chamb.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)
unkR[59] = unkR[273] * _div( (1. + _pow( unkR[56] , 0.33,"(Comb_Chamb.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[275]) - 1.) * _pow( dyn[0] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[275]) - 1.) * _pow( dyn[0] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2") ;
//[E-275]  Comb_Chamb.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor_1.g.fluid) ** 0.5 * Comb_Chamb.T_aw ** 0.6
unkR[318] = 1.184e-07 * _pow( LPRES__M(&unkR[275]) , 0.5,"(LPRES.M(ThrustMonitor_1.g.fluid))**(0.5)" ) * _pow( unkR[59] , 0.6,"(Comb_Chamb.T_aw)**(0.6)" ) ;
//[E-276]  Comb_Chamb.h_g = 0.026 / sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2 * Comb_Chamb.visc_r ** 0.2 * LPRES.cp(ThrustMonitor_1.g.fluid) / Comb_Chamb.Pr_r ** 0.6 * (Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star) ** 0.8 * (Comb_Chamb.A_th / Comb_Chamb.A_r) ** 0.9
unkR[315] = _div( 0.026 , _pow( _sqrt(4. * unkR[50]/3.14159265358979,"4 * Comb_Chamb.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * Comb_Chamb.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[318] , 0.2,"(Comb_Chamb.visc_r)**(0.2)" ) * LPRES__cp(&unkR[275]) , _pow( unkR[56] , 0.6,"(Comb_Chamb.Pr_r)**(0.6)" ),"Comb_Chamb.Pr_r ** 0.6") * _pow( (_div( unkR[74] , unkR[68],"ThrustMonitor_1.g.c_star")) , 0.8,"(Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star)**(0.8)" ) * _pow( (_div( unkR[50] , unkR[49],"Comb_Chamb.A_r")) , 0.9,"(Comb_Chamb.A_th / Comb_Chamb.A_r)**(0.9)" ) ;
//[E-277]  Pump_FUEL_LH2.tau = Pump_FUEL_LH2.tau_id / Pump_FUEL_LH2.eta_d
unkR[534] = _div( dyn[3] , unkR[525],"Pump_FUEL_LH2.eta_d") ;
//[E-278]  Pump_FUEL_LH2.m.Power = FlowMeter_LH2.f_in.W * Pump_FUEL_LH2.tau
unkR[527] = unkR[334] * unkR[534] ;
//[E-279]  Turbine_FUEL.m.Power = -Pump_FUEL_LH2.m.Power
unkR[560] = -unkR[527] ;
//[E-280]  Turbine_FUEL.tau = Turbine_FUEL.m.Power / CCV.f_in.W
unkR[562] = _div( unkR[560] , unkR[4],"CCV.f_in.W") ;
//[E-281]  Turbine_OXIDIZER.f_in.Tt = Turbine_FUEL.f_in.Tt - Turbine_FUEL.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[558] = unkR[382] - _div( unkR[562] , LPRES__cp(&unkR[383]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-282]  Turbine_FUEL.alpha = Turbine_OXIDIZER.f_in.Tt / Turbine_FUEL.f_in.Tt
unkR[555] = _div( unkR[558] , unkR[382],"Turbine_FUEL.f_in.Tt") ;
//[E-283]  Turbine_FUEL.beta = (1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[556] = _pow( (1. - _div( (1. - unkR[555]) , unkR[557],"Turbine_FUEL.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[383]) - 1.) , LPRES__gamma(&unkR[383]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-284]  Turbine_OXIDIZER.f_in.pt = Turbine_FUEL.beta * Turbine_FUEL.f_in.pt
unkR[559] = unkR[556] * unkR[421] ;
//[E-285]  Turbine_OXIDIZER.MFP = CCV.f_in.W * sqrt(Turbine_OXIDIZER.f_in.Tt) / Turbine_OXIDIZER.f_in.pt
res[1] = evalNormResidueInternal(1,unkR[565],_div( unkR[4] * _sqrt(unkR[558],"Turbine_OXIDIZER.f_in.Tt") , unkR[559],"Turbine_OXIDIZER.f_in.pt"));
//[E-286]  Nozzle_1.g.Tt = Turbine_OXIDIZER.f_in.Tt - Turbine_OXIDIZER.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[516] = unkR[558] - _div( dyn[4] , LPRES__cp(&unkR[383]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-287]  Turbine_OXIDIZER.alpha = Nozzle_1.g.Tt / Turbine_OXIDIZER.f_in.Tt
unkR[566] = _div( unkR[516] , unkR[558],"Turbine_OXIDIZER.f_in.Tt") ;
//[E-288]  Turbine_OXIDIZER.beta = (1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[567] = _pow( (1. - _div( (1. - unkR[566]) , unkR[568],"Turbine_OXIDIZER.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[383]) - 1.) , LPRES__gamma(&unkR[383]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-289]  Nozzle_1.g.pt = Turbine_OXIDIZER.beta * Turbine_OXIDIZER.f_in.pt
unkR[517] = unkR[567] * unkR[559] ;
//[E-290]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[512] = _div( unkR[517] , unkR[519],"Nozzle_1.p_amb") ;
//[E-291]  Nozzle_1.M_out =  ZONE[3] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))	  OTHERS 1
 if(m_branchZone[2]==0)
	unkR[511] = _sqrt(_div( 2. * (_pow( unkR[512] , (_div( (LPRES__gamma(&unkR[383]) - 1.) , LPRES__gamma(&unkR[383]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[383]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)") ;
else unkR[511] = 1. ;
//[E-292]  Nozzle_1.A_sl =  ZONE[2] (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))	  OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
 if(m_branchZone[1]==0)
	unkR[510] = _div( unkR[509] * unkR[511] , _pow( (_div( (2. + (LPRES__gamma(&unkR[383]) - 1.) * _pow( unkR[511] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[383]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[383]) + 1.) , (2. * (LPRES__gamma(&unkR[383]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))") ;
else unkR[510] = _div( unkR[509] * -unkR[511] , _pow( (_div( (2. + (LPRES__gamma(&unkR[383]) - 1.) * _pow( unkR[511] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[383]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[383]) + 1.) , (2. * (LPRES__gamma(&unkR[383]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))") ;
//[E-293]  CCV.f_in.W = Nozzle_1.A_sl * LPRES.FGAMMA(Turbine_FUEL.f_in.fluid) * Nozzle_1.g.pt / sqrt(Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid))
res[2] = evalNormResidueInternal(2,unkR[4],_div( unkR[510] * LPRES__FGAMMA(&unkR[383]) * unkR[517] , _sqrt(unkR[516] * LPRES__R(&unkR[383]),"Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid)"),"sqrt(Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid))"));
//[E-294]  Comb_Chamb.f_F.T = (Pump_FUEL_LH2.tau_id - Pump_FUEL_LH2.tau) / LPRES.cp(Inlet_LH2.fluidV) + Inlet_LH2.Tt
unkR[3] = _div( (dyn[3] - unkR[534]) , LPRES__cp(&unkR[5]),"LPRES.cp(Inlet_LH2.fluidV)") + unkR[494] ;
//[E-295]  Comb_Chamb.T_in = (LPRES.cp(Comb_Chamb.fluid_O) * FlowMeter_LOX.f_in.Tt + Comb_Chamb.phi / Comb_Chamb.OF_st * LPRES.cp(Comb_Chamb.fluid_F) * Comb_Chamb.f_F.T) / ((1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R)
unkR[62] = _div( (LPRES__cp(&unkR[153]) * unkR[75] + _div( dyn[2] , unkR[55],"Comb_Chamb.OF_st") * LPRES__cp(&unkR[115]) * unkR[3]) , ((1. + _div( dyn[2] , unkR[55],"Comb_Chamb.OF_st")) * unkR[71]),"(1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R") ;
//[E-296]  Comb_Chamb.T_c = (Comb_Chamb.eta_d * Comb_Chamb.Q_comb_effective / ((1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)) + Comb_Chamb.cp_R * (Comb_Chamb.T_in - 298.15)) / LPRES.cp(Comb_Chamb.fluid_P_vap) + 298.15
unkR[61] = _div( (_div( unkR[72] * unkR[58] , (_div( (1. + unkR[54]) , MATH__min(unkR[54], unkR[55]),"MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)")),"(1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)") + unkR[71] * (unkR[62] - 298.15)) , LPRES__cp(&unkR[235]),"LPRES.cp(Comb_Chamb.fluid_P_vap)") + 298.15 ;
//[E-297]  (Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] * (ThrustMonitor_1.g.Tt - Comb_Chamb.T_c) + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] * (ThrustMonitor_1.g.Tt - FlowMeter_LOX.f_in.Tt) + Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp] * (ThrustMonitor_1.g.Tt - Comb_Chamb.f_F.T) = 0
res[3] = evalNormResidueInternal(3,_div( (unkR[66] + dyn[1]) * unkR[229] , unkR[274],"ThrustMonitor_1.g.W") * unkR[230] * (unkR[273] - unkR[61]) + _div( unkR[65] , unkR[274],"ThrustMonitor_1.g.W") * unkR[107] * (unkR[273] - unkR[75]) + _div( unkR[64] , unkR[274],"ThrustMonitor_1.g.W") * unkR[35] * (unkR[273] - unkR[3]),0);
//[E-298]  Heat_exchanger_1.T_av = (Comb_Chamb.f_F.T + Turbine_FUEL.f_in.Tt) / 2
unkR[366] = (unkR[3] + unkR[382])/2. ;
//[E-299]  Heat_exchanger_1.h.Q = CCV.f_in.W * (Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[01] * (Heat_exchanger_1.T_boil_v[01] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[02] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[01]) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Lv_v[01] + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[03] * (Heat_exchanger_1.T_boil_v[03] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[04] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[03]) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Lv_v[03] + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[05] * (Heat_exchanger_1.T_boil_v[05] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[06] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[05]) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Lv_v[05] + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[07] * (Heat_exchanger_1.T_boil_v[07] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[08] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[07]) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Lv_v[07] + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[09] * (Heat_exchanger_1.T_boil_v[09] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[10] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[09]) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Lv_v[09])
unkR[313] = unkR[4] * (unkR[461] * unkR[339] * (unkR[367] - unkR[3]) + unkR[461] * unkR[340] * (unkR[382] - unkR[367]) + unkR[461] * unkR[352] + unkR[463] * unkR[341] * (unkR[369] - unkR[3]) + unkR[463] * unkR[342] * (unkR[382] - unkR[369]) + unkR[463] * unkR[354] + unkR[465] * unkR[343] * (unkR[371] - unkR[3]) + unkR[465] * unkR[344] * (unkR[382] - unkR[371]) + unkR[465] * unkR[356] + unkR[467] * unkR[345] * (unkR[373] - unkR[3]) + unkR[467] * unkR[346] * (unkR[382] - unkR[373]) + unkR[467] * unkR[358] + unkR[469] * unkR[347] * (unkR[375] - unkR[3]) + unkR[469] * unkR[348] * (unkR[382] - unkR[375]) + unkR[469] * unkR[360]) ;
//[E-300]  Comb_Chamb.h.T = Comb_Chamb.T_aw - Heat_exchanger_1.h.Q / Comb_Chamb.A_wet / Comb_Chamb.h_g
unkR[314] = unkR[59] - _div( _div( unkR[313] , unkR[51],"Comb_Chamb.A_wet") , unkR[315],"Comb_Chamb.h_g") ;
//[E-301]  Heat_exchanger_1.h.T = Heat_exchanger_1.h.Q / Heat_exchanger_1.h.A / Heat_exchanger_1.h_l + Heat_exchanger_1.T_av
unkR[324] = _div( _div( unkR[313] , unkR[323],"Heat_exchanger_1.h.A") , unkR[460],"Heat_exchanger_1.h_l") + unkR[366] ;
//[E-302]  Contact_Wall_1.Q = Contact_Wall_1.k_w / Contact_Wall_1.t_w * (Heat_exchanger_1.h.T - Comb_Chamb.h.T) * Contact_Wall_1.A_wet
unkR[322] = _div( unkR[325] , unkR[326],"Contact_Wall_1.t_w") * (unkR[324] - unkR[314]) * unkR[321] ;
//[E-303]  Contact_Wall_1.Q = -Heat_exchanger_1.h.Q
res[4] = evalNormResidueInternal(4,unkR[322],-unkR[313]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[5];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-304]  Pump_FUEL_LH2.phi = FlowMeter_LH2.f_in.W / LPRES.rho(Inlet_LH2.fluidV) / Pump_FUEL_LH2.U / Pump_FUEL_LH2.A_in
unkR[528] = _div( _div( _div( unkR[334] , LPRES__rho(&unkR[5]),"LPRES.rho(Inlet_LH2.fluidV)") , dyn[5],"Pump_FUEL_LH2.U") , unkR[523],"Pump_FUEL_LH2.A_in") ;
//[E-305]  Pump_FUEL_LH2.psi = (Pump_FUEL_LH2.psi_d - 1) / Pump_FUEL_LH2.phi_d * Pump_FUEL_LH2.phi + 1
unkR[530] = _div( (unkR[531] - 1.) , unkR[529],"Pump_FUEL_LH2.phi_d") * unkR[528] + 1. ;
//[E-306]  Pump_FUEL_LH2.psi = -Pump_FUEL_LH2.tau / Pump_FUEL_LH2.U ** 2
res[5] = evalNormResidueInternal(5,unkR[530],_div( -unkR[534] , _pow( dyn[5] , 2,"(Pump_FUEL_LH2.U)**(2)" ),"Pump_FUEL_LH2.U ** 2"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-311]  Pump_LOX_OXIDIZER.phi = FlowMeter_LOX.f_in.W / LPRES.rho(Inlet_LOX.fluidV) / Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.A_in
unkR[540] = _div( _div( _div( unkR[76] , LPRES__rho(&unkR[77]),"LPRES.rho(Inlet_LOX.fluidV)") , dyn[6],"Pump_LOX_OXIDIZER.U") , unkR[535],"Pump_LOX_OXIDIZER.A_in") ;
//[E-312]  Pump_LOX_OXIDIZER.psi = (Pump_LOX_OXIDIZER.psi_d - 1) / Pump_LOX_OXIDIZER.phi_d * Pump_LOX_OXIDIZER.phi + 1
unkR[542] = _div( (unkR[543] - 1.) , unkR[541],"Pump_LOX_OXIDIZER.phi_d") * unkR[540] + 1. ;
//[E-313]  Pump_LOX_OXIDIZER.psi = -Pump_LOX_OXIDIZER.tau / Pump_LOX_OXIDIZER.U ** 2
res[6] = evalNormResidueInternal(6,unkR[542],_div( -unkR[546] , _pow( dyn[6] , 2,"(Pump_LOX_OXIDIZER.U)**(2)" ),"Pump_LOX_OXIDIZER.U ** 2"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fcn3(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-335]  ThrustMonitor_1.g.A_out / Comb_Chamb.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[48] , unkR[50],"Comb_Chamb.A_th"),_div( LPRES__FGAMMA(&unkR[275]) , (_pow( (_div( dyn[7] , unkR[74],"Comb_Chamb.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[275]) * (1. - _pow( (_div( dyn[7] , unkR[74],"Comb_Chamb.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[275]) - 1.) , LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[275]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fcn4(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-345]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / ThrustMonitor_1.g.A_out / Comb_Chamb.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[274] * _sqrt(LPRES__R(&unkR[275]) * unkR[273],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , unkR[48],"ThrustMonitor_1.g.A_out") , unkR[74],"Comb_Chamb.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[275]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[275]) + 1)/2 , (LPRES__gamma(&unkR[275]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fcn5(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Turbine_FUEL.f_in.fluid[LOX] = 0
unkR[383] = 0. ;
//[E-2]  Heat_exchanger_1.fluid_out[NTO] = Inlet_LH2.fluidV[NTO]
unkR[423] = unkR[6] ;
//[E-3]  Turbine_FUEL.f_in.fluid[NTO] = Heat_exchanger_1.fluid_out[NTO]
unkR[384] = unkR[423] ;
//[E-4]  Heat_exchanger_1.fluid_out[H2O2] = Inlet_LH2.fluidV[H2O2]
unkR[424] = unkR[7] ;
//[E-5]  Turbine_FUEL.f_in.fluid[H2O2] = Heat_exchanger_1.fluid_out[H2O2]
unkR[385] = unkR[424] ;
//[E-6]  Heat_exchanger_1.fluid_out[NH3] = Inlet_LH2.fluidV[NH3]
unkR[425] = unkR[8] ;
//[E-7]  Turbine_FUEL.f_in.fluid[NH3] = Heat_exchanger_1.fluid_out[NH3]
unkR[386] = unkR[425] ;
//[E-8]  Heat_exchanger_1.fluid_out[HNO3] = Inlet_LH2.fluidV[HNO3]
unkR[426] = unkR[9] ;
//[E-9]  Turbine_FUEL.f_in.fluid[HNO3] = Heat_exchanger_1.fluid_out[HNO3]
unkR[387] = unkR[426] ;
//[E-10]  Heat_exchanger_1.fluid_out[LF2] = Inlet_LH2.fluidV[LF2]
unkR[427] = unkR[10] ;
//[E-11]  Turbine_FUEL.f_in.fluid[LF2] = Heat_exchanger_1.fluid_out[LF2]
unkR[388] = unkR[427] ;
//[E-12]  Heat_exchanger_1.fluid_out[RP_1] = Inlet_LH2.fluidV[RP_1]
unkR[428] = unkR[11] ;
//[E-13]  Turbine_FUEL.f_in.fluid[RP_1] = Heat_exchanger_1.fluid_out[RP_1]
unkR[389] = unkR[428] ;
//[E-14]  Turbine_FUEL.f_in.fluid[LCH4] = 0
unkR[390] = 0. ;
//[E-15]  Turbine_FUEL.f_in.fluid[LH2] = 0
unkR[391] = 0. ;
//[E-16]  Heat_exchanger_1.fluid_out[N2H4] = Inlet_LH2.fluidV[N2H4]
unkR[431] = unkR[14] ;
//[E-17]  Turbine_FUEL.f_in.fluid[N2H4] = Heat_exchanger_1.fluid_out[N2H4]
unkR[392] = unkR[431] ;
//[E-18]  Heat_exchanger_1.fluid_out[UDMH] = Inlet_LH2.fluidV[UDMH]
unkR[432] = unkR[15] ;
//[E-19]  Turbine_FUEL.f_in.fluid[UDMH] = Heat_exchanger_1.fluid_out[UDMH]
unkR[393] = unkR[432] ;
//[E-20]  Turbine_FUEL.f_in.fluid[MMH] = 0
unkR[394] = 0. ;
//[E-21]  Heat_exchanger_1.fluid_out[JP_10] = Inlet_LH2.fluidV[JP_10]
unkR[434] = unkR[17] ;
//[E-22]  Turbine_FUEL.f_in.fluid[JP_10] = Heat_exchanger_1.fluid_out[JP_10]
unkR[395] = unkR[434] ;
//[E-23]  Heat_exchanger_1.fluid_out[Kerox] = Inlet_LH2.fluidV[Kerox]
unkR[435] = unkR[18] ;
//[E-24]  Turbine_FUEL.f_in.fluid[Kerox] = Heat_exchanger_1.fluid_out[Kerox]
unkR[396] = unkR[435] ;
//[E-25]  Heat_exchanger_1.fluid_out[Oil] = Inlet_LH2.fluidV[Oil]
unkR[436] = unkR[19] ;
//[E-26]  Turbine_FUEL.f_in.fluid[Oil] = Heat_exchanger_1.fluid_out[Oil]
unkR[397] = unkR[436] ;
//[E-27]  Heat_exchanger_1.fluid_out[H2O] = Inlet_LH2.fluidV[H2O]
unkR[437] = unkR[20] ;
//[E-28]  Turbine_FUEL.f_in.fluid[H2O] = Heat_exchanger_1.fluid_out[H2O]
unkR[398] = unkR[437] ;
//[E-29]  Heat_exchanger_1.fluid_out[IPA] = Inlet_LH2.fluidV[IPA]
unkR[438] = unkR[21] ;
//[E-30]  Turbine_FUEL.f_in.fluid[IPA] = Heat_exchanger_1.fluid_out[IPA]
unkR[399] = unkR[438] ;
//[E-31]  Heat_exchanger_1.fluid_out[Air] = Inlet_LH2.fluidV[Air]
unkR[439] = unkR[22] ;
//[E-32]  Turbine_FUEL.f_in.fluid[Air] = Heat_exchanger_1.fluid_out[Air]
unkR[400] = unkR[439] ;
//[E-33]  Heat_exchanger_1.fluid_out[Ar] = Inlet_LH2.fluidV[Ar]
unkR[440] = unkR[23] ;
//[E-34]  Turbine_FUEL.f_in.fluid[Ar] = Heat_exchanger_1.fluid_out[Ar]
unkR[401] = unkR[440] ;
//[E-35]  Heat_exchanger_1.fluid_out[CH4] = Inlet_LH2.fluidV[LCH4]
unkR[441] = unkR[12] ;
//[E-36]  Turbine_FUEL.f_in.fluid[CH4] = Heat_exchanger_1.fluid_out[CH4]
unkR[402] = unkR[441] ;
//[E-37]  Heat_exchanger_1.fluid_out[CO] = Inlet_LH2.fluidV[CO]
unkR[442] = unkR[25] ;
//[E-38]  Turbine_FUEL.f_in.fluid[CO] = Heat_exchanger_1.fluid_out[CO]
unkR[403] = unkR[442] ;
//[E-39]  Heat_exchanger_1.fluid_out[CO2] = Inlet_LH2.fluidV[CO2]
unkR[443] = unkR[26] ;
//[E-40]  Turbine_FUEL.f_in.fluid[CO2] = Heat_exchanger_1.fluid_out[CO2]
unkR[404] = unkR[443] ;
//[E-41]  Heat_exchanger_1.fluid_out[H2] = Inlet_LH2.fluidV[LH2]
unkR[444] = unkR[13] ;
//[E-42]  Turbine_FUEL.f_in.fluid[H2] = Heat_exchanger_1.fluid_out[H2]
unkR[405] = unkR[444] ;
//[E-43]  Heat_exchanger_1.fluid_out[He] = Inlet_LH2.fluidV[He]
unkR[445] = unkR[28] ;
//[E-44]  Turbine_FUEL.f_in.fluid[He] = Heat_exchanger_1.fluid_out[He]
unkR[406] = unkR[445] ;
//[E-45]  Heat_exchanger_1.fluid_out[N2] = Inlet_LH2.fluidV[N2]
unkR[446] = unkR[29] ;
//[E-46]  Turbine_FUEL.f_in.fluid[N2] = Heat_exchanger_1.fluid_out[N2]
unkR[407] = unkR[446] ;
//[E-47]  Heat_exchanger_1.fluid_out[O2] = Inlet_LH2.fluidV[LOX]
unkR[447] = unkR[5] ;
//[E-48]  Turbine_FUEL.f_in.fluid[O2] = Heat_exchanger_1.fluid_out[O2]
unkR[408] = unkR[447] ;
//[E-49]  Heat_exchanger_1.fluid_out[MMH_vapour] = Inlet_LH2.fluidV[MMH]
unkR[448] = unkR[16] ;
//[E-50]  Turbine_FUEL.f_in.fluid[MMH_vapour] = Heat_exchanger_1.fluid_out[MMH_vapour]
unkR[409] = unkR[448] ;
//[E-51]  Heat_exchanger_1.fluid_out[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour]
unkR[449] = unkR[32] ;
//[E-52]  Turbine_FUEL.f_in.fluid[H2O_vapour] = Heat_exchanger_1.fluid_out[H2O_vapour]
unkR[410] = unkR[449] ;
//[E-53]  Heat_exchanger_1.fluid_out[Comb_prod] = Inlet_LH2.fluidV[Comb_prod]
unkR[450] = unkR[33] ;
//[E-54]  Turbine_FUEL.f_in.fluid[Comb_prod] = Heat_exchanger_1.fluid_out[Comb_prod]
unkR[411] = unkR[450] ;
//[E-55]  Heat_exchanger_1.fluid_out[Comb_prod_M] = Inlet_LH2.fluidV[Comb_prod_M]
unkR[451] = unkR[34] ;
//[E-56]  Turbine_FUEL.f_in.fluid[Comb_prod_M] = Heat_exchanger_1.fluid_out[Comb_prod_M]
unkR[412] = unkR[451] ;
//[E-57]  Heat_exchanger_1.fluid_out[Comb_prod_cp] = Inlet_LH2.fluidV[Comb_prod_cp]
unkR[452] = unkR[35] ;
//[E-58]  Turbine_FUEL.f_in.fluid[Comb_prod_cp] = Heat_exchanger_1.fluid_out[Comb_prod_cp]
unkR[413] = unkR[452] ;
//[E-59]  Heat_exchanger_1.fluid_out[Comb_prod_c] = Inlet_LH2.fluidV[Comb_prod_c]
unkR[453] = unkR[36] ;
//[E-60]  Turbine_FUEL.f_in.fluid[Comb_prod_c] = Heat_exchanger_1.fluid_out[Comb_prod_c]
unkR[414] = unkR[453] ;
//[E-61]  Heat_exchanger_1.fluid_out[Comb_prod_cp_g] = Inlet_LH2.fluidV[Comb_prod_cp_g]
unkR[454] = unkR[37] ;
//[E-62]  Turbine_FUEL.f_in.fluid[Comb_prod_cp_g] = Heat_exchanger_1.fluid_out[Comb_prod_cp_g]
unkR[415] = unkR[454] ;
//[E-63]  Heat_exchanger_1.fluid_out[Comb_prod_Lv] = Inlet_LH2.fluidV[Comb_prod_Lv]
unkR[455] = unkR[38] ;
//[E-64]  Turbine_FUEL.f_in.fluid[Comb_prod_Lv] = Heat_exchanger_1.fluid_out[Comb_prod_Lv]
unkR[416] = unkR[455] ;
//[E-65]  Turbine_FUEL.f_in.fluid[Comb_prod_visc] = Heat_exchanger_1.visc_P
unkR[417] = unkR[474] ;
//[E-66]  Turbine_FUEL.f_in.fluid[Comb_prod_cond] = Heat_exchanger_1.cond_P
unkR[418] = unkR[379] ;
//[E-67]  Heat_exchanger_1.fluid_out[Comb_prod_T_boil] = Inlet_LH2.fluidV[Comb_prod_T_boil]
unkR[458] = unkR[41] ;
//[E-68]  Turbine_FUEL.f_in.fluid[Comb_prod_T_boil] = Heat_exchanger_1.fluid_out[Comb_prod_T_boil]
unkR[419] = unkR[458] ;
//[E-69]  Turbine_FUEL.f_in.fluid[Comb_prod_rho] = Heat_exchanger_1.rho_P
unkR[420] = unkR[471] ;
//[E-70]  Turbine_FUEL.MFP = Turbine_FUEL.A_in * LPRES.FGAMMA(Turbine_FUEL.f_in.fluid) / sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))
unkR[554] = _div( unkR[553] * LPRES__FGAMMA(&unkR[383]) , _sqrt(LPRES__R(&unkR[383]),"LPRES.R(Turbine_FUEL.f_in.fluid)"),"sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))") ;
//[E-71]  CCV.rho_f = LPRES.rho(Inlet_LH2.fluidV)
unkR[45] = LPRES__rho(&unkR[5]) ;
//[E-72]  LPRES.Obtain_Vap_Prop(Inlet_LH2.fluidV, Heat_exchanger_1.Cp_v, Heat_exchanger_1.Lv_v, Heat_exchanger_1.T_boil_v, Heat_exchanger_1.mass_frac_v) %%% (OUT VAR)Heat_exchanger_1.Cp_v (OUT VAR)Heat_exchanger_1.Lv_v (OUT VAR)Heat_exchanger_1.T_boil_v (OUT VAR)Heat_exchanger_1.mass_frac_v 
LPRES__Obtain_Vap_Prop(&unkR[5], &unkR[339], &unkR[352], &unkR[367], &unkR[461]);
//[E-73]  Heat_exchanger_1.D_hy = 2 * Heat_exchanger_1.a * Heat_exchanger_1.b / (Heat_exchanger_1.a + Heat_exchanger_1.b)
unkR[350] = _div( 2. * unkR[377] * unkR[378] , (unkR[377] + unkR[378]),"Heat_exchanger_1.a + Heat_exchanger_1.b") ;
//[E-74]  Heat_exchanger_1.Pr = LPRES.visc(Turbine_FUEL.f_in.fluid) * LPRES.cp(Turbine_FUEL.f_in.fluid) / LPRES.cond(Turbine_FUEL.f_in.fluid) + LPRES.visc(Inlet_LH2.fluidV) * LPRES.cp(Inlet_LH2.fluidV) / LPRES.cond(Inlet_LH2.fluidV)
unkR[364] = _div( LPRES__visc(&unkR[383]) * LPRES__cp(&unkR[383]) , LPRES__cond(&unkR[383]),"LPRES.cond(Turbine_FUEL.f_in.fluid)") + _div( LPRES__visc(&unkR[5]) * LPRES__cp(&unkR[5]) , LPRES__cond(&unkR[5]),"LPRES.cond(Inlet_LH2.fluidV)") ;
//[E-75]  Comb_Chamb.fluid_O[LOX] = Inlet_LOX.fluidV[LOX] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[153] = _div( unkR[77] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-76]  Turbine_OXIDIZER.MFP = Turbine_OXIDIZER.A_in * LPRES.FGAMMA(Turbine_FUEL.f_in.fluid) / sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))
unkR[565] = _div( unkR[564] * LPRES__FGAMMA(&unkR[383]) , _sqrt(LPRES__R(&unkR[383]),"LPRES.R(Turbine_FUEL.f_in.fluid)"),"sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))") ;
//[E-77]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[519] = LPRES__ISA_Pressure(unkR[498]) ;
//[E-78]  Comb_Chamb.Q_comb_effective =  ZONE[1] (Comb_Chamb.Combustion) Comb_Chamb.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[58] = unkR[57] ;
else unkR[58] = 0. ;
//[E-79]  Comb_Chamb.fluid_O[NTO] = Inlet_LOX.fluidV[NTO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[154] = _div( unkR[78] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-80]  Comb_Chamb.fluid_O[H2O2] = Inlet_LOX.fluidV[H2O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[155] = _div( unkR[79] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-81]  Comb_Chamb.fluid_O[NH3] = Inlet_LOX.fluidV[NH3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[156] = _div( unkR[80] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-82]  Comb_Chamb.fluid_O[HNO3] = Inlet_LOX.fluidV[HNO3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[157] = _div( unkR[81] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-83]  Comb_Chamb.fluid_O[LF2] = Inlet_LOX.fluidV[LF2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[158] = _div( unkR[82] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-84]  Comb_Chamb.fluid_O[RP_1] = Inlet_LOX.fluidV[RP_1] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[159] = _div( unkR[83] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-85]  Comb_Chamb.fluid_O[LCH4] = Inlet_LOX.fluidV[LCH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[160] = _div( unkR[84] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-86]  Comb_Chamb.fluid_O[LH2] = Inlet_LOX.fluidV[LH2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[161] = _div( unkR[85] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-87]  Comb_Chamb.fluid_O[N2H4] = Inlet_LOX.fluidV[N2H4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[162] = _div( unkR[86] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-88]  Comb_Chamb.fluid_O[UDMH] = Inlet_LOX.fluidV[UDMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[163] = _div( unkR[87] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-89]  Comb_Chamb.fluid_O[MMH] = Inlet_LOX.fluidV[MMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[164] = _div( unkR[88] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-90]  Comb_Chamb.fluid_O[JP_10] = Inlet_LOX.fluidV[JP_10] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[165] = _div( unkR[89] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-91]  Comb_Chamb.fluid_O[Kerox] = Inlet_LOX.fluidV[Kerox] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[166] = _div( unkR[90] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-92]  Comb_Chamb.fluid_O[Oil] = Inlet_LOX.fluidV[Oil] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[167] = _div( unkR[91] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-93]  Comb_Chamb.fluid_O[H2O] = Inlet_LOX.fluidV[H2O] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[168] = _div( unkR[92] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-94]  Comb_Chamb.fluid_O[IPA] = Inlet_LOX.fluidV[IPA] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[169] = _div( unkR[93] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-95]  Comb_Chamb.fluid_O[Air] = Inlet_LOX.fluidV[Air] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[170] = _div( unkR[94] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-96]  Comb_Chamb.fluid_O[Ar] = Inlet_LOX.fluidV[Ar] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[171] = _div( unkR[95] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-97]  Comb_Chamb.fluid_O[CH4] = Inlet_LOX.fluidV[CH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[172] = _div( unkR[96] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-98]  Comb_Chamb.fluid_O[CO] = Inlet_LOX.fluidV[CO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[173] = _div( unkR[97] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-99]  Comb_Chamb.fluid_O[CO2] = Inlet_LOX.fluidV[CO2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[174] = _div( unkR[98] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-100]  Comb_Chamb.fluid_O[H2] = Inlet_LOX.fluidV[H2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[175] = _div( unkR[99] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-101]  Comb_Chamb.fluid_O[He] = Inlet_LOX.fluidV[He] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[176] = _div( unkR[100] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-102]  Comb_Chamb.fluid_O[N2] = Inlet_LOX.fluidV[N2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[177] = _div( unkR[101] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-103]  Comb_Chamb.fluid_O[O2] = Inlet_LOX.fluidV[O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[178] = _div( unkR[102] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-104]  Comb_Chamb.fluid_O[MMH_vapour] = Inlet_LOX.fluidV[MMH_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[179] = _div( unkR[103] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-105]  Comb_Chamb.fluid_O[H2O_vapour] = Inlet_LOX.fluidV[H2O_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[180] = _div( unkR[104] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-106]  Comb_Chamb.fluid_O[Comb_prod] = 0
unkR[181] = 0. ;
//[E-107]  Comb_Chamb.fluid_O[Comb_prod_M] = 0
unkR[182] = 0. ;
//[E-108]  Comb_Chamb.fluid_O[Comb_prod_cp] = 0
unkR[183] = 0. ;
//[E-109]  Comb_Chamb.fluid_O[Comb_prod_c] = 0
unkR[184] = 0. ;
//[E-110]  Comb_Chamb.fluid_O[Comb_prod_cp_g] = 0
unkR[185] = 0. ;
//[E-111]  Comb_Chamb.fluid_O[Comb_prod_Lv] = 0
unkR[186] = 0. ;
//[E-112]  Comb_Chamb.fluid_O[Comb_prod_visc] = 0
unkR[187] = 0. ;
//[E-113]  Comb_Chamb.fluid_O[Comb_prod_cond] = 0
unkR[188] = 0. ;
//[E-114]  Comb_Chamb.fluid_O[Comb_prod_T_boil] = 0
unkR[189] = 0. ;
//[E-115]  Comb_Chamb.fluid_O[Comb_prod_rho] = 0
unkR[190] = 0. ;
//[E-116]  Comb_Chamb.fluid_F[LOX] = Inlet_LH2.fluidV[LOX] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[115] = _div( unkR[5] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-117]  Comb_Chamb.fluid_F[NTO] = Inlet_LH2.fluidV[NTO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[116] = _div( unkR[6] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-118]  Comb_Chamb.fluid_F[H2O2] = Inlet_LH2.fluidV[H2O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[117] = _div( unkR[7] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-119]  Comb_Chamb.fluid_F[NH3] = Inlet_LH2.fluidV[NH3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[118] = _div( unkR[8] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-120]  Comb_Chamb.fluid_F[HNO3] = Inlet_LH2.fluidV[HNO3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[119] = _div( unkR[9] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-121]  Comb_Chamb.fluid_F[LF2] = Inlet_LH2.fluidV[LF2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[120] = _div( unkR[10] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-122]  Comb_Chamb.fluid_F[RP_1] = Inlet_LH2.fluidV[RP_1] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[121] = _div( unkR[11] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-123]  Comb_Chamb.fluid_F[LCH4] = Inlet_LH2.fluidV[LCH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[122] = _div( unkR[12] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-124]  Comb_Chamb.fluid_F[LH2] = Inlet_LH2.fluidV[LH2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[123] = _div( unkR[13] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-125]  Comb_Chamb.fluid_F[N2H4] = Inlet_LH2.fluidV[N2H4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[124] = _div( unkR[14] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-126]  Comb_Chamb.fluid_F[UDMH] = Inlet_LH2.fluidV[UDMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[125] = _div( unkR[15] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-127]  Comb_Chamb.fluid_F[MMH] = Inlet_LH2.fluidV[MMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[126] = _div( unkR[16] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-128]  Comb_Chamb.fluid_F[JP_10] = Inlet_LH2.fluidV[JP_10] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[127] = _div( unkR[17] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-129]  Comb_Chamb.fluid_F[Kerox] = Inlet_LH2.fluidV[Kerox] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[128] = _div( unkR[18] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-130]  Comb_Chamb.fluid_F[Oil] = Inlet_LH2.fluidV[Oil] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[129] = _div( unkR[19] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-131]  Comb_Chamb.fluid_F[H2O] = Inlet_LH2.fluidV[H2O] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[130] = _div( unkR[20] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-132]  Comb_Chamb.fluid_F[IPA] = Inlet_LH2.fluidV[IPA] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[131] = _div( unkR[21] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-133]  Comb_Chamb.fluid_F[Air] = Inlet_LH2.fluidV[Air] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[132] = _div( unkR[22] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-134]  Comb_Chamb.fluid_F[Ar] = Inlet_LH2.fluidV[Ar] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[133] = _div( unkR[23] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-135]  Comb_Chamb.fluid_F[CH4] = Inlet_LH2.fluidV[CH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[134] = _div( unkR[24] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-136]  Comb_Chamb.fluid_F[CO] = Inlet_LH2.fluidV[CO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[135] = _div( unkR[25] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-137]  Comb_Chamb.fluid_F[CO2] = Inlet_LH2.fluidV[CO2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[136] = _div( unkR[26] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-138]  Comb_Chamb.fluid_F[H2] = Inlet_LH2.fluidV[H2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[137] = _div( unkR[27] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-139]  Comb_Chamb.fluid_F[He] = Inlet_LH2.fluidV[He] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[138] = _div( unkR[28] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-140]  Comb_Chamb.fluid_F[N2] = Inlet_LH2.fluidV[N2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[139] = _div( unkR[29] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-141]  Comb_Chamb.fluid_F[O2] = Inlet_LH2.fluidV[O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[140] = _div( unkR[30] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-142]  Comb_Chamb.fluid_F[MMH_vapour] = Inlet_LH2.fluidV[MMH_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[141] = _div( unkR[31] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-143]  Comb_Chamb.fluid_F[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[142] = _div( unkR[32] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-144]  Comb_Chamb.fluid_F[Comb_prod] = 0
unkR[143] = 0. ;
//[E-145]  Comb_Chamb.fluid_F[Comb_prod_M] = 0
unkR[144] = 0. ;
//[E-146]  Comb_Chamb.fluid_F[Comb_prod_cp] = 0
unkR[145] = 0. ;
//[E-147]  Comb_Chamb.fluid_F[Comb_prod_c] = 0
unkR[146] = 0. ;
//[E-148]  Comb_Chamb.fluid_F[Comb_prod_cp_g] = 0
unkR[147] = 0. ;
//[E-149]  Comb_Chamb.fluid_F[Comb_prod_Lv] = 0
unkR[148] = 0. ;
//[E-150]  Comb_Chamb.fluid_F[Comb_prod_visc] = 0
unkR[149] = 0. ;
//[E-151]  Comb_Chamb.fluid_F[Comb_prod_cond] = 0
unkR[150] = 0. ;
//[E-152]  Comb_Chamb.fluid_F[Comb_prod_T_boil] = 0
unkR[151] = 0. ;
//[E-153]  Comb_Chamb.fluid_F[Comb_prod_rho] = 0
unkR[152] = 0. ;
//[E-154]  MOV.rho_f = LPRES.rho(Inlet_LOX.fluidV)
unkR[508] = LPRES__rho(&unkR[77]) ;
//[E-155]  Comb_Chamb.fluid_P[Comb_prod_M] =  IF[30] (Comb_Chamb.Combustion) Comb_Chamb.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[220] = unkR[53] ;
}
else 
{
unkR[220] = 0. ;
}
//[E-156]  Comb_Chamb.fluid_P[Comb_prod_cp] =  IF[31] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[221] = unkR[70] ;
}
else 
{
unkR[221] = 0. ;
}
//[E-157]  Comb_Chamb.fluid_P[Comb_prod_c] =  IF[32] (Comb_Chamb.Combustion) Comb_Chamb.c_P	 ELSE 0
if( unkI[0] ) 
{
unkR[222] = unkR[67] ;
}
else 
{
unkR[222] = 0. ;
}
//[E-158]  Comb_Chamb.fluid_P[Comb_prod_cp_g] =  IF[33] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[223] = unkR[70] ;
}
else 
{
unkR[223] = 0. ;
}
//[E-159]  Comb_Chamb.fluid_P[Comb_prod_Lv] =  IF[34] (Comb_Chamb.Combustion) Comb_Chamb.Lv_P	 ELSE 0
if( unkI[0] ) 
{
unkR[224] = unkR[52] ;
}
else 
{
unkR[224] = 0. ;
}
//[E-160]  Comb_Chamb.fluid_P[Comb_prod_visc] =  IF[35] (Comb_Chamb.Combustion) Comb_Chamb.visc_P	 ELSE 0
if( unkI[0] ) 
{
unkR[225] = unkR[317] ;
}
else 
{
unkR[225] = 0. ;
}
//[E-161]  Comb_Chamb.fluid_P[Comb_prod_cond] =  IF[36] (Comb_Chamb.Combustion) Comb_Chamb.cond_P	 ELSE 0
if( unkI[0] ) 
{
unkR[226] = unkR[69] ;
}
else 
{
unkR[226] = 0. ;
}
//[E-162]  Comb_Chamb.fluid_P[Comb_prod_T_boil] =  IF[37] (Comb_Chamb.Combustion) Comb_Chamb.T_boil_P	 ELSE 0
if( unkI[0] ) 
{
unkR[227] = unkR[60] ;
}
else 
{
unkR[227] = 0. ;
}
//[E-163]  Comb_Chamb.fluid_P[Comb_prod_rho] = 0
unkR[228] = 0. ;
//[E-164]  Comb_Chamb.A_r = Comb_Chamb.A_th * Comb_Chamb.AR_r
unkR[49] = unkR[50] * unkR[47] ;
//[E-165]  Contact_Wall_1.A_wet = Comb_Chamb.A_wet / Contact_Wall_1.A_eff_1
unkR[321] = _div( unkR[51] , unkR[319],"Contact_Wall_1.A_eff_1") ;
//[E-166]  Heat_exchanger_1.h.A = Contact_Wall_1.A_eff_2 * Contact_Wall_1.A_wet
unkR[323] = unkR[320] * unkR[321] ;
//[E-167]  MFV.rho_f = LPRES.rho(Inlet_LH2.fluidV)
unkR[503] = LPRES__rho(&unkR[5]) ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,5,50);
else fbox1(_time,dyn,ldr,res) ;


if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-307]  Pump_FUEL_LH2.m.N = Pump_FUEL_LH2.U / Pump_FUEL_LH2.r_m
unkR[526] = _div( dyn[5] , unkR[532],"Pump_FUEL_LH2.r_m") ;
//[E-308]  Turbine_FUEL.rpm = Pump_FUEL_LH2.m.N / 0.10471975511966
unkR[533] = unkR[526]/0.10471975511966 ;
//[E-309]  Turbine_FUEL.theta = 1 / Turbine_FUEL.alpha
unkR[563] = _div( 1. , unkR[555],"Turbine_FUEL.alpha") ;
//[E-310]  Turbine_FUEL.pi = 1 / Turbine_FUEL.beta
unkR[561] = _div( 1. , unkR[556],"Turbine_FUEL.beta") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-314]  Pump_LOX_OXIDIZER.m.N = Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.r_m
unkR[538] = _div( dyn[6] , unkR[544],"Pump_LOX_OXIDIZER.r_m") ;
//[E-315]  Turbine_OXIDIZER.rpm = Pump_LOX_OXIDIZER.m.N / 0.10471975511966
unkR[545] = unkR[538]/0.10471975511966 ;
//[E-316]  Turbine_OXIDIZER.theta = 1 / Turbine_OXIDIZER.alpha
unkR[571] = _div( 1. , unkR[566],"Turbine_OXIDIZER.alpha") ;
//[E-317]  Turbine_OXIDIZER.pi = 1 / Turbine_OXIDIZER.beta
unkR[570] = _div( 1. , unkR[567],"Turbine_OXIDIZER.beta") ;
//[E-318]  FlowMeter_LH2.i.Data[1] = abs(FlowMeter_LH2.f_in.W)
unkR[336] = abs(unkR[334]) ;
//[E-319]  Injector_FUEL.PR = Injector_FUEL.f_in.pt / Comb_Chamb.f_O.p_c
unkR[479] = _div( unkR[482] , unkR[74],"Comb_Chamb.f_O.p_c") ;
//[E-320]  Injector_FUEL.PR_ch = 0
unkR[480] = 0. ;
//[E-321]  Injector_FUEL.p_out_ch = 0
unkR[483] = 0. ;
//[E-322]  Injector_FUEL.A_ch = 0
unkR[476] = 0. ;
//[E-323]  Injector_FUEL.M_out = 0
unkR[478] = 0. ;
//[E-324]  Injector_FUEL.v_ideal = Comb_Chamb.f_F.W / (LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D)
unkR[484] = _div( unkR[73] , (LPRES__rho(&unkR[5]) * unkR[475] * unkR[477]),"LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D") ;
//[E-325]  Injector_FUEL.Re = LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.v_ideal * Injector_FUEL.C_D * sqrt(4 * Injector_FUEL.A / 3.14159265358979) / LPRES.visc(Inlet_LH2.fluidV)
unkR[481] = _div( LPRES__rho(&unkR[5]) * unkR[484] * unkR[477] * _sqrt(4. * unkR[475]/3.14159265358979,"4 * Injector_FUEL.A / 3.14159265358979") , LPRES__visc(&unkR[5]),"LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-326]  Injector_OXIDIZER.PR = FlowMeter_LOX.f_in.pt / Comb_Chamb.f_O.p_c
unkR[489] = _div( unkR[337] , unkR[74],"Comb_Chamb.f_O.p_c") ;
//[E-327]  Injector_OXIDIZER.PR_ch = 0
unkR[490] = 0. ;
//[E-328]  Injector_OXIDIZER.p_out_ch = 0
unkR[492] = 0. ;
//[E-329]  Injector_OXIDIZER.A_ch = 0
unkR[486] = 0. ;
//[E-330]  Injector_OXIDIZER.M_out = 0
unkR[488] = 0. ;
//[E-331]  Injector_OXIDIZER.v_ideal = FlowMeter_LOX.f_in.W / (LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)
unkR[493] = _div( unkR[76] , (LPRES__rho(&unkR[77]) * unkR[485] * unkR[487]),"LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D") ;
//[E-332]  Injector_OXIDIZER.Re = LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.v_ideal * Injector_OXIDIZER.C_D * sqrt(4 * Injector_OXIDIZER.A / 3.14159265358979) / LPRES.visc(Inlet_LOX.fluidV)
unkR[491] = _div( LPRES__rho(&unkR[77]) * unkR[493] * unkR[487] * _sqrt(4. * unkR[485]/3.14159265358979,"4 * Injector_OXIDIZER.A / 3.14159265358979") , LPRES__visc(&unkR[77]),"LPRES.visc(Inlet_LOX.fluidV)") ;
//[E-333]  FlowMeter_LOX.i.Data[1] = abs(FlowMeter_LOX.f_in.W)
unkR[338] = abs(unkR[76]) ;
//[E-334]  ThrustMonitor_1.g.A_out = Comb_Chamb.AR * Comb_Chamb.A_th
unkR[48] = unkR[46] * unkR[50] ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-336]  ControlPanel.i_Comb.Data[1] = ThrustMonitor_1.g.c_star
unkR[316] = unkR[68] ;
//[E-337]  Nozzle_1.PR_sl = ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2) ** (LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))
unkR[513] = _pow( ((LPRES__gamma(&unkR[383]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[383]) , (LPRES__gamma(&unkR[383]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1")),"((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2)**(LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))" ) ;
//[E-338]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[521] = _div( unkR[517] , unkR[513],"Nozzle_1.PR_sl") ;
//[E-339]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[520] = MATH__max(unkR[519], unkR[521]) ;
//[E-340]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[514] = _div( unkR[516] , (1. + (LPRES__gamma(&unkR[383]) - 1.)/2. * _pow( unkR[511] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-341]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out)
unkR[522] = unkR[511] * _sqrt(LPRES__gamma(&unkR[383]) * LPRES__R(&unkR[383]) * unkR[514],"LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out") ;
//[E-342]  Nozzle_1.Thrust = CCV.f_in.W * Nozzle_1.v_out + Nozzle_1.A * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[515] = unkR[4] * unkR[522] + unkR[509] * (unkR[520] - unkR[519]) ;
//[E-343]  Nozzle_1.i.Data[1] = Nozzle_1.Thrust
unkR[518] = unkR[515] ;
//[E-344]  ControlPanel.W_tot = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[331] = unkR[336] + unkR[338] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-346]  ThrustMonitor_1.T_out = ThrustMonitor_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)
unkR[549] = _div( unkR[273] , (1. + (LPRES__gamma(&unkR[275]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor_1.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2") ;
//[E-347]  ThrustMonitor_1.v_out = ThrustMonitor_1.M_out * sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out)
unkR[552] = dyn[8] * _sqrt(LPRES__gamma(&unkR[275]) * LPRES__R(&unkR[275]) * unkR[549],"LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out") ;
//[E-348]  ThrustMonitor_1.p_out = Comb_Chamb.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))
unkR[551] = _div( unkR[74] , _pow( (1. + (LPRES__gamma(&unkR[275]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[275]) - 1.) , LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))") ;
//[E-349]  ThrustMonitor_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[550] = LPRES__ISA_Pressure(unkR[498]) ;
//[E-350]  ControlPanel.Thrust = ThrustMonitor_1.g.W * ThrustMonitor_1.v_out + ThrustMonitor_1.g.A_out * (ThrustMonitor_1.p_out - ThrustMonitor_1.p_amb)
unkR[330] = unkR[274] * unkR[552] + unkR[48] * (unkR[551] - unkR[550]) ;
//[E-351]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[328] = _div( unkR[330] , unkR[331],"ControlPanel.W_tot") ;
//[E-352]  ControlPanel.C_E = ControlPanel.Isp / ThrustMonitor_1.g.c_star
unkR[327] = _div( unkR[328] , unkR[68],"ThrustMonitor_1.g.c_star") ;
//[E-353]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[329] = unkR[328]/9.80665 ;
//[E-354]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[332] = unkR[330] ;
//[E-355]  CCV.dp = CCV.f_in.pt - Heat_exchanger_1.f_in.pt
unkR[2] = unkR[43] - unkR[44] ;
//[E-356]  Heat_exchanger_1.P_av = 0.5 * Turbine_FUEL.f_in.pt + 0.5 * CCV.f_in.pt - 0.5 * CCV.dp
unkR[363] = 0.5 * unkR[421] + 0.5 * unkR[43] - 0.5 * unkR[2] ;
//[E-357]  Heat_exchanger_1.fluid_out[Comb_prod_visc] = Inlet_LH2.fluidV[Comb_prod_visc]
unkR[456] = unkR[39] ;
//[E-358]  Heat_exchanger_1.fluid_out[Comb_prod_cond] = Inlet_LH2.fluidV[Comb_prod_cond]
unkR[457] = unkR[40] ;
//[E-359]  Heat_exchanger_1.fluid_out[Comb_prod_rho] = Inlet_LH2.fluidV[Comb_prod_rho]
unkR[459] = unkR[42] ;
//[E-360]  Heat_exchanger_1.fluid_out[LOX] = -Turbine_FUEL.f_in.fluid[LOX]
unkR[422] = -unkR[383] ;
//[E-361]  Heat_exchanger_1.fluid_out[LCH4] = -Turbine_FUEL.f_in.fluid[LCH4]
unkR[429] = -unkR[390] ;
//[E-362]  Heat_exchanger_1.fluid_out[LH2] = -Turbine_FUEL.f_in.fluid[LH2]
unkR[430] = -unkR[391] ;
//[E-363]  Heat_exchanger_1.fluid_out[MMH] = -Turbine_FUEL.f_in.fluid[MMH]
unkR[433] = -unkR[394] ;
//[E-364]  Heat_exchanger_1.f = 0
unkR[381] = 0. ;
//[E-365]  Heat_exchanger_1.D_eq = 1.3 * (Heat_exchanger_1.a * Heat_exchanger_1.b) ** 0.625 / (Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25
unkR[349] = _div( 1.3 * _pow( (unkR[377] * unkR[378]) , 0.625,"(Heat_exchanger_1.a * Heat_exchanger_1.b)**(0.625)" ) , _pow( (unkR[377] + unkR[378]) , 0.25,"(Heat_exchanger_1.a + Heat_exchanger_1.b)**(0.25)" ),"(Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25") ;
//[E-366]  MFV.M_th = 0
unkR[500] = 0. ;
//[E-367]  MFV.dp = MFV.f_in.pt - Injector_FUEL.f_in.pt
unkR[501] = unkR[502] - unkR[482] ;
//[E-368]  MOV.M_th = 0
unkR[505] = 0. ;
//[E-369]  CCV.M_th = 0
unkR[1] = 0. ;
//[E-370]  ControlPanel.i_W.Data[1] = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[333] = unkR[336] + unkR[338] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[5])))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",288,"Pump_FUEL_LH2.","Liquid == LPRES.State(Inlet_LH2.fluidV)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[383])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",119,"Turbine_FUEL.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED TURBINE!");
if(!(2 == LPRES__State(&unkR[383])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",119,"Turbine_OXIDIZER.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED TURBINE!");
if(!(1 == LPRES__State(&unkR[77])))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",288,"Pump_LOX_OXIDIZER.","Liquid == LPRES.State(Inlet_LOX.fluidV)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(unkR[475] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_FUEL.","Injector_FUEL.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[5]) == 2 || 1 && LPRES__State(&unkR[5]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_FUEL."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(unkR[485] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_OXIDIZER.","Injector_OXIDIZER.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[77]) == 2 || 1 && LPRES__State(&unkR[77]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_OXIDIZER."," FALSE  AND LPRES.State(Inlet_LOX.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LOX.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(2 == LPRES__State(&unkR[383])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle_1.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[275])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",807,"ThrustMonitor_1.","Gas == LPRES.State(ThrustMonitor_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",808,"ThrustMonitor_1.","ThrustMonitor_1.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[551] , unkR[550],"ThrustMonitor_1.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor_1.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",809,"ThrustMonitor_1.","(ThrustMonitor_1.p_out / ThrustMonitor_1.p_amb) > ((1.88 * ThrustMonitor_1.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(0 && LPRES__State(&unkR[5]) == 1 || 0 && LPRES__State(&unkR[5]) == 2 || 1 && LPRES__State(&unkR[5]) == 1 || 0 && LPRES__State(&unkR[5]) == 2))
		issueErrorAssert(216,9,24,98,"LPRES_CompHeat.el",284,"Heat_exchanger_1."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas","%s","CHECK HEAT EXCHANGER TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH HEAT EXCHANGER");
if(!(unkR[500] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"MFV.","MFV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[5]) == 2 || 1 && LPRES__State(&unkR[5]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"MFV."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
if(!(unkR[505] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"MOV.","MOV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[77]) == 2 || 1 && LPRES__State(&unkR[77]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"MOV."," FALSE  AND LPRES.State(Inlet_LOX.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LOX.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
if(!(unkR[1] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"CCV.","CCV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[5]) == 2 || 1 && LPRES__State(&unkR[5]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"CCV."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[178] * unkR[140] + unkR[179] * unkR[141] + unkR[156] * unkR[118] + unkR[180] * unkR[142]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
    ev[1]= unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[178] * unkR[140] + unkR[179] * unkR[141] + unkR[156] * unkR[118] + unkR[180] * unkR[142]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
    ev[2]= unkI[0] - 1; //Comb_Chamb.Combustion
    ev[3]= unkR[511]; //Nozzle_1.M_out > 0
    ev[4]= unkR[512] - unkR[513]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
     w[1] = cont[1] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::executeWhen(double *_time,  int index )
{
  if ( index == 0 )
  {
	unkI[0] = 0 ;
	return;
  }

  if ( index == 1 )
  {
	unkI[0] = 1 ;
	return;
  }

}

/* Evaluation of ZONE conditions*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Comb_Chamb.Q_comb_effective =  ZONE (Comb_Chamb.Combustion) Comb_Chamb.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Nozzle_1.A_sl =  ZONE (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)) OTHERS 1
     branchZone[2] = (cont[4] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 5 ;
	nConstraints= 13;
	nWhen= 2;
	nZones= 3;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[2]= { "(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0",
		"(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "Comb_Chamb.Combustion","OTHERS",
	"Nozzle_1.M_out > 0","OTHERS",
	"Nozzle_1.PR < Nozzle_1.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[5]= { { WHEN,NOT_EQ_OP,0,0,"(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"Comb_Chamb.Combustion"},{ ZONE,GT_OP,0,0,"Nozzle_1.M_out > 0"},{ ZONE,LT_OP,0,0,"Nozzle_1.PR < Nozzle_1.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::initDelays()
{
}


bool LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia = 103468;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia;
return true;
}



bool LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia = 376;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia[] = 
{
"CQAAADEAAAAAAAAABQAAAAUAAAAFAAAABQAAAAUAAAAGAAAABgAAAAYAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAACAAAAAEAAAACAAAAAwAAAAQAAAAFAAAACQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__LE5B_valves_actuaciones_mfv_cambia(name,dirInstall);
		ep = tmp->createThinModel();
	}
	catch(...)
	{
	}
	return ep;
}

#ifndef SIMULA_NOT_USE_METAINFO
/* Function to get information of the model*/
SIMULA_EXPORT_C_EXP void getInformationPartition(char *libraryName, char *componentName, char *partitionName, char *symbolTableFilename, bool& isDebug)
{
	sprintf(libraryName,"%s","LPRES_EXAMPLES");
	sprintf(componentName,"%s","LE5B_valves");
	sprintf(partitionName,"%s","actuaciones_mfv_cambia");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+l+e5+b_valves.actuaciones_mfv_cambia");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


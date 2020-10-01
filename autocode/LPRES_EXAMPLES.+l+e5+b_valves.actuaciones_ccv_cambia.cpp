//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_CPP
#define LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia_CPP

#include "LPRES_EXAMPLES.+l+e5+b_valves.actuaciones_ccv_cambia.h"

LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia* LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::s_current= NULL;

LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "LE5B_valves";
m_infoPartitionName = "actuaciones_ccv_cambia";
m_infoModelName = "LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia";
m_infoModelFileName = "LPRES_EXAMPLES.+l+e5+b_valves.actuaciones_ccv_cambia";
m_infoModelFileNameExtra = "+l+e5+b_valves.actuaciones_ccv_cambia";
m_perfFlag = false;
m_infoComponentDate = "05/07/2020 14:04:39.296000";
m_infoPartitionDate = "12/07/2020 14:13:25.080000";
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::initInternalModels()
{
}

void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__rho(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__visc(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[])
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


void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__Decomposition_fun(double fluid_in[],double Data_Array[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__Lv(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__T_boil(double fluid[])
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


void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__Obtain_Vap_Prop(double fluid_in[],double Cp_i[],double Lv_i[],double T_boil_i[],double fluid_out[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__cond(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::initBlocks( double dyn[], double ldr[], double *_time )
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[5];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-304]  Pump_FUEL_LH2.phi = FlowMeter_LH2.f_in.W / LPRES.rho(Inlet_LH2.fluidV) / Pump_FUEL_LH2.U / Pump_FUEL_LH2.A_in
unkR[528] = _div( _div( _div( unkR[334] , LPRES__rho(&unkR[5]),"LPRES.rho(Inlet_LH2.fluidV)") , dyn[5],"Pump_FUEL_LH2.U") , unkR[523],"Pump_FUEL_LH2.A_in") ;
//[E-305]  Pump_FUEL_LH2.psi = (Pump_FUEL_LH2.psi_d - 1) / Pump_FUEL_LH2.phi_d * Pump_FUEL_LH2.phi + 1
unkR[530] = _div( (unkR[531] - 1.) , unkR[529],"Pump_FUEL_LH2.phi_d") * unkR[528] + 1. ;
//[E-306]  Pump_FUEL_LH2.psi = -Pump_FUEL_LH2.tau / Pump_FUEL_LH2.U ** 2
res[5] = evalNormResidueInternal(5,unkR[530],_div( -unkR[534] , _pow( dyn[5] , 2,"(Pump_FUEL_LH2.U)**(2)" ),"Pump_FUEL_LH2.U ** 2"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-311]  Pump_LOX_OXIDIZER.phi = FlowMeter_LOX.f_in.W / LPRES.rho(Inlet_LOX.fluidV) / Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.A_in
unkR[540] = _div( _div( _div( unkR[76] , LPRES__rho(&unkR[77]),"LPRES.rho(Inlet_LOX.fluidV)") , dyn[6],"Pump_LOX_OXIDIZER.U") , unkR[535],"Pump_LOX_OXIDIZER.A_in") ;
//[E-312]  Pump_LOX_OXIDIZER.psi = (Pump_LOX_OXIDIZER.psi_d - 1) / Pump_LOX_OXIDIZER.phi_d * Pump_LOX_OXIDIZER.phi + 1
unkR[542] = _div( (unkR[543] - 1.) , unkR[541],"Pump_LOX_OXIDIZER.phi_d") * unkR[540] + 1. ;
//[E-313]  Pump_LOX_OXIDIZER.psi = -Pump_LOX_OXIDIZER.tau / Pump_LOX_OXIDIZER.U ** 2
res[6] = evalNormResidueInternal(6,unkR[542],_div( -unkR[546] , _pow( dyn[6] , 2,"(Pump_LOX_OXIDIZER.U)**(2)" ),"Pump_LOX_OXIDIZER.U ** 2"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fcn3(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-335]  ThrustMonitor_1.g.A_out / Comb_Chamb.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[48] , unkR[50],"Comb_Chamb.A_th"),_div( LPRES__FGAMMA(&unkR[275]) , (_pow( (_div( dyn[7] , unkR[74],"Comb_Chamb.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[275]) * (1. - _pow( (_div( dyn[7] , unkR[74],"Comb_Chamb.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[275]) - 1.) , LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[275]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fcn4(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-345]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / ThrustMonitor_1.g.A_out / Comb_Chamb.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[274] * _sqrt(LPRES__R(&unkR[275]) * unkR[273],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , unkR[48],"ThrustMonitor_1.g.A_out") , unkR[74],"Comb_Chamb.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[275]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[275]) + 1)/2 , (LPRES__gamma(&unkR[275]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fcn5(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::fres( double *_time, double dyn[], double der[], double res[] )
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::checkAsserts(double *_time)
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[178] * unkR[140] + unkR[179] * unkR[141] + unkR[156] * unkR[118] + unkR[180] * unkR[142]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
    ev[1]= unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[178] * unkR[140] + unkR[179] * unkR[141] + unkR[156] * unkR[118] + unkR[180] * unkR[142]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
    ev[2]= unkI[0] - 1; //Comb_Chamb.Combustion
    ev[3]= unkR[511]; //Nozzle_1.M_out > 0
    ev[4]= unkR[512] - unkR[513]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
     w[1] = cont[1] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::executeWhen(double *_time,  int index )
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Comb_Chamb.Q_comb_effective =  ZONE (Comb_Chamb.Combustion) Comb_Chamb.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Nozzle_1.A_sl =  ZONE (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)) OTHERS 1
     branchZone[2] = (cont[4] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::initDelays()
{
}


bool LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia = 103468;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia;
return true;
}



bool LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia = 376;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia[] = 
{
"CQAAADEAAAAAAAAABQAAAAUAAAAFAAAABQAAAAUAAAAGAAAABgAAAAYAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAACAAAAAEAAAACAAAAAwAAAAQAAAAFAAAACQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__LE5B_valves_actuaciones_ccv_cambia(name,dirInstall);
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
	sprintf(partitionName,"%s","actuaciones_ccv_cambia");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+l+e5+b_valves.actuaciones_ccv_cambia");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


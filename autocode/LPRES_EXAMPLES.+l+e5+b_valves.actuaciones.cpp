//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_valves_actuaciones_CPP
#define LPRES_EXAMPLES__LE5B_valves_actuaciones_CPP

#include "LPRES_EXAMPLES.+l+e5+b_valves.actuaciones.h"

LPRES_EXAMPLES__LE5B_valves_actuaciones* LPRES_EXAMPLES__LE5B_valves_actuaciones::s_current= NULL;

LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES_EXAMPLES__LE5B_valves_actuaciones(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "LE5B_valves";
m_infoPartitionName = "actuaciones";
m_infoModelName = "LPRES_EXAMPLES__LE5B_valves_actuaciones";
m_infoModelFileName = "LPRES_EXAMPLES.+l+e5+b_valves.actuaciones";
m_infoModelFileNameExtra = "+l+e5+b_valves.actuaciones";
m_perfFlag = false;
m_infoComponentDate = "05/07/2020 14:04:39.296000";
m_infoPartitionDate = "12/07/2020 12:20:28.814000";
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones::initInternalModels()
{
}

void LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__rho(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__visc(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[])
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


void LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__Decomposition_fun(double fluid_in[],double Data_Array[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__Lv(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__T_boil(double fluid[])
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


void LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__Obtain_Vap_Prop(double fluid_in[],double Cp_i[],double Lv_i[],double T_boil_i[],double fluid_out[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__cond(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_actuaciones::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void LPRES_EXAMPLES__LE5B_valves_actuaciones::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__LE5B_valves_actuaciones::initBlocks( double dyn[], double ldr[], double *_time )
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[5];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-304]  Pump_FUEL_LH2.phi = FlowMeter_LH2.f_in.W / LPRES.rho(Inlet_LH2.fluidV) / Pump_FUEL_LH2.U / Pump_FUEL_LH2.A_in
unkR[528] = _div( _div( _div( unkR[334] , LPRES__rho(&unkR[5]),"LPRES.rho(Inlet_LH2.fluidV)") , dyn[5],"Pump_FUEL_LH2.U") , unkR[523],"Pump_FUEL_LH2.A_in") ;
//[E-305]  Pump_FUEL_LH2.psi = (Pump_FUEL_LH2.psi_d - 1) / Pump_FUEL_LH2.phi_d * Pump_FUEL_LH2.phi + 1
unkR[530] = _div( (unkR[531] - 1.) , unkR[529],"Pump_FUEL_LH2.phi_d") * unkR[528] + 1. ;
//[E-306]  Pump_FUEL_LH2.psi = -Pump_FUEL_LH2.tau / Pump_FUEL_LH2.U ** 2
res[5] = evalNormResidueInternal(5,unkR[530],_div( -unkR[534] , _pow( dyn[5] , 2,"(Pump_FUEL_LH2.U)**(2)" ),"Pump_FUEL_LH2.U ** 2"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-311]  Pump_LOX_OXIDIZER.phi = FlowMeter_LOX.f_in.W / LPRES.rho(Inlet_LOX.fluidV) / Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.A_in
unkR[540] = _div( _div( _div( unkR[76] , LPRES__rho(&unkR[77]),"LPRES.rho(Inlet_LOX.fluidV)") , dyn[6],"Pump_LOX_OXIDIZER.U") , unkR[535],"Pump_LOX_OXIDIZER.A_in") ;
//[E-312]  Pump_LOX_OXIDIZER.psi = (Pump_LOX_OXIDIZER.psi_d - 1) / Pump_LOX_OXIDIZER.phi_d * Pump_LOX_OXIDIZER.phi + 1
unkR[542] = _div( (unkR[543] - 1.) , unkR[541],"Pump_LOX_OXIDIZER.phi_d") * unkR[540] + 1. ;
//[E-313]  Pump_LOX_OXIDIZER.psi = -Pump_LOX_OXIDIZER.tau / Pump_LOX_OXIDIZER.U ** 2
res[6] = evalNormResidueInternal(6,unkR[542],_div( -unkR[546] , _pow( dyn[6] , 2,"(Pump_LOX_OXIDIZER.U)**(2)" ),"Pump_LOX_OXIDIZER.U ** 2"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fcn3(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-335]  ThrustMonitor_1.g.A_out / Comb_Chamb.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[48] , unkR[50],"Comb_Chamb.A_th"),_div( LPRES__FGAMMA(&unkR[275]) , (_pow( (_div( dyn[7] , unkR[74],"Comb_Chamb.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[275]) * (1. - _pow( (_div( dyn[7] , unkR[74],"Comb_Chamb.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[275]) - 1.) , LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[275]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fcn4(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-345]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / ThrustMonitor_1.g.A_out / Comb_Chamb.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[274] * _sqrt(LPRES__R(&unkR[275]) * unkR[273],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , unkR[48],"ThrustMonitor_1.g.A_out") , unkR[74],"Comb_Chamb.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[275]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[275]) + 1)/2 , (LPRES__gamma(&unkR[275]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fcn5(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_actuaciones& m= *LPRES_EXAMPLES__LE5B_valves_actuaciones::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_actuaciones::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__LE5B_valves_actuaciones::fres( double *_time, double dyn[], double der[], double res[] )
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones::checkAsserts(double *_time)
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[178] * unkR[140] + unkR[179] * unkR[141] + unkR[156] * unkR[118] + unkR[180] * unkR[142]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
    ev[1]= unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[178] * unkR[140] + unkR[179] * unkR[141] + unkR[156] * unkR[118] + unkR[180] * unkR[142]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
    ev[2]= unkI[0] - 1; //Comb_Chamb.Combustion
    ev[3]= unkR[511]; //Nozzle_1.M_out > 0
    ev[4]= unkR[512] - unkR[513]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
     w[1] = cont[1] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__LE5B_valves_actuaciones::executeWhen(double *_time,  int index )
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Comb_Chamb.Q_comb_effective =  ZONE (Comb_Chamb.Combustion) Comb_Chamb.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Nozzle_1.A_sl =  ZONE (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)) OTHERS 1
     branchZone[2] = (cont[4] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__LE5B_valves_actuaciones::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__LE5B_valves_actuaciones::initDelays()
{
}


bool LPRES_EXAMPLES__LE5B_valves_actuaciones::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__LE5B_valves_actuaciones = 103468;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__LE5B_valves_actuaciones;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones;
return true;
}



bool LPRES_EXAMPLES__LE5B_valves_actuaciones::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__LE5B_valves_actuaciones = 376;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones[] = 
{
"CQAAADEAAAAAAAAABQAAAAUAAAAFAAAABQAAAAUAAAAGAAAABgAAAAYAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAACAAAAAEAAAACAAAAAwAAAAQAAAAFAAAACQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_LPRES_EXAMPLES__LE5B_valves_actuaciones;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_actuaciones;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_actuaciones;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__LE5B_valves_actuaciones(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__LE5B_valves_actuaciones(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__LE5B_valves_actuaciones(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__LE5B_valves_actuaciones(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__LE5B_valves_actuaciones(name,dirInstall);
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
	sprintf(partitionName,"%s","actuaciones");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+l+e5+b_valves.actuaciones");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


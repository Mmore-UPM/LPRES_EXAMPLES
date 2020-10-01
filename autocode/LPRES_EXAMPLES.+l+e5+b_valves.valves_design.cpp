//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_valves_valves_design_CPP
#define LPRES_EXAMPLES__LE5B_valves_valves_design_CPP

#include "LPRES_EXAMPLES.+l+e5+b_valves.valves_design.h"

LPRES_EXAMPLES__LE5B_valves_valves_design* LPRES_EXAMPLES__LE5B_valves_valves_design::s_current= NULL;

LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES_EXAMPLES__LE5B_valves_valves_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "LE5B_valves";
m_infoPartitionName = "valves_design";
m_infoModelName = "LPRES_EXAMPLES__LE5B_valves_valves_design";
m_infoModelFileName = "LPRES_EXAMPLES.+l+e5+b_valves.valves_design";
m_infoModelFileNameExtra = "+l+e5+b_valves.valves_design";
m_perfFlag = false;
m_infoComponentDate = "05/07/2020 14:04:39.296000";
m_infoPartitionDate = "07/07/2020 19:42:26.700000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "LPRES V2.0.1 LPRES_EXAMPLES V0.1 MATH V3.2.3 ";

m_solveInternalBox= new int[10]; 
int nbx;
for (nbx=0; nbx < 10 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[19];
int ib;
for (ib=0; ib < 19 ; ib++)
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
static double tmp_dynInit[9]={ 500, 500, 100, 1, 1, 100, 0.001, 0.001, 0.001 } ;
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
static double tmp_unkRInit[572]={ 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 110, 5, 1, 
		0, 0.05, 1, 800, 18, 0, 8, 0, 15100000, 0, 0, 200, 0, 0, 0, 0, 
		0, 0, 0, 4182, 1, 0.001, 3100, 0, 0.99, 1, 1, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0.001, 0, 1, 
		1, 0, 0, 1, 150, 0.005, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 
		1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002, 0.004, 0.001, 3000000, 0, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 1000, 5e-05, 0, 0.001, 0.000539719389, 0, 0.5, 0, 10, 0, 
		0, 1, 0, 0, 0.05, 0, 0.5, 0, 10, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0.02, 0, 0, 0, 0, 0, 
		0, 1, 1, 0, 0, 0, 0, 0, 0.000585042, 0, 0.612, 1, 0, 0, 0.4, 0, 
		0.7, 0.080282913, 0, 0, 0.000497590025, 0, 0.653, 1, 0, 0, 0.4, 0, 0.7, 0.0587298052, 0, 0, 
		0.9, 0, 0, 0, 0, 0.00131586493, 0, 0, 0, 0.476, 1, 1, 1, 0, 0, 0, 
		0, 0, 0.00525651, 0, 0, 0, 0.392, 0, 0, 0, 0, 0 } ;
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
n_nelg= 10;
n_neld= 0;
m_numBoxes= 9;
m_nNonLinearBoxes= 9;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__LE5B_valves_valves_design::initInternalModels()
{
}

void LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__rho(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__visc(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_design::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_design::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[])
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


void LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__Decomposition_fun(double fluid_in[],double Data_Array[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__Lv(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__T_boil(double fluid[])
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


void LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__Obtain_Vap_Prop(double fluid_in[],double Cp_i[],double Lv_i[],double T_boil_i[],double fluid_out[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__cond(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_design::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void LPRES_EXAMPLES__LE5B_valves_valves_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__LE5B_valves_valves_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet_LH2.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[4]) ;
  // init(Inlet_LOX.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[75]) ;
  // init(Comb_Chamb.CombCha,100)
	if(!(unkR[46] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",164,"Comb_Chamb.","Comb_Chamb.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(29, &unkR[274]) ;
	unkI[0] = 1 ;
	if( unkI[1] == 1 ) {
	dyn[3] = 0.001 ;
	}
	else {
	dyn[3] = 2.80123632766838 ;
	}
  // init(Heat_exchanger_1.Heat_exchanger,100)
	if(!(0 && LPRES__State(&unkR[4]) == 1 || 0 && LPRES__State(&unkR[4]) == 2))
		issueErrorAssert(213,7,24,98,"LPRES_CompHeat.el",280,"Heat_exchanger_1."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas","%s","FLUID CHANGED ITS STATE!");

  // init(Nozzle_1.Nozzle,0)
	unkR[514] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-13]  Pump_FUEL_LH2.psi = -Pump_FUEL_LH2.tau / Pump_FUEL_LH2.U ** 2
res[0] = evalNormResidueInternal(0,unkR[527],_div( -unkR[530] , _pow( dyn[0] , 2,"(Pump_FUEL_LH2.U)**(2)" ),"Pump_FUEL_LH2.U ** 2"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-115]  Pump_LOX_OXIDIZER.psi = -Pump_LOX_OXIDIZER.tau / Pump_LOX_OXIDIZER.U ** 2
res[1] = evalNormResidueInternal(1,unkR[539],_div( -unkR[542] , _pow( dyn[1] , 2,"(Pump_LOX_OXIDIZER.U)**(2)" ),"Pump_LOX_OXIDIZER.U ** 2"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_design::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_design::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_design::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-303]  ThrustMonitor_1.g.A_out / Comb_Chamb.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[2] = evalNormResidueInternal(2,_div( unkR[47] , unkR[49],"Comb_Chamb.A_th"),_div( LPRES__FGAMMA(&unkR[274]) , (_pow( (_div( dyn[2] , unkR[113],"Comb_Chamb.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[274]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[274]) * (1. - _pow( (_div( dyn[2] , unkR[113],"Comb_Chamb.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[274]) - 1.) , LPRES__gamma(&unkR[274]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[274]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_design::fcn3(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_design::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_design::fcn3, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-307]  Comb_Chamb.AR_r = 1 / Comb_Chamb.M_r * LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,unkR[46],_div( _div( 1 , dyn[3],"Comb_Chamb.M_r") * LPRES__FGAMMA(&unkR[274]) , _sqrt(LPRES__gamma(&unkR[274]),"LPRES.gamma(ThrustMonitor_1.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[274]) - 1) * _pow( dyn[3] , 2,"(Comb_Chamb.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[274]) + 1) , (2 * (LPRES__gamma(&unkR[274]) - 1)),"2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_design::fcn4(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_design::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_design::fcn4, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-322]  Heat_exchanger_1.h.A = Heat_exchanger_1.h.Q / (Heat_exchanger_1.h_l * (Heat_exchanger_1.h.T - Heat_exchanger_1.T_av))
unkR[323] = _div( unkR[312] , (unkR[459] * (dyn[4] - unkR[366])),"Heat_exchanger_1.h_l * (Heat_exchanger_1.h.T - Heat_exchanger_1.T_av)") ;
//[E-323]  Contact_Wall_1.A_wet = Heat_exchanger_1.h.A / Contact_Wall_1.A_eff_2
unkR[321] = _div( unkR[323] , unkR[320],"Contact_Wall_1.A_eff_2") ;
//[E-324]  Comb_Chamb.A_wet = Contact_Wall_1.A_eff_1 * Contact_Wall_1.A_wet
unkR[50] = unkR[319] * unkR[321] ;
//[E-325]  Comb_Chamb.h.T = Comb_Chamb.T_aw - Heat_exchanger_1.h.Q / Comb_Chamb.A_wet / Comb_Chamb.h_g
unkR[313] = unkR[58] - _div( _div( unkR[312] , unkR[50],"Comb_Chamb.A_wet") , unkR[314],"Comb_Chamb.h_g") ;
//[E-326]  Contact_Wall_1.Q = Contact_Wall_1.k_w / Contact_Wall_1.t_w * (Heat_exchanger_1.h.T - Comb_Chamb.h.T) * Contact_Wall_1.A_wet
res[4] = evalNormResidueInternal(4,unkR[322],_div( unkR[324] , unkR[325],"Contact_Wall_1.t_w") * (dyn[4] - unkR[313]) * unkR[321]);
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_design::fcn5(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_design::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_design::fcn5, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-340]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / ThrustMonitor_1.g.A_out / Comb_Chamb.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( unkR[273] * _sqrt(LPRES__R(&unkR[274]) * unkR[272],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , unkR[47],"ThrustMonitor_1.g.A_out") , unkR[113],"Comb_Chamb.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[274]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[274]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[274]) + 1)/2 , (LPRES__gamma(&unkR[274]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_design::fcn6(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_design::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_design::fcn6, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-362]  Injector_FUEL.f_in.pt = MFV.f_in.pt - 0.5 * Comb_Chamb.f_F.W ** 2 / (MFV.rho_f * MFV.A ** 2)
res[6] = evalNormResidueInternal(6,unkR[481],unkR[500] - _div( 0.5 * _pow( unkR[73] , 2,"(Comb_Chamb.f_F.W)**(2)" ) , (unkR[501] * _pow( dyn[6] , 2,"(MFV.A)**(2)" )),"MFV.rho_f * MFV.A ** 2"));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_design::fcn7(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_design::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_design::fcn7, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Residues function for box 8*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fbox8(double *_time,double dyn[],double ldr[],double res[])
{
//[E-366]  FlowMeter_LOX.f_in.pt = MOV.f_in.pt - 0.5 * FlowMeter_LOX.f_in.W ** 2 / (MOV.rho_f * MOV.A ** 2)
res[7] = evalNormResidueInternal(7,unkR[337],unkR[504] - _div( 0.5 * _pow( unkR[336] , 2,"(FlowMeter_LOX.f_in.W)**(2)" ) , (unkR[505] * _pow( dyn[7] , 2,"(MOV.A)**(2)" )),"MOV.rho_f * MOV.A ** 2"));
}


/* Wrapper to call the residues's box 8 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_design::fcn8(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_design::s_current;
	m.printDbgInfoForModel(8,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox8(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(8,false);
}


/* Wrapper for the non-linear solver in box 8*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fhyb8(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(8);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_design::fcn8, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 8);
	abortDiv= adiv;
}


/* Residues function for box 9*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fbox9(double *_time,double dyn[],double ldr[],double res[])
{
//[E-369]  Heat_exchanger_1.f_in.pt = CCV.f_in.pt - 0.5 * CCV.f_in.W ** 2 / (CCV.rho_f * CCV.A ** 2)
res[8] = evalNormResidueInternal(8,unkR[43],unkR[42] - _div( 0.5 * _pow( unkR[3] , 2,"(CCV.f_in.W)**(2)" ) , (unkR[44] * _pow( dyn[8] , 2,"(CCV.A)**(2)" )),"CCV.rho_f * CCV.A ** 2"));
}


/* Wrapper to call the residues's box 9 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_design::fcn9(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_design::s_current;
	m.printDbgInfoForModel(9,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox9(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(9,false);
}


/* Wrapper for the non-linear solver in box 9*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::fhyb9(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(9);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_design::fcn9, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 9);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__LE5B_valves_valves_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Comb_Chamb.W_O = FlowMeter_LOX.f_in.W * (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[66] = unkR[336] * (1. - unkR[103]) ;
//[E-2]  Comb_Chamb.W_F = Comb_Chamb.W_O / Comb_Chamb.OF
unkR[62] = _div( unkR[66] , unkR[53],"Comb_Chamb.OF") ;
//[E-3]  Comb_Chamb.f_F.W = Comb_Chamb.W_F / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[73] = _div( unkR[62] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-4]  Comb_Chamb.W_IF = Comb_Chamb.f_F.W - Comb_Chamb.W_F
unkR[64] = unkR[73] - unkR[62] ;
//[E-5]  FlowMeter_LH2.f_in.W = CCV.f_in.W + Comb_Chamb.W_F + Comb_Chamb.W_IF
unkR[333] = unkR[3] + unkR[62] + unkR[64] ;
//[E-6]  Pump_FUEL_LH2.tau_id = -Pump_FUEL_LH2.dp / LPRES.rho(Inlet_LH2.fluidV)
unkR[531] = _div( -unkR[521] , LPRES__rho(&unkR[4]),"LPRES.rho(Inlet_LH2.fluidV)") ;
//[E-7]  Pump_FUEL_LH2.tau = Pump_FUEL_LH2.tau_id / Pump_FUEL_LH2.eta_d
unkR[530] = _div( unkR[531] , unkR[522],"Pump_FUEL_LH2.eta_d") ;
//[E-8]  Pump_FUEL_LH2.m.Power = FlowMeter_LH2.f_in.W * Pump_FUEL_LH2.tau
unkR[524] = unkR[333] * unkR[530] ;
//[E-9]  Pump_FUEL_LH2.m.N = 0.10471975511966 * Turbine_FUEL.rpm
unkR[523] = 0.10471975511966 * unkR[559] ;
//[E-10]  FlowMeter_LH2.f_in.pt = Inlet_LH2.pt + Pump_FUEL_LH2.dp
unkR[334] = unkR[494] + unkR[521] ;
//[E-11]  Comb_Chamb.f_F.T = (Pump_FUEL_LH2.tau_id - Pump_FUEL_LH2.tau) / LPRES.cp(Inlet_LH2.fluidV) + Inlet_LH2.Tt
unkR[2] = _div( (unkR[531] - unkR[530]) , LPRES__cp(&unkR[4]),"LPRES.cp(Inlet_LH2.fluidV)") + unkR[493] ;
//[E-12]  Pump_FUEL_LH2.psi = (Pump_FUEL_LH2.psi_d - 1) / Pump_FUEL_LH2.phi_d * Pump_FUEL_LH2.phi + 1
unkR[527] = _div( (unkR[528] - 1.) , unkR[526],"Pump_FUEL_LH2.phi_d") * unkR[525] + 1. ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-14]  Pump_FUEL_LH2.r_m = Pump_FUEL_LH2.U / Pump_FUEL_LH2.m.N
unkR[529] = _div( dyn[0] , unkR[523],"Pump_FUEL_LH2.m.N") ;
//[E-15]  Pump_FUEL_LH2.A_in = FlowMeter_LH2.f_in.W / LPRES.rho(Inlet_LH2.fluidV) / Pump_FUEL_LH2.U / Pump_FUEL_LH2.phi
unkR[520] = _div( _div( _div( unkR[333] , LPRES__rho(&unkR[4]),"LPRES.rho(Inlet_LH2.fluidV)") , dyn[0],"Pump_FUEL_LH2.U") , unkR[525],"Pump_FUEL_LH2.phi") ;
//[E-16]  Turbine_FUEL.m.Power = -Pump_FUEL_LH2.m.Power
unkR[557] = -unkR[524] ;
//[E-17]  Turbine_FUEL.tau = Turbine_FUEL.m.Power / CCV.f_in.W
unkR[560] = _div( unkR[557] , unkR[3],"CCV.f_in.W") ;
//[E-18]  Turbine_FUEL.f_in.fluid[LOX] = 0
unkR[382] = 0. ;
//[E-19]  Heat_exchanger_1.fluid_out[NTO] = Inlet_LH2.fluidV[NTO]
unkR[422] = unkR[5] ;
//[E-20]  Turbine_FUEL.f_in.fluid[NTO] = Heat_exchanger_1.fluid_out[NTO]
unkR[383] = unkR[422] ;
//[E-21]  Heat_exchanger_1.fluid_out[H2O2] = Inlet_LH2.fluidV[H2O2]
unkR[423] = unkR[6] ;
//[E-22]  Turbine_FUEL.f_in.fluid[H2O2] = Heat_exchanger_1.fluid_out[H2O2]
unkR[384] = unkR[423] ;
//[E-23]  Heat_exchanger_1.fluid_out[NH3] = Inlet_LH2.fluidV[NH3]
unkR[424] = unkR[7] ;
//[E-24]  Turbine_FUEL.f_in.fluid[NH3] = Heat_exchanger_1.fluid_out[NH3]
unkR[385] = unkR[424] ;
//[E-25]  Heat_exchanger_1.fluid_out[HNO3] = Inlet_LH2.fluidV[HNO3]
unkR[425] = unkR[8] ;
//[E-26]  Turbine_FUEL.f_in.fluid[HNO3] = Heat_exchanger_1.fluid_out[HNO3]
unkR[386] = unkR[425] ;
//[E-27]  Heat_exchanger_1.fluid_out[LF2] = Inlet_LH2.fluidV[LF2]
unkR[426] = unkR[9] ;
//[E-28]  Turbine_FUEL.f_in.fluid[LF2] = Heat_exchanger_1.fluid_out[LF2]
unkR[387] = unkR[426] ;
//[E-29]  Heat_exchanger_1.fluid_out[RP_1] = Inlet_LH2.fluidV[RP_1]
unkR[427] = unkR[10] ;
//[E-30]  Turbine_FUEL.f_in.fluid[RP_1] = Heat_exchanger_1.fluid_out[RP_1]
unkR[388] = unkR[427] ;
//[E-31]  Turbine_FUEL.f_in.fluid[LCH4] = 0
unkR[389] = 0. ;
//[E-32]  Turbine_FUEL.f_in.fluid[LH2] = 0
unkR[390] = 0. ;
//[E-33]  Heat_exchanger_1.fluid_out[N2H4] = Inlet_LH2.fluidV[N2H4]
unkR[430] = unkR[13] ;
//[E-34]  Turbine_FUEL.f_in.fluid[N2H4] = Heat_exchanger_1.fluid_out[N2H4]
unkR[391] = unkR[430] ;
//[E-35]  Heat_exchanger_1.fluid_out[UDMH] = Inlet_LH2.fluidV[UDMH]
unkR[431] = unkR[14] ;
//[E-36]  Turbine_FUEL.f_in.fluid[UDMH] = Heat_exchanger_1.fluid_out[UDMH]
unkR[392] = unkR[431] ;
//[E-37]  Turbine_FUEL.f_in.fluid[MMH] = 0
unkR[393] = 0. ;
//[E-38]  Heat_exchanger_1.fluid_out[JP_10] = Inlet_LH2.fluidV[JP_10]
unkR[433] = unkR[16] ;
//[E-39]  Turbine_FUEL.f_in.fluid[JP_10] = Heat_exchanger_1.fluid_out[JP_10]
unkR[394] = unkR[433] ;
//[E-40]  Heat_exchanger_1.fluid_out[Kerox] = Inlet_LH2.fluidV[Kerox]
unkR[434] = unkR[17] ;
//[E-41]  Turbine_FUEL.f_in.fluid[Kerox] = Heat_exchanger_1.fluid_out[Kerox]
unkR[395] = unkR[434] ;
//[E-42]  Heat_exchanger_1.fluid_out[Oil] = Inlet_LH2.fluidV[Oil]
unkR[435] = unkR[18] ;
//[E-43]  Turbine_FUEL.f_in.fluid[Oil] = Heat_exchanger_1.fluid_out[Oil]
unkR[396] = unkR[435] ;
//[E-44]  Heat_exchanger_1.fluid_out[H2O] = Inlet_LH2.fluidV[H2O]
unkR[436] = unkR[19] ;
//[E-45]  Turbine_FUEL.f_in.fluid[H2O] = Heat_exchanger_1.fluid_out[H2O]
unkR[397] = unkR[436] ;
//[E-46]  Heat_exchanger_1.fluid_out[IPA] = Inlet_LH2.fluidV[IPA]
unkR[437] = unkR[20] ;
//[E-47]  Turbine_FUEL.f_in.fluid[IPA] = Heat_exchanger_1.fluid_out[IPA]
unkR[398] = unkR[437] ;
//[E-48]  Heat_exchanger_1.fluid_out[Air] = Inlet_LH2.fluidV[Air]
unkR[438] = unkR[21] ;
//[E-49]  Turbine_FUEL.f_in.fluid[Air] = Heat_exchanger_1.fluid_out[Air]
unkR[399] = unkR[438] ;
//[E-50]  Heat_exchanger_1.fluid_out[Ar] = Inlet_LH2.fluidV[Ar]
unkR[439] = unkR[22] ;
//[E-51]  Turbine_FUEL.f_in.fluid[Ar] = Heat_exchanger_1.fluid_out[Ar]
unkR[400] = unkR[439] ;
//[E-52]  Heat_exchanger_1.fluid_out[CH4] = Inlet_LH2.fluidV[LCH4]
unkR[440] = unkR[11] ;
//[E-53]  Turbine_FUEL.f_in.fluid[CH4] = Heat_exchanger_1.fluid_out[CH4]
unkR[401] = unkR[440] ;
//[E-54]  Heat_exchanger_1.fluid_out[CO] = Inlet_LH2.fluidV[CO]
unkR[441] = unkR[24] ;
//[E-55]  Turbine_FUEL.f_in.fluid[CO] = Heat_exchanger_1.fluid_out[CO]
unkR[402] = unkR[441] ;
//[E-56]  Heat_exchanger_1.fluid_out[CO2] = Inlet_LH2.fluidV[CO2]
unkR[442] = unkR[25] ;
//[E-57]  Turbine_FUEL.f_in.fluid[CO2] = Heat_exchanger_1.fluid_out[CO2]
unkR[403] = unkR[442] ;
//[E-58]  Heat_exchanger_1.fluid_out[H2] = Inlet_LH2.fluidV[LH2]
unkR[443] = unkR[12] ;
//[E-59]  Turbine_FUEL.f_in.fluid[H2] = Heat_exchanger_1.fluid_out[H2]
unkR[404] = unkR[443] ;
//[E-60]  Heat_exchanger_1.fluid_out[He] = Inlet_LH2.fluidV[He]
unkR[444] = unkR[27] ;
//[E-61]  Turbine_FUEL.f_in.fluid[He] = Heat_exchanger_1.fluid_out[He]
unkR[405] = unkR[444] ;
//[E-62]  Heat_exchanger_1.fluid_out[N2] = Inlet_LH2.fluidV[N2]
unkR[445] = unkR[28] ;
//[E-63]  Turbine_FUEL.f_in.fluid[N2] = Heat_exchanger_1.fluid_out[N2]
unkR[406] = unkR[445] ;
//[E-64]  Heat_exchanger_1.fluid_out[O2] = Inlet_LH2.fluidV[LOX]
unkR[446] = unkR[4] ;
//[E-65]  Turbine_FUEL.f_in.fluid[O2] = Heat_exchanger_1.fluid_out[O2]
unkR[407] = unkR[446] ;
//[E-66]  Heat_exchanger_1.fluid_out[MMH_vapour] = Inlet_LH2.fluidV[MMH]
unkR[447] = unkR[15] ;
//[E-67]  Turbine_FUEL.f_in.fluid[MMH_vapour] = Heat_exchanger_1.fluid_out[MMH_vapour]
unkR[408] = unkR[447] ;
//[E-68]  Heat_exchanger_1.fluid_out[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour]
unkR[448] = unkR[31] ;
//[E-69]  Turbine_FUEL.f_in.fluid[H2O_vapour] = Heat_exchanger_1.fluid_out[H2O_vapour]
unkR[409] = unkR[448] ;
//[E-70]  Heat_exchanger_1.fluid_out[Comb_prod] = Inlet_LH2.fluidV[Comb_prod]
unkR[449] = unkR[32] ;
//[E-71]  Turbine_FUEL.f_in.fluid[Comb_prod] = Heat_exchanger_1.fluid_out[Comb_prod]
unkR[410] = unkR[449] ;
//[E-72]  Heat_exchanger_1.fluid_out[Comb_prod_M] = Inlet_LH2.fluidV[Comb_prod_M]
unkR[450] = unkR[33] ;
//[E-73]  Turbine_FUEL.f_in.fluid[Comb_prod_M] = Heat_exchanger_1.fluid_out[Comb_prod_M]
unkR[411] = unkR[450] ;
//[E-74]  Heat_exchanger_1.fluid_out[Comb_prod_cp] = Inlet_LH2.fluidV[Comb_prod_cp]
unkR[451] = unkR[34] ;
//[E-75]  Turbine_FUEL.f_in.fluid[Comb_prod_cp] = Heat_exchanger_1.fluid_out[Comb_prod_cp]
unkR[412] = unkR[451] ;
//[E-76]  Heat_exchanger_1.fluid_out[Comb_prod_c] = Inlet_LH2.fluidV[Comb_prod_c]
unkR[452] = unkR[35] ;
//[E-77]  Turbine_FUEL.f_in.fluid[Comb_prod_c] = Heat_exchanger_1.fluid_out[Comb_prod_c]
unkR[413] = unkR[452] ;
//[E-78]  Heat_exchanger_1.fluid_out[Comb_prod_cp_g] = Inlet_LH2.fluidV[Comb_prod_cp_g]
unkR[453] = unkR[36] ;
//[E-79]  Turbine_FUEL.f_in.fluid[Comb_prod_cp_g] = Heat_exchanger_1.fluid_out[Comb_prod_cp_g]
unkR[414] = unkR[453] ;
//[E-80]  Heat_exchanger_1.fluid_out[Comb_prod_Lv] = Inlet_LH2.fluidV[Comb_prod_Lv]
unkR[454] = unkR[37] ;
//[E-81]  Turbine_FUEL.f_in.fluid[Comb_prod_Lv] = Heat_exchanger_1.fluid_out[Comb_prod_Lv]
unkR[415] = unkR[454] ;
//[E-82]  Turbine_FUEL.f_in.fluid[Comb_prod_visc] = Heat_exchanger_1.visc_P
unkR[416] = unkR[473] ;
//[E-83]  Turbine_FUEL.f_in.fluid[Comb_prod_cond] = Heat_exchanger_1.cond_P
unkR[417] = unkR[379] ;
//[E-84]  Heat_exchanger_1.fluid_out[Comb_prod_T_boil] = Inlet_LH2.fluidV[Comb_prod_T_boil]
unkR[457] = unkR[40] ;
//[E-85]  Turbine_FUEL.f_in.fluid[Comb_prod_T_boil] = Heat_exchanger_1.fluid_out[Comb_prod_T_boil]
unkR[418] = unkR[457] ;
//[E-86]  Turbine_FUEL.f_in.fluid[Comb_prod_rho] = Heat_exchanger_1.rho_P
unkR[419] = unkR[470] ;
//[E-87]  Turbine_OXIDIZER.f_in.Tt = Turbine_FUEL.f_in.Tt - Turbine_FUEL.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[555] = unkR[554] - _div( unkR[560] , LPRES__cp(&unkR[382]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-88]  CCV.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[42] = unkR[334] * unkR[544] ;
//[E-89]  Heat_exchanger_1.f_in.pt = CCV.f_in.pt - CCV.dp
unkR[43] = unkR[42] - unkR[1] ;
//[E-90]  Turbine_FUEL.f_in.pt = Heat_exchanger_1.f_in.pt - Heat_exchanger_1.dp
unkR[420] = unkR[43] - unkR[380] ;
//[E-91]  Turbine_FUEL.MFP = CCV.f_in.W * sqrt(Turbine_FUEL.f_in.Tt) / Turbine_FUEL.f_in.pt
unkR[550] = _div( unkR[3] * _sqrt(unkR[554],"Turbine_FUEL.f_in.Tt") , unkR[420],"Turbine_FUEL.f_in.pt") ;
//[E-92]  Turbine_FUEL.alpha = Turbine_OXIDIZER.f_in.Tt / Turbine_FUEL.f_in.Tt
unkR[551] = _div( unkR[555] , unkR[554],"Turbine_FUEL.f_in.Tt") ;
//[E-93]  Turbine_FUEL.theta = 1 / Turbine_FUEL.alpha
unkR[561] = _div( 1. , unkR[551],"Turbine_FUEL.alpha") ;
//[E-94]  Turbine_FUEL.beta = (1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[552] = _pow( (1. - _div( (1. - unkR[551]) , unkR[553],"Turbine_FUEL.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[382]) - 1.) , LPRES__gamma(&unkR[382]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-95]  Turbine_OXIDIZER.f_in.pt = Turbine_FUEL.beta * Turbine_FUEL.f_in.pt
unkR[556] = unkR[552] * unkR[420] ;
//[E-96]  Turbine_FUEL.pi = 1 / Turbine_FUEL.beta
unkR[558] = _div( 1. , unkR[552],"Turbine_FUEL.beta") ;
//[E-97]  Turbine_FUEL.A_in = Turbine_FUEL.MFP * sqrt(LPRES.R(Turbine_FUEL.f_in.fluid)) / LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)
unkR[549] = _div( unkR[550] * _sqrt(LPRES__R(&unkR[382]),"LPRES.R(Turbine_FUEL.f_in.fluid)") , LPRES__FGAMMA(&unkR[382]),"LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)") ;
//[E-98]  Pump_LOX_OXIDIZER.tau_id = -Pump_LOX_OXIDIZER.dp / LPRES.rho(Inlet_LOX.fluidV)
unkR[543] = _div( -unkR[533] , LPRES__rho(&unkR[75]),"LPRES.rho(Inlet_LOX.fluidV)") ;
//[E-99]  Pump_LOX_OXIDIZER.tau = Pump_LOX_OXIDIZER.tau_id / Pump_LOX_OXIDIZER.eta_d
unkR[542] = _div( unkR[543] , unkR[534],"Pump_LOX_OXIDIZER.eta_d") ;
//[E-100]  Pump_LOX_OXIDIZER.m.Power = FlowMeter_LOX.f_in.W * Pump_LOX_OXIDIZER.tau
unkR[536] = unkR[336] * unkR[542] ;
//[E-101]  Turbine_OXIDIZER.m.Power = -Pump_LOX_OXIDIZER.m.Power
unkR[567] = -unkR[536] ;
//[E-102]  Turbine_OXIDIZER.tau = Turbine_OXIDIZER.m.Power / CCV.f_in.W
unkR[570] = _div( unkR[567] , unkR[3],"CCV.f_in.W") ;
//[E-103]  Pump_LOX_OXIDIZER.m.N = 0.10471975511966 * Turbine_OXIDIZER.rpm
unkR[535] = 0.10471975511966 * unkR[569] ;
//[E-104]  Nozzle_1.g.Tt = Turbine_OXIDIZER.f_in.Tt - Turbine_OXIDIZER.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[513] = unkR[555] - _div( unkR[570] , LPRES__cp(&unkR[382]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-105]  Turbine_OXIDIZER.MFP = CCV.f_in.W * sqrt(Turbine_OXIDIZER.f_in.Tt) / Turbine_OXIDIZER.f_in.pt
unkR[563] = _div( unkR[3] * _sqrt(unkR[555],"Turbine_OXIDIZER.f_in.Tt") , unkR[556],"Turbine_OXIDIZER.f_in.pt") ;
//[E-106]  Turbine_OXIDIZER.alpha = Nozzle_1.g.Tt / Turbine_OXIDIZER.f_in.Tt
unkR[564] = _div( unkR[513] , unkR[555],"Turbine_OXIDIZER.f_in.Tt") ;
//[E-107]  Turbine_OXIDIZER.theta = 1 / Turbine_OXIDIZER.alpha
unkR[571] = _div( 1. , unkR[564],"Turbine_OXIDIZER.alpha") ;
//[E-108]  Turbine_OXIDIZER.beta = (1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[565] = _pow( (1. - _div( (1. - unkR[564]) , unkR[566],"Turbine_OXIDIZER.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[382]) - 1.) , LPRES__gamma(&unkR[382]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-109]  Nozzle_1.g.pt = Turbine_OXIDIZER.beta * Turbine_OXIDIZER.f_in.pt
unkR[514] = unkR[565] * unkR[556] ;
//[E-110]  Turbine_OXIDIZER.pi = 1 / Turbine_OXIDIZER.beta
unkR[568] = _div( 1. , unkR[565],"Turbine_OXIDIZER.beta") ;
//[E-111]  Turbine_OXIDIZER.A_in = Turbine_OXIDIZER.MFP * sqrt(LPRES.R(Turbine_FUEL.f_in.fluid)) / LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)
unkR[562] = _div( unkR[563] * _sqrt(LPRES__R(&unkR[382]),"LPRES.R(Turbine_FUEL.f_in.fluid)") , LPRES__FGAMMA(&unkR[382]),"LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)") ;
//[E-112]  FlowMeter_LOX.f_in.pt = Inlet_LOX.pt + Pump_LOX_OXIDIZER.dp - MOV.dp
unkR[337] = unkR[496] + unkR[533] - unkR[503] ;
//[E-113]  FlowMeter_LOX.f_in.Tt = (Pump_LOX_OXIDIZER.tau_id - Pump_LOX_OXIDIZER.tau) / LPRES.cp(Inlet_LOX.fluidV) + Inlet_LOX.Tt
unkR[74] = _div( (unkR[543] - unkR[542]) , LPRES__cp(&unkR[75]),"LPRES.cp(Inlet_LOX.fluidV)") + unkR[495] ;
//[E-114]  Pump_LOX_OXIDIZER.psi = (Pump_LOX_OXIDIZER.psi_d - 1) / Pump_LOX_OXIDIZER.phi_d * Pump_LOX_OXIDIZER.phi + 1
unkR[539] = _div( (unkR[540] - 1.) , unkR[538],"Pump_LOX_OXIDIZER.phi_d") * unkR[537] + 1. ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-116]  Pump_LOX_OXIDIZER.r_m = Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.m.N
unkR[541] = _div( dyn[1] , unkR[535],"Pump_LOX_OXIDIZER.m.N") ;
//[E-117]  Pump_LOX_OXIDIZER.A_in = FlowMeter_LOX.f_in.W / LPRES.rho(Inlet_LOX.fluidV) / Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.phi
unkR[532] = _div( _div( _div( unkR[336] , LPRES__rho(&unkR[75]),"LPRES.rho(Inlet_LOX.fluidV)") , dyn[1],"Pump_LOX_OXIDIZER.U") , unkR[537],"Pump_LOX_OXIDIZER.phi") ;
//[E-118]  FlowMeter_LH2.i.Data[1] = abs(FlowMeter_LH2.f_in.W)
unkR[335] = abs(unkR[333]) ;
//[E-119]  MFV.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[500] = unkR[334] * unkR[544] ;
//[E-120]  Injector_FUEL.f_in.pt = MFV.f_in.pt - MFV.dp
unkR[481] = unkR[500] - unkR[499] ;
//[E-121]  Injector_FUEL.PR = Injector_FUEL.f_in.pt / Comb_Chamb.f_O.p_c
unkR[478] = _div( unkR[481] , unkR[113],"Comb_Chamb.f_O.p_c") ;
//[E-122]  Injector_FUEL.PR_ch = 0
unkR[479] = 0. ;
//[E-123]  Injector_FUEL.p_out_ch = 0
unkR[482] = 0. ;
//[E-124]  Injector_FUEL.A_ch = 0
unkR[475] = 0. ;
//[E-125]  Injector_FUEL.M_out = 0
unkR[477] = 0. ;
//[E-126]  Injector_FUEL.A = Comb_Chamb.f_F.W / sqrt(2 * LPRES.rho(Inlet_LH2.fluidV) * (Injector_FUEL.f_in.pt - Comb_Chamb.f_O.p_c)) / Injector_FUEL.C_D
unkR[474] = _div( _div( unkR[73] , _sqrt(2. * LPRES__rho(&unkR[4]) * (unkR[481] - unkR[113]),"2 * LPRES.rho(Inlet_LH2.fluidV) * (Injector_FUEL.f_in.pt - Comb_Chamb.f_O.p_c)"),"sqrt(2 * LPRES.rho(Inlet_LH2.fluidV) * (Injector_FUEL.f_in.pt - Comb_Chamb.f_O.p_c))") , unkR[476],"Injector_FUEL.C_D") ;
//[E-127]  Injector_FUEL.v_ideal = Comb_Chamb.f_F.W / (LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D)
unkR[483] = _div( unkR[73] , (LPRES__rho(&unkR[4]) * unkR[474] * unkR[476]),"LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D") ;
//[E-128]  Injector_FUEL.Re = LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.v_ideal * Injector_FUEL.C_D * sqrt(4 * Injector_FUEL.A / 3.14159265358979) / LPRES.visc(Inlet_LH2.fluidV)
unkR[480] = _div( LPRES__rho(&unkR[4]) * unkR[483] * unkR[476] * _sqrt(4. * unkR[474]/3.14159265358979,"4 * Injector_FUEL.A / 3.14159265358979") , LPRES__visc(&unkR[4]),"LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-129]  Injector_OXIDIZER.PR = FlowMeter_LOX.f_in.pt / Comb_Chamb.f_O.p_c
unkR[488] = _div( unkR[337] , unkR[113],"Comb_Chamb.f_O.p_c") ;
//[E-130]  Injector_OXIDIZER.PR_ch = 0
unkR[489] = 0. ;
//[E-131]  Injector_OXIDIZER.p_out_ch = 0
unkR[491] = 0. ;
//[E-132]  Injector_OXIDIZER.A_ch = 0
unkR[485] = 0. ;
//[E-133]  Injector_OXIDIZER.M_out = 0
unkR[487] = 0. ;
//[E-134]  Injector_OXIDIZER.A = FlowMeter_LOX.f_in.W / sqrt(2 * LPRES.rho(Inlet_LOX.fluidV) * (FlowMeter_LOX.f_in.pt - Comb_Chamb.f_O.p_c)) / Injector_OXIDIZER.C_D
unkR[484] = _div( _div( unkR[336] , _sqrt(2. * LPRES__rho(&unkR[75]) * (unkR[337] - unkR[113]),"2 * LPRES.rho(Inlet_LOX.fluidV) * (FlowMeter_LOX.f_in.pt - Comb_Chamb.f_O.p_c)"),"sqrt(2 * LPRES.rho(Inlet_LOX.fluidV) * (FlowMeter_LOX.f_in.pt - Comb_Chamb.f_O.p_c))") , unkR[486],"Injector_OXIDIZER.C_D") ;
//[E-135]  Injector_OXIDIZER.v_ideal = FlowMeter_LOX.f_in.W / (LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)
unkR[492] = _div( unkR[336] , (LPRES__rho(&unkR[75]) * unkR[484] * unkR[486]),"LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D") ;
//[E-136]  Injector_OXIDIZER.Re = LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.v_ideal * Injector_OXIDIZER.C_D * sqrt(4 * Injector_OXIDIZER.A / 3.14159265358979) / LPRES.visc(Inlet_LOX.fluidV)
unkR[490] = _div( LPRES__rho(&unkR[75]) * unkR[492] * unkR[486] * _sqrt(4. * unkR[484]/3.14159265358979,"4 * Injector_OXIDIZER.A / 3.14159265358979") , LPRES__visc(&unkR[75]),"LPRES.visc(Inlet_LOX.fluidV)") ;
//[E-137]  FlowMeter_LOX.i.Data[1] = abs(FlowMeter_LOX.f_in.W)
unkR[338] = abs(unkR[336]) ;
//[E-138]  Comb_Chamb.W_IO = FlowMeter_LOX.f_in.W - Comb_Chamb.W_O
unkR[65] = unkR[336] - unkR[66] ;
//[E-139]  ThrustMonitor_1.g.W = Comb_Chamb.W_IO + Comb_Chamb.W_O + Comb_Chamb.W_F + Comb_Chamb.W_IF
unkR[273] = unkR[65] + unkR[66] + unkR[62] + unkR[64] ;
//[E-140]  Comb_Chamb.fluid_O[LOX] = Inlet_LOX.fluidV[LOX] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[152] = _div( unkR[75] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-141]  Comb_Chamb.phi = Comb_Chamb.OF_st / Comb_Chamb.OF
unkR[316] = _div( unkR[54] , unkR[53],"Comb_Chamb.OF") ;
//[E-142]  Comb_Chamb.fluid_F[LOX] = Inlet_LH2.fluidV[LOX] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[114] = _div( unkR[4] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-143]  Comb_Chamb.W_F_st = Comb_Chamb.W_F / Comb_Chamb.phi
unkR[63] = _div( unkR[62] , unkR[316],"Comb_Chamb.phi") ;
//[E-144]  Comb_Chamb.fluid_P[LOX] =  IF[1] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LOX] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LOX] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LOX] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[190] = _div( (unkR[152] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[114] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[190] = _div( (unkR[152] * unkR[66] + unkR[114] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-145]  Comb_Chamb.fluid_O[NTO] = Inlet_LOX.fluidV[NTO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[153] = _div( unkR[76] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-146]  Comb_Chamb.fluid_F[NTO] = Inlet_LH2.fluidV[NTO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[115] = _div( unkR[5] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-147]  Comb_Chamb.fluid_P[NTO] =  IF[2] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[NTO] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NTO] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[NTO] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NTO] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[191] = _div( (unkR[153] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[115] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[191] = _div( (unkR[153] * unkR[66] + unkR[115] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-148]  Comb_Chamb.fluid_O[H2O2] = Inlet_LOX.fluidV[H2O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[154] = _div( unkR[77] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-149]  Comb_Chamb.fluid_F[H2O2] = Inlet_LH2.fluidV[H2O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[116] = _div( unkR[6] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-150]  Comb_Chamb.fluid_P[H2O2] =  IF[3] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[192] = _div( (unkR[154] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[116] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[192] = _div( (unkR[154] * unkR[66] + unkR[116] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-151]  Comb_Chamb.fluid_O[NH3] = Inlet_LOX.fluidV[NH3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[155] = _div( unkR[78] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-152]  Comb_Chamb.fluid_F[NH3] = Inlet_LH2.fluidV[NH3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[117] = _div( unkR[7] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-153]  Comb_Chamb.fluid_P[NH3] =  IF[27] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[NH3] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NH3] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[NH3] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NH3] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[193] = _div( (unkR[155] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[117] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[193] = _div( (unkR[155] * unkR[66] + unkR[117] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-154]  Comb_Chamb.fluid_O[HNO3] = Inlet_LOX.fluidV[HNO3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[156] = _div( unkR[79] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-155]  Comb_Chamb.fluid_F[HNO3] = Inlet_LH2.fluidV[HNO3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[118] = _div( unkR[8] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-156]  Comb_Chamb.fluid_P[HNO3] =  IF[4] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[HNO3] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[HNO3] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[HNO3] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[194] = _div( (unkR[156] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[118] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[194] = _div( (unkR[156] * unkR[66] + unkR[118] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-157]  Comb_Chamb.fluid_O[LF2] = Inlet_LOX.fluidV[LF2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[157] = _div( unkR[80] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-158]  Comb_Chamb.fluid_F[LF2] = Inlet_LH2.fluidV[LF2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[119] = _div( unkR[9] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-159]  Comb_Chamb.fluid_P[LF2] =  IF[5] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LF2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LF2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LF2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LF2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[195] = _div( (unkR[157] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[119] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[195] = _div( (unkR[157] * unkR[66] + unkR[119] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-160]  Comb_Chamb.fluid_O[RP_1] = Inlet_LOX.fluidV[RP_1] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[158] = _div( unkR[81] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-161]  Comb_Chamb.fluid_F[RP_1] = Inlet_LH2.fluidV[RP_1] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[120] = _div( unkR[10] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-162]  Comb_Chamb.fluid_P[RP_1] =  IF[6] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[RP_1] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[RP_1] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[RP_1] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[196] = _div( (unkR[158] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[120] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[196] = _div( (unkR[158] * unkR[66] + unkR[120] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-163]  Comb_Chamb.fluid_O[LCH4] = Inlet_LOX.fluidV[LCH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[159] = _div( unkR[82] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-164]  Comb_Chamb.fluid_F[LCH4] = Inlet_LH2.fluidV[LCH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[121] = _div( unkR[11] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-165]  Comb_Chamb.fluid_P[LCH4] =  IF[7] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LCH4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LCH4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LCH4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[197] = _div( (unkR[159] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[121] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[197] = _div( (unkR[159] * unkR[66] + unkR[121] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-166]  Comb_Chamb.fluid_O[LH2] = Inlet_LOX.fluidV[LH2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[160] = _div( unkR[83] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-167]  Comb_Chamb.fluid_F[LH2] = Inlet_LH2.fluidV[LH2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[122] = _div( unkR[12] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-168]  Comb_Chamb.fluid_P[LH2] =  IF[8] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LH2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LH2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LH2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LH2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[198] = _div( (unkR[160] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[122] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[198] = _div( (unkR[160] * unkR[66] + unkR[122] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-169]  Comb_Chamb.fluid_O[N2H4] = Inlet_LOX.fluidV[N2H4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[161] = _div( unkR[84] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-170]  Comb_Chamb.fluid_F[N2H4] = Inlet_LH2.fluidV[N2H4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[123] = _div( unkR[13] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-171]  Comb_Chamb.fluid_P[N2H4] =  IF[9] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[N2H4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2H4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2H4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[199] = _div( (unkR[161] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[123] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[199] = _div( (unkR[161] * unkR[66] + unkR[123] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-172]  Comb_Chamb.fluid_O[UDMH] = Inlet_LOX.fluidV[UDMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[162] = _div( unkR[85] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-173]  Comb_Chamb.fluid_F[UDMH] = Inlet_LH2.fluidV[UDMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[124] = _div( unkR[14] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-174]  Comb_Chamb.fluid_P[UDMH] =  IF[10] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[UDMH] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[UDMH] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[UDMH] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[200] = _div( (unkR[162] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[124] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[200] = _div( (unkR[162] * unkR[66] + unkR[124] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-175]  Comb_Chamb.fluid_O[MMH] = Inlet_LOX.fluidV[MMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[163] = _div( unkR[86] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-176]  Comb_Chamb.fluid_F[MMH] = Inlet_LH2.fluidV[MMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[125] = _div( unkR[15] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-177]  Comb_Chamb.fluid_P[MMH] =  IF[11] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[MMH] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[MMH] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[201] = _div( (unkR[163] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[125] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[201] = _div( (unkR[163] * unkR[66] + unkR[125] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-178]  Comb_Chamb.fluid_O[JP_10] = Inlet_LOX.fluidV[JP_10] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[164] = _div( unkR[87] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-179]  Comb_Chamb.fluid_F[JP_10] = Inlet_LH2.fluidV[JP_10] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[126] = _div( unkR[16] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-180]  Comb_Chamb.fluid_P[JP_10] =  IF[12] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[JP_10] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[JP_10] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[JP_10] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[202] = _div( (unkR[164] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[126] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[202] = _div( (unkR[164] * unkR[66] + unkR[126] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-181]  Comb_Chamb.fluid_O[Kerox] = Inlet_LOX.fluidV[Kerox] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[165] = _div( unkR[88] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-182]  Comb_Chamb.fluid_F[Kerox] = Inlet_LH2.fluidV[Kerox] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[127] = _div( unkR[17] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-183]  Comb_Chamb.fluid_P[Kerox] =  IF[13] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Kerox] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Kerox] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Kerox] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[203] = _div( (unkR[165] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[127] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[203] = _div( (unkR[165] * unkR[66] + unkR[127] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-184]  Comb_Chamb.fluid_O[Oil] = Inlet_LOX.fluidV[Oil] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[166] = _div( unkR[89] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-185]  Comb_Chamb.fluid_F[Oil] = Inlet_LH2.fluidV[Oil] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[128] = _div( unkR[18] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-186]  Comb_Chamb.fluid_P[Oil] =  IF[14] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Oil] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Oil] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Oil] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Oil] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[204] = _div( (unkR[166] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[128] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[204] = _div( (unkR[166] * unkR[66] + unkR[128] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-187]  Comb_Chamb.fluid_O[H2O] = Inlet_LOX.fluidV[H2O] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[167] = _div( unkR[90] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-188]  Comb_Chamb.fluid_F[H2O] = Inlet_LH2.fluidV[H2O] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[129] = _div( unkR[19] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-189]  Comb_Chamb.fluid_P[H2O] =  IF[15] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[205] = _div( (unkR[167] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[129] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[205] = _div( (unkR[167] * unkR[66] + unkR[129] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-190]  Comb_Chamb.fluid_O[IPA] = Inlet_LOX.fluidV[IPA] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[168] = _div( unkR[91] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-191]  Comb_Chamb.fluid_F[IPA] = Inlet_LH2.fluidV[IPA] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[130] = _div( unkR[20] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-192]  Comb_Chamb.fluid_P[IPA] =  IF[16] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[IPA] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[IPA] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[IPA] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[IPA] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[206] = _div( (unkR[168] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[130] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[206] = _div( (unkR[168] * unkR[66] + unkR[130] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-193]  Comb_Chamb.fluid_O[Air] = Inlet_LOX.fluidV[Air] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[169] = _div( unkR[92] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-194]  Comb_Chamb.fluid_F[Air] = Inlet_LH2.fluidV[Air] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[131] = _div( unkR[21] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-195]  Comb_Chamb.fluid_P[Air] =  IF[17] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Air] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Air] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Air] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Air] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[207] = _div( (unkR[169] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[131] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[207] = _div( (unkR[169] * unkR[66] + unkR[131] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-196]  Comb_Chamb.fluid_O[Ar] = Inlet_LOX.fluidV[Ar] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[170] = _div( unkR[93] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-197]  Comb_Chamb.fluid_F[Ar] = Inlet_LH2.fluidV[Ar] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[132] = _div( unkR[22] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-198]  Comb_Chamb.fluid_P[Ar] =  IF[18] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Ar] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Ar] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Ar] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Ar] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[208] = _div( (unkR[170] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[132] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[208] = _div( (unkR[170] * unkR[66] + unkR[132] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-199]  Comb_Chamb.fluid_O[CH4] = Inlet_LOX.fluidV[CH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[171] = _div( unkR[94] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-200]  Comb_Chamb.fluid_F[CH4] = Inlet_LH2.fluidV[CH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[133] = _div( unkR[23] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-201]  Comb_Chamb.fluid_P[CH4] =  IF[19] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CH4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CH4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CH4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CH4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[209] = _div( (unkR[171] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[133] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[209] = _div( (unkR[171] * unkR[66] + unkR[133] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-202]  Comb_Chamb.fluid_O[CO] = Inlet_LOX.fluidV[CO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[172] = _div( unkR[95] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-203]  Comb_Chamb.fluid_F[CO] = Inlet_LH2.fluidV[CO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[134] = _div( unkR[24] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-204]  Comb_Chamb.fluid_P[CO] =  IF[20] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CO] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CO] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[210] = _div( (unkR[172] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[134] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[210] = _div( (unkR[172] * unkR[66] + unkR[134] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-205]  Comb_Chamb.fluid_O[CO2] = Inlet_LOX.fluidV[CO2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[173] = _div( unkR[96] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-206]  Comb_Chamb.fluid_F[CO2] = Inlet_LH2.fluidV[CO2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[135] = _div( unkR[25] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-207]  Comb_Chamb.fluid_P[CO2] =  IF[21] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CO2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CO2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[211] = _div( (unkR[173] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[135] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[211] = _div( (unkR[173] * unkR[66] + unkR[135] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-208]  Comb_Chamb.fluid_O[H2] = Inlet_LOX.fluidV[H2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[174] = _div( unkR[97] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-209]  Comb_Chamb.fluid_F[H2] = Inlet_LH2.fluidV[H2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[136] = _div( unkR[26] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-210]  Comb_Chamb.fluid_P[H2] =  IF[22] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[212] = _div( (unkR[174] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[136] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[212] = _div( (unkR[174] * unkR[66] + unkR[136] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-211]  Comb_Chamb.fluid_O[He] = Inlet_LOX.fluidV[He] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[175] = _div( unkR[98] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-212]  Comb_Chamb.fluid_F[He] = Inlet_LH2.fluidV[He] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[137] = _div( unkR[27] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-213]  Comb_Chamb.fluid_P[He] =  IF[23] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[He] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[He] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[He] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[He] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[213] = _div( (unkR[175] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[137] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[213] = _div( (unkR[175] * unkR[66] + unkR[137] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-214]  Comb_Chamb.fluid_O[N2] = Inlet_LOX.fluidV[N2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[176] = _div( unkR[99] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-215]  Comb_Chamb.fluid_F[N2] = Inlet_LH2.fluidV[N2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[138] = _div( unkR[28] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-216]  Comb_Chamb.fluid_P[N2] =  IF[24] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[N2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[N2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[214] = _div( (unkR[176] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[138] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[214] = _div( (unkR[176] * unkR[66] + unkR[138] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-217]  Comb_Chamb.fluid_O[O2] = Inlet_LOX.fluidV[O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[177] = _div( unkR[100] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-218]  Comb_Chamb.fluid_F[O2] = Inlet_LH2.fluidV[O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[139] = _div( unkR[29] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-219]  Comb_Chamb.fluid_P[O2] =  IF[25] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[O2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[O2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[O2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[O2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[215] = _div( (unkR[177] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[139] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[215] = _div( (unkR[177] * unkR[66] + unkR[139] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-220]  Comb_Chamb.fluid_O[MMH_vapour] = Inlet_LOX.fluidV[MMH_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[178] = _div( unkR[101] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-221]  Comb_Chamb.fluid_F[MMH_vapour] = Inlet_LH2.fluidV[MMH_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[140] = _div( unkR[30] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-222]  Comb_Chamb.fluid_P[MMH_vapour] =  IF[26] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[MMH_vapour] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH_vapour] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH_vapour] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[216] = _div( (unkR[178] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[140] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[216] = _div( (unkR[178] * unkR[66] + unkR[140] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-223]  Comb_Chamb.fluid_O[H2O_vapour] = Inlet_LOX.fluidV[H2O_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[179] = _div( unkR[102] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-224]  Comb_Chamb.fluid_F[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[141] = _div( unkR[31] , (1. - unkR[32]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-225]  Comb_Chamb.fluid_P[H2O_vapour] =  IF[28] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O_vapour] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O_vapour] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O_vapour] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[217] = _div( (unkR[179] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[141] * MATH__max(unkR[316] - 1., 0.) * unkR[63]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[217] = _div( (unkR[179] * unkR[66] + unkR[141] * unkR[62]) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-226]  Comb_Chamb.fluid_O[Comb_prod] = 0
unkR[180] = 0. ;
//[E-227]  Comb_Chamb.fluid_F[Comb_prod] = 0
unkR[142] = 0. ;
//[E-228]  Comb_Chamb.fluid_P[Comb_prod] =  IF[29] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Comb_prod] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Comb_prod] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st + (1 - MATH.max(1 - Comb_Chamb.phi, 0)) * (Comb_Chamb.W_O + Comb_Chamb.W_F_st)) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[218] = _div( (unkR[180] * MATH__max(1. - unkR[316], 0.) * unkR[66] + unkR[142] * MATH__max(unkR[316] - 1., 0.) * unkR[63] + (1. - MATH__max(1. - unkR[316], 0.)) * (unkR[66] + unkR[63])) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[218] = 0. ;
}
//[E-229]  Comb_Chamb.fluid_P[Comb_prod_M] =  IF[30] (Comb_Chamb.Combustion) Comb_Chamb.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[219] = unkR[52] ;
}
else 
{
unkR[219] = 0. ;
}
//[E-230]  Comb_Chamb.fluid_P[Comb_prod_cp] =  IF[31] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[220] = unkR[70] ;
}
else 
{
unkR[220] = 0. ;
}
//[E-231]  Comb_Chamb.fluid_P[Comb_prod_c] =  IF[32] (Comb_Chamb.Combustion) Comb_Chamb.c_P	 ELSE 0
if( unkI[0] ) 
{
unkR[221] = unkR[67] ;
}
else 
{
unkR[221] = 0. ;
}
//[E-232]  Comb_Chamb.fluid_P[Comb_prod_cp_g] =  IF[33] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[222] = unkR[70] ;
}
else 
{
unkR[222] = 0. ;
}
//[E-233]  Comb_Chamb.fluid_P[Comb_prod_Lv] =  IF[34] (Comb_Chamb.Combustion) Comb_Chamb.Lv_P	 ELSE 0
if( unkI[0] ) 
{
unkR[223] = unkR[51] ;
}
else 
{
unkR[223] = 0. ;
}
//[E-234]  Comb_Chamb.fluid_P[Comb_prod_visc] =  IF[35] (Comb_Chamb.Combustion) Comb_Chamb.visc_P	 ELSE 0
if( unkI[0] ) 
{
unkR[224] = unkR[317] ;
}
else 
{
unkR[224] = 0. ;
}
//[E-235]  Comb_Chamb.fluid_P[Comb_prod_cond] =  IF[36] (Comb_Chamb.Combustion) Comb_Chamb.cond_P	 ELSE 0
if( unkI[0] ) 
{
unkR[225] = unkR[69] ;
}
else 
{
unkR[225] = 0. ;
}
//[E-236]  Comb_Chamb.fluid_P[Comb_prod_T_boil] =  IF[37] (Comb_Chamb.Combustion) Comb_Chamb.T_boil_P	 ELSE 0
if( unkI[0] ) 
{
unkR[226] = unkR[59] ;
}
else 
{
unkR[226] = 0. ;
}
//[E-237]  Comb_Chamb.fluid_P[Comb_prod_rho] = 0
unkR[227] = 0. ;
//[E-238]  LPRES.Vaporisation_mix(Comb_Chamb.fluid_P, Comb_Chamb.fluid_P_vap) %%% (OUT VAR)Comb_Chamb.fluid_P_vap 
LPRES__Vaporisation_mix(&unkR[190], &unkR[234]);
//[E-239]  ThrustMonitor_1.g.fluid[LOX] = Comb_Chamb.fluid_P_vap[LOX] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[274] = _div( unkR[234] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-240]  ThrustMonitor_1.g.fluid[NTO] = Comb_Chamb.fluid_P_vap[NTO] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[275] = _div( unkR[235] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-241]  ThrustMonitor_1.g.fluid[H2O2] = Comb_Chamb.fluid_P_vap[H2O2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[276] = _div( unkR[236] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-242]  ThrustMonitor_1.g.fluid[NH3] = Comb_Chamb.fluid_P_vap[NH3] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[277] = _div( unkR[237] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-243]  ThrustMonitor_1.g.fluid[HNO3] = Comb_Chamb.fluid_P_vap[HNO3] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[278] = _div( unkR[238] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-244]  ThrustMonitor_1.g.fluid[LF2] = Comb_Chamb.fluid_P_vap[LF2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[279] = _div( unkR[239] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-245]  ThrustMonitor_1.g.fluid[RP_1] = Comb_Chamb.fluid_P_vap[RP_1] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[280] = _div( unkR[240] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-246]  ThrustMonitor_1.g.fluid[LCH4] = Comb_Chamb.fluid_P_vap[LCH4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[281] = _div( unkR[241] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-247]  ThrustMonitor_1.g.fluid[LH2] = Comb_Chamb.fluid_P_vap[LH2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[282] = _div( unkR[242] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-248]  ThrustMonitor_1.g.fluid[N2H4] = Comb_Chamb.fluid_P_vap[N2H4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[283] = _div( unkR[243] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-249]  ThrustMonitor_1.g.fluid[UDMH] = Comb_Chamb.fluid_P_vap[UDMH] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[284] = _div( unkR[244] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-250]  ThrustMonitor_1.g.fluid[MMH] = Comb_Chamb.fluid_P_vap[MMH] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[285] = _div( unkR[245] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-251]  ThrustMonitor_1.g.fluid[JP_10] = Comb_Chamb.fluid_P_vap[JP_10] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[286] = _div( unkR[246] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-252]  ThrustMonitor_1.g.fluid[Kerox] = Comb_Chamb.fluid_P_vap[Kerox] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[287] = _div( unkR[247] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-253]  ThrustMonitor_1.g.fluid[Oil] = Comb_Chamb.fluid_P_vap[Oil] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[288] = _div( unkR[248] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-254]  ThrustMonitor_1.g.fluid[H2O] = Comb_Chamb.fluid_P_vap[H2O] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[289] = _div( unkR[249] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-255]  ThrustMonitor_1.g.fluid[IPA] = Comb_Chamb.fluid_P_vap[IPA] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[290] = _div( unkR[250] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-256]  ThrustMonitor_1.g.fluid[Air] = Comb_Chamb.fluid_P_vap[Air] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[291] = _div( unkR[251] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-257]  ThrustMonitor_1.g.fluid[Ar] = Comb_Chamb.fluid_P_vap[Ar] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[292] = _div( unkR[252] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-258]  ThrustMonitor_1.g.fluid[CH4] = Comb_Chamb.fluid_P_vap[CH4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[293] = _div( unkR[253] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-259]  ThrustMonitor_1.g.fluid[CO] = Comb_Chamb.fluid_P_vap[CO] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[294] = _div( unkR[254] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-260]  ThrustMonitor_1.g.fluid[CO2] = Comb_Chamb.fluid_P_vap[CO2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[295] = _div( unkR[255] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-261]  ThrustMonitor_1.g.fluid[H2] = Comb_Chamb.fluid_P_vap[H2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[296] = _div( unkR[256] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-262]  ThrustMonitor_1.g.fluid[He] = Comb_Chamb.fluid_P_vap[He] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[297] = _div( unkR[257] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-263]  ThrustMonitor_1.g.fluid[N2] = Comb_Chamb.fluid_P_vap[N2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[298] = _div( unkR[258] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-264]  ThrustMonitor_1.g.fluid[O2] = Comb_Chamb.fluid_P_vap[O2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[299] = _div( unkR[259] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-265]  ThrustMonitor_1.g.fluid[MMH_vapour] = Comb_Chamb.fluid_P_vap[MMH_vapour] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[300] = _div( unkR[260] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-266]  ThrustMonitor_1.g.fluid[H2O_vapour] = Comb_Chamb.fluid_P_vap[H2O_vapour] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[301] = _div( unkR[261] * (unkR[66] + unkR[62]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-267]  ThrustMonitor_1.g.fluid[Comb_prod] = (Comb_Chamb.fluid_P_vap[Comb_prod] * (Comb_Chamb.W_O + Comb_Chamb.W_F) + Comb_Chamb.W_IO + Comb_Chamb.W_IF) / ThrustMonitor_1.g.W
unkR[302] = _div( (unkR[262] * (unkR[66] + unkR[62]) + unkR[65] + unkR[64]) , unkR[273],"ThrustMonitor_1.g.W") ;
//[E-268]  ThrustMonitor_1.g.fluid[Comb_prod_M] = Comb_Chamb.fluid_P_vap[Comb_prod_M]
unkR[303] = unkR[263] ;
//[E-269]  ThrustMonitor_1.g.fluid[Comb_prod_cp] = Comb_Chamb.fluid_P_vap[Comb_prod_cp]
unkR[304] = unkR[264] ;
//[E-270]  ThrustMonitor_1.g.fluid[Comb_prod_c] = Comb_Chamb.fluid_P_vap[Comb_prod_c]
unkR[305] = unkR[265] ;
//[E-271]  ThrustMonitor_1.g.fluid[Comb_prod_cp_g] = Comb_Chamb.fluid_P_vap[Comb_prod_cp_g]
unkR[306] = unkR[266] ;
//[E-272]  ThrustMonitor_1.g.fluid[Comb_prod_Lv] = Comb_Chamb.fluid_P_vap[Comb_prod_Lv]
unkR[307] = unkR[267] ;
//[E-273]  ThrustMonitor_1.g.fluid[Comb_prod_visc] = Comb_Chamb.fluid_P_vap[Comb_prod_visc]
unkR[308] = unkR[268] ;
//[E-274]  ThrustMonitor_1.g.fluid[Comb_prod_cond] = Comb_Chamb.fluid_P_vap[Comb_prod_cond]
unkR[309] = unkR[269] ;
//[E-275]  ThrustMonitor_1.g.fluid[Comb_prod_T_boil] = Comb_Chamb.fluid_P_vap[Comb_prod_T_boil]
unkR[310] = unkR[270] ;
//[E-276]  ThrustMonitor_1.g.fluid[Comb_prod_rho] = Comb_Chamb.fluid_P_vap[Comb_prod_rho]
unkR[311] = unkR[271] ;
//[E-277]  LPRES.Decomposition_fun(Comb_Chamb.fluid_P_vap, Comb_Chamb.fluid_P_decomp) %%% (OUT VAR)Comb_Chamb.fluid_P_decomp 
LPRES__Decomposition_fun(&unkR[234], &unkR[228]);
//[E-278]  Comb_Chamb.Q_comb_effective =  ZONE[1] (Comb_Chamb.Combustion) Comb_Chamb.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[57] = unkR[56] ;
else unkR[57] = 0. ;
//[E-279]  Comb_Chamb.fluid_O[Comb_prod_M] = 0
unkR[181] = 0. ;
//[E-280]  Comb_Chamb.fluid_O[Comb_prod_cp] = 0
unkR[182] = 0. ;
//[E-281]  Comb_Chamb.fluid_O[Comb_prod_c] = 0
unkR[183] = 0. ;
//[E-282]  Comb_Chamb.fluid_O[Comb_prod_cp_g] = 0
unkR[184] = 0. ;
//[E-283]  Comb_Chamb.fluid_O[Comb_prod_Lv] = 0
unkR[185] = 0. ;
//[E-284]  Comb_Chamb.fluid_O[Comb_prod_visc] = 0
unkR[186] = 0. ;
//[E-285]  Comb_Chamb.fluid_O[Comb_prod_cond] = 0
unkR[187] = 0. ;
//[E-286]  Comb_Chamb.fluid_O[Comb_prod_T_boil] = 0
unkR[188] = 0. ;
//[E-287]  Comb_Chamb.fluid_O[Comb_prod_rho] = 0
unkR[189] = 0. ;
//[E-288]  Comb_Chamb.fluid_F[Comb_prod_M] = 0
unkR[143] = 0. ;
//[E-289]  Comb_Chamb.fluid_F[Comb_prod_cp] = 0
unkR[144] = 0. ;
//[E-290]  Comb_Chamb.fluid_F[Comb_prod_c] = 0
unkR[145] = 0. ;
//[E-291]  Comb_Chamb.fluid_F[Comb_prod_cp_g] = 0
unkR[146] = 0. ;
//[E-292]  Comb_Chamb.fluid_F[Comb_prod_Lv] = 0
unkR[147] = 0. ;
//[E-293]  Comb_Chamb.fluid_F[Comb_prod_visc] = 0
unkR[148] = 0. ;
//[E-294]  Comb_Chamb.fluid_F[Comb_prod_cond] = 0
unkR[149] = 0. ;
//[E-295]  Comb_Chamb.fluid_F[Comb_prod_T_boil] = 0
unkR[150] = 0. ;
//[E-296]  Comb_Chamb.fluid_F[Comb_prod_rho] = 0
unkR[151] = 0. ;
//[E-297]  Comb_Chamb.cp_R = (Comb_Chamb.W_O * LPRES.cp(Comb_Chamb.fluid_O) + Comb_Chamb.W_F * LPRES.cp(Comb_Chamb.fluid_F)) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
unkR[71] = _div( (unkR[66] * LPRES__cp(&unkR[152]) + unkR[62] * LPRES__cp(&unkR[114])) , (unkR[66] + unkR[62]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
//[E-298]  Comb_Chamb.T_in = (LPRES.cp(Comb_Chamb.fluid_O) * FlowMeter_LOX.f_in.Tt + Comb_Chamb.phi / Comb_Chamb.OF_st * LPRES.cp(Comb_Chamb.fluid_F) * Comb_Chamb.f_F.T) / ((1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R)
unkR[61] = _div( (LPRES__cp(&unkR[152]) * unkR[74] + _div( unkR[316] , unkR[54],"Comb_Chamb.OF_st") * LPRES__cp(&unkR[114]) * unkR[2]) , ((1. + _div( unkR[316] , unkR[54],"Comb_Chamb.OF_st")) * unkR[71]),"(1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R") ;
//[E-299]  Comb_Chamb.T_c = (Comb_Chamb.eta_d * Comb_Chamb.Q_comb_effective / ((1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)) + Comb_Chamb.cp_R * (Comb_Chamb.T_in - 298.15)) / LPRES.cp(Comb_Chamb.fluid_P_vap) + 298.15
unkR[60] = _div( (_div( unkR[72] * unkR[57] , (_div( (1. + unkR[53]) , MATH__min(unkR[53], unkR[54]),"MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)")),"(1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)") + unkR[71] * (unkR[61] - 298.15)) , LPRES__cp(&unkR[234]),"LPRES.cp(Comb_Chamb.fluid_P_vap)") + 298.15 ;
//[E-300]  ThrustMonitor_1.g.Tt = (-((Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] * -Comb_Chamb.T_c + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] * -FlowMeter_LOX.f_in.Tt) - Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp] * -Comb_Chamb.f_F.T) / ((Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] + Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp])
unkR[272] = _div( (-(_div( (unkR[66] + unkR[62]) * unkR[228] , unkR[273],"ThrustMonitor_1.g.W") * unkR[229] * -unkR[60] + _div( unkR[65] , unkR[273],"ThrustMonitor_1.g.W") * unkR[105] * -unkR[74]) - _div( unkR[64] , unkR[273],"ThrustMonitor_1.g.W") * unkR[34] * -unkR[2]) , (_div( (unkR[66] + unkR[62]) * unkR[228] , unkR[273],"ThrustMonitor_1.g.W") * unkR[229] + _div( unkR[65] , unkR[273],"ThrustMonitor_1.g.W") * unkR[105] + _div( unkR[64] , unkR[273],"ThrustMonitor_1.g.W") * unkR[34]),"(Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] + Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp]") ;
//[E-301]  Comb_Chamb.A_th = ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / Comb_Chamb.f_O.p_c
unkR[49] = _div( _div( unkR[273] * _sqrt(LPRES__R(&unkR[274]) * unkR[272],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[274]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") , unkR[113],"Comb_Chamb.f_O.p_c") ;
//[E-302]  ThrustMonitor_1.g.A_out = Comb_Chamb.AR * Comb_Chamb.A_th
unkR[47] = unkR[45] * unkR[49] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-304]  ThrustMonitor_1.g.c_star = sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid)
unkR[68] = _div( _sqrt(LPRES__R(&unkR[274]) * unkR[272],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[274]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") ;
//[E-305]  ControlPanel.i_Comb.Data[1] = ThrustMonitor_1.g.c_star
unkR[315] = unkR[68] ;
//[E-306]  Comb_Chamb.Pr_r = 4 * LPRES.gamma(ThrustMonitor_1.g.fluid) / (9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5)
unkR[55] = _div( 4. * LPRES__gamma(&unkR[274]) , (9. * LPRES__gamma(&unkR[274]) - 5.),"9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-308]  Comb_Chamb.T_aw = ThrustMonitor_1.g.Tt * (1 + Comb_Chamb.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)
unkR[58] = unkR[272] * _div( (1. + _pow( unkR[55] , 0.33,"(Comb_Chamb.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[274]) - 1.) * _pow( dyn[3] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[274]) - 1.) * _pow( dyn[3] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2") ;
//[E-309]  Comb_Chamb.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor_1.g.fluid) ** 0.5 * Comb_Chamb.T_aw ** 0.6
unkR[318] = 1.184e-07 * _pow( LPRES__M(&unkR[274]) , 0.5,"(LPRES.M(ThrustMonitor_1.g.fluid))**(0.5)" ) * _pow( unkR[58] , 0.6,"(Comb_Chamb.T_aw)**(0.6)" ) ;
//[E-310]  Comb_Chamb.A_r = Comb_Chamb.A_th * Comb_Chamb.AR_r
unkR[48] = unkR[49] * unkR[46] ;
//[E-311]  Comb_Chamb.h_g = 0.026 / sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2 * Comb_Chamb.visc_r ** 0.2 * LPRES.cp(ThrustMonitor_1.g.fluid) / Comb_Chamb.Pr_r ** 0.6 * (Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star) ** 0.8 * (Comb_Chamb.A_th / Comb_Chamb.A_r) ** 0.9
unkR[314] = _div( 0.026 , _pow( _sqrt(4. * unkR[49]/3.14159265358979,"4 * Comb_Chamb.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * Comb_Chamb.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[318] , 0.2,"(Comb_Chamb.visc_r)**(0.2)" ) * LPRES__cp(&unkR[274]) , _pow( unkR[55] , 0.6,"(Comb_Chamb.Pr_r)**(0.6)" ),"Comb_Chamb.Pr_r ** 0.6") * _pow( (_div( unkR[113] , unkR[68],"ThrustMonitor_1.g.c_star")) , 0.8,"(Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star)**(0.8)" ) * _pow( (_div( unkR[49] , unkR[48],"Comb_Chamb.A_r")) , 0.9,"(Comb_Chamb.A_th / Comb_Chamb.A_r)**(0.9)" ) ;
//[E-312]  LPRES.Obtain_Vap_Prop(Inlet_LH2.fluidV, Heat_exchanger_1.Cp_v, Heat_exchanger_1.Lv_v, Heat_exchanger_1.T_boil_v, Heat_exchanger_1.mass_frac_v) %%% (OUT VAR)Heat_exchanger_1.Cp_v (OUT VAR)Heat_exchanger_1.Lv_v (OUT VAR)Heat_exchanger_1.T_boil_v (OUT VAR)Heat_exchanger_1.mass_frac_v 
LPRES__Obtain_Vap_Prop(&unkR[4], &unkR[339], &unkR[352], &unkR[367], &unkR[460]);
//[E-313]  Heat_exchanger_1.h.Q = CCV.f_in.W * (Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[01] * (Heat_exchanger_1.T_boil_v[01] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[02] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[01]) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Lv_v[01] + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[03] * (Heat_exchanger_1.T_boil_v[03] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[04] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[03]) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Lv_v[03] + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[05] * (Heat_exchanger_1.T_boil_v[05] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[06] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[05]) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Lv_v[05] + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[07] * (Heat_exchanger_1.T_boil_v[07] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[08] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[07]) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Lv_v[07] + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[09] * (Heat_exchanger_1.T_boil_v[09] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[10] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[09]) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Lv_v[09])
unkR[312] = unkR[3] * (unkR[460] * unkR[339] * (unkR[367] - unkR[2]) + unkR[460] * unkR[340] * (unkR[554] - unkR[367]) + unkR[460] * unkR[352] + unkR[462] * unkR[341] * (unkR[369] - unkR[2]) + unkR[462] * unkR[342] * (unkR[554] - unkR[369]) + unkR[462] * unkR[354] + unkR[464] * unkR[343] * (unkR[371] - unkR[2]) + unkR[464] * unkR[344] * (unkR[554] - unkR[371]) + unkR[464] * unkR[356] + unkR[466] * unkR[345] * (unkR[373] - unkR[2]) + unkR[466] * unkR[346] * (unkR[554] - unkR[373]) + unkR[466] * unkR[358] + unkR[468] * unkR[347] * (unkR[375] - unkR[2]) + unkR[468] * unkR[348] * (unkR[554] - unkR[375]) + unkR[468] * unkR[360]) ;
//[E-314]  Contact_Wall_1.Q = -Heat_exchanger_1.h.Q
unkR[322] = -unkR[312] ;
//[E-315]  Heat_exchanger_1.v = CCV.f_in.W / (Heat_exchanger_1.a * Heat_exchanger_1.b * LPRES.rho(Inlet_LH2.fluidV)) / Heat_exchanger_1.N
unkR[472] = _div( _div( unkR[3] , (unkR[377] * unkR[378] * LPRES__rho(&unkR[4])),"Heat_exchanger_1.a * Heat_exchanger_1.b * LPRES.rho(Inlet_LH2.fluidV)") , unkI[2],"Heat_exchanger_1.N") ;
//[E-316]  Heat_exchanger_1.D_hy = 2 * Heat_exchanger_1.a * Heat_exchanger_1.b / (Heat_exchanger_1.a + Heat_exchanger_1.b)
unkR[350] = _div( 2. * unkR[377] * unkR[378] , (unkR[377] + unkR[378]),"Heat_exchanger_1.a + Heat_exchanger_1.b") ;
//[E-317]  Heat_exchanger_1.Re = Turbine_FUEL.f_in.pt / (LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt) * Heat_exchanger_1.v * Heat_exchanger_1.D_hy / LPRES.visc(Turbine_FUEL.f_in.fluid) + LPRES.rho(Inlet_LH2.fluidV) * Heat_exchanger_1.v * Heat_exchanger_1.D_hy / LPRES.visc(Inlet_LH2.fluidV)
unkR[365] = _div( _div( unkR[420] , (LPRES__R(&unkR[382]) * unkR[554]),"LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt") * unkR[472] * unkR[350] , LPRES__visc(&unkR[382]),"LPRES.visc(Turbine_FUEL.f_in.fluid)") + _div( LPRES__rho(&unkR[4]) * unkR[472] * unkR[350] , LPRES__visc(&unkR[4]),"LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-318]  Heat_exchanger_1.Pr = LPRES.visc(Turbine_FUEL.f_in.fluid) * LPRES.cp(Turbine_FUEL.f_in.fluid) / LPRES.cond(Turbine_FUEL.f_in.fluid) + LPRES.visc(Inlet_LH2.fluidV) * LPRES.cp(Inlet_LH2.fluidV) / LPRES.cond(Inlet_LH2.fluidV)
unkR[364] = _div( LPRES__visc(&unkR[382]) * LPRES__cp(&unkR[382]) , LPRES__cond(&unkR[382]),"LPRES.cond(Turbine_FUEL.f_in.fluid)") + _div( LPRES__visc(&unkR[4]) * LPRES__cp(&unkR[4]) , LPRES__cond(&unkR[4]),"LPRES.cond(Inlet_LH2.fluidV)") ;
//[E-319]  Heat_exchanger_1.Nu = 0.027 * Heat_exchanger_1.Re ** 0.8 * Heat_exchanger_1.Pr ** 0.33
unkR[362] = 0.027 * _pow( unkR[365] , 0.8,"(Heat_exchanger_1.Re)**(0.8)" ) * _pow( unkR[364] , 0.33,"(Heat_exchanger_1.Pr)**(0.33)" ) ;
//[E-320]  Heat_exchanger_1.h_l = Heat_exchanger_1.Nu * LPRES.cond(Inlet_LH2.fluidV) / Heat_exchanger_1.D_hy
unkR[459] = _div( unkR[362] * LPRES__cond(&unkR[4]) , unkR[350],"Heat_exchanger_1.D_hy") ;
//[E-321]  Heat_exchanger_1.T_av = (Comb_Chamb.f_F.T + Turbine_FUEL.f_in.Tt) / 2
unkR[366] = (unkR[2] + unkR[554])/2. ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-327]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[516] = LPRES__ISA_Pressure(unkR[497]) ;
//[E-328]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[509] = _div( unkR[514] , unkR[516],"Nozzle_1.p_amb") ;
//[E-329]  Nozzle_1.PR_sl = ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2) ** (LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))
unkR[510] = _pow( ((LPRES__gamma(&unkR[382]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[382]) , (LPRES__gamma(&unkR[382]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1")),"((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2)**(LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))" ) ;
//[E-330]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[518] = _div( unkR[514] , unkR[510],"Nozzle_1.PR_sl") ;
//[E-331]  Nozzle_1.A_sl = CCV.f_in.W * sqrt(Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid)) / Nozzle_1.g.pt / LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)
unkR[507] = _div( _div( unkR[3] * _sqrt(unkR[513] * LPRES__R(&unkR[382]),"Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid)") , unkR[514],"Nozzle_1.g.pt") , LPRES__FGAMMA(&unkR[382]),"LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)") ;
//[E-332]  Nozzle_1.M_out =  ZONE[3] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))	  OTHERS 1
 if(m_branchZone[2]==0)
	unkR[508] = _sqrt(_div( 2. * (_pow( unkR[509] , (_div( (LPRES__gamma(&unkR[382]) - 1.) , LPRES__gamma(&unkR[382]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[382]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)") ;
else unkR[508] = 1. ;
//[E-333]  Nozzle_1.A =  ZONE[2] (Nozzle_1.M_out > 0) Nozzle_1.A_sl * ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) / Nozzle_1.M_out	  OTHERS Nozzle_1.A_sl * ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) / -Nozzle_1.M_out
 if(m_branchZone[1]==0)
	unkR[506] = _div( unkR[507] * _pow( (_div( (2. + (LPRES__gamma(&unkR[382]) - 1.) * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[382]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[382]) + 1.) , (2. * (LPRES__gamma(&unkR[382]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ) , unkR[508],"Nozzle_1.M_out") ;
else unkR[506] = _div( unkR[507] * _pow( (_div( (2. + (LPRES__gamma(&unkR[382]) - 1.) * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[382]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[382]) + 1.) , (2. * (LPRES__gamma(&unkR[382]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ) , -unkR[508],"-Nozzle_1.M_out") ;
//[E-334]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[517] = MATH__max(unkR[516], unkR[518]) ;
//[E-335]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[511] = _div( unkR[513] , (1. + (LPRES__gamma(&unkR[382]) - 1.)/2. * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-336]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out)
unkR[519] = unkR[508] * _sqrt(LPRES__gamma(&unkR[382]) * LPRES__R(&unkR[382]) * unkR[511],"LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out") ;
//[E-337]  Nozzle_1.Thrust = CCV.f_in.W * Nozzle_1.v_out + Nozzle_1.A * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[512] = unkR[3] * unkR[519] + unkR[506] * (unkR[517] - unkR[516]) ;
//[E-338]  Nozzle_1.i.Data[1] = Nozzle_1.Thrust
unkR[515] = unkR[512] ;
//[E-339]  ControlPanel.W_tot = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[330] = unkR[335] + unkR[338] ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-341]  ThrustMonitor_1.T_out = ThrustMonitor_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)
unkR[545] = _div( unkR[272] , (1. + (LPRES__gamma(&unkR[274]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor_1.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2") ;
//[E-342]  ThrustMonitor_1.v_out = ThrustMonitor_1.M_out * sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out)
unkR[548] = dyn[5] * _sqrt(LPRES__gamma(&unkR[274]) * LPRES__R(&unkR[274]) * unkR[545],"LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out") ;
//[E-343]  ThrustMonitor_1.p_out = Comb_Chamb.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))
unkR[547] = _div( unkR[113] , _pow( (1. + (LPRES__gamma(&unkR[274]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[274]) - 1.) , LPRES__gamma(&unkR[274]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))") ;
//[E-344]  ThrustMonitor_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[546] = LPRES__ISA_Pressure(unkR[497]) ;
//[E-345]  ControlPanel.Thrust = ThrustMonitor_1.g.W * ThrustMonitor_1.v_out + ThrustMonitor_1.g.A_out * (ThrustMonitor_1.p_out - ThrustMonitor_1.p_amb)
unkR[329] = unkR[273] * unkR[548] + unkR[47] * (unkR[547] - unkR[546]) ;
//[E-346]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[327] = _div( unkR[329] , unkR[330],"ControlPanel.W_tot") ;
//[E-347]  ControlPanel.C_E = ControlPanel.Isp / ThrustMonitor_1.g.c_star
unkR[326] = _div( unkR[327] , unkR[68],"ThrustMonitor_1.g.c_star") ;
//[E-348]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[328] = unkR[327]/9.80665 ;
//[E-349]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[331] = unkR[329] ;
//[E-350]  Heat_exchanger_1.P_av = 0.5 * Turbine_FUEL.f_in.pt + 0.5 * CCV.f_in.pt - 0.5 * CCV.dp
unkR[363] = 0.5 * unkR[420] + 0.5 * unkR[42] - 0.5 * unkR[1] ;
//[E-351]  Heat_exchanger_1.fluid_out[Comb_prod_visc] = Inlet_LH2.fluidV[Comb_prod_visc]
unkR[455] = unkR[38] ;
//[E-352]  Heat_exchanger_1.fluid_out[Comb_prod_cond] = Inlet_LH2.fluidV[Comb_prod_cond]
unkR[456] = unkR[39] ;
//[E-353]  Heat_exchanger_1.fluid_out[Comb_prod_rho] = Inlet_LH2.fluidV[Comb_prod_rho]
unkR[458] = unkR[41] ;
//[E-354]  Heat_exchanger_1.fluid_out[LOX] = -Turbine_FUEL.f_in.fluid[LOX]
unkR[421] = -unkR[382] ;
//[E-355]  Heat_exchanger_1.fluid_out[LCH4] = -Turbine_FUEL.f_in.fluid[LCH4]
unkR[428] = -unkR[389] ;
//[E-356]  Heat_exchanger_1.fluid_out[LH2] = -Turbine_FUEL.f_in.fluid[LH2]
unkR[429] = -unkR[390] ;
//[E-357]  Heat_exchanger_1.fluid_out[MMH] = -Turbine_FUEL.f_in.fluid[MMH]
unkR[432] = -unkR[393] ;
//[E-358]  Heat_exchanger_1.f = 0
unkR[381] = 0. ;
//[E-359]  Heat_exchanger_1.D_eq = 1.3 * (Heat_exchanger_1.a * Heat_exchanger_1.b) ** 0.625 / (Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25
unkR[349] = _div( 1.3 * _pow( (unkR[377] * unkR[378]) , 0.625,"(Heat_exchanger_1.a * Heat_exchanger_1.b)**(0.625)" ) , _pow( (unkR[377] + unkR[378]) , 0.25,"(Heat_exchanger_1.a + Heat_exchanger_1.b)**(0.25)" ),"(Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25") ;
//[E-360]  MFV.M_th = 0
unkR[498] = 0. ;
//[E-361]  MFV.rho_f = LPRES.rho(Inlet_LH2.fluidV)
unkR[501] = LPRES__rho(&unkR[4]) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-363]  MOV.M_th = 0
unkR[502] = 0. ;
//[E-364]  MOV.rho_f = LPRES.rho(Inlet_LOX.fluidV)
unkR[505] = LPRES__rho(&unkR[75]) ;
//[E-365]  MOV.f_in.pt = FlowMeter_LOX.f_in.pt + MOV.dp
unkR[504] = unkR[337] + unkR[503] ;

if( restartB || m_solveInternalBox[8] ) 
    fhyb8(dyn,ldr,TOLERANCE,1,50);
else fbox8(_time,dyn,ldr,res) ;

//[E-367]  CCV.M_th = 0
unkR[0] = 0. ;
//[E-368]  CCV.rho_f = LPRES.rho(Inlet_LH2.fluidV)
unkR[44] = LPRES__rho(&unkR[4]) ;

if( restartB || m_solveInternalBox[9] ) 
    fhyb9(dyn,ldr,TOLERANCE,1,50);
else fbox9(_time,dyn,ldr,res) ;

//[E-370]  ControlPanel.i_W.Data[1] = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[332] = unkR[335] + unkR[338] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[4])))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",288,"Pump_FUEL_LH2.","Liquid == LPRES.State(Inlet_LH2.fluidV)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[382])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",119,"Turbine_FUEL.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED TURBINE!");
if(!(2 == LPRES__State(&unkR[382])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",119,"Turbine_OXIDIZER.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED TURBINE!");
if(!(1 == LPRES__State(&unkR[75])))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",288,"Pump_LOX_OXIDIZER.","Liquid == LPRES.State(Inlet_LOX.fluidV)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(unkR[474] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_FUEL.","Injector_FUEL.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[4]) == 2 || 1 && LPRES__State(&unkR[4]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_FUEL."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(unkR[484] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_OXIDIZER.","Injector_OXIDIZER.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[75]) == 2 || 1 && LPRES__State(&unkR[75]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_OXIDIZER."," FALSE  AND LPRES.State(Inlet_LOX.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LOX.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(2 == LPRES__State(&unkR[382])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle_1.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[274])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",807,"ThrustMonitor_1.","Gas == LPRES.State(ThrustMonitor_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[5] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",808,"ThrustMonitor_1.","ThrustMonitor_1.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[547] , unkR[546],"ThrustMonitor_1.p_amb")) > (_pow( (1.88 * dyn[5] - 1) , -0.64,"(1.88 * ThrustMonitor_1.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",809,"ThrustMonitor_1.","(ThrustMonitor_1.p_out / ThrustMonitor_1.p_amb) > ((1.88 * ThrustMonitor_1.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(0 && LPRES__State(&unkR[4]) == 1 || 0 && LPRES__State(&unkR[4]) == 2 || 1 && LPRES__State(&unkR[4]) == 1 || 0 && LPRES__State(&unkR[4]) == 2))
		issueErrorAssert(216,9,24,98,"LPRES_CompHeat.el",284,"Heat_exchanger_1."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas","%s","CHECK HEAT EXCHANGER TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH HEAT EXCHANGER");
if(!(unkR[498] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"MFV.","MFV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[4]) == 2 || 1 && LPRES__State(&unkR[4]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"MFV."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
if(!(unkR[502] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"MOV.","MOV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[75]) == 2 || 1 && LPRES__State(&unkR[75]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"MOV."," FALSE  AND LPRES.State(Inlet_LOX.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LOX.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
if(!(unkR[0] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"CCV.","CCV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[4]) == 2 || 1 && LPRES__State(&unkR[4]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"CCV."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[178] * unkR[140] + unkR[155] * unkR[117] + unkR[179] * unkR[141]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
    ev[1]= unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[178] * unkR[140] + unkR[155] * unkR[117] + unkR[179] * unkR[141]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
    ev[2]= unkI[0] - 1; //Comb_Chamb.Combustion
    ev[3]= unkR[508]; //Nozzle_1.M_out > 0
    ev[4]= unkR[509] - unkR[510]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
     w[1] = cont[1] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__LE5B_valves_valves_design::executeWhen(double *_time,  int index )
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
void LPRES_EXAMPLES__LE5B_valves_valves_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Comb_Chamb.Q_comb_effective =  ZONE (Comb_Chamb.Combustion) Comb_Chamb.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Nozzle_1.A_sl =  ZONE (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)) OTHERS 1
     branchZone[2] = (cont[4] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__LE5B_valves_valves_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__LE5B_valves_valves_design::initDelays()
{
}


bool LPRES_EXAMPLES__LE5B_valves_valves_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__LE5B_valves_valves_design = 96748;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_design = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_design[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__LE5B_valves_valves_design;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_design;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_design;
return true;
}



bool LPRES_EXAMPLES__LE5B_valves_valves_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__LE5B_valves_valves_design = 168;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_design = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_design[] = 
{
"CQAAAAoAAAAAAAAAAQAAAAEAAAABAAAAAQAAAAIAAAABAAAAAQAAAAEAAAABAAAAAQAAAAIAAAADAAAABAAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_LPRES_EXAMPLES__LE5B_valves_valves_design;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_design;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__LE5B_valves_valves_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__LE5B_valves_valves_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__LE5B_valves_valves_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__LE5B_valves_valves_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__LE5B_valves_valves_design(name,dirInstall);
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
	sprintf(partitionName,"%s","valves_design");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+l+e5+b_valves.valves_design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


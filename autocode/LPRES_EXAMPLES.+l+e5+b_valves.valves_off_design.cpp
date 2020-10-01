//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_valves_valves_off_design_CPP
#define LPRES_EXAMPLES__LE5B_valves_valves_off_design_CPP

#include "LPRES_EXAMPLES.+l+e5+b_valves.valves_off_design.h"

LPRES_EXAMPLES__LE5B_valves_valves_off_design* LPRES_EXAMPLES__LE5B_valves_valves_off_design::s_current= NULL;

LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES_EXAMPLES__LE5B_valves_valves_off_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "LE5B_valves";
m_infoPartitionName = "valves_off_design";
m_infoModelName = "LPRES_EXAMPLES__LE5B_valves_valves_off_design";
m_infoModelFileName = "LPRES_EXAMPLES.+l+e5+b_valves.valves_off_design";
m_infoModelFileNameExtra = "+l+e5+b_valves.valves_off_design";
m_perfFlag = false;
m_infoComponentDate = "05/07/2020 14:04:39.296000";
m_infoPartitionDate = "05/07/2020 18:11:29.073000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "LPRES V2.0.1 LPRES_EXAMPLES V0.1 MATH V3.2.3 ";

m_solveInternalBox= new int[8]; 
int nbx;
for (nbx=0; nbx < 8 ; nbx++)
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
n_dyn=11;
dyn= new double[11] ;
static double tmp_dynInit[11]={ 1, 1, 1, 1, 1, 500, 500, 100, 100, 0.001, 0.001 } ;
dynInit= new double[11];
dcopy(11,dynInit,tmp_dynInit);


n_der=0;
der= new double[11] ;
static double tmp_derInit[11]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[11];
dcopy(11,derInit,tmp_derInit);


res= new double[11] ;
ldr= new double[11] ;
boxDyn= new double[11] ;
boxDer= new double[11] ;

n_unkR=570;
unkR= new double[570] ;
static double tmp_unkRInit[570]={ 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 110, 5, 1, 0, 
		0.05, 1, 800, 18, 0, 8, 0, 15100000, 0, 0, 200, 0, 0, 0, 0, 0, 
		0, 4182, 1, 0.001, 3100, 0, 0.99, 1, 1, 1, 1, 0, 0, 0, 0, 0, 
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
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0.001, 0, 1, 1, 
		0, 0, 1, 1, 150, 0.005, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 
		1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0.002, 0.004, 0.001, 3000000, 0, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 1000, 5e-05, 0, 0.001, 0.000539719389, 0, 0.5, 0, 10, 0, 0, 
		1, 0, 0, 0.05, 0, 0.5, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0.001, 0, 0, 1, 0, 0, 0, 1, 0, 0.02, 0, 0, 0, 0, 0, 
		0, 1, 1, 0, 0, 0, 0, 0, 0.000585042, 0, 0.612, 1, 0, 0, 0.4, 0, 
		0.7, 0.080282913, 0, 0, 0.000497590025, 0, 0.653, 1, 0, 0, 0.4, 0, 0.7, 0.0587298052, 0, 0, 
		0.9, 0, 0, 0, 0, 0.00131586493, 0, 0, 0, 0.476, 1, 1, 1, 0, 0, 0, 
		0, 0.00525651, 0, 0, 0, 0.392, 0, 0, 0, 0 } ;
unkRInit= new double[570];
dcopy(570,unkRInit,tmp_unkRInit);


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
n_nelg= 61;
n_neld= 0;
m_numBoxes= 7;
m_nNonLinearBoxes= 7;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::initInternalModels()
{
}

void LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__rho(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__visc(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[])
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


void LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__Decomposition_fun(double fluid_in[],double Data_Array[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__Lv(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__T_boil(double fluid[])
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


void LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__Obtain_Vap_Prop(double fluid_in[],double Cp_i[],double Lv_i[],double T_boil_i[],double fluid_out[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__cond(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void LPRES_EXAMPLES__LE5B_valves_valves_off_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__LE5B_valves_valves_off_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet_LH2.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[3]) ;
  // init(Inlet_LOX.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[75]) ;
  // init(Comb_Chamb.CombCha,100)
	if(!(unkR[45] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",164,"Comb_Chamb.","Comb_Chamb.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(29, &unkR[273]) ;
	unkI[0] = 1 ;
	if( unkI[1] == 1 ) {
	dyn[1] = 0.001 ;
	}
	else {
	dyn[1] = 2.80123632766838 ;
	}
  // init(Heat_exchanger_1.Heat_exchanger,100)
	if(!(0 && LPRES__State(&unkR[3]) == 1 || 0 && LPRES__State(&unkR[3]) == 2))
		issueErrorAssert(213,7,24,98,"LPRES_CompHeat.el",280,"Heat_exchanger_1."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas","%s","FLUID CHANGED ITS STATE!");

  // init(Nozzle_1.Nozzle,0)
	unkR[514] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-167]  Turbine_FUEL.f_in.pt = CCV.f_in.W * sqrt(Turbine_FUEL.f_in.Tt) / Turbine_FUEL.MFP
unkR[419] = _div( dyn[0] * _sqrt(unkR[554],"Turbine_FUEL.f_in.Tt") , unkR[550],"Turbine_FUEL.MFP") ;
//[E-168]  Heat_exchanger_1.v = CCV.f_in.W / (Heat_exchanger_1.a * Heat_exchanger_1.b * LPRES.rho(Inlet_LH2.fluidV)) / Heat_exchanger_1.N
unkR[471] = _div( _div( dyn[0] , (unkR[376] * unkR[377] * LPRES__rho(&unkR[3])),"Heat_exchanger_1.a * Heat_exchanger_1.b * LPRES.rho(Inlet_LH2.fluidV)") , unkI[2],"Heat_exchanger_1.N") ;
//[E-169]  Heat_exchanger_1.Re = Turbine_FUEL.f_in.pt / (LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt) * Heat_exchanger_1.v * Heat_exchanger_1.D_hy / LPRES.visc(Turbine_FUEL.f_in.fluid) + LPRES.rho(Inlet_LH2.fluidV) * Heat_exchanger_1.v * Heat_exchanger_1.D_hy / LPRES.visc(Inlet_LH2.fluidV)
unkR[364] = _div( _div( unkR[419] , (LPRES__R(&unkR[381]) * unkR[554]),"LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt") * unkR[471] * unkR[349] , LPRES__visc(&unkR[381]),"LPRES.visc(Turbine_FUEL.f_in.fluid)") + _div( LPRES__rho(&unkR[3]) * unkR[471] * unkR[349] , LPRES__visc(&unkR[3]),"LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-170]  Heat_exchanger_1.Nu = 0.027 * Heat_exchanger_1.Re ** 0.8 * Heat_exchanger_1.Pr ** 0.33
unkR[361] = 0.027 * _pow( unkR[364] , 0.8,"(Heat_exchanger_1.Re)**(0.8)" ) * _pow( unkR[363] , 0.33,"(Heat_exchanger_1.Pr)**(0.33)" ) ;
//[E-171]  Heat_exchanger_1.h_l = Heat_exchanger_1.Nu * LPRES.cond(Inlet_LH2.fluidV) / Heat_exchanger_1.D_hy
unkR[458] = _div( unkR[361] * LPRES__cond(&unkR[3]) , unkR[349],"Heat_exchanger_1.D_hy") ;
//[E-172]  Comb_Chamb.f_F.W = Comb_Chamb.W_F / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[71] = _div( dyn[2] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-173]  Comb_Chamb.W_IF = Comb_Chamb.f_F.W - Comb_Chamb.W_F
unkR[62] = unkR[71] - dyn[2] ;
//[E-174]  FlowMeter_LH2.f_in.W = CCV.f_in.W + Comb_Chamb.W_F + Comb_Chamb.W_IF
unkR[333] = dyn[0] + dyn[2] + unkR[62] ;
//[E-175]  Comb_Chamb.W_O = Comb_Chamb.OF * Comb_Chamb.W_F
unkR[64] = unkR[52] * dyn[2] ;
//[E-176]  FlowMeter_LOX.f_in.W = Comb_Chamb.W_O / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[74] = _div( unkR[64] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-177]  Comb_Chamb.W_IO = FlowMeter_LOX.f_in.W - Comb_Chamb.W_O
unkR[63] = unkR[74] - unkR[64] ;
//[E-178]  ThrustMonitor_1.g.W = Comb_Chamb.W_IO + Comb_Chamb.W_O + Comb_Chamb.W_F + Comb_Chamb.W_IF
unkR[272] = unkR[63] + unkR[64] + dyn[2] + unkR[62] ;
//[E-179]  Comb_Chamb.cp_R = (Comb_Chamb.W_O * LPRES.cp(Comb_Chamb.fluid_O) + Comb_Chamb.W_F * LPRES.cp(Comb_Chamb.fluid_F)) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
unkR[69] = _div( (unkR[64] * LPRES__cp(&unkR[151]) + dyn[2] * LPRES__cp(&unkR[113])) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
//[E-180]  Comb_Chamb.W_F_st = Comb_Chamb.W_F / Comb_Chamb.phi
unkR[61] = _div( dyn[2] , unkR[315],"Comb_Chamb.phi") ;
//[E-181]  Comb_Chamb.fluid_P[LOX] =  IF[1] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LOX] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LOX] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LOX] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[189] = _div( (unkR[151] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[113] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[189] = _div( (unkR[151] * unkR[64] + unkR[113] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-182]  Comb_Chamb.fluid_P[NTO] =  IF[2] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[NTO] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NTO] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[NTO] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NTO] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[190] = _div( (unkR[152] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[114] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[190] = _div( (unkR[152] * unkR[64] + unkR[114] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-183]  Comb_Chamb.fluid_P[H2O2] =  IF[3] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[191] = _div( (unkR[153] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[115] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[191] = _div( (unkR[153] * unkR[64] + unkR[115] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-184]  Comb_Chamb.fluid_P[HNO3] =  IF[4] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[HNO3] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[HNO3] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[HNO3] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[193] = _div( (unkR[155] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[117] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[193] = _div( (unkR[155] * unkR[64] + unkR[117] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-185]  Comb_Chamb.fluid_P[LF2] =  IF[5] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LF2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LF2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LF2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LF2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[194] = _div( (unkR[156] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[118] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[194] = _div( (unkR[156] * unkR[64] + unkR[118] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-186]  Comb_Chamb.fluid_P[RP_1] =  IF[6] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[RP_1] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[RP_1] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[RP_1] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[195] = _div( (unkR[157] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[119] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[195] = _div( (unkR[157] * unkR[64] + unkR[119] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-187]  Comb_Chamb.fluid_P[LCH4] =  IF[7] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LCH4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LCH4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LCH4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[196] = _div( (unkR[158] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[120] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[196] = _div( (unkR[158] * unkR[64] + unkR[120] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-188]  Comb_Chamb.fluid_P[LH2] =  IF[8] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LH2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LH2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LH2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LH2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[197] = _div( (unkR[159] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[121] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[197] = _div( (unkR[159] * unkR[64] + unkR[121] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-189]  Comb_Chamb.fluid_P[N2H4] =  IF[9] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[N2H4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2H4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2H4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[198] = _div( (unkR[160] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[122] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[198] = _div( (unkR[160] * unkR[64] + unkR[122] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-190]  Comb_Chamb.fluid_P[UDMH] =  IF[10] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[UDMH] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[UDMH] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[UDMH] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[199] = _div( (unkR[161] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[123] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[199] = _div( (unkR[161] * unkR[64] + unkR[123] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-191]  Comb_Chamb.fluid_P[MMH] =  IF[11] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[MMH] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[MMH] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[200] = _div( (unkR[162] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[124] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[200] = _div( (unkR[162] * unkR[64] + unkR[124] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-192]  Comb_Chamb.fluid_P[JP_10] =  IF[12] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[JP_10] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[JP_10] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[JP_10] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[201] = _div( (unkR[163] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[125] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[201] = _div( (unkR[163] * unkR[64] + unkR[125] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-193]  Comb_Chamb.fluid_P[Kerox] =  IF[13] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Kerox] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Kerox] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Kerox] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[202] = _div( (unkR[164] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[126] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[202] = _div( (unkR[164] * unkR[64] + unkR[126] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-194]  Comb_Chamb.fluid_P[Oil] =  IF[14] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Oil] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Oil] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Oil] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Oil] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[203] = _div( (unkR[165] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[127] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[203] = _div( (unkR[165] * unkR[64] + unkR[127] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-195]  Comb_Chamb.fluid_P[H2O] =  IF[15] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[204] = _div( (unkR[166] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[128] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[204] = _div( (unkR[166] * unkR[64] + unkR[128] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-196]  Comb_Chamb.fluid_P[IPA] =  IF[16] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[IPA] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[IPA] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[IPA] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[IPA] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[205] = _div( (unkR[167] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[129] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[205] = _div( (unkR[167] * unkR[64] + unkR[129] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-197]  Comb_Chamb.fluid_P[Air] =  IF[17] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Air] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Air] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Air] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Air] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[206] = _div( (unkR[168] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[130] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[206] = _div( (unkR[168] * unkR[64] + unkR[130] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-198]  Comb_Chamb.fluid_P[Ar] =  IF[18] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Ar] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Ar] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Ar] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Ar] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[207] = _div( (unkR[169] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[131] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[207] = _div( (unkR[169] * unkR[64] + unkR[131] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-199]  Comb_Chamb.fluid_P[CH4] =  IF[19] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CH4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CH4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CH4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CH4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[208] = _div( (unkR[170] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[132] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[208] = _div( (unkR[170] * unkR[64] + unkR[132] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-200]  Comb_Chamb.fluid_P[CO] =  IF[20] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CO] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CO] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[209] = _div( (unkR[171] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[133] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[209] = _div( (unkR[171] * unkR[64] + unkR[133] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-201]  Comb_Chamb.fluid_P[CO2] =  IF[21] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CO2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CO2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[210] = _div( (unkR[172] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[134] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[210] = _div( (unkR[172] * unkR[64] + unkR[134] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-202]  Comb_Chamb.fluid_P[H2] =  IF[22] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[211] = _div( (unkR[173] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[135] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[211] = _div( (unkR[173] * unkR[64] + unkR[135] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-203]  Comb_Chamb.fluid_P[He] =  IF[23] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[He] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[He] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[He] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[He] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[212] = _div( (unkR[174] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[136] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[212] = _div( (unkR[174] * unkR[64] + unkR[136] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-204]  Comb_Chamb.fluid_P[N2] =  IF[24] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[N2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[N2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[213] = _div( (unkR[175] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[137] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[213] = _div( (unkR[175] * unkR[64] + unkR[137] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-205]  Comb_Chamb.fluid_P[O2] =  IF[25] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[O2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[O2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[O2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[O2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[214] = _div( (unkR[176] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[138] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[214] = _div( (unkR[176] * unkR[64] + unkR[138] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-206]  Comb_Chamb.fluid_P[MMH_vapour] =  IF[26] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[MMH_vapour] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH_vapour] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH_vapour] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[215] = _div( (unkR[177] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[139] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[215] = _div( (unkR[177] * unkR[64] + unkR[139] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-207]  Comb_Chamb.fluid_P[NH3] =  IF[27] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[NH3] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NH3] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[NH3] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NH3] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[192] = _div( (unkR[154] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[116] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[192] = _div( (unkR[154] * unkR[64] + unkR[116] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-208]  Comb_Chamb.fluid_P[H2O_vapour] =  IF[28] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O_vapour] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O_vapour] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O_vapour] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[216] = _div( (unkR[178] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[140] * MATH__max(unkR[315] - 1., 0.) * unkR[61]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[216] = _div( (unkR[178] * unkR[64] + unkR[140] * dyn[2]) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-209]  Comb_Chamb.fluid_P[Comb_prod] =  IF[29] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Comb_prod] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Comb_prod] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st + (1 - MATH.max(1 - Comb_Chamb.phi, 0)) * (Comb_Chamb.W_O + Comb_Chamb.W_F_st)) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[217] = _div( (unkR[179] * MATH__max(1. - unkR[315], 0.) * unkR[64] + unkR[141] * MATH__max(unkR[315] - 1., 0.) * unkR[61] + (1. - MATH__max(1. - unkR[315], 0.)) * (unkR[64] + unkR[61])) , (unkR[64] + dyn[2]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[217] = 0. ;
}
//[E-210]  LPRES.Vaporisation_mix(Comb_Chamb.fluid_P, Comb_Chamb.fluid_P_vap) %%% (OUT VAR)Comb_Chamb.fluid_P_vap 
LPRES__Vaporisation_mix(&unkR[189], &unkR[233]);
//[E-211]  LPRES.Decomposition_fun(Comb_Chamb.fluid_P_vap, Comb_Chamb.fluid_P_decomp) %%% (OUT VAR)Comb_Chamb.fluid_P_decomp 
LPRES__Decomposition_fun(&unkR[233], &unkR[227]);
//[E-212]  ThrustMonitor_1.g.fluid[LOX] = Comb_Chamb.fluid_P_vap[LOX] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[273] = _div( unkR[233] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-213]  ThrustMonitor_1.g.fluid[NTO] = Comb_Chamb.fluid_P_vap[NTO] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[274] = _div( unkR[234] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-214]  ThrustMonitor_1.g.fluid[H2O2] = Comb_Chamb.fluid_P_vap[H2O2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[275] = _div( unkR[235] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-215]  ThrustMonitor_1.g.fluid[NH3] = Comb_Chamb.fluid_P_vap[NH3] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[276] = _div( unkR[236] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-216]  ThrustMonitor_1.g.fluid[HNO3] = Comb_Chamb.fluid_P_vap[HNO3] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[277] = _div( unkR[237] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-217]  ThrustMonitor_1.g.fluid[LF2] = Comb_Chamb.fluid_P_vap[LF2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[278] = _div( unkR[238] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-218]  ThrustMonitor_1.g.fluid[RP_1] = Comb_Chamb.fluid_P_vap[RP_1] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[279] = _div( unkR[239] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-219]  ThrustMonitor_1.g.fluid[LCH4] = Comb_Chamb.fluid_P_vap[LCH4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[280] = _div( unkR[240] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-220]  ThrustMonitor_1.g.fluid[LH2] = Comb_Chamb.fluid_P_vap[LH2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[281] = _div( unkR[241] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-221]  ThrustMonitor_1.g.fluid[N2H4] = Comb_Chamb.fluid_P_vap[N2H4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[282] = _div( unkR[242] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-222]  ThrustMonitor_1.g.fluid[UDMH] = Comb_Chamb.fluid_P_vap[UDMH] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[283] = _div( unkR[243] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-223]  ThrustMonitor_1.g.fluid[MMH] = Comb_Chamb.fluid_P_vap[MMH] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[284] = _div( unkR[244] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-224]  ThrustMonitor_1.g.fluid[JP_10] = Comb_Chamb.fluid_P_vap[JP_10] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[285] = _div( unkR[245] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-225]  ThrustMonitor_1.g.fluid[Kerox] = Comb_Chamb.fluid_P_vap[Kerox] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[286] = _div( unkR[246] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-226]  ThrustMonitor_1.g.fluid[Oil] = Comb_Chamb.fluid_P_vap[Oil] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[287] = _div( unkR[247] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-227]  ThrustMonitor_1.g.fluid[H2O] = Comb_Chamb.fluid_P_vap[H2O] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[288] = _div( unkR[248] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-228]  ThrustMonitor_1.g.fluid[IPA] = Comb_Chamb.fluid_P_vap[IPA] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[289] = _div( unkR[249] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-229]  ThrustMonitor_1.g.fluid[Air] = Comb_Chamb.fluid_P_vap[Air] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[290] = _div( unkR[250] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-230]  ThrustMonitor_1.g.fluid[Ar] = Comb_Chamb.fluid_P_vap[Ar] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[291] = _div( unkR[251] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-231]  ThrustMonitor_1.g.fluid[CH4] = Comb_Chamb.fluid_P_vap[CH4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[292] = _div( unkR[252] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-232]  ThrustMonitor_1.g.fluid[CO] = Comb_Chamb.fluid_P_vap[CO] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[293] = _div( unkR[253] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-233]  ThrustMonitor_1.g.fluid[CO2] = Comb_Chamb.fluid_P_vap[CO2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[294] = _div( unkR[254] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-234]  ThrustMonitor_1.g.fluid[H2] = Comb_Chamb.fluid_P_vap[H2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[295] = _div( unkR[255] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-235]  ThrustMonitor_1.g.fluid[He] = Comb_Chamb.fluid_P_vap[He] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[296] = _div( unkR[256] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-236]  ThrustMonitor_1.g.fluid[N2] = Comb_Chamb.fluid_P_vap[N2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[297] = _div( unkR[257] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-237]  ThrustMonitor_1.g.fluid[O2] = Comb_Chamb.fluid_P_vap[O2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[298] = _div( unkR[258] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-238]  ThrustMonitor_1.g.fluid[MMH_vapour] = Comb_Chamb.fluid_P_vap[MMH_vapour] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[299] = _div( unkR[259] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-239]  ThrustMonitor_1.g.fluid[H2O_vapour] = Comb_Chamb.fluid_P_vap[H2O_vapour] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[300] = _div( unkR[260] * (unkR[64] + dyn[2]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-240]  ThrustMonitor_1.g.fluid[Comb_prod] = (Comb_Chamb.fluid_P_vap[Comb_prod] * (Comb_Chamb.W_O + Comb_Chamb.W_F) + Comb_Chamb.W_IO + Comb_Chamb.W_IF) / ThrustMonitor_1.g.W
unkR[301] = _div( (unkR[261] * (unkR[64] + dyn[2]) + unkR[63] + unkR[62]) , unkR[272],"ThrustMonitor_1.g.W") ;
//[E-241]  ThrustMonitor_1.g.fluid[Comb_prod_M] = Comb_Chamb.fluid_P_vap[Comb_prod_M]
unkR[302] = unkR[262] ;
//[E-242]  ThrustMonitor_1.g.fluid[Comb_prod_cp] = Comb_Chamb.fluid_P_vap[Comb_prod_cp]
unkR[303] = unkR[263] ;
//[E-243]  ThrustMonitor_1.g.fluid[Comb_prod_c] = Comb_Chamb.fluid_P_vap[Comb_prod_c]
unkR[304] = unkR[264] ;
//[E-244]  ThrustMonitor_1.g.fluid[Comb_prod_cp_g] = Comb_Chamb.fluid_P_vap[Comb_prod_cp_g]
unkR[305] = unkR[265] ;
//[E-245]  ThrustMonitor_1.g.fluid[Comb_prod_Lv] = Comb_Chamb.fluid_P_vap[Comb_prod_Lv]
unkR[306] = unkR[266] ;
//[E-246]  ThrustMonitor_1.g.fluid[Comb_prod_visc] = Comb_Chamb.fluid_P_vap[Comb_prod_visc]
unkR[307] = unkR[267] ;
//[E-247]  ThrustMonitor_1.g.fluid[Comb_prod_cond] = Comb_Chamb.fluid_P_vap[Comb_prod_cond]
unkR[308] = unkR[268] ;
//[E-248]  ThrustMonitor_1.g.fluid[Comb_prod_T_boil] = Comb_Chamb.fluid_P_vap[Comb_prod_T_boil]
unkR[309] = unkR[269] ;
//[E-249]  ThrustMonitor_1.g.fluid[Comb_prod_rho] = Comb_Chamb.fluid_P_vap[Comb_prod_rho]
unkR[310] = unkR[270] ;
//[E-250]  Comb_Chamb.Pr_r = 4 * LPRES.gamma(ThrustMonitor_1.g.fluid) / (9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5)
unkR[54] = _div( 4. * LPRES__gamma(&unkR[273]) , (9. * LPRES__gamma(&unkR[273]) - 5.),"9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5") ;
//[E-251]  Comb_Chamb.AR_r = 1 / Comb_Chamb.M_r * LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,unkR[45],_div( _div( 1 , dyn[1],"Comb_Chamb.M_r") * LPRES__FGAMMA(&unkR[273]) , _sqrt(LPRES__gamma(&unkR[273]),"LPRES.gamma(ThrustMonitor_1.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[273]) - 1) * _pow( dyn[1] , 2,"(Comb_Chamb.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[273]) + 1) , (2 * (LPRES__gamma(&unkR[273]) - 1)),"2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))" ));
//[E-252]  Pump_FUEL_LH2.dp = -(Pump_FUEL_LH2.tau_id * LPRES.rho(Inlet_LH2.fluidV))
unkR[521] = -(dyn[3] * LPRES__rho(&unkR[3])) ;
//[E-253]  FlowMeter_LH2.f_in.pt = Inlet_LH2.pt + Pump_FUEL_LH2.dp
unkR[334] = unkR[493] + unkR[521] ;
//[E-254]  MFV.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[500] = unkR[334] * unkR[544] ;
//[E-255]  Injector_FUEL.f_in.pt = MFV.f_in.pt - 0.5 * Comb_Chamb.f_F.W ** 2 / (MFV.rho_f * MFV.A ** 2)
unkR[480] = unkR[500] - _div( 0.5 * _pow( unkR[71] , 2.,"(Comb_Chamb.f_F.W)**(2)" ) , (unkR[501] * _pow( unkR[497] , 2.,"(MFV.A)**(2)" )),"MFV.rho_f * MFV.A ** 2") ;
//[E-256]  Comb_Chamb.f_O.p_c = Injector_FUEL.f_in.pt - (Comb_Chamb.f_F.W / (Injector_FUEL.A * Injector_FUEL.C_D)) ** 2 / (2 * LPRES.rho(Inlet_LH2.fluidV))
unkR[72] = unkR[480] - _div( _pow( (_div( unkR[71] , (unkR[473] * unkR[475]),"Injector_FUEL.A * Injector_FUEL.C_D")) , 2.,"(Comb_Chamb.f_F.W / (Injector_FUEL.A * Injector_FUEL.C_D))**(2)" ) , (2. * LPRES__rho(&unkR[3])),"2 * LPRES.rho(Inlet_LH2.fluidV)") ;
//[E-257]  ThrustMonitor_1.g.Tt = (Comb_Chamb.f_O.p_c * Comb_Chamb.A_th * LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ThrustMonitor_1.g.W) ** 2 / LPRES.R(ThrustMonitor_1.g.fluid)
unkR[271] = _div( _pow( (_div( unkR[72] * unkR[48] * LPRES__FGAMMA(&unkR[273]) , unkR[272],"ThrustMonitor_1.g.W")) , 2.,"(Comb_Chamb.f_O.p_c * Comb_Chamb.A_th * LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ThrustMonitor_1.g.W)**(2)" ) , LPRES__R(&unkR[273]),"LPRES.R(ThrustMonitor_1.g.fluid)") ;
//[E-258]  ThrustMonitor_1.g.c_star = sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid)
unkR[66] = _div( _sqrt(LPRES__R(&unkR[273]) * unkR[271],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[273]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") ;
//[E-259]  Comb_Chamb.T_aw = ThrustMonitor_1.g.Tt * (1 + Comb_Chamb.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)
unkR[57] = unkR[271] * _div( (1. + _pow( unkR[54] , 0.33,"(Comb_Chamb.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[273]) - 1.) * _pow( dyn[1] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[273]) - 1.) * _pow( dyn[1] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2") ;
//[E-260]  Comb_Chamb.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor_1.g.fluid) ** 0.5 * Comb_Chamb.T_aw ** 0.6
unkR[317] = 1.184e-07 * _pow( LPRES__M(&unkR[273]) , 0.5,"(LPRES.M(ThrustMonitor_1.g.fluid))**(0.5)" ) * _pow( unkR[57] , 0.6,"(Comb_Chamb.T_aw)**(0.6)" ) ;
//[E-261]  Comb_Chamb.h_g = 0.026 / sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2 * Comb_Chamb.visc_r ** 0.2 * LPRES.cp(ThrustMonitor_1.g.fluid) / Comb_Chamb.Pr_r ** 0.6 * (Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star) ** 0.8 * (Comb_Chamb.A_th / Comb_Chamb.A_r) ** 0.9
unkR[313] = _div( 0.026 , _pow( _sqrt(4. * unkR[48]/3.14159265358979,"4 * Comb_Chamb.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * Comb_Chamb.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[317] , 0.2,"(Comb_Chamb.visc_r)**(0.2)" ) * LPRES__cp(&unkR[273]) , _pow( unkR[54] , 0.6,"(Comb_Chamb.Pr_r)**(0.6)" ),"Comb_Chamb.Pr_r ** 0.6") * _pow( (_div( unkR[72] , unkR[66],"ThrustMonitor_1.g.c_star")) , 0.8,"(Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star)**(0.8)" ) * _pow( (_div( unkR[48] , unkR[47],"Comb_Chamb.A_r")) , 0.9,"(Comb_Chamb.A_th / Comb_Chamb.A_r)**(0.9)" ) ;
//[E-262]  Pump_FUEL_LH2.tau = Pump_FUEL_LH2.tau_id / Pump_FUEL_LH2.eta_d
unkR[531] = _div( dyn[3] , unkR[522],"Pump_FUEL_LH2.eta_d") ;
//[E-263]  Pump_FUEL_LH2.m.Power = FlowMeter_LH2.f_in.W * Pump_FUEL_LH2.tau
unkR[524] = unkR[333] * unkR[531] ;
//[E-264]  Turbine_FUEL.m.Power = -Pump_FUEL_LH2.m.Power
unkR[557] = -unkR[524] ;
//[E-265]  Turbine_FUEL.tau = Turbine_FUEL.m.Power / CCV.f_in.W
unkR[559] = _div( unkR[557] , dyn[0],"CCV.f_in.W") ;
//[E-266]  Turbine_OXIDIZER.f_in.Tt = Turbine_FUEL.f_in.Tt - Turbine_FUEL.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[555] = unkR[554] - _div( unkR[559] , LPRES__cp(&unkR[381]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-267]  Turbine_FUEL.alpha = Turbine_OXIDIZER.f_in.Tt / Turbine_FUEL.f_in.Tt
unkR[551] = _div( unkR[555] , unkR[554],"Turbine_FUEL.f_in.Tt") ;
//[E-268]  Turbine_FUEL.beta = (1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[552] = _pow( (1. - _div( (1. - unkR[551]) , unkR[553],"Turbine_FUEL.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[381]) - 1.) , LPRES__gamma(&unkR[381]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-269]  Turbine_OXIDIZER.f_in.pt = Turbine_FUEL.beta * Turbine_FUEL.f_in.pt
unkR[556] = unkR[552] * unkR[419] ;
//[E-270]  Turbine_OXIDIZER.MFP = CCV.f_in.W * sqrt(Turbine_OXIDIZER.f_in.Tt) / Turbine_OXIDIZER.f_in.pt
res[1] = evalNormResidueInternal(1,unkR[562],_div( dyn[0] * _sqrt(unkR[555],"Turbine_OXIDIZER.f_in.Tt") , unkR[556],"Turbine_OXIDIZER.f_in.pt"));
//[E-271]  Comb_Chamb.f_F.T = (Pump_FUEL_LH2.tau_id - Pump_FUEL_LH2.tau) / LPRES.cp(Inlet_LH2.fluidV) + Inlet_LH2.Tt
unkR[2] = _div( (dyn[3] - unkR[531]) , LPRES__cp(&unkR[3]),"LPRES.cp(Inlet_LH2.fluidV)") + unkR[492] ;
//[E-272]  Heat_exchanger_1.T_av = (Comb_Chamb.f_F.T + Turbine_FUEL.f_in.Tt) / 2
unkR[365] = (unkR[2] + unkR[554])/2. ;
//[E-273]  Heat_exchanger_1.h.Q = CCV.f_in.W * (Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[01] * (Heat_exchanger_1.T_boil_v[01] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[02] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[01]) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Lv_v[01] + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[03] * (Heat_exchanger_1.T_boil_v[03] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[04] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[03]) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Lv_v[03] + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[05] * (Heat_exchanger_1.T_boil_v[05] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[06] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[05]) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Lv_v[05] + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[07] * (Heat_exchanger_1.T_boil_v[07] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[08] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[07]) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Lv_v[07] + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[09] * (Heat_exchanger_1.T_boil_v[09] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[10] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[09]) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Lv_v[09])
unkR[311] = dyn[0] * (unkR[459] * unkR[338] * (unkR[366] - unkR[2]) + unkR[459] * unkR[339] * (unkR[554] - unkR[366]) + unkR[459] * unkR[351] + unkR[461] * unkR[340] * (unkR[368] - unkR[2]) + unkR[461] * unkR[341] * (unkR[554] - unkR[368]) + unkR[461] * unkR[353] + unkR[463] * unkR[342] * (unkR[370] - unkR[2]) + unkR[463] * unkR[343] * (unkR[554] - unkR[370]) + unkR[463] * unkR[355] + unkR[465] * unkR[344] * (unkR[372] - unkR[2]) + unkR[465] * unkR[345] * (unkR[554] - unkR[372]) + unkR[465] * unkR[357] + unkR[467] * unkR[346] * (unkR[374] - unkR[2]) + unkR[467] * unkR[347] * (unkR[554] - unkR[374]) + unkR[467] * unkR[359]) ;
//[E-274]  Comb_Chamb.h.T = Comb_Chamb.T_aw - Heat_exchanger_1.h.Q / Comb_Chamb.A_wet / Comb_Chamb.h_g
unkR[312] = unkR[57] - _div( _div( unkR[311] , unkR[49],"Comb_Chamb.A_wet") , unkR[313],"Comb_Chamb.h_g") ;
//[E-275]  Heat_exchanger_1.h.T = Heat_exchanger_1.h.Q / Heat_exchanger_1.h.A / Heat_exchanger_1.h_l + Heat_exchanger_1.T_av
unkR[323] = _div( _div( unkR[311] , unkR[322],"Heat_exchanger_1.h.A") , unkR[458],"Heat_exchanger_1.h_l") + unkR[365] ;
//[E-276]  Contact_Wall_1.Q = Contact_Wall_1.k_w / Contact_Wall_1.t_w * (Heat_exchanger_1.h.T - Comb_Chamb.h.T) * Contact_Wall_1.A_wet
unkR[321] = _div( unkR[324] , unkR[325],"Contact_Wall_1.t_w") * (unkR[323] - unkR[312]) * unkR[320] ;
//[E-277]  Contact_Wall_1.Q = -Heat_exchanger_1.h.Q
res[2] = evalNormResidueInternal(2,unkR[321],-unkR[311]);
//[E-278]  Pump_LOX_OXIDIZER.tau = Pump_LOX_OXIDIZER.tau_id / Pump_LOX_OXIDIZER.eta_d
unkR[543] = _div( dyn[4] , unkR[534],"Pump_LOX_OXIDIZER.eta_d") ;
//[E-279]  Pump_LOX_OXIDIZER.m.Power = FlowMeter_LOX.f_in.W * Pump_LOX_OXIDIZER.tau
unkR[536] = unkR[74] * unkR[543] ;
//[E-280]  Turbine_OXIDIZER.m.Power = -Pump_LOX_OXIDIZER.m.Power
unkR[566] = -unkR[536] ;
//[E-281]  Turbine_OXIDIZER.tau = Turbine_OXIDIZER.m.Power / CCV.f_in.W
unkR[568] = _div( unkR[566] , dyn[0],"CCV.f_in.W") ;
//[E-282]  Nozzle_1.g.Tt = Turbine_OXIDIZER.f_in.Tt - Turbine_OXIDIZER.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[513] = unkR[555] - _div( unkR[568] , LPRES__cp(&unkR[381]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-283]  Turbine_OXIDIZER.alpha = Nozzle_1.g.Tt / Turbine_OXIDIZER.f_in.Tt
unkR[563] = _div( unkR[513] , unkR[555],"Turbine_OXIDIZER.f_in.Tt") ;
//[E-284]  Turbine_OXIDIZER.beta = (1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[564] = _pow( (1. - _div( (1. - unkR[563]) , unkR[565],"Turbine_OXIDIZER.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[381]) - 1.) , LPRES__gamma(&unkR[381]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-285]  Nozzle_1.g.pt = Turbine_OXIDIZER.beta * Turbine_OXIDIZER.f_in.pt
unkR[514] = unkR[564] * unkR[556] ;
//[E-286]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[509] = _div( unkR[514] , unkR[516],"Nozzle_1.p_amb") ;
//[E-287]  Nozzle_1.M_out =  ZONE[3] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))	  OTHERS 1
 if(m_branchZone[2]==0)
	unkR[508] = _sqrt(_div( 2. * (_pow( unkR[509] , (_div( (LPRES__gamma(&unkR[381]) - 1.) , LPRES__gamma(&unkR[381]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[381]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)") ;
else unkR[508] = 1. ;
//[E-288]  Nozzle_1.A_sl =  ZONE[2] (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))	  OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
 if(m_branchZone[1]==0)
	unkR[507] = _div( unkR[506] * unkR[508] , _pow( (_div( (2. + (LPRES__gamma(&unkR[381]) - 1.) * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[381]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[381]) + 1.) , (2. * (LPRES__gamma(&unkR[381]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))") ;
else unkR[507] = _div( unkR[506] * -unkR[508] , _pow( (_div( (2. + (LPRES__gamma(&unkR[381]) - 1.) * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[381]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[381]) + 1.) , (2. * (LPRES__gamma(&unkR[381]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))") ;
//[E-289]  CCV.f_in.W = Nozzle_1.A_sl * LPRES.FGAMMA(Turbine_FUEL.f_in.fluid) * Nozzle_1.g.pt / sqrt(Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid))
res[3] = evalNormResidueInternal(3,dyn[0],_div( unkR[507] * LPRES__FGAMMA(&unkR[381]) * unkR[514] , _sqrt(unkR[513] * LPRES__R(&unkR[381]),"Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid)"),"sqrt(Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid))"));
//[E-290]  FlowMeter_LOX.f_in.Tt = (Pump_LOX_OXIDIZER.tau_id - Pump_LOX_OXIDIZER.tau) / LPRES.cp(Inlet_LOX.fluidV) + Inlet_LOX.Tt
unkR[73] = _div( (dyn[4] - unkR[543]) , LPRES__cp(&unkR[75]),"LPRES.cp(Inlet_LOX.fluidV)") + unkR[494] ;
//[E-291]  Comb_Chamb.T_in = (LPRES.cp(Comb_Chamb.fluid_O) * FlowMeter_LOX.f_in.Tt + Comb_Chamb.phi / Comb_Chamb.OF_st * LPRES.cp(Comb_Chamb.fluid_F) * Comb_Chamb.f_F.T) / ((1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R)
unkR[60] = _div( (LPRES__cp(&unkR[151]) * unkR[73] + _div( unkR[315] , unkR[53],"Comb_Chamb.OF_st") * LPRES__cp(&unkR[113]) * unkR[2]) , ((1. + _div( unkR[315] , unkR[53],"Comb_Chamb.OF_st")) * unkR[69]),"(1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R") ;
//[E-292]  Comb_Chamb.T_c = (Comb_Chamb.eta_d * Comb_Chamb.Q_comb_effective / ((1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)) + Comb_Chamb.cp_R * (Comb_Chamb.T_in - 298.15)) / LPRES.cp(Comb_Chamb.fluid_P_vap) + 298.15
unkR[59] = _div( (_div( unkR[70] * unkR[56] , (_div( (1. + unkR[52]) , MATH__min(unkR[52], unkR[53]),"MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)")),"(1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)") + unkR[69] * (unkR[60] - 298.15)) , LPRES__cp(&unkR[233]),"LPRES.cp(Comb_Chamb.fluid_P_vap)") + 298.15 ;
//[E-293]  (Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] * (ThrustMonitor_1.g.Tt - Comb_Chamb.T_c) + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] * (ThrustMonitor_1.g.Tt - FlowMeter_LOX.f_in.Tt) + Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp] * (ThrustMonitor_1.g.Tt - Comb_Chamb.f_F.T) = 0
res[4] = evalNormResidueInternal(4,_div( (unkR[64] + dyn[2]) * unkR[227] , unkR[272],"ThrustMonitor_1.g.W") * unkR[228] * (unkR[271] - unkR[59]) + _div( unkR[63] , unkR[272],"ThrustMonitor_1.g.W") * unkR[105] * (unkR[271] - unkR[73]) + _div( unkR[62] , unkR[272],"ThrustMonitor_1.g.W") * unkR[33] * (unkR[271] - unkR[2]),0);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[5];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-294]  Pump_FUEL_LH2.phi = FlowMeter_LH2.f_in.W / LPRES.rho(Inlet_LH2.fluidV) / Pump_FUEL_LH2.U / Pump_FUEL_LH2.A_in
unkR[525] = _div( _div( _div( unkR[333] , LPRES__rho(&unkR[3]),"LPRES.rho(Inlet_LH2.fluidV)") , dyn[5],"Pump_FUEL_LH2.U") , unkR[520],"Pump_FUEL_LH2.A_in") ;
//[E-295]  Pump_FUEL_LH2.psi = (Pump_FUEL_LH2.psi_d - 1) / Pump_FUEL_LH2.phi_d * Pump_FUEL_LH2.phi + 1
unkR[527] = _div( (unkR[528] - 1.) , unkR[526],"Pump_FUEL_LH2.phi_d") * unkR[525] + 1. ;
//[E-296]  Pump_FUEL_LH2.psi = -Pump_FUEL_LH2.tau / Pump_FUEL_LH2.U ** 2
res[5] = evalNormResidueInternal(5,unkR[527],_div( -unkR[531] , _pow( dyn[5] , 2,"(Pump_FUEL_LH2.U)**(2)" ),"Pump_FUEL_LH2.U ** 2"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-301]  Pump_LOX_OXIDIZER.phi = FlowMeter_LOX.f_in.W / LPRES.rho(Inlet_LOX.fluidV) / Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.A_in
unkR[537] = _div( _div( _div( unkR[74] , LPRES__rho(&unkR[75]),"LPRES.rho(Inlet_LOX.fluidV)") , dyn[6],"Pump_LOX_OXIDIZER.U") , unkR[532],"Pump_LOX_OXIDIZER.A_in") ;
//[E-302]  Pump_LOX_OXIDIZER.psi = (Pump_LOX_OXIDIZER.psi_d - 1) / Pump_LOX_OXIDIZER.phi_d * Pump_LOX_OXIDIZER.phi + 1
unkR[539] = _div( (unkR[540] - 1.) , unkR[538],"Pump_LOX_OXIDIZER.phi_d") * unkR[537] + 1. ;
//[E-303]  Pump_LOX_OXIDIZER.psi = -Pump_LOX_OXIDIZER.tau / Pump_LOX_OXIDIZER.U ** 2
res[6] = evalNormResidueInternal(6,unkR[539],_div( -unkR[543] , _pow( dyn[6] , 2,"(Pump_LOX_OXIDIZER.U)**(2)" ),"Pump_LOX_OXIDIZER.U ** 2"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn3(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-329]  ThrustMonitor_1.g.A_out / Comb_Chamb.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[46] , unkR[48],"Comb_Chamb.A_th"),_div( LPRES__FGAMMA(&unkR[273]) , (_pow( (_div( dyn[7] , unkR[72],"Comb_Chamb.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[273]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[273]) * (1. - _pow( (_div( dyn[7] , unkR[72],"Comb_Chamb.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[273]) - 1.) , LPRES__gamma(&unkR[273]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[273]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn4(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-339]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / ThrustMonitor_1.g.A_out / Comb_Chamb.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[272] * _sqrt(LPRES__R(&unkR[273]) * unkR[271],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , unkR[46],"ThrustMonitor_1.g.A_out") , unkR[72],"Comb_Chamb.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[273]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[273]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[273]) + 1)/2 , (LPRES__gamma(&unkR[273]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn5(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-366]  FlowMeter_LOX.f_in.pt = MOV.f_in.pt - 0.5 * FlowMeter_LOX.f_in.W ** 2 / (MOV.rho_f * MOV.A ** 2)
res[9] = evalNormResidueInternal(9,unkR[336],unkR[504] - _div( 0.5 * _pow( unkR[74] , 2,"(FlowMeter_LOX.f_in.W)**(2)" ) , (unkR[505] * _pow( dyn[9] , 2,"(MOV.A)**(2)" )),"MOV.rho_f * MOV.A ** 2"));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn6(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn6, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-369]  Heat_exchanger_1.f_in.pt = CCV.f_in.pt - 0.5 * CCV.f_in.W ** 2 / (CCV.rho_f * CCV.A ** 2)
res[10] = evalNormResidueInternal(10,unkR[42],unkR[41] - _div( 0.5 * _pow( dyn[0] , 2,"(CCV.f_in.W)**(2)" ) , (unkR[43] * _pow( dyn[10] , 2,"(CCV.A)**(2)" )),"CCV.rho_f * CCV.A ** 2"));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn7(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design::fcn7, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Turbine_FUEL.f_in.fluid[LOX] = 0
unkR[381] = 0. ;
//[E-2]  Heat_exchanger_1.fluid_out[NTO] = Inlet_LH2.fluidV[NTO]
unkR[421] = unkR[4] ;
//[E-3]  Turbine_FUEL.f_in.fluid[NTO] = Heat_exchanger_1.fluid_out[NTO]
unkR[382] = unkR[421] ;
//[E-4]  Heat_exchanger_1.fluid_out[H2O2] = Inlet_LH2.fluidV[H2O2]
unkR[422] = unkR[5] ;
//[E-5]  Turbine_FUEL.f_in.fluid[H2O2] = Heat_exchanger_1.fluid_out[H2O2]
unkR[383] = unkR[422] ;
//[E-6]  Heat_exchanger_1.fluid_out[NH3] = Inlet_LH2.fluidV[NH3]
unkR[423] = unkR[6] ;
//[E-7]  Turbine_FUEL.f_in.fluid[NH3] = Heat_exchanger_1.fluid_out[NH3]
unkR[384] = unkR[423] ;
//[E-8]  Heat_exchanger_1.fluid_out[HNO3] = Inlet_LH2.fluidV[HNO3]
unkR[424] = unkR[7] ;
//[E-9]  Turbine_FUEL.f_in.fluid[HNO3] = Heat_exchanger_1.fluid_out[HNO3]
unkR[385] = unkR[424] ;
//[E-10]  Heat_exchanger_1.fluid_out[LF2] = Inlet_LH2.fluidV[LF2]
unkR[425] = unkR[8] ;
//[E-11]  Turbine_FUEL.f_in.fluid[LF2] = Heat_exchanger_1.fluid_out[LF2]
unkR[386] = unkR[425] ;
//[E-12]  Heat_exchanger_1.fluid_out[RP_1] = Inlet_LH2.fluidV[RP_1]
unkR[426] = unkR[9] ;
//[E-13]  Turbine_FUEL.f_in.fluid[RP_1] = Heat_exchanger_1.fluid_out[RP_1]
unkR[387] = unkR[426] ;
//[E-14]  Turbine_FUEL.f_in.fluid[LCH4] = 0
unkR[388] = 0. ;
//[E-15]  Turbine_FUEL.f_in.fluid[LH2] = 0
unkR[389] = 0. ;
//[E-16]  Heat_exchanger_1.fluid_out[N2H4] = Inlet_LH2.fluidV[N2H4]
unkR[429] = unkR[12] ;
//[E-17]  Turbine_FUEL.f_in.fluid[N2H4] = Heat_exchanger_1.fluid_out[N2H4]
unkR[390] = unkR[429] ;
//[E-18]  Heat_exchanger_1.fluid_out[UDMH] = Inlet_LH2.fluidV[UDMH]
unkR[430] = unkR[13] ;
//[E-19]  Turbine_FUEL.f_in.fluid[UDMH] = Heat_exchanger_1.fluid_out[UDMH]
unkR[391] = unkR[430] ;
//[E-20]  Turbine_FUEL.f_in.fluid[MMH] = 0
unkR[392] = 0. ;
//[E-21]  Heat_exchanger_1.fluid_out[JP_10] = Inlet_LH2.fluidV[JP_10]
unkR[432] = unkR[15] ;
//[E-22]  Turbine_FUEL.f_in.fluid[JP_10] = Heat_exchanger_1.fluid_out[JP_10]
unkR[393] = unkR[432] ;
//[E-23]  Heat_exchanger_1.fluid_out[Kerox] = Inlet_LH2.fluidV[Kerox]
unkR[433] = unkR[16] ;
//[E-24]  Turbine_FUEL.f_in.fluid[Kerox] = Heat_exchanger_1.fluid_out[Kerox]
unkR[394] = unkR[433] ;
//[E-25]  Heat_exchanger_1.fluid_out[Oil] = Inlet_LH2.fluidV[Oil]
unkR[434] = unkR[17] ;
//[E-26]  Turbine_FUEL.f_in.fluid[Oil] = Heat_exchanger_1.fluid_out[Oil]
unkR[395] = unkR[434] ;
//[E-27]  Heat_exchanger_1.fluid_out[H2O] = Inlet_LH2.fluidV[H2O]
unkR[435] = unkR[18] ;
//[E-28]  Turbine_FUEL.f_in.fluid[H2O] = Heat_exchanger_1.fluid_out[H2O]
unkR[396] = unkR[435] ;
//[E-29]  Heat_exchanger_1.fluid_out[IPA] = Inlet_LH2.fluidV[IPA]
unkR[436] = unkR[19] ;
//[E-30]  Turbine_FUEL.f_in.fluid[IPA] = Heat_exchanger_1.fluid_out[IPA]
unkR[397] = unkR[436] ;
//[E-31]  Heat_exchanger_1.fluid_out[Air] = Inlet_LH2.fluidV[Air]
unkR[437] = unkR[20] ;
//[E-32]  Turbine_FUEL.f_in.fluid[Air] = Heat_exchanger_1.fluid_out[Air]
unkR[398] = unkR[437] ;
//[E-33]  Heat_exchanger_1.fluid_out[Ar] = Inlet_LH2.fluidV[Ar]
unkR[438] = unkR[21] ;
//[E-34]  Turbine_FUEL.f_in.fluid[Ar] = Heat_exchanger_1.fluid_out[Ar]
unkR[399] = unkR[438] ;
//[E-35]  Heat_exchanger_1.fluid_out[CH4] = Inlet_LH2.fluidV[LCH4]
unkR[439] = unkR[10] ;
//[E-36]  Turbine_FUEL.f_in.fluid[CH4] = Heat_exchanger_1.fluid_out[CH4]
unkR[400] = unkR[439] ;
//[E-37]  Heat_exchanger_1.fluid_out[CO] = Inlet_LH2.fluidV[CO]
unkR[440] = unkR[23] ;
//[E-38]  Turbine_FUEL.f_in.fluid[CO] = Heat_exchanger_1.fluid_out[CO]
unkR[401] = unkR[440] ;
//[E-39]  Heat_exchanger_1.fluid_out[CO2] = Inlet_LH2.fluidV[CO2]
unkR[441] = unkR[24] ;
//[E-40]  Turbine_FUEL.f_in.fluid[CO2] = Heat_exchanger_1.fluid_out[CO2]
unkR[402] = unkR[441] ;
//[E-41]  Heat_exchanger_1.fluid_out[H2] = Inlet_LH2.fluidV[LH2]
unkR[442] = unkR[11] ;
//[E-42]  Turbine_FUEL.f_in.fluid[H2] = Heat_exchanger_1.fluid_out[H2]
unkR[403] = unkR[442] ;
//[E-43]  Heat_exchanger_1.fluid_out[He] = Inlet_LH2.fluidV[He]
unkR[443] = unkR[26] ;
//[E-44]  Turbine_FUEL.f_in.fluid[He] = Heat_exchanger_1.fluid_out[He]
unkR[404] = unkR[443] ;
//[E-45]  Heat_exchanger_1.fluid_out[N2] = Inlet_LH2.fluidV[N2]
unkR[444] = unkR[27] ;
//[E-46]  Turbine_FUEL.f_in.fluid[N2] = Heat_exchanger_1.fluid_out[N2]
unkR[405] = unkR[444] ;
//[E-47]  Heat_exchanger_1.fluid_out[O2] = Inlet_LH2.fluidV[LOX]
unkR[445] = unkR[3] ;
//[E-48]  Turbine_FUEL.f_in.fluid[O2] = Heat_exchanger_1.fluid_out[O2]
unkR[406] = unkR[445] ;
//[E-49]  Heat_exchanger_1.fluid_out[MMH_vapour] = Inlet_LH2.fluidV[MMH]
unkR[446] = unkR[14] ;
//[E-50]  Turbine_FUEL.f_in.fluid[MMH_vapour] = Heat_exchanger_1.fluid_out[MMH_vapour]
unkR[407] = unkR[446] ;
//[E-51]  Heat_exchanger_1.fluid_out[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour]
unkR[447] = unkR[30] ;
//[E-52]  Turbine_FUEL.f_in.fluid[H2O_vapour] = Heat_exchanger_1.fluid_out[H2O_vapour]
unkR[408] = unkR[447] ;
//[E-53]  Heat_exchanger_1.fluid_out[Comb_prod] = Inlet_LH2.fluidV[Comb_prod]
unkR[448] = unkR[31] ;
//[E-54]  Turbine_FUEL.f_in.fluid[Comb_prod] = Heat_exchanger_1.fluid_out[Comb_prod]
unkR[409] = unkR[448] ;
//[E-55]  Heat_exchanger_1.fluid_out[Comb_prod_M] = Inlet_LH2.fluidV[Comb_prod_M]
unkR[449] = unkR[32] ;
//[E-56]  Turbine_FUEL.f_in.fluid[Comb_prod_M] = Heat_exchanger_1.fluid_out[Comb_prod_M]
unkR[410] = unkR[449] ;
//[E-57]  Heat_exchanger_1.fluid_out[Comb_prod_cp] = Inlet_LH2.fluidV[Comb_prod_cp]
unkR[450] = unkR[33] ;
//[E-58]  Turbine_FUEL.f_in.fluid[Comb_prod_cp] = Heat_exchanger_1.fluid_out[Comb_prod_cp]
unkR[411] = unkR[450] ;
//[E-59]  Heat_exchanger_1.fluid_out[Comb_prod_c] = Inlet_LH2.fluidV[Comb_prod_c]
unkR[451] = unkR[34] ;
//[E-60]  Turbine_FUEL.f_in.fluid[Comb_prod_c] = Heat_exchanger_1.fluid_out[Comb_prod_c]
unkR[412] = unkR[451] ;
//[E-61]  Heat_exchanger_1.fluid_out[Comb_prod_cp_g] = Inlet_LH2.fluidV[Comb_prod_cp_g]
unkR[452] = unkR[35] ;
//[E-62]  Turbine_FUEL.f_in.fluid[Comb_prod_cp_g] = Heat_exchanger_1.fluid_out[Comb_prod_cp_g]
unkR[413] = unkR[452] ;
//[E-63]  Heat_exchanger_1.fluid_out[Comb_prod_Lv] = Inlet_LH2.fluidV[Comb_prod_Lv]
unkR[453] = unkR[36] ;
//[E-64]  Turbine_FUEL.f_in.fluid[Comb_prod_Lv] = Heat_exchanger_1.fluid_out[Comb_prod_Lv]
unkR[414] = unkR[453] ;
//[E-65]  Turbine_FUEL.f_in.fluid[Comb_prod_visc] = Heat_exchanger_1.visc_P
unkR[415] = unkR[472] ;
//[E-66]  Turbine_FUEL.f_in.fluid[Comb_prod_cond] = Heat_exchanger_1.cond_P
unkR[416] = unkR[378] ;
//[E-67]  Heat_exchanger_1.fluid_out[Comb_prod_T_boil] = Inlet_LH2.fluidV[Comb_prod_T_boil]
unkR[456] = unkR[39] ;
//[E-68]  Turbine_FUEL.f_in.fluid[Comb_prod_T_boil] = Heat_exchanger_1.fluid_out[Comb_prod_T_boil]
unkR[417] = unkR[456] ;
//[E-69]  Turbine_FUEL.f_in.fluid[Comb_prod_rho] = Heat_exchanger_1.rho_P
unkR[418] = unkR[469] ;
//[E-70]  Turbine_OXIDIZER.MFP = Turbine_OXIDIZER.A_in * LPRES.FGAMMA(Turbine_FUEL.f_in.fluid) / sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))
unkR[562] = _div( unkR[561] * LPRES__FGAMMA(&unkR[381]) , _sqrt(LPRES__R(&unkR[381]),"LPRES.R(Turbine_FUEL.f_in.fluid)"),"sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))") ;
//[E-71]  Turbine_FUEL.MFP = Turbine_FUEL.A_in * LPRES.FGAMMA(Turbine_FUEL.f_in.fluid) / sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))
unkR[550] = _div( unkR[549] * LPRES__FGAMMA(&unkR[381]) , _sqrt(LPRES__R(&unkR[381]),"LPRES.R(Turbine_FUEL.f_in.fluid)"),"sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))") ;
//[E-72]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[516] = LPRES__ISA_Pressure(unkR[496]) ;
//[E-73]  Comb_Chamb.phi = Comb_Chamb.OF_st / Comb_Chamb.OF
unkR[315] = _div( unkR[53] , unkR[52],"Comb_Chamb.OF") ;
//[E-74]  Comb_Chamb.fluid_O[LOX] = Inlet_LOX.fluidV[LOX] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[151] = _div( unkR[75] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-75]  Comb_Chamb.fluid_O[NTO] = Inlet_LOX.fluidV[NTO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[152] = _div( unkR[76] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-76]  Comb_Chamb.fluid_O[H2O2] = Inlet_LOX.fluidV[H2O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[153] = _div( unkR[77] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-77]  Comb_Chamb.fluid_O[NH3] = Inlet_LOX.fluidV[NH3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[154] = _div( unkR[78] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-78]  Comb_Chamb.fluid_O[HNO3] = Inlet_LOX.fluidV[HNO3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[155] = _div( unkR[79] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-79]  Comb_Chamb.fluid_O[LF2] = Inlet_LOX.fluidV[LF2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[156] = _div( unkR[80] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-80]  Comb_Chamb.fluid_O[RP_1] = Inlet_LOX.fluidV[RP_1] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[157] = _div( unkR[81] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-81]  Comb_Chamb.fluid_O[LCH4] = Inlet_LOX.fluidV[LCH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[158] = _div( unkR[82] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-82]  Comb_Chamb.fluid_O[LH2] = Inlet_LOX.fluidV[LH2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[159] = _div( unkR[83] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-83]  Comb_Chamb.fluid_O[N2H4] = Inlet_LOX.fluidV[N2H4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[160] = _div( unkR[84] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-84]  Comb_Chamb.fluid_O[UDMH] = Inlet_LOX.fluidV[UDMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[161] = _div( unkR[85] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-85]  Comb_Chamb.fluid_O[MMH] = Inlet_LOX.fluidV[MMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[162] = _div( unkR[86] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-86]  Comb_Chamb.fluid_O[JP_10] = Inlet_LOX.fluidV[JP_10] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[163] = _div( unkR[87] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-87]  Comb_Chamb.fluid_O[Kerox] = Inlet_LOX.fluidV[Kerox] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[164] = _div( unkR[88] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-88]  Comb_Chamb.fluid_O[Oil] = Inlet_LOX.fluidV[Oil] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[165] = _div( unkR[89] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-89]  Comb_Chamb.fluid_O[H2O] = Inlet_LOX.fluidV[H2O] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[166] = _div( unkR[90] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-90]  Comb_Chamb.fluid_O[IPA] = Inlet_LOX.fluidV[IPA] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[167] = _div( unkR[91] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-91]  Comb_Chamb.fluid_O[Air] = Inlet_LOX.fluidV[Air] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[168] = _div( unkR[92] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-92]  Comb_Chamb.fluid_O[Ar] = Inlet_LOX.fluidV[Ar] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[169] = _div( unkR[93] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-93]  Comb_Chamb.fluid_O[CH4] = Inlet_LOX.fluidV[CH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[170] = _div( unkR[94] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-94]  Comb_Chamb.fluid_O[CO] = Inlet_LOX.fluidV[CO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[171] = _div( unkR[95] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-95]  Comb_Chamb.fluid_O[CO2] = Inlet_LOX.fluidV[CO2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[172] = _div( unkR[96] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-96]  Comb_Chamb.fluid_O[H2] = Inlet_LOX.fluidV[H2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[173] = _div( unkR[97] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-97]  Comb_Chamb.fluid_O[He] = Inlet_LOX.fluidV[He] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[174] = _div( unkR[98] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-98]  Comb_Chamb.fluid_O[N2] = Inlet_LOX.fluidV[N2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[175] = _div( unkR[99] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-99]  Comb_Chamb.fluid_O[O2] = Inlet_LOX.fluidV[O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[176] = _div( unkR[100] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-100]  Comb_Chamb.fluid_O[MMH_vapour] = Inlet_LOX.fluidV[MMH_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[177] = _div( unkR[101] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-101]  Comb_Chamb.fluid_O[H2O_vapour] = Inlet_LOX.fluidV[H2O_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[178] = _div( unkR[102] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-102]  Comb_Chamb.fluid_O[Comb_prod] = 0
unkR[179] = 0. ;
//[E-103]  Comb_Chamb.fluid_O[Comb_prod_M] = 0
unkR[180] = 0. ;
//[E-104]  Comb_Chamb.fluid_O[Comb_prod_cp] = 0
unkR[181] = 0. ;
//[E-105]  Comb_Chamb.fluid_O[Comb_prod_c] = 0
unkR[182] = 0. ;
//[E-106]  Comb_Chamb.fluid_O[Comb_prod_cp_g] = 0
unkR[183] = 0. ;
//[E-107]  Comb_Chamb.fluid_O[Comb_prod_Lv] = 0
unkR[184] = 0. ;
//[E-108]  Comb_Chamb.fluid_O[Comb_prod_visc] = 0
unkR[185] = 0. ;
//[E-109]  Comb_Chamb.fluid_O[Comb_prod_cond] = 0
unkR[186] = 0. ;
//[E-110]  Comb_Chamb.fluid_O[Comb_prod_T_boil] = 0
unkR[187] = 0. ;
//[E-111]  Comb_Chamb.fluid_O[Comb_prod_rho] = 0
unkR[188] = 0. ;
//[E-112]  Comb_Chamb.fluid_F[LOX] = Inlet_LH2.fluidV[LOX] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[113] = _div( unkR[3] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-113]  Comb_Chamb.fluid_F[NTO] = Inlet_LH2.fluidV[NTO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[114] = _div( unkR[4] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-114]  Comb_Chamb.fluid_F[H2O2] = Inlet_LH2.fluidV[H2O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[115] = _div( unkR[5] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-115]  Comb_Chamb.fluid_F[NH3] = Inlet_LH2.fluidV[NH3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[116] = _div( unkR[6] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-116]  Comb_Chamb.fluid_F[HNO3] = Inlet_LH2.fluidV[HNO3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[117] = _div( unkR[7] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-117]  Comb_Chamb.fluid_F[LF2] = Inlet_LH2.fluidV[LF2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[118] = _div( unkR[8] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-118]  Comb_Chamb.fluid_F[RP_1] = Inlet_LH2.fluidV[RP_1] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[119] = _div( unkR[9] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-119]  Comb_Chamb.fluid_F[LCH4] = Inlet_LH2.fluidV[LCH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[120] = _div( unkR[10] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-120]  Comb_Chamb.fluid_F[LH2] = Inlet_LH2.fluidV[LH2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[121] = _div( unkR[11] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-121]  Comb_Chamb.fluid_F[N2H4] = Inlet_LH2.fluidV[N2H4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[122] = _div( unkR[12] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-122]  Comb_Chamb.fluid_F[UDMH] = Inlet_LH2.fluidV[UDMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[123] = _div( unkR[13] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-123]  Comb_Chamb.fluid_F[MMH] = Inlet_LH2.fluidV[MMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[124] = _div( unkR[14] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-124]  Comb_Chamb.fluid_F[JP_10] = Inlet_LH2.fluidV[JP_10] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[125] = _div( unkR[15] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-125]  Comb_Chamb.fluid_F[Kerox] = Inlet_LH2.fluidV[Kerox] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[126] = _div( unkR[16] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-126]  Comb_Chamb.fluid_F[Oil] = Inlet_LH2.fluidV[Oil] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[127] = _div( unkR[17] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-127]  Comb_Chamb.fluid_F[H2O] = Inlet_LH2.fluidV[H2O] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[128] = _div( unkR[18] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-128]  Comb_Chamb.fluid_F[IPA] = Inlet_LH2.fluidV[IPA] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[129] = _div( unkR[19] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-129]  Comb_Chamb.fluid_F[Air] = Inlet_LH2.fluidV[Air] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[130] = _div( unkR[20] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-130]  Comb_Chamb.fluid_F[Ar] = Inlet_LH2.fluidV[Ar] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[131] = _div( unkR[21] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-131]  Comb_Chamb.fluid_F[CH4] = Inlet_LH2.fluidV[CH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[132] = _div( unkR[22] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-132]  Comb_Chamb.fluid_F[CO] = Inlet_LH2.fluidV[CO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[133] = _div( unkR[23] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-133]  Comb_Chamb.fluid_F[CO2] = Inlet_LH2.fluidV[CO2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[134] = _div( unkR[24] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-134]  Comb_Chamb.fluid_F[H2] = Inlet_LH2.fluidV[H2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[135] = _div( unkR[25] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-135]  Comb_Chamb.fluid_F[He] = Inlet_LH2.fluidV[He] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[136] = _div( unkR[26] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-136]  Comb_Chamb.fluid_F[N2] = Inlet_LH2.fluidV[N2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[137] = _div( unkR[27] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-137]  Comb_Chamb.fluid_F[O2] = Inlet_LH2.fluidV[O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[138] = _div( unkR[28] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-138]  Comb_Chamb.fluid_F[MMH_vapour] = Inlet_LH2.fluidV[MMH_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[139] = _div( unkR[29] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-139]  Comb_Chamb.fluid_F[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[140] = _div( unkR[30] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-140]  Comb_Chamb.fluid_F[Comb_prod] = 0
unkR[141] = 0. ;
//[E-141]  Comb_Chamb.fluid_F[Comb_prod_M] = 0
unkR[142] = 0. ;
//[E-142]  Comb_Chamb.fluid_F[Comb_prod_cp] = 0
unkR[143] = 0. ;
//[E-143]  Comb_Chamb.fluid_F[Comb_prod_c] = 0
unkR[144] = 0. ;
//[E-144]  Comb_Chamb.fluid_F[Comb_prod_cp_g] = 0
unkR[145] = 0. ;
//[E-145]  Comb_Chamb.fluid_F[Comb_prod_Lv] = 0
unkR[146] = 0. ;
//[E-146]  Comb_Chamb.fluid_F[Comb_prod_visc] = 0
unkR[147] = 0. ;
//[E-147]  Comb_Chamb.fluid_F[Comb_prod_cond] = 0
unkR[148] = 0. ;
//[E-148]  Comb_Chamb.fluid_F[Comb_prod_T_boil] = 0
unkR[149] = 0. ;
//[E-149]  Comb_Chamb.fluid_F[Comb_prod_rho] = 0
unkR[150] = 0. ;
//[E-150]  Comb_Chamb.Q_comb_effective =  ZONE[1] (Comb_Chamb.Combustion) Comb_Chamb.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[56] = unkR[55] ;
else unkR[56] = 0. ;
//[E-151]  Comb_Chamb.fluid_P[Comb_prod_M] =  IF[30] (Comb_Chamb.Combustion) Comb_Chamb.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[218] = unkR[51] ;
}
else 
{
unkR[218] = 0. ;
}
//[E-152]  Comb_Chamb.fluid_P[Comb_prod_cp] =  IF[31] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[219] = unkR[68] ;
}
else 
{
unkR[219] = 0. ;
}
//[E-153]  Comb_Chamb.fluid_P[Comb_prod_c] =  IF[32] (Comb_Chamb.Combustion) Comb_Chamb.c_P	 ELSE 0
if( unkI[0] ) 
{
unkR[220] = unkR[65] ;
}
else 
{
unkR[220] = 0. ;
}
//[E-154]  Comb_Chamb.fluid_P[Comb_prod_cp_g] =  IF[33] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[221] = unkR[68] ;
}
else 
{
unkR[221] = 0. ;
}
//[E-155]  Comb_Chamb.fluid_P[Comb_prod_Lv] =  IF[34] (Comb_Chamb.Combustion) Comb_Chamb.Lv_P	 ELSE 0
if( unkI[0] ) 
{
unkR[222] = unkR[50] ;
}
else 
{
unkR[222] = 0. ;
}
//[E-156]  Comb_Chamb.fluid_P[Comb_prod_visc] =  IF[35] (Comb_Chamb.Combustion) Comb_Chamb.visc_P	 ELSE 0
if( unkI[0] ) 
{
unkR[223] = unkR[316] ;
}
else 
{
unkR[223] = 0. ;
}
//[E-157]  Comb_Chamb.fluid_P[Comb_prod_cond] =  IF[36] (Comb_Chamb.Combustion) Comb_Chamb.cond_P	 ELSE 0
if( unkI[0] ) 
{
unkR[224] = unkR[67] ;
}
else 
{
unkR[224] = 0. ;
}
//[E-158]  Comb_Chamb.fluid_P[Comb_prod_T_boil] =  IF[37] (Comb_Chamb.Combustion) Comb_Chamb.T_boil_P	 ELSE 0
if( unkI[0] ) 
{
unkR[225] = unkR[58] ;
}
else 
{
unkR[225] = 0. ;
}
//[E-159]  Comb_Chamb.fluid_P[Comb_prod_rho] = 0
unkR[226] = 0. ;
//[E-160]  LPRES.Obtain_Vap_Prop(Inlet_LH2.fluidV, Heat_exchanger_1.Cp_v, Heat_exchanger_1.Lv_v, Heat_exchanger_1.T_boil_v, Heat_exchanger_1.mass_frac_v) %%% (OUT VAR)Heat_exchanger_1.Cp_v (OUT VAR)Heat_exchanger_1.Lv_v (OUT VAR)Heat_exchanger_1.T_boil_v (OUT VAR)Heat_exchanger_1.mass_frac_v 
LPRES__Obtain_Vap_Prop(&unkR[3], &unkR[338], &unkR[351], &unkR[366], &unkR[459]);
//[E-161]  MFV.rho_f = LPRES.rho(Inlet_LH2.fluidV)
unkR[501] = LPRES__rho(&unkR[3]) ;
//[E-162]  Heat_exchanger_1.D_hy = 2 * Heat_exchanger_1.a * Heat_exchanger_1.b / (Heat_exchanger_1.a + Heat_exchanger_1.b)
unkR[349] = _div( 2. * unkR[376] * unkR[377] , (unkR[376] + unkR[377]),"Heat_exchanger_1.a + Heat_exchanger_1.b") ;
//[E-163]  Heat_exchanger_1.Pr = LPRES.visc(Turbine_FUEL.f_in.fluid) * LPRES.cp(Turbine_FUEL.f_in.fluid) / LPRES.cond(Turbine_FUEL.f_in.fluid) + LPRES.visc(Inlet_LH2.fluidV) * LPRES.cp(Inlet_LH2.fluidV) / LPRES.cond(Inlet_LH2.fluidV)
unkR[363] = _div( LPRES__visc(&unkR[381]) * LPRES__cp(&unkR[381]) , LPRES__cond(&unkR[381]),"LPRES.cond(Turbine_FUEL.f_in.fluid)") + _div( LPRES__visc(&unkR[3]) * LPRES__cp(&unkR[3]) , LPRES__cond(&unkR[3]),"LPRES.cond(Inlet_LH2.fluidV)") ;
//[E-164]  Contact_Wall_1.A_wet = Comb_Chamb.A_wet / Contact_Wall_1.A_eff_1
unkR[320] = _div( unkR[49] , unkR[318],"Contact_Wall_1.A_eff_1") ;
//[E-165]  Heat_exchanger_1.h.A = Contact_Wall_1.A_eff_2 * Contact_Wall_1.A_wet
unkR[322] = unkR[319] * unkR[320] ;
//[E-166]  Comb_Chamb.A_r = Comb_Chamb.A_th * Comb_Chamb.AR_r
unkR[47] = unkR[48] * unkR[45] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,5,50);
else fbox1(_time,dyn,ldr,res) ;


if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-297]  Pump_FUEL_LH2.m.N = Pump_FUEL_LH2.U / Pump_FUEL_LH2.r_m
unkR[523] = _div( dyn[5] , unkR[529],"Pump_FUEL_LH2.r_m") ;
//[E-298]  Turbine_FUEL.rpm = Pump_FUEL_LH2.m.N / 0.10471975511966
unkR[530] = unkR[523]/0.10471975511966 ;
//[E-299]  Turbine_FUEL.theta = 1 / Turbine_FUEL.alpha
unkR[560] = _div( 1. , unkR[551],"Turbine_FUEL.alpha") ;
//[E-300]  Turbine_FUEL.pi = 1 / Turbine_FUEL.beta
unkR[558] = _div( 1. , unkR[552],"Turbine_FUEL.beta") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-304]  Pump_LOX_OXIDIZER.m.N = Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.r_m
unkR[535] = _div( dyn[6] , unkR[541],"Pump_LOX_OXIDIZER.r_m") ;
//[E-305]  Turbine_OXIDIZER.rpm = Pump_LOX_OXIDIZER.m.N / 0.10471975511966
unkR[542] = unkR[535]/0.10471975511966 ;
//[E-306]  Turbine_OXIDIZER.theta = 1 / Turbine_OXIDIZER.alpha
unkR[569] = _div( 1. , unkR[563],"Turbine_OXIDIZER.alpha") ;
//[E-307]  Turbine_OXIDIZER.pi = 1 / Turbine_OXIDIZER.beta
unkR[567] = _div( 1. , unkR[564],"Turbine_OXIDIZER.beta") ;
//[E-308]  Pump_LOX_OXIDIZER.dp = -(Pump_LOX_OXIDIZER.tau_id * LPRES.rho(Inlet_LOX.fluidV))
unkR[533] = -(dyn[4] * LPRES__rho(&unkR[75])) ;
//[E-309]  FlowMeter_LOX.f_in.pt = (FlowMeter_LOX.f_in.W / (Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)) ** 2 / (2 * LPRES.rho(Inlet_LOX.fluidV)) + Comb_Chamb.f_O.p_c
unkR[336] = _div( _pow( (_div( unkR[74] , (unkR[483] * unkR[485]),"Injector_OXIDIZER.A * Injector_OXIDIZER.C_D")) , 2.,"(FlowMeter_LOX.f_in.W / (Injector_OXIDIZER.A * Injector_OXIDIZER.C_D))**(2)" ) , (2. * LPRES__rho(&unkR[75])),"2 * LPRES.rho(Inlet_LOX.fluidV)") + unkR[72] ;
//[E-310]  MOV.dp = Inlet_LOX.pt + Pump_LOX_OXIDIZER.dp - FlowMeter_LOX.f_in.pt
unkR[503] = unkR[495] + unkR[533] - unkR[336] ;
//[E-311]  FlowMeter_LH2.i.Data[1] = abs(FlowMeter_LH2.f_in.W)
unkR[335] = abs(unkR[333]) ;
//[E-312]  CCV.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[41] = unkR[334] * unkR[544] ;
//[E-313]  Injector_FUEL.PR = Injector_FUEL.f_in.pt / Comb_Chamb.f_O.p_c
unkR[477] = _div( unkR[480] , unkR[72],"Comb_Chamb.f_O.p_c") ;
//[E-314]  Injector_FUEL.PR_ch = 0
unkR[478] = 0. ;
//[E-315]  Injector_FUEL.p_out_ch = 0
unkR[481] = 0. ;
//[E-316]  Injector_FUEL.A_ch = 0
unkR[474] = 0. ;
//[E-317]  Injector_FUEL.M_out = 0
unkR[476] = 0. ;
//[E-318]  Injector_FUEL.v_ideal = Comb_Chamb.f_F.W / (LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D)
unkR[482] = _div( unkR[71] , (LPRES__rho(&unkR[3]) * unkR[473] * unkR[475]),"LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D") ;
//[E-319]  Injector_FUEL.Re = LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.v_ideal * Injector_FUEL.C_D * sqrt(4 * Injector_FUEL.A / 3.14159265358979) / LPRES.visc(Inlet_LH2.fluidV)
unkR[479] = _div( LPRES__rho(&unkR[3]) * unkR[482] * unkR[475] * _sqrt(4. * unkR[473]/3.14159265358979,"4 * Injector_FUEL.A / 3.14159265358979") , LPRES__visc(&unkR[3]),"LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-320]  Injector_OXIDIZER.PR = FlowMeter_LOX.f_in.pt / Comb_Chamb.f_O.p_c
unkR[487] = _div( unkR[336] , unkR[72],"Comb_Chamb.f_O.p_c") ;
//[E-321]  Injector_OXIDIZER.PR_ch = 0
unkR[488] = 0. ;
//[E-322]  Injector_OXIDIZER.p_out_ch = 0
unkR[490] = 0. ;
//[E-323]  Injector_OXIDIZER.A_ch = 0
unkR[484] = 0. ;
//[E-324]  Injector_OXIDIZER.M_out = 0
unkR[486] = 0. ;
//[E-325]  Injector_OXIDIZER.v_ideal = FlowMeter_LOX.f_in.W / (LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)
unkR[491] = _div( unkR[74] , (LPRES__rho(&unkR[75]) * unkR[483] * unkR[485]),"LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D") ;
//[E-326]  Injector_OXIDIZER.Re = LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.v_ideal * Injector_OXIDIZER.C_D * sqrt(4 * Injector_OXIDIZER.A / 3.14159265358979) / LPRES.visc(Inlet_LOX.fluidV)
unkR[489] = _div( LPRES__rho(&unkR[75]) * unkR[491] * unkR[485] * _sqrt(4. * unkR[483]/3.14159265358979,"4 * Injector_OXIDIZER.A / 3.14159265358979") , LPRES__visc(&unkR[75]),"LPRES.visc(Inlet_LOX.fluidV)") ;
//[E-327]  FlowMeter_LOX.i.Data[1] = abs(FlowMeter_LOX.f_in.W)
unkR[337] = abs(unkR[74]) ;
//[E-328]  ThrustMonitor_1.g.A_out = Comb_Chamb.AR * Comb_Chamb.A_th
unkR[46] = unkR[44] * unkR[48] ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-330]  ControlPanel.i_Comb.Data[1] = ThrustMonitor_1.g.c_star
unkR[314] = unkR[66] ;
//[E-331]  Nozzle_1.PR_sl = ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2) ** (LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))
unkR[510] = _pow( ((LPRES__gamma(&unkR[381]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[381]) , (LPRES__gamma(&unkR[381]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1")),"((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2)**(LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))" ) ;
//[E-332]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[518] = _div( unkR[514] , unkR[510],"Nozzle_1.PR_sl") ;
//[E-333]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[517] = MATH__max(unkR[516], unkR[518]) ;
//[E-334]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[511] = _div( unkR[513] , (1. + (LPRES__gamma(&unkR[381]) - 1.)/2. * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-335]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out)
unkR[519] = unkR[508] * _sqrt(LPRES__gamma(&unkR[381]) * LPRES__R(&unkR[381]) * unkR[511],"LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out") ;
//[E-336]  Nozzle_1.Thrust = CCV.f_in.W * Nozzle_1.v_out + Nozzle_1.A * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[512] = dyn[0] * unkR[519] + unkR[506] * (unkR[517] - unkR[516]) ;
//[E-337]  Nozzle_1.i.Data[1] = Nozzle_1.Thrust
unkR[515] = unkR[512] ;
//[E-338]  ControlPanel.W_tot = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[330] = unkR[335] + unkR[337] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-340]  ThrustMonitor_1.T_out = ThrustMonitor_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)
unkR[545] = _div( unkR[271] , (1. + (LPRES__gamma(&unkR[273]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor_1.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2") ;
//[E-341]  ThrustMonitor_1.v_out = ThrustMonitor_1.M_out * sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out)
unkR[548] = dyn[8] * _sqrt(LPRES__gamma(&unkR[273]) * LPRES__R(&unkR[273]) * unkR[545],"LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out") ;
//[E-342]  ThrustMonitor_1.p_out = Comb_Chamb.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))
unkR[547] = _div( unkR[72] , _pow( (1. + (LPRES__gamma(&unkR[273]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[273]) - 1.) , LPRES__gamma(&unkR[273]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))") ;
//[E-343]  ThrustMonitor_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[546] = LPRES__ISA_Pressure(unkR[496]) ;
//[E-344]  ControlPanel.Thrust = ThrustMonitor_1.g.W * ThrustMonitor_1.v_out + ThrustMonitor_1.g.A_out * (ThrustMonitor_1.p_out - ThrustMonitor_1.p_amb)
unkR[329] = unkR[272] * unkR[548] + unkR[46] * (unkR[547] - unkR[546]) ;
//[E-345]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[327] = _div( unkR[329] , unkR[330],"ControlPanel.W_tot") ;
//[E-346]  ControlPanel.C_E = ControlPanel.Isp / ThrustMonitor_1.g.c_star
unkR[326] = _div( unkR[327] , unkR[66],"ThrustMonitor_1.g.c_star") ;
//[E-347]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[328] = unkR[327]/9.80665 ;
//[E-348]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[331] = unkR[329] ;
//[E-349]  Heat_exchanger_1.f_in.pt = Turbine_FUEL.f_in.pt + Heat_exchanger_1.dp
unkR[42] = unkR[419] + unkR[379] ;
//[E-350]  CCV.dp = CCV.f_in.pt - Heat_exchanger_1.f_in.pt
unkR[1] = unkR[41] - unkR[42] ;
//[E-351]  Heat_exchanger_1.P_av = 0.5 * Turbine_FUEL.f_in.pt + 0.5 * CCV.f_in.pt - 0.5 * CCV.dp
unkR[362] = 0.5 * unkR[419] + 0.5 * unkR[41] - 0.5 * unkR[1] ;
//[E-352]  Heat_exchanger_1.fluid_out[Comb_prod_visc] = Inlet_LH2.fluidV[Comb_prod_visc]
unkR[454] = unkR[37] ;
//[E-353]  Heat_exchanger_1.fluid_out[Comb_prod_cond] = Inlet_LH2.fluidV[Comb_prod_cond]
unkR[455] = unkR[38] ;
//[E-354]  Heat_exchanger_1.fluid_out[Comb_prod_rho] = Inlet_LH2.fluidV[Comb_prod_rho]
unkR[457] = unkR[40] ;
//[E-355]  Heat_exchanger_1.fluid_out[LOX] = -Turbine_FUEL.f_in.fluid[LOX]
unkR[420] = -unkR[381] ;
//[E-356]  Heat_exchanger_1.fluid_out[LCH4] = -Turbine_FUEL.f_in.fluid[LCH4]
unkR[427] = -unkR[388] ;
//[E-357]  Heat_exchanger_1.fluid_out[LH2] = -Turbine_FUEL.f_in.fluid[LH2]
unkR[428] = -unkR[389] ;
//[E-358]  Heat_exchanger_1.fluid_out[MMH] = -Turbine_FUEL.f_in.fluid[MMH]
unkR[431] = -unkR[392] ;
//[E-359]  Heat_exchanger_1.f = 0
unkR[380] = 0. ;
//[E-360]  Heat_exchanger_1.D_eq = 1.3 * (Heat_exchanger_1.a * Heat_exchanger_1.b) ** 0.625 / (Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25
unkR[348] = _div( 1.3 * _pow( (unkR[376] * unkR[377]) , 0.625,"(Heat_exchanger_1.a * Heat_exchanger_1.b)**(0.625)" ) , _pow( (unkR[376] + unkR[377]) , 0.25,"(Heat_exchanger_1.a + Heat_exchanger_1.b)**(0.25)" ),"(Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25") ;
//[E-361]  MFV.M_th = 0
unkR[498] = 0. ;
//[E-362]  MFV.dp = MFV.f_in.pt - Injector_FUEL.f_in.pt
unkR[499] = unkR[500] - unkR[480] ;
//[E-363]  MOV.M_th = 0
unkR[502] = 0. ;
//[E-364]  MOV.rho_f = LPRES.rho(Inlet_LOX.fluidV)
unkR[505] = LPRES__rho(&unkR[75]) ;
//[E-365]  MOV.f_in.pt = FlowMeter_LOX.f_in.pt + MOV.dp
unkR[504] = unkR[336] + unkR[503] ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-367]  CCV.M_th = 0
unkR[0] = 0. ;
//[E-368]  CCV.rho_f = LPRES.rho(Inlet_LH2.fluidV)
unkR[43] = LPRES__rho(&unkR[3]) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-370]  ControlPanel.i_W.Data[1] = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[332] = unkR[335] + unkR[337] ;

//save last residues
memcpy(this->res,res,11*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[3])))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",288,"Pump_FUEL_LH2.","Liquid == LPRES.State(Inlet_LH2.fluidV)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[381])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",119,"Turbine_FUEL.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED TURBINE!");
if(!(2 == LPRES__State(&unkR[381])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",119,"Turbine_OXIDIZER.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED TURBINE!");
if(!(1 == LPRES__State(&unkR[75])))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",288,"Pump_LOX_OXIDIZER.","Liquid == LPRES.State(Inlet_LOX.fluidV)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(unkR[473] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_FUEL.","Injector_FUEL.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[3]) == 2 || 1 && LPRES__State(&unkR[3]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_FUEL."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(unkR[483] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_OXIDIZER.","Injector_OXIDIZER.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[75]) == 2 || 1 && LPRES__State(&unkR[75]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_OXIDIZER."," FALSE  AND LPRES.State(Inlet_LOX.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LOX.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(2 == LPRES__State(&unkR[381])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle_1.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[273])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",807,"ThrustMonitor_1.","Gas == LPRES.State(ThrustMonitor_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",808,"ThrustMonitor_1.","ThrustMonitor_1.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[547] , unkR[546],"ThrustMonitor_1.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor_1.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",809,"ThrustMonitor_1.","(ThrustMonitor_1.p_out / ThrustMonitor_1.p_amb) > ((1.88 * ThrustMonitor_1.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(0 && LPRES__State(&unkR[3]) == 1 || 0 && LPRES__State(&unkR[3]) == 2 || 1 && LPRES__State(&unkR[3]) == 1 || 0 && LPRES__State(&unkR[3]) == 2))
		issueErrorAssert(216,9,24,98,"LPRES_CompHeat.el",284,"Heat_exchanger_1."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas","%s","CHECK HEAT EXCHANGER TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH HEAT EXCHANGER");
if(!(unkR[498] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"MFV.","MFV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[3]) == 2 || 1 && LPRES__State(&unkR[3]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"MFV."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
if(!(unkR[502] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"MOV.","MOV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[75]) == 2 || 1 && LPRES__State(&unkR[75]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"MOV."," FALSE  AND LPRES.State(Inlet_LOX.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LOX.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
if(!(unkR[0] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"CCV.","CCV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[3]) == 2 || 1 && LPRES__State(&unkR[3]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"CCV."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[151] * unkR[113] + unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[155] * unkR[117] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[154] * unkR[116] + unkR[178] * unkR[140]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
    ev[1]= unkR[151] * unkR[113] + unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[155] * unkR[117] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[154] * unkR[116] + unkR[178] * unkR[140]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
    ev[2]= unkI[0] - 1; //Comb_Chamb.Combustion
    ev[3]= unkR[508]; //Nozzle_1.M_out > 0
    ev[4]= unkR[509] - unkR[510]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
     w[1] = cont[1] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::executeWhen(double *_time,  int index )
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Comb_Chamb.Q_comb_effective =  ZONE (Comb_Chamb.Combustion) Comb_Chamb.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Nozzle_1.A_sl =  ZONE (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)) OTHERS 1
     branchZone[2] = (cont[4] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__LE5B_valves_valves_off_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design::initDelays()
{
}


bool LPRES_EXAMPLES__LE5B_valves_valves_off_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design = 103592;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design;
return true;
}



bool LPRES_EXAMPLES__LE5B_valves_valves_off_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design = 460;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design[] = 
{
"CwAAAD0AAAAAAAAABQAAAAUAAAAFAAAABQAAAAUAAAAGAAAABgAAAAYAAAAGAAAABgAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAALAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__LE5B_valves_valves_off_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__LE5B_valves_valves_off_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__LE5B_valves_valves_off_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__LE5B_valves_valves_off_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__LE5B_valves_valves_off_design(name,dirInstall);
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
	sprintf(partitionName,"%s","valves_off_design");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+l+e5+b_valves.valves_off_design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv_CPP
#define LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv_CPP

#include "LPRES_EXAMPLES.+l+e5+b_valves.valves_off_design_ccv.h"

LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv* LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::s_current= NULL;

LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "LE5B_valves";
m_infoPartitionName = "valves_off_design_ccv";
m_infoModelName = "LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv";
m_infoModelFileName = "LPRES_EXAMPLES.+l+e5+b_valves.valves_off_design_ccv";
m_infoModelFileNameExtra = "+l+e5+b_valves.valves_off_design_ccv";
m_perfFlag = false;
m_infoComponentDate = "05/07/2020 14:04:39.296000";
m_infoPartitionDate = "05/07/2020 18:04:17.102000";
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
static double tmp_unkRInit[570]={ 0.001, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
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
		1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0.001, 0, 
		1, 1, 0, 0, 1, 1, 150, 0.005, 0, 0, 0, 0, 0, 0, 0, 1, 
		1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002, 0.004, 0.001, 3000000, 0, 1, 
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::initInternalModels()
{
}

void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__rho(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__visc(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[])
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


void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__Decomposition_fun(double fluid_in[],double Data_Array[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__Lv(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__T_boil(double fluid[])
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


void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__Obtain_Vap_Prop(double fluid_in[],double Cp_i[],double Lv_i[],double T_boil_i[],double fluid_out[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__cond(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::initBlocks( double dyn[], double ldr[], double *_time )
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
	unkR[514] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-167]  Comb_Chamb.f_F.W = Comb_Chamb.W_F / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[73] = _div( dyn[1] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-168]  Comb_Chamb.W_IF = Comb_Chamb.f_F.W - Comb_Chamb.W_F
unkR[64] = unkR[73] - dyn[1] ;
//[E-169]  Comb_Chamb.W_O = Comb_Chamb.OF * Comb_Chamb.W_F
unkR[66] = unkR[54] * dyn[1] ;
//[E-170]  FlowMeter_LOX.f_in.W = Comb_Chamb.W_O / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[76] = _div( unkR[66] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-171]  Comb_Chamb.W_IO = FlowMeter_LOX.f_in.W - Comb_Chamb.W_O
unkR[65] = unkR[76] - unkR[66] ;
//[E-172]  ThrustMonitor_1.g.W = Comb_Chamb.W_IO + Comb_Chamb.W_O + Comb_Chamb.W_F + Comb_Chamb.W_IF
unkR[274] = unkR[65] + unkR[66] + dyn[1] + unkR[64] ;
//[E-173]  Comb_Chamb.cp_R = (Comb_Chamb.W_O * LPRES.cp(Comb_Chamb.fluid_O) + Comb_Chamb.W_F * LPRES.cp(Comb_Chamb.fluid_F)) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
unkR[71] = _div( (unkR[66] * LPRES__cp(&unkR[153]) + dyn[1] * LPRES__cp(&unkR[115])) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
//[E-174]  Comb_Chamb.W_F_st = Comb_Chamb.W_F / Comb_Chamb.phi
unkR[63] = _div( dyn[1] , unkR[317],"Comb_Chamb.phi") ;
//[E-175]  Comb_Chamb.fluid_P[LOX] =  IF[1] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LOX] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LOX] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LOX] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[191] = _div( (unkR[153] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[115] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[191] = _div( (unkR[153] * unkR[66] + unkR[115] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-176]  Comb_Chamb.fluid_P[NTO] =  IF[2] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[NTO] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NTO] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[NTO] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NTO] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[192] = _div( (unkR[154] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[116] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[192] = _div( (unkR[154] * unkR[66] + unkR[116] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-177]  Comb_Chamb.fluid_P[H2O2] =  IF[3] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[193] = _div( (unkR[155] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[117] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[193] = _div( (unkR[155] * unkR[66] + unkR[117] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-178]  Comb_Chamb.fluid_P[HNO3] =  IF[4] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[HNO3] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[HNO3] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[HNO3] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[195] = _div( (unkR[157] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[119] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[195] = _div( (unkR[157] * unkR[66] + unkR[119] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-179]  Comb_Chamb.fluid_P[LF2] =  IF[5] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LF2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LF2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LF2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LF2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[196] = _div( (unkR[158] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[120] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[196] = _div( (unkR[158] * unkR[66] + unkR[120] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-180]  Comb_Chamb.fluid_P[RP_1] =  IF[6] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[RP_1] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[RP_1] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[RP_1] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[197] = _div( (unkR[159] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[121] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[197] = _div( (unkR[159] * unkR[66] + unkR[121] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-181]  Comb_Chamb.fluid_P[LCH4] =  IF[7] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LCH4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LCH4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LCH4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[198] = _div( (unkR[160] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[122] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[198] = _div( (unkR[160] * unkR[66] + unkR[122] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-182]  Comb_Chamb.fluid_P[LH2] =  IF[8] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LH2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LH2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LH2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LH2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[199] = _div( (unkR[161] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[123] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[199] = _div( (unkR[161] * unkR[66] + unkR[123] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-183]  Comb_Chamb.fluid_P[N2H4] =  IF[9] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[N2H4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2H4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2H4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[200] = _div( (unkR[162] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[124] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[200] = _div( (unkR[162] * unkR[66] + unkR[124] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-184]  Comb_Chamb.fluid_P[UDMH] =  IF[10] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[UDMH] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[UDMH] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[UDMH] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[201] = _div( (unkR[163] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[125] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[201] = _div( (unkR[163] * unkR[66] + unkR[125] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-185]  Comb_Chamb.fluid_P[MMH] =  IF[11] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[MMH] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[MMH] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[202] = _div( (unkR[164] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[126] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[202] = _div( (unkR[164] * unkR[66] + unkR[126] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-186]  Comb_Chamb.fluid_P[JP_10] =  IF[12] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[JP_10] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[JP_10] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[JP_10] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[203] = _div( (unkR[165] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[127] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[203] = _div( (unkR[165] * unkR[66] + unkR[127] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-187]  Comb_Chamb.fluid_P[Kerox] =  IF[13] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Kerox] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Kerox] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Kerox] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[204] = _div( (unkR[166] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[128] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[204] = _div( (unkR[166] * unkR[66] + unkR[128] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-188]  Comb_Chamb.fluid_P[Oil] =  IF[14] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Oil] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Oil] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Oil] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Oil] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[205] = _div( (unkR[167] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[129] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[205] = _div( (unkR[167] * unkR[66] + unkR[129] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-189]  Comb_Chamb.fluid_P[H2O] =  IF[15] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[206] = _div( (unkR[168] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[130] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[206] = _div( (unkR[168] * unkR[66] + unkR[130] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-190]  Comb_Chamb.fluid_P[IPA] =  IF[16] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[IPA] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[IPA] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[IPA] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[IPA] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[207] = _div( (unkR[169] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[131] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[207] = _div( (unkR[169] * unkR[66] + unkR[131] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-191]  Comb_Chamb.fluid_P[Air] =  IF[17] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Air] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Air] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Air] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Air] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[208] = _div( (unkR[170] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[132] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[208] = _div( (unkR[170] * unkR[66] + unkR[132] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-192]  Comb_Chamb.fluid_P[Ar] =  IF[18] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Ar] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Ar] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Ar] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Ar] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[209] = _div( (unkR[171] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[133] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[209] = _div( (unkR[171] * unkR[66] + unkR[133] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-193]  Comb_Chamb.fluid_P[CH4] =  IF[19] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CH4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CH4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CH4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CH4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[210] = _div( (unkR[172] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[134] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[210] = _div( (unkR[172] * unkR[66] + unkR[134] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-194]  Comb_Chamb.fluid_P[CO] =  IF[20] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CO] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CO] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[211] = _div( (unkR[173] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[135] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[211] = _div( (unkR[173] * unkR[66] + unkR[135] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-195]  Comb_Chamb.fluid_P[CO2] =  IF[21] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CO2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CO2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[212] = _div( (unkR[174] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[136] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[212] = _div( (unkR[174] * unkR[66] + unkR[136] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-196]  Comb_Chamb.fluid_P[H2] =  IF[22] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[213] = _div( (unkR[175] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[137] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[213] = _div( (unkR[175] * unkR[66] + unkR[137] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-197]  Comb_Chamb.fluid_P[He] =  IF[23] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[He] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[He] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[He] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[He] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[214] = _div( (unkR[176] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[138] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[214] = _div( (unkR[176] * unkR[66] + unkR[138] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-198]  Comb_Chamb.fluid_P[N2] =  IF[24] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[N2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[N2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[215] = _div( (unkR[177] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[139] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[215] = _div( (unkR[177] * unkR[66] + unkR[139] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-199]  Comb_Chamb.fluid_P[O2] =  IF[25] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[O2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[O2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[O2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[O2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[216] = _div( (unkR[178] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[140] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[216] = _div( (unkR[178] * unkR[66] + unkR[140] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-200]  Comb_Chamb.fluid_P[MMH_vapour] =  IF[26] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[MMH_vapour] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH_vapour] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH_vapour] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[217] = _div( (unkR[179] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[141] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[217] = _div( (unkR[179] * unkR[66] + unkR[141] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-201]  Comb_Chamb.fluid_P[NH3] =  IF[27] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[NH3] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NH3] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[NH3] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NH3] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[194] = _div( (unkR[156] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[118] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[194] = _div( (unkR[156] * unkR[66] + unkR[118] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-202]  Comb_Chamb.fluid_P[H2O_vapour] =  IF[28] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O_vapour] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O_vapour] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O_vapour] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[218] = _div( (unkR[180] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[142] * MATH__max(unkR[317] - 1., 0.) * unkR[63]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[218] = _div( (unkR[180] * unkR[66] + unkR[142] * dyn[1]) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-203]  Comb_Chamb.fluid_P[Comb_prod] =  IF[29] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Comb_prod] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Comb_prod] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st + (1 - MATH.max(1 - Comb_Chamb.phi, 0)) * (Comb_Chamb.W_O + Comb_Chamb.W_F_st)) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[219] = _div( (unkR[181] * MATH__max(1. - unkR[317], 0.) * unkR[66] + unkR[143] * MATH__max(unkR[317] - 1., 0.) * unkR[63] + (1. - MATH__max(1. - unkR[317], 0.)) * (unkR[66] + unkR[63])) , (unkR[66] + dyn[1]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[219] = 0. ;
}
//[E-204]  LPRES.Vaporisation_mix(Comb_Chamb.fluid_P, Comb_Chamb.fluid_P_vap) %%% (OUT VAR)Comb_Chamb.fluid_P_vap 
LPRES__Vaporisation_mix(&unkR[191], &unkR[235]);
//[E-205]  LPRES.Decomposition_fun(Comb_Chamb.fluid_P_vap, Comb_Chamb.fluid_P_decomp) %%% (OUT VAR)Comb_Chamb.fluid_P_decomp 
LPRES__Decomposition_fun(&unkR[235], &unkR[229]);
//[E-206]  ThrustMonitor_1.g.fluid[LOX] = Comb_Chamb.fluid_P_vap[LOX] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[275] = _div( unkR[235] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-207]  ThrustMonitor_1.g.fluid[NTO] = Comb_Chamb.fluid_P_vap[NTO] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[276] = _div( unkR[236] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-208]  ThrustMonitor_1.g.fluid[H2O2] = Comb_Chamb.fluid_P_vap[H2O2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[277] = _div( unkR[237] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-209]  ThrustMonitor_1.g.fluid[NH3] = Comb_Chamb.fluid_P_vap[NH3] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[278] = _div( unkR[238] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-210]  ThrustMonitor_1.g.fluid[HNO3] = Comb_Chamb.fluid_P_vap[HNO3] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[279] = _div( unkR[239] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-211]  ThrustMonitor_1.g.fluid[LF2] = Comb_Chamb.fluid_P_vap[LF2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[280] = _div( unkR[240] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-212]  ThrustMonitor_1.g.fluid[RP_1] = Comb_Chamb.fluid_P_vap[RP_1] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[281] = _div( unkR[241] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-213]  ThrustMonitor_1.g.fluid[LCH4] = Comb_Chamb.fluid_P_vap[LCH4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[282] = _div( unkR[242] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-214]  ThrustMonitor_1.g.fluid[LH2] = Comb_Chamb.fluid_P_vap[LH2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[283] = _div( unkR[243] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-215]  ThrustMonitor_1.g.fluid[N2H4] = Comb_Chamb.fluid_P_vap[N2H4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[284] = _div( unkR[244] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-216]  ThrustMonitor_1.g.fluid[UDMH] = Comb_Chamb.fluid_P_vap[UDMH] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[285] = _div( unkR[245] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-217]  ThrustMonitor_1.g.fluid[MMH] = Comb_Chamb.fluid_P_vap[MMH] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[286] = _div( unkR[246] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-218]  ThrustMonitor_1.g.fluid[JP_10] = Comb_Chamb.fluid_P_vap[JP_10] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[287] = _div( unkR[247] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-219]  ThrustMonitor_1.g.fluid[Kerox] = Comb_Chamb.fluid_P_vap[Kerox] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[288] = _div( unkR[248] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-220]  ThrustMonitor_1.g.fluid[Oil] = Comb_Chamb.fluid_P_vap[Oil] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[289] = _div( unkR[249] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-221]  ThrustMonitor_1.g.fluid[H2O] = Comb_Chamb.fluid_P_vap[H2O] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[290] = _div( unkR[250] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-222]  ThrustMonitor_1.g.fluid[IPA] = Comb_Chamb.fluid_P_vap[IPA] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[291] = _div( unkR[251] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-223]  ThrustMonitor_1.g.fluid[Air] = Comb_Chamb.fluid_P_vap[Air] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[292] = _div( unkR[252] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-224]  ThrustMonitor_1.g.fluid[Ar] = Comb_Chamb.fluid_P_vap[Ar] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[293] = _div( unkR[253] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-225]  ThrustMonitor_1.g.fluid[CH4] = Comb_Chamb.fluid_P_vap[CH4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[294] = _div( unkR[254] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-226]  ThrustMonitor_1.g.fluid[CO] = Comb_Chamb.fluid_P_vap[CO] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[295] = _div( unkR[255] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-227]  ThrustMonitor_1.g.fluid[CO2] = Comb_Chamb.fluid_P_vap[CO2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[296] = _div( unkR[256] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-228]  ThrustMonitor_1.g.fluid[H2] = Comb_Chamb.fluid_P_vap[H2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[297] = _div( unkR[257] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-229]  ThrustMonitor_1.g.fluid[He] = Comb_Chamb.fluid_P_vap[He] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[298] = _div( unkR[258] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-230]  ThrustMonitor_1.g.fluid[N2] = Comb_Chamb.fluid_P_vap[N2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[299] = _div( unkR[259] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-231]  ThrustMonitor_1.g.fluid[O2] = Comb_Chamb.fluid_P_vap[O2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[300] = _div( unkR[260] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-232]  ThrustMonitor_1.g.fluid[MMH_vapour] = Comb_Chamb.fluid_P_vap[MMH_vapour] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[301] = _div( unkR[261] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-233]  ThrustMonitor_1.g.fluid[H2O_vapour] = Comb_Chamb.fluid_P_vap[H2O_vapour] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[302] = _div( unkR[262] * (unkR[66] + dyn[1]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-234]  ThrustMonitor_1.g.fluid[Comb_prod] = (Comb_Chamb.fluid_P_vap[Comb_prod] * (Comb_Chamb.W_O + Comb_Chamb.W_F) + Comb_Chamb.W_IO + Comb_Chamb.W_IF) / ThrustMonitor_1.g.W
unkR[303] = _div( (unkR[263] * (unkR[66] + dyn[1]) + unkR[65] + unkR[64]) , unkR[274],"ThrustMonitor_1.g.W") ;
//[E-235]  ThrustMonitor_1.g.fluid[Comb_prod_M] = Comb_Chamb.fluid_P_vap[Comb_prod_M]
unkR[304] = unkR[264] ;
//[E-236]  ThrustMonitor_1.g.fluid[Comb_prod_cp] = Comb_Chamb.fluid_P_vap[Comb_prod_cp]
unkR[305] = unkR[265] ;
//[E-237]  ThrustMonitor_1.g.fluid[Comb_prod_c] = Comb_Chamb.fluid_P_vap[Comb_prod_c]
unkR[306] = unkR[266] ;
//[E-238]  ThrustMonitor_1.g.fluid[Comb_prod_cp_g] = Comb_Chamb.fluid_P_vap[Comb_prod_cp_g]
unkR[307] = unkR[267] ;
//[E-239]  ThrustMonitor_1.g.fluid[Comb_prod_Lv] = Comb_Chamb.fluid_P_vap[Comb_prod_Lv]
unkR[308] = unkR[268] ;
//[E-240]  ThrustMonitor_1.g.fluid[Comb_prod_visc] = Comb_Chamb.fluid_P_vap[Comb_prod_visc]
unkR[309] = unkR[269] ;
//[E-241]  ThrustMonitor_1.g.fluid[Comb_prod_cond] = Comb_Chamb.fluid_P_vap[Comb_prod_cond]
unkR[310] = unkR[270] ;
//[E-242]  ThrustMonitor_1.g.fluid[Comb_prod_T_boil] = Comb_Chamb.fluid_P_vap[Comb_prod_T_boil]
unkR[311] = unkR[271] ;
//[E-243]  ThrustMonitor_1.g.fluid[Comb_prod_rho] = Comb_Chamb.fluid_P_vap[Comb_prod_rho]
unkR[312] = unkR[272] ;
//[E-244]  Comb_Chamb.Pr_r = 4 * LPRES.gamma(ThrustMonitor_1.g.fluid) / (9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5)
unkR[56] = _div( 4. * LPRES__gamma(&unkR[275]) , (9. * LPRES__gamma(&unkR[275]) - 5.),"9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5") ;
//[E-245]  Comb_Chamb.AR_r = 1 / Comb_Chamb.M_r * LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,unkR[47],_div( _div( 1 , dyn[0],"Comb_Chamb.M_r") * LPRES__FGAMMA(&unkR[275]) , _sqrt(LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[275]) - 1) * _pow( dyn[0] , 2,"(Comb_Chamb.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[275]) + 1) , (2 * (LPRES__gamma(&unkR[275]) - 1)),"2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))" ));
//[E-246]  Pump_FUEL_LH2.dp = -(Pump_FUEL_LH2.tau_id * LPRES.rho(Inlet_LH2.fluidV))
unkR[521] = -(dyn[2] * LPRES__rho(&unkR[5])) ;
//[E-247]  FlowMeter_LH2.f_in.pt = Inlet_LH2.pt + Pump_FUEL_LH2.dp
unkR[336] = unkR[494] + unkR[521] ;
//[E-248]  CCV.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[43] = unkR[336] * unkR[544] ;
//[E-249]  Pump_FUEL_LH2.tau = Pump_FUEL_LH2.tau_id / Pump_FUEL_LH2.eta_d
unkR[531] = _div( dyn[2] , unkR[522],"Pump_FUEL_LH2.eta_d") ;
//[E-250]  Comb_Chamb.f_F.T = (Pump_FUEL_LH2.tau_id - Pump_FUEL_LH2.tau) / LPRES.cp(Inlet_LH2.fluidV) + Inlet_LH2.Tt
unkR[3] = _div( (dyn[2] - unkR[531]) , LPRES__cp(&unkR[5]),"LPRES.cp(Inlet_LH2.fluidV)") + unkR[493] ;
//[E-251]  Heat_exchanger_1.T_av = (Comb_Chamb.f_F.T + Turbine_FUEL.f_in.Tt) / 2
unkR[367] = (unkR[3] + unkR[554])/2. ;
//[E-252]  Pump_LOX_OXIDIZER.tau = Pump_LOX_OXIDIZER.tau_id / Pump_LOX_OXIDIZER.eta_d
unkR[543] = _div( dyn[3] , unkR[534],"Pump_LOX_OXIDIZER.eta_d") ;
//[E-253]  Pump_LOX_OXIDIZER.m.Power = FlowMeter_LOX.f_in.W * Pump_LOX_OXIDIZER.tau
unkR[536] = unkR[76] * unkR[543] ;
//[E-254]  Turbine_OXIDIZER.m.Power = -Pump_LOX_OXIDIZER.m.Power
unkR[566] = -unkR[536] ;
//[E-255]  FlowMeter_LOX.f_in.Tt = (Pump_LOX_OXIDIZER.tau_id - Pump_LOX_OXIDIZER.tau) / LPRES.cp(Inlet_LOX.fluidV) + Inlet_LOX.Tt
unkR[75] = _div( (dyn[3] - unkR[543]) , LPRES__cp(&unkR[77]),"LPRES.cp(Inlet_LOX.fluidV)") + unkR[495] ;
//[E-256]  Comb_Chamb.T_in = (LPRES.cp(Comb_Chamb.fluid_O) * FlowMeter_LOX.f_in.Tt + Comb_Chamb.phi / Comb_Chamb.OF_st * LPRES.cp(Comb_Chamb.fluid_F) * Comb_Chamb.f_F.T) / ((1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R)
unkR[62] = _div( (LPRES__cp(&unkR[153]) * unkR[75] + _div( unkR[317] , unkR[55],"Comb_Chamb.OF_st") * LPRES__cp(&unkR[115]) * unkR[3]) , ((1. + _div( unkR[317] , unkR[55],"Comb_Chamb.OF_st")) * unkR[71]),"(1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R") ;
//[E-257]  Comb_Chamb.T_c = (Comb_Chamb.eta_d * Comb_Chamb.Q_comb_effective / ((1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)) + Comb_Chamb.cp_R * (Comb_Chamb.T_in - 298.15)) / LPRES.cp(Comb_Chamb.fluid_P_vap) + 298.15
unkR[61] = _div( (_div( unkR[72] * unkR[58] , (_div( (1. + unkR[54]) , MATH__min(unkR[54], unkR[55]),"MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)")),"(1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)") + unkR[71] * (unkR[62] - 298.15)) , LPRES__cp(&unkR[235]),"LPRES.cp(Comb_Chamb.fluid_P_vap)") + 298.15 ;
//[E-258]  ThrustMonitor_1.g.Tt = (-((Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] * -Comb_Chamb.T_c + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] * -FlowMeter_LOX.f_in.Tt) - Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp] * -Comb_Chamb.f_F.T) / ((Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] + Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp])
unkR[273] = _div( (-(_div( (unkR[66] + dyn[1]) * unkR[229] , unkR[274],"ThrustMonitor_1.g.W") * unkR[230] * -unkR[61] + _div( unkR[65] , unkR[274],"ThrustMonitor_1.g.W") * unkR[107] * -unkR[75]) - _div( unkR[64] , unkR[274],"ThrustMonitor_1.g.W") * unkR[35] * -unkR[3]) , (_div( (unkR[66] + dyn[1]) * unkR[229] , unkR[274],"ThrustMonitor_1.g.W") * unkR[230] + _div( unkR[65] , unkR[274],"ThrustMonitor_1.g.W") * unkR[107] + _div( unkR[64] , unkR[274],"ThrustMonitor_1.g.W") * unkR[35]),"(Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] + Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp]") ;
//[E-259]  Comb_Chamb.f_O.p_c = ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / Comb_Chamb.A_th
unkR[74] = _div( _div( unkR[274] * _sqrt(LPRES__R(&unkR[275]) * unkR[273],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[275]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") , unkR[50],"Comb_Chamb.A_th") ;
//[E-260]  ThrustMonitor_1.g.c_star = sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid)
unkR[68] = _div( _sqrt(LPRES__R(&unkR[275]) * unkR[273],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[275]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") ;
//[E-261]  Comb_Chamb.T_aw = ThrustMonitor_1.g.Tt * (1 + Comb_Chamb.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)
unkR[59] = unkR[273] * _div( (1. + _pow( unkR[56] , 0.33,"(Comb_Chamb.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[275]) - 1.) * _pow( dyn[0] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[275]) - 1.) * _pow( dyn[0] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2") ;
//[E-262]  Comb_Chamb.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor_1.g.fluid) ** 0.5 * Comb_Chamb.T_aw ** 0.6
unkR[319] = 1.184e-07 * _pow( LPRES__M(&unkR[275]) , 0.5,"(LPRES.M(ThrustMonitor_1.g.fluid))**(0.5)" ) * _pow( unkR[59] , 0.6,"(Comb_Chamb.T_aw)**(0.6)" ) ;
//[E-263]  Comb_Chamb.h_g = 0.026 / sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2 * Comb_Chamb.visc_r ** 0.2 * LPRES.cp(ThrustMonitor_1.g.fluid) / Comb_Chamb.Pr_r ** 0.6 * (Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star) ** 0.8 * (Comb_Chamb.A_th / Comb_Chamb.A_r) ** 0.9
unkR[315] = _div( 0.026 , _pow( _sqrt(4. * unkR[50]/3.14159265358979,"4 * Comb_Chamb.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * Comb_Chamb.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[319] , 0.2,"(Comb_Chamb.visc_r)**(0.2)" ) * LPRES__cp(&unkR[275]) , _pow( unkR[56] , 0.6,"(Comb_Chamb.Pr_r)**(0.6)" ),"Comb_Chamb.Pr_r ** 0.6") * _pow( (_div( unkR[74] , unkR[68],"ThrustMonitor_1.g.c_star")) , 0.8,"(Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star)**(0.8)" ) * _pow( (_div( unkR[50] , unkR[49],"Comb_Chamb.A_r")) , 0.9,"(Comb_Chamb.A_th / Comb_Chamb.A_r)**(0.9)" ) ;
//[E-264]  CCV.f_in.W = Turbine_FUEL.MFP * Turbine_FUEL.f_in.pt / sqrt(Turbine_FUEL.f_in.Tt)
unkR[4] = _div( unkR[550] * dyn[4] , _sqrt(unkR[554],"Turbine_FUEL.f_in.Tt"),"sqrt(Turbine_FUEL.f_in.Tt)") ;
//[E-265]  Turbine_OXIDIZER.tau = Turbine_OXIDIZER.m.Power / CCV.f_in.W
unkR[568] = _div( unkR[566] , unkR[4],"CCV.f_in.W") ;
//[E-266]  FlowMeter_LH2.f_in.W = CCV.f_in.W + Comb_Chamb.W_F + Comb_Chamb.W_IF
unkR[335] = unkR[4] + dyn[1] + unkR[64] ;
//[E-267]  Pump_FUEL_LH2.m.Power = FlowMeter_LH2.f_in.W * Pump_FUEL_LH2.tau
unkR[524] = unkR[335] * unkR[531] ;
//[E-268]  Turbine_FUEL.m.Power = -Pump_FUEL_LH2.m.Power
unkR[557] = -unkR[524] ;
//[E-269]  Turbine_FUEL.tau = Turbine_FUEL.m.Power / CCV.f_in.W
unkR[559] = _div( unkR[557] , unkR[4],"CCV.f_in.W") ;
//[E-270]  Turbine_OXIDIZER.f_in.Tt = Turbine_FUEL.f_in.Tt - Turbine_FUEL.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[555] = unkR[554] - _div( unkR[559] , LPRES__cp(&unkR[383]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-271]  Turbine_FUEL.alpha = Turbine_OXIDIZER.f_in.Tt / Turbine_FUEL.f_in.Tt
unkR[551] = _div( unkR[555] , unkR[554],"Turbine_FUEL.f_in.Tt") ;
//[E-272]  Turbine_FUEL.beta = (1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[552] = _pow( (1. - _div( (1. - unkR[551]) , unkR[553],"Turbine_FUEL.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[383]) - 1.) , LPRES__gamma(&unkR[383]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-273]  Turbine_OXIDIZER.f_in.pt = Turbine_FUEL.beta * Turbine_FUEL.f_in.pt
unkR[556] = unkR[552] * dyn[4] ;
//[E-274]  Turbine_OXIDIZER.MFP = CCV.f_in.W * sqrt(Turbine_OXIDIZER.f_in.Tt) / Turbine_OXIDIZER.f_in.pt
res[1] = evalNormResidueInternal(1,unkR[562],_div( unkR[4] * _sqrt(unkR[555],"Turbine_OXIDIZER.f_in.Tt") , unkR[556],"Turbine_OXIDIZER.f_in.pt"));
//[E-275]  Nozzle_1.g.Tt = Turbine_OXIDIZER.f_in.Tt - Turbine_OXIDIZER.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[513] = unkR[555] - _div( unkR[568] , LPRES__cp(&unkR[383]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-276]  Turbine_OXIDIZER.alpha = Nozzle_1.g.Tt / Turbine_OXIDIZER.f_in.Tt
unkR[563] = _div( unkR[513] , unkR[555],"Turbine_OXIDIZER.f_in.Tt") ;
//[E-277]  Turbine_OXIDIZER.beta = (1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[564] = _pow( (1. - _div( (1. - unkR[563]) , unkR[565],"Turbine_OXIDIZER.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[383]) - 1.) , LPRES__gamma(&unkR[383]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-278]  Nozzle_1.g.pt = Turbine_OXIDIZER.beta * Turbine_OXIDIZER.f_in.pt
unkR[514] = unkR[564] * unkR[556] ;
//[E-279]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[509] = _div( unkR[514] , unkR[516],"Nozzle_1.p_amb") ;
//[E-280]  Nozzle_1.M_out =  ZONE[3] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))	  OTHERS 1
 if(m_branchZone[2]==0)
	unkR[508] = _sqrt(_div( 2. * (_pow( unkR[509] , (_div( (LPRES__gamma(&unkR[383]) - 1.) , LPRES__gamma(&unkR[383]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[383]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)") ;
else unkR[508] = 1. ;
//[E-281]  Nozzle_1.A_sl =  ZONE[2] (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))	  OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
 if(m_branchZone[1]==0)
	unkR[507] = _div( unkR[506] * unkR[508] , _pow( (_div( (2. + (LPRES__gamma(&unkR[383]) - 1.) * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[383]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[383]) + 1.) , (2. * (LPRES__gamma(&unkR[383]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))") ;
else unkR[507] = _div( unkR[506] * -unkR[508] , _pow( (_div( (2. + (LPRES__gamma(&unkR[383]) - 1.) * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[383]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[383]) + 1.) , (2. * (LPRES__gamma(&unkR[383]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))") ;
//[E-282]  CCV.f_in.W = Nozzle_1.A_sl * LPRES.FGAMMA(Turbine_FUEL.f_in.fluid) * Nozzle_1.g.pt / sqrt(Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid))
res[2] = evalNormResidueInternal(2,unkR[4],_div( unkR[507] * LPRES__FGAMMA(&unkR[383]) * unkR[514] , _sqrt(unkR[513] * LPRES__R(&unkR[383]),"Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid)"),"sqrt(Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid))"));
//[E-283]  Heat_exchanger_1.h.Q = CCV.f_in.W * (Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[01] * (Heat_exchanger_1.T_boil_v[01] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[02] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[01]) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Lv_v[01] + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[03] * (Heat_exchanger_1.T_boil_v[03] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[04] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[03]) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Lv_v[03] + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[05] * (Heat_exchanger_1.T_boil_v[05] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[06] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[05]) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Lv_v[05] + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[07] * (Heat_exchanger_1.T_boil_v[07] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[08] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[07]) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Lv_v[07] + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[09] * (Heat_exchanger_1.T_boil_v[09] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[10] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[09]) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Lv_v[09])
unkR[313] = unkR[4] * (unkR[460] * unkR[340] * (unkR[368] - unkR[3]) + unkR[460] * unkR[341] * (unkR[554] - unkR[368]) + unkR[460] * unkR[353] + unkR[462] * unkR[342] * (unkR[370] - unkR[3]) + unkR[462] * unkR[343] * (unkR[554] - unkR[370]) + unkR[462] * unkR[355] + unkR[464] * unkR[344] * (unkR[372] - unkR[3]) + unkR[464] * unkR[345] * (unkR[554] - unkR[372]) + unkR[464] * unkR[357] + unkR[466] * unkR[346] * (unkR[374] - unkR[3]) + unkR[466] * unkR[347] * (unkR[554] - unkR[374]) + unkR[466] * unkR[359] + unkR[468] * unkR[348] * (unkR[376] - unkR[3]) + unkR[468] * unkR[349] * (unkR[554] - unkR[376]) + unkR[468] * unkR[361]) ;
//[E-284]  Comb_Chamb.h.T = Comb_Chamb.T_aw - Heat_exchanger_1.h.Q / Comb_Chamb.A_wet / Comb_Chamb.h_g
unkR[314] = unkR[59] - _div( _div( unkR[313] , unkR[51],"Comb_Chamb.A_wet") , unkR[315],"Comb_Chamb.h_g") ;
//[E-285]  Contact_Wall_1.Q = -Heat_exchanger_1.h.Q
unkR[323] = -unkR[313] ;
//[E-286]  Heat_exchanger_1.h.T = Contact_Wall_1.Q / Contact_Wall_1.A_wet / (Contact_Wall_1.k_w / Contact_Wall_1.t_w) + Comb_Chamb.h.T
unkR[325] = _div( _div( unkR[323] , unkR[322],"Contact_Wall_1.A_wet") , (_div( unkR[326] , unkR[327],"Contact_Wall_1.t_w")),"Contact_Wall_1.k_w / Contact_Wall_1.t_w") + unkR[314] ;
//[E-287]  Heat_exchanger_1.h_l = Heat_exchanger_1.h.Q / Heat_exchanger_1.h.A / (Heat_exchanger_1.h.T - Heat_exchanger_1.T_av)
unkR[459] = _div( _div( unkR[313] , unkR[324],"Heat_exchanger_1.h.A") , (unkR[325] - unkR[367]),"Heat_exchanger_1.h.T - Heat_exchanger_1.T_av") ;
//[E-288]  Heat_exchanger_1.Nu = Heat_exchanger_1.h_l * Heat_exchanger_1.D_hy / LPRES.cond(Inlet_LH2.fluidV)
unkR[363] = _div( unkR[459] * unkR[351] , LPRES__cond(&unkR[5]),"LPRES.cond(Inlet_LH2.fluidV)") ;
//[E-289]  Heat_exchanger_1.Re = (Heat_exchanger_1.Nu / Heat_exchanger_1.Pr ** 0.33 / 0.027) ** 1.25
unkR[366] = _pow( (_div( unkR[363] , _pow( unkR[365] , 0.33,"(Heat_exchanger_1.Pr)**(0.33)" ),"Heat_exchanger_1.Pr ** 0.33")/0.027) , 1.25,"(Heat_exchanger_1.Nu / Heat_exchanger_1.Pr ** 0.33 / 0.027)**(1.25)" ) ;
//[E-290]  Heat_exchanger_1.v = Heat_exchanger_1.Re / (Turbine_FUEL.f_in.pt / (LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt) * Heat_exchanger_1.D_hy / LPRES.visc(Turbine_FUEL.f_in.fluid) + LPRES.rho(Inlet_LH2.fluidV) * Heat_exchanger_1.D_hy / LPRES.visc(Inlet_LH2.fluidV))
unkR[472] = _div( unkR[366] , (_div( _div( dyn[4] , (LPRES__R(&unkR[383]) * unkR[554]),"LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt") * unkR[351] , LPRES__visc(&unkR[383]),"LPRES.visc(Turbine_FUEL.f_in.fluid)") + _div( LPRES__rho(&unkR[5]) * unkR[351] , LPRES__visc(&unkR[5]),"LPRES.visc(Inlet_LH2.fluidV)")),"Turbine_FUEL.f_in.pt / (LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt) * Heat_exchanger_1.D_hy / LPRES.visc(Turbine_FUEL.f_in.fluid) + LPRES.rho(Inlet_LH2.fluidV) * Heat_exchanger_1.D_hy / LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-291]  Heat_exchanger_1.v = CCV.f_in.W / (Heat_exchanger_1.a * Heat_exchanger_1.b * LPRES.rho(Inlet_LH2.fluidV)) / Heat_exchanger_1.N
res[3] = evalNormResidueInternal(3,unkR[472],_div( _div( unkR[4] , (unkR[378] * unkR[379] * LPRES__rho(&unkR[5])),"Heat_exchanger_1.a * Heat_exchanger_1.b * LPRES.rho(Inlet_LH2.fluidV)") , unkI[2],"Heat_exchanger_1.N"));
//[E-292]  Heat_exchanger_1.f_in.pt = CCV.f_in.pt - 0.5 * CCV.f_in.W ** 2 / (CCV.rho_f * CCV.A ** 2)
unkR[44] = unkR[43] - _div( 0.5 * _pow( unkR[4] , 2.,"(CCV.f_in.W)**(2)" ) , (unkR[45] * _pow( unkR[0] , 2.,"(CCV.A)**(2)" )),"CCV.rho_f * CCV.A ** 2") ;
//[E-293]  Turbine_FUEL.f_in.pt = Heat_exchanger_1.f_in.pt - Heat_exchanger_1.dp
res[4] = evalNormResidueInternal(4,dyn[4],unkR[44] - unkR[381]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[5];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-294]  Pump_FUEL_LH2.phi = FlowMeter_LH2.f_in.W / LPRES.rho(Inlet_LH2.fluidV) / Pump_FUEL_LH2.U / Pump_FUEL_LH2.A_in
unkR[525] = _div( _div( _div( unkR[335] , LPRES__rho(&unkR[5]),"LPRES.rho(Inlet_LH2.fluidV)") , dyn[5],"Pump_FUEL_LH2.U") , unkR[520],"Pump_FUEL_LH2.A_in") ;
//[E-295]  Pump_FUEL_LH2.psi = (Pump_FUEL_LH2.psi_d - 1) / Pump_FUEL_LH2.phi_d * Pump_FUEL_LH2.phi + 1
unkR[527] = _div( (unkR[528] - 1.) , unkR[526],"Pump_FUEL_LH2.phi_d") * unkR[525] + 1. ;
//[E-296]  Pump_FUEL_LH2.psi = -Pump_FUEL_LH2.tau / Pump_FUEL_LH2.U ** 2
res[5] = evalNormResidueInternal(5,unkR[527],_div( -unkR[531] , _pow( dyn[5] , 2,"(Pump_FUEL_LH2.U)**(2)" ),"Pump_FUEL_LH2.U ** 2"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-301]  Pump_LOX_OXIDIZER.phi = FlowMeter_LOX.f_in.W / LPRES.rho(Inlet_LOX.fluidV) / Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.A_in
unkR[537] = _div( _div( _div( unkR[76] , LPRES__rho(&unkR[77]),"LPRES.rho(Inlet_LOX.fluidV)") , dyn[6],"Pump_LOX_OXIDIZER.U") , unkR[532],"Pump_LOX_OXIDIZER.A_in") ;
//[E-302]  Pump_LOX_OXIDIZER.psi = (Pump_LOX_OXIDIZER.psi_d - 1) / Pump_LOX_OXIDIZER.phi_d * Pump_LOX_OXIDIZER.phi + 1
unkR[539] = _div( (unkR[540] - 1.) , unkR[538],"Pump_LOX_OXIDIZER.phi_d") * unkR[537] + 1. ;
//[E-303]  Pump_LOX_OXIDIZER.psi = -Pump_LOX_OXIDIZER.tau / Pump_LOX_OXIDIZER.U ** 2
res[6] = evalNormResidueInternal(6,unkR[539],_div( -unkR[543] , _pow( dyn[6] , 2,"(Pump_LOX_OXIDIZER.U)**(2)" ),"Pump_LOX_OXIDIZER.U ** 2"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn3(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-330]  ThrustMonitor_1.g.A_out / Comb_Chamb.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[48] , unkR[50],"Comb_Chamb.A_th"),_div( LPRES__FGAMMA(&unkR[275]) , (_pow( (_div( dyn[7] , unkR[74],"Comb_Chamb.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[275]) * (1. - _pow( (_div( dyn[7] , unkR[74],"Comb_Chamb.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[275]) - 1.) , LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[275]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn4(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-340]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / ThrustMonitor_1.g.A_out / Comb_Chamb.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[274] * _sqrt(LPRES__R(&unkR[275]) * unkR[273],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , unkR[48],"ThrustMonitor_1.g.A_out") , unkR[74],"Comb_Chamb.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[275]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[275]) + 1)/2 , (LPRES__gamma(&unkR[275]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn5(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-363]  Injector_FUEL.f_in.pt = MFV.f_in.pt - 0.5 * Comb_Chamb.f_F.W ** 2 / (MFV.rho_f * MFV.A ** 2)
res[9] = evalNormResidueInternal(9,unkR[481],unkR[500] - _div( 0.5 * _pow( unkR[73] , 2,"(Comb_Chamb.f_F.W)**(2)" ) , (unkR[501] * _pow( dyn[9] , 2,"(MFV.A)**(2)" )),"MFV.rho_f * MFV.A ** 2"));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn6(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn6, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-368]  FlowMeter_LOX.f_in.pt = MOV.f_in.pt - 0.5 * FlowMeter_LOX.f_in.W ** 2 / (MOV.rho_f * MOV.A ** 2)
res[10] = evalNormResidueInternal(10,unkR[338],unkR[504] - _div( 0.5 * _pow( unkR[76] , 2,"(FlowMeter_LOX.f_in.W)**(2)" ) , (unkR[505] * _pow( dyn[10] , 2,"(MOV.A)**(2)" )),"MOV.rho_f * MOV.A ** 2"));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn7(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fcn7, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Turbine_FUEL.f_in.fluid[LOX] = 0
unkR[383] = 0. ;
//[E-2]  Heat_exchanger_1.fluid_out[NTO] = Inlet_LH2.fluidV[NTO]
unkR[422] = unkR[6] ;
//[E-3]  Turbine_FUEL.f_in.fluid[NTO] = Heat_exchanger_1.fluid_out[NTO]
unkR[384] = unkR[422] ;
//[E-4]  Heat_exchanger_1.fluid_out[H2O2] = Inlet_LH2.fluidV[H2O2]
unkR[423] = unkR[7] ;
//[E-5]  Turbine_FUEL.f_in.fluid[H2O2] = Heat_exchanger_1.fluid_out[H2O2]
unkR[385] = unkR[423] ;
//[E-6]  Heat_exchanger_1.fluid_out[NH3] = Inlet_LH2.fluidV[NH3]
unkR[424] = unkR[8] ;
//[E-7]  Turbine_FUEL.f_in.fluid[NH3] = Heat_exchanger_1.fluid_out[NH3]
unkR[386] = unkR[424] ;
//[E-8]  Heat_exchanger_1.fluid_out[HNO3] = Inlet_LH2.fluidV[HNO3]
unkR[425] = unkR[9] ;
//[E-9]  Turbine_FUEL.f_in.fluid[HNO3] = Heat_exchanger_1.fluid_out[HNO3]
unkR[387] = unkR[425] ;
//[E-10]  Heat_exchanger_1.fluid_out[LF2] = Inlet_LH2.fluidV[LF2]
unkR[426] = unkR[10] ;
//[E-11]  Turbine_FUEL.f_in.fluid[LF2] = Heat_exchanger_1.fluid_out[LF2]
unkR[388] = unkR[426] ;
//[E-12]  Heat_exchanger_1.fluid_out[RP_1] = Inlet_LH2.fluidV[RP_1]
unkR[427] = unkR[11] ;
//[E-13]  Turbine_FUEL.f_in.fluid[RP_1] = Heat_exchanger_1.fluid_out[RP_1]
unkR[389] = unkR[427] ;
//[E-14]  Turbine_FUEL.f_in.fluid[LCH4] = 0
unkR[390] = 0. ;
//[E-15]  Turbine_FUEL.f_in.fluid[LH2] = 0
unkR[391] = 0. ;
//[E-16]  Heat_exchanger_1.fluid_out[N2H4] = Inlet_LH2.fluidV[N2H4]
unkR[430] = unkR[14] ;
//[E-17]  Turbine_FUEL.f_in.fluid[N2H4] = Heat_exchanger_1.fluid_out[N2H4]
unkR[392] = unkR[430] ;
//[E-18]  Heat_exchanger_1.fluid_out[UDMH] = Inlet_LH2.fluidV[UDMH]
unkR[431] = unkR[15] ;
//[E-19]  Turbine_FUEL.f_in.fluid[UDMH] = Heat_exchanger_1.fluid_out[UDMH]
unkR[393] = unkR[431] ;
//[E-20]  Turbine_FUEL.f_in.fluid[MMH] = 0
unkR[394] = 0. ;
//[E-21]  Heat_exchanger_1.fluid_out[JP_10] = Inlet_LH2.fluidV[JP_10]
unkR[433] = unkR[17] ;
//[E-22]  Turbine_FUEL.f_in.fluid[JP_10] = Heat_exchanger_1.fluid_out[JP_10]
unkR[395] = unkR[433] ;
//[E-23]  Heat_exchanger_1.fluid_out[Kerox] = Inlet_LH2.fluidV[Kerox]
unkR[434] = unkR[18] ;
//[E-24]  Turbine_FUEL.f_in.fluid[Kerox] = Heat_exchanger_1.fluid_out[Kerox]
unkR[396] = unkR[434] ;
//[E-25]  Heat_exchanger_1.fluid_out[Oil] = Inlet_LH2.fluidV[Oil]
unkR[435] = unkR[19] ;
//[E-26]  Turbine_FUEL.f_in.fluid[Oil] = Heat_exchanger_1.fluid_out[Oil]
unkR[397] = unkR[435] ;
//[E-27]  Heat_exchanger_1.fluid_out[H2O] = Inlet_LH2.fluidV[H2O]
unkR[436] = unkR[20] ;
//[E-28]  Turbine_FUEL.f_in.fluid[H2O] = Heat_exchanger_1.fluid_out[H2O]
unkR[398] = unkR[436] ;
//[E-29]  Heat_exchanger_1.fluid_out[IPA] = Inlet_LH2.fluidV[IPA]
unkR[437] = unkR[21] ;
//[E-30]  Turbine_FUEL.f_in.fluid[IPA] = Heat_exchanger_1.fluid_out[IPA]
unkR[399] = unkR[437] ;
//[E-31]  Heat_exchanger_1.fluid_out[Air] = Inlet_LH2.fluidV[Air]
unkR[438] = unkR[22] ;
//[E-32]  Turbine_FUEL.f_in.fluid[Air] = Heat_exchanger_1.fluid_out[Air]
unkR[400] = unkR[438] ;
//[E-33]  Heat_exchanger_1.fluid_out[Ar] = Inlet_LH2.fluidV[Ar]
unkR[439] = unkR[23] ;
//[E-34]  Turbine_FUEL.f_in.fluid[Ar] = Heat_exchanger_1.fluid_out[Ar]
unkR[401] = unkR[439] ;
//[E-35]  Heat_exchanger_1.fluid_out[CH4] = Inlet_LH2.fluidV[LCH4]
unkR[440] = unkR[12] ;
//[E-36]  Turbine_FUEL.f_in.fluid[CH4] = Heat_exchanger_1.fluid_out[CH4]
unkR[402] = unkR[440] ;
//[E-37]  Heat_exchanger_1.fluid_out[CO] = Inlet_LH2.fluidV[CO]
unkR[441] = unkR[25] ;
//[E-38]  Turbine_FUEL.f_in.fluid[CO] = Heat_exchanger_1.fluid_out[CO]
unkR[403] = unkR[441] ;
//[E-39]  Heat_exchanger_1.fluid_out[CO2] = Inlet_LH2.fluidV[CO2]
unkR[442] = unkR[26] ;
//[E-40]  Turbine_FUEL.f_in.fluid[CO2] = Heat_exchanger_1.fluid_out[CO2]
unkR[404] = unkR[442] ;
//[E-41]  Heat_exchanger_1.fluid_out[H2] = Inlet_LH2.fluidV[LH2]
unkR[443] = unkR[13] ;
//[E-42]  Turbine_FUEL.f_in.fluid[H2] = Heat_exchanger_1.fluid_out[H2]
unkR[405] = unkR[443] ;
//[E-43]  Heat_exchanger_1.fluid_out[He] = Inlet_LH2.fluidV[He]
unkR[444] = unkR[28] ;
//[E-44]  Turbine_FUEL.f_in.fluid[He] = Heat_exchanger_1.fluid_out[He]
unkR[406] = unkR[444] ;
//[E-45]  Heat_exchanger_1.fluid_out[N2] = Inlet_LH2.fluidV[N2]
unkR[445] = unkR[29] ;
//[E-46]  Turbine_FUEL.f_in.fluid[N2] = Heat_exchanger_1.fluid_out[N2]
unkR[407] = unkR[445] ;
//[E-47]  Heat_exchanger_1.fluid_out[O2] = Inlet_LH2.fluidV[LOX]
unkR[446] = unkR[5] ;
//[E-48]  Turbine_FUEL.f_in.fluid[O2] = Heat_exchanger_1.fluid_out[O2]
unkR[408] = unkR[446] ;
//[E-49]  Heat_exchanger_1.fluid_out[MMH_vapour] = Inlet_LH2.fluidV[MMH]
unkR[447] = unkR[16] ;
//[E-50]  Turbine_FUEL.f_in.fluid[MMH_vapour] = Heat_exchanger_1.fluid_out[MMH_vapour]
unkR[409] = unkR[447] ;
//[E-51]  Heat_exchanger_1.fluid_out[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour]
unkR[448] = unkR[32] ;
//[E-52]  Turbine_FUEL.f_in.fluid[H2O_vapour] = Heat_exchanger_1.fluid_out[H2O_vapour]
unkR[410] = unkR[448] ;
//[E-53]  Heat_exchanger_1.fluid_out[Comb_prod] = Inlet_LH2.fluidV[Comb_prod]
unkR[449] = unkR[33] ;
//[E-54]  Turbine_FUEL.f_in.fluid[Comb_prod] = Heat_exchanger_1.fluid_out[Comb_prod]
unkR[411] = unkR[449] ;
//[E-55]  Heat_exchanger_1.fluid_out[Comb_prod_M] = Inlet_LH2.fluidV[Comb_prod_M]
unkR[450] = unkR[34] ;
//[E-56]  Turbine_FUEL.f_in.fluid[Comb_prod_M] = Heat_exchanger_1.fluid_out[Comb_prod_M]
unkR[412] = unkR[450] ;
//[E-57]  Heat_exchanger_1.fluid_out[Comb_prod_cp] = Inlet_LH2.fluidV[Comb_prod_cp]
unkR[451] = unkR[35] ;
//[E-58]  Turbine_FUEL.f_in.fluid[Comb_prod_cp] = Heat_exchanger_1.fluid_out[Comb_prod_cp]
unkR[413] = unkR[451] ;
//[E-59]  Heat_exchanger_1.fluid_out[Comb_prod_c] = Inlet_LH2.fluidV[Comb_prod_c]
unkR[452] = unkR[36] ;
//[E-60]  Turbine_FUEL.f_in.fluid[Comb_prod_c] = Heat_exchanger_1.fluid_out[Comb_prod_c]
unkR[414] = unkR[452] ;
//[E-61]  Heat_exchanger_1.fluid_out[Comb_prod_cp_g] = Inlet_LH2.fluidV[Comb_prod_cp_g]
unkR[453] = unkR[37] ;
//[E-62]  Turbine_FUEL.f_in.fluid[Comb_prod_cp_g] = Heat_exchanger_1.fluid_out[Comb_prod_cp_g]
unkR[415] = unkR[453] ;
//[E-63]  Heat_exchanger_1.fluid_out[Comb_prod_Lv] = Inlet_LH2.fluidV[Comb_prod_Lv]
unkR[454] = unkR[38] ;
//[E-64]  Turbine_FUEL.f_in.fluid[Comb_prod_Lv] = Heat_exchanger_1.fluid_out[Comb_prod_Lv]
unkR[416] = unkR[454] ;
//[E-65]  Turbine_FUEL.f_in.fluid[Comb_prod_visc] = Heat_exchanger_1.visc_P
unkR[417] = unkR[473] ;
//[E-66]  Turbine_FUEL.f_in.fluid[Comb_prod_cond] = Heat_exchanger_1.cond_P
unkR[418] = unkR[380] ;
//[E-67]  Heat_exchanger_1.fluid_out[Comb_prod_T_boil] = Inlet_LH2.fluidV[Comb_prod_T_boil]
unkR[457] = unkR[41] ;
//[E-68]  Turbine_FUEL.f_in.fluid[Comb_prod_T_boil] = Heat_exchanger_1.fluid_out[Comb_prod_T_boil]
unkR[419] = unkR[457] ;
//[E-69]  Turbine_FUEL.f_in.fluid[Comb_prod_rho] = Heat_exchanger_1.rho_P
unkR[420] = unkR[470] ;
//[E-70]  Turbine_OXIDIZER.MFP = Turbine_OXIDIZER.A_in * LPRES.FGAMMA(Turbine_FUEL.f_in.fluid) / sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))
unkR[562] = _div( unkR[561] * LPRES__FGAMMA(&unkR[383]) , _sqrt(LPRES__R(&unkR[383]),"LPRES.R(Turbine_FUEL.f_in.fluid)"),"sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))") ;
//[E-71]  Turbine_FUEL.MFP = Turbine_FUEL.A_in * LPRES.FGAMMA(Turbine_FUEL.f_in.fluid) / sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))
unkR[550] = _div( unkR[549] * LPRES__FGAMMA(&unkR[383]) , _sqrt(LPRES__R(&unkR[383]),"LPRES.R(Turbine_FUEL.f_in.fluid)"),"sqrt(LPRES.R(Turbine_FUEL.f_in.fluid))") ;
//[E-72]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[516] = LPRES__ISA_Pressure(unkR[497]) ;
//[E-73]  Comb_Chamb.phi = Comb_Chamb.OF_st / Comb_Chamb.OF
unkR[317] = _div( unkR[55] , unkR[54],"Comb_Chamb.OF") ;
//[E-74]  Comb_Chamb.fluid_O[LOX] = Inlet_LOX.fluidV[LOX] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[153] = _div( unkR[77] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-75]  Comb_Chamb.fluid_O[NTO] = Inlet_LOX.fluidV[NTO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[154] = _div( unkR[78] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-76]  Comb_Chamb.fluid_O[H2O2] = Inlet_LOX.fluidV[H2O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[155] = _div( unkR[79] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-77]  Comb_Chamb.fluid_O[NH3] = Inlet_LOX.fluidV[NH3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[156] = _div( unkR[80] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-78]  Comb_Chamb.fluid_O[HNO3] = Inlet_LOX.fluidV[HNO3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[157] = _div( unkR[81] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-79]  Comb_Chamb.fluid_O[LF2] = Inlet_LOX.fluidV[LF2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[158] = _div( unkR[82] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-80]  Comb_Chamb.fluid_O[RP_1] = Inlet_LOX.fluidV[RP_1] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[159] = _div( unkR[83] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-81]  Comb_Chamb.fluid_O[LCH4] = Inlet_LOX.fluidV[LCH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[160] = _div( unkR[84] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-82]  Comb_Chamb.fluid_O[LH2] = Inlet_LOX.fluidV[LH2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[161] = _div( unkR[85] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-83]  Comb_Chamb.fluid_O[N2H4] = Inlet_LOX.fluidV[N2H4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[162] = _div( unkR[86] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-84]  Comb_Chamb.fluid_O[UDMH] = Inlet_LOX.fluidV[UDMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[163] = _div( unkR[87] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-85]  Comb_Chamb.fluid_O[MMH] = Inlet_LOX.fluidV[MMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[164] = _div( unkR[88] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-86]  Comb_Chamb.fluid_O[JP_10] = Inlet_LOX.fluidV[JP_10] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[165] = _div( unkR[89] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-87]  Comb_Chamb.fluid_O[Kerox] = Inlet_LOX.fluidV[Kerox] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[166] = _div( unkR[90] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-88]  Comb_Chamb.fluid_O[Oil] = Inlet_LOX.fluidV[Oil] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[167] = _div( unkR[91] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-89]  Comb_Chamb.fluid_O[H2O] = Inlet_LOX.fluidV[H2O] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[168] = _div( unkR[92] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-90]  Comb_Chamb.fluid_O[IPA] = Inlet_LOX.fluidV[IPA] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[169] = _div( unkR[93] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-91]  Comb_Chamb.fluid_O[Air] = Inlet_LOX.fluidV[Air] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[170] = _div( unkR[94] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-92]  Comb_Chamb.fluid_O[Ar] = Inlet_LOX.fluidV[Ar] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[171] = _div( unkR[95] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-93]  Comb_Chamb.fluid_O[CH4] = Inlet_LOX.fluidV[CH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[172] = _div( unkR[96] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-94]  Comb_Chamb.fluid_O[CO] = Inlet_LOX.fluidV[CO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[173] = _div( unkR[97] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-95]  Comb_Chamb.fluid_O[CO2] = Inlet_LOX.fluidV[CO2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[174] = _div( unkR[98] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-96]  Comb_Chamb.fluid_O[H2] = Inlet_LOX.fluidV[H2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[175] = _div( unkR[99] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-97]  Comb_Chamb.fluid_O[He] = Inlet_LOX.fluidV[He] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[176] = _div( unkR[100] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-98]  Comb_Chamb.fluid_O[N2] = Inlet_LOX.fluidV[N2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[177] = _div( unkR[101] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-99]  Comb_Chamb.fluid_O[O2] = Inlet_LOX.fluidV[O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[178] = _div( unkR[102] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-100]  Comb_Chamb.fluid_O[MMH_vapour] = Inlet_LOX.fluidV[MMH_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[179] = _div( unkR[103] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-101]  Comb_Chamb.fluid_O[H2O_vapour] = Inlet_LOX.fluidV[H2O_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[180] = _div( unkR[104] , (1. - unkR[105]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-102]  Comb_Chamb.fluid_O[Comb_prod] = 0
unkR[181] = 0. ;
//[E-103]  Comb_Chamb.fluid_O[Comb_prod_M] = 0
unkR[182] = 0. ;
//[E-104]  Comb_Chamb.fluid_O[Comb_prod_cp] = 0
unkR[183] = 0. ;
//[E-105]  Comb_Chamb.fluid_O[Comb_prod_c] = 0
unkR[184] = 0. ;
//[E-106]  Comb_Chamb.fluid_O[Comb_prod_cp_g] = 0
unkR[185] = 0. ;
//[E-107]  Comb_Chamb.fluid_O[Comb_prod_Lv] = 0
unkR[186] = 0. ;
//[E-108]  Comb_Chamb.fluid_O[Comb_prod_visc] = 0
unkR[187] = 0. ;
//[E-109]  Comb_Chamb.fluid_O[Comb_prod_cond] = 0
unkR[188] = 0. ;
//[E-110]  Comb_Chamb.fluid_O[Comb_prod_T_boil] = 0
unkR[189] = 0. ;
//[E-111]  Comb_Chamb.fluid_O[Comb_prod_rho] = 0
unkR[190] = 0. ;
//[E-112]  Comb_Chamb.fluid_F[LOX] = Inlet_LH2.fluidV[LOX] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[115] = _div( unkR[5] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-113]  Comb_Chamb.fluid_F[NTO] = Inlet_LH2.fluidV[NTO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[116] = _div( unkR[6] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-114]  Comb_Chamb.fluid_F[H2O2] = Inlet_LH2.fluidV[H2O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[117] = _div( unkR[7] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-115]  Comb_Chamb.fluid_F[NH3] = Inlet_LH2.fluidV[NH3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[118] = _div( unkR[8] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-116]  Comb_Chamb.fluid_F[HNO3] = Inlet_LH2.fluidV[HNO3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[119] = _div( unkR[9] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-117]  Comb_Chamb.fluid_F[LF2] = Inlet_LH2.fluidV[LF2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[120] = _div( unkR[10] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-118]  Comb_Chamb.fluid_F[RP_1] = Inlet_LH2.fluidV[RP_1] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[121] = _div( unkR[11] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-119]  Comb_Chamb.fluid_F[LCH4] = Inlet_LH2.fluidV[LCH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[122] = _div( unkR[12] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-120]  Comb_Chamb.fluid_F[LH2] = Inlet_LH2.fluidV[LH2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[123] = _div( unkR[13] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-121]  Comb_Chamb.fluid_F[N2H4] = Inlet_LH2.fluidV[N2H4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[124] = _div( unkR[14] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-122]  Comb_Chamb.fluid_F[UDMH] = Inlet_LH2.fluidV[UDMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[125] = _div( unkR[15] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-123]  Comb_Chamb.fluid_F[MMH] = Inlet_LH2.fluidV[MMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[126] = _div( unkR[16] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-124]  Comb_Chamb.fluid_F[JP_10] = Inlet_LH2.fluidV[JP_10] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[127] = _div( unkR[17] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-125]  Comb_Chamb.fluid_F[Kerox] = Inlet_LH2.fluidV[Kerox] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[128] = _div( unkR[18] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-126]  Comb_Chamb.fluid_F[Oil] = Inlet_LH2.fluidV[Oil] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[129] = _div( unkR[19] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-127]  Comb_Chamb.fluid_F[H2O] = Inlet_LH2.fluidV[H2O] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[130] = _div( unkR[20] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-128]  Comb_Chamb.fluid_F[IPA] = Inlet_LH2.fluidV[IPA] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[131] = _div( unkR[21] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-129]  Comb_Chamb.fluid_F[Air] = Inlet_LH2.fluidV[Air] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[132] = _div( unkR[22] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-130]  Comb_Chamb.fluid_F[Ar] = Inlet_LH2.fluidV[Ar] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[133] = _div( unkR[23] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-131]  Comb_Chamb.fluid_F[CH4] = Inlet_LH2.fluidV[CH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[134] = _div( unkR[24] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-132]  Comb_Chamb.fluid_F[CO] = Inlet_LH2.fluidV[CO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[135] = _div( unkR[25] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-133]  Comb_Chamb.fluid_F[CO2] = Inlet_LH2.fluidV[CO2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[136] = _div( unkR[26] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-134]  Comb_Chamb.fluid_F[H2] = Inlet_LH2.fluidV[H2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[137] = _div( unkR[27] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-135]  Comb_Chamb.fluid_F[He] = Inlet_LH2.fluidV[He] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[138] = _div( unkR[28] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-136]  Comb_Chamb.fluid_F[N2] = Inlet_LH2.fluidV[N2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[139] = _div( unkR[29] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-137]  Comb_Chamb.fluid_F[O2] = Inlet_LH2.fluidV[O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[140] = _div( unkR[30] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-138]  Comb_Chamb.fluid_F[MMH_vapour] = Inlet_LH2.fluidV[MMH_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[141] = _div( unkR[31] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-139]  Comb_Chamb.fluid_F[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[142] = _div( unkR[32] , (1. - unkR[33]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-140]  Comb_Chamb.fluid_F[Comb_prod] = 0
unkR[143] = 0. ;
//[E-141]  Comb_Chamb.fluid_F[Comb_prod_M] = 0
unkR[144] = 0. ;
//[E-142]  Comb_Chamb.fluid_F[Comb_prod_cp] = 0
unkR[145] = 0. ;
//[E-143]  Comb_Chamb.fluid_F[Comb_prod_c] = 0
unkR[146] = 0. ;
//[E-144]  Comb_Chamb.fluid_F[Comb_prod_cp_g] = 0
unkR[147] = 0. ;
//[E-145]  Comb_Chamb.fluid_F[Comb_prod_Lv] = 0
unkR[148] = 0. ;
//[E-146]  Comb_Chamb.fluid_F[Comb_prod_visc] = 0
unkR[149] = 0. ;
//[E-147]  Comb_Chamb.fluid_F[Comb_prod_cond] = 0
unkR[150] = 0. ;
//[E-148]  Comb_Chamb.fluid_F[Comb_prod_T_boil] = 0
unkR[151] = 0. ;
//[E-149]  Comb_Chamb.fluid_F[Comb_prod_rho] = 0
unkR[152] = 0. ;
//[E-150]  Comb_Chamb.Q_comb_effective =  ZONE[1] (Comb_Chamb.Combustion) Comb_Chamb.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[58] = unkR[57] ;
else unkR[58] = 0. ;
//[E-151]  Comb_Chamb.fluid_P[Comb_prod_M] =  IF[30] (Comb_Chamb.Combustion) Comb_Chamb.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[220] = unkR[53] ;
}
else 
{
unkR[220] = 0. ;
}
//[E-152]  Comb_Chamb.fluid_P[Comb_prod_cp] =  IF[31] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[221] = unkR[70] ;
}
else 
{
unkR[221] = 0. ;
}
//[E-153]  Comb_Chamb.fluid_P[Comb_prod_c] =  IF[32] (Comb_Chamb.Combustion) Comb_Chamb.c_P	 ELSE 0
if( unkI[0] ) 
{
unkR[222] = unkR[67] ;
}
else 
{
unkR[222] = 0. ;
}
//[E-154]  Comb_Chamb.fluid_P[Comb_prod_cp_g] =  IF[33] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[223] = unkR[70] ;
}
else 
{
unkR[223] = 0. ;
}
//[E-155]  Comb_Chamb.fluid_P[Comb_prod_Lv] =  IF[34] (Comb_Chamb.Combustion) Comb_Chamb.Lv_P	 ELSE 0
if( unkI[0] ) 
{
unkR[224] = unkR[52] ;
}
else 
{
unkR[224] = 0. ;
}
//[E-156]  Comb_Chamb.fluid_P[Comb_prod_visc] =  IF[35] (Comb_Chamb.Combustion) Comb_Chamb.visc_P	 ELSE 0
if( unkI[0] ) 
{
unkR[225] = unkR[318] ;
}
else 
{
unkR[225] = 0. ;
}
//[E-157]  Comb_Chamb.fluid_P[Comb_prod_cond] =  IF[36] (Comb_Chamb.Combustion) Comb_Chamb.cond_P	 ELSE 0
if( unkI[0] ) 
{
unkR[226] = unkR[69] ;
}
else 
{
unkR[226] = 0. ;
}
//[E-158]  Comb_Chamb.fluid_P[Comb_prod_T_boil] =  IF[37] (Comb_Chamb.Combustion) Comb_Chamb.T_boil_P	 ELSE 0
if( unkI[0] ) 
{
unkR[227] = unkR[60] ;
}
else 
{
unkR[227] = 0. ;
}
//[E-159]  Comb_Chamb.fluid_P[Comb_prod_rho] = 0
unkR[228] = 0. ;
//[E-160]  LPRES.Obtain_Vap_Prop(Inlet_LH2.fluidV, Heat_exchanger_1.Cp_v, Heat_exchanger_1.Lv_v, Heat_exchanger_1.T_boil_v, Heat_exchanger_1.mass_frac_v) %%% (OUT VAR)Heat_exchanger_1.Cp_v (OUT VAR)Heat_exchanger_1.Lv_v (OUT VAR)Heat_exchanger_1.T_boil_v (OUT VAR)Heat_exchanger_1.mass_frac_v 
LPRES__Obtain_Vap_Prop(&unkR[5], &unkR[340], &unkR[353], &unkR[368], &unkR[460]);
//[E-161]  CCV.rho_f = LPRES.rho(Inlet_LH2.fluidV)
unkR[45] = LPRES__rho(&unkR[5]) ;
//[E-162]  Heat_exchanger_1.D_hy = 2 * Heat_exchanger_1.a * Heat_exchanger_1.b / (Heat_exchanger_1.a + Heat_exchanger_1.b)
unkR[351] = _div( 2. * unkR[378] * unkR[379] , (unkR[378] + unkR[379]),"Heat_exchanger_1.a + Heat_exchanger_1.b") ;
//[E-163]  Heat_exchanger_1.Pr = LPRES.visc(Turbine_FUEL.f_in.fluid) * LPRES.cp(Turbine_FUEL.f_in.fluid) / LPRES.cond(Turbine_FUEL.f_in.fluid) + LPRES.visc(Inlet_LH2.fluidV) * LPRES.cp(Inlet_LH2.fluidV) / LPRES.cond(Inlet_LH2.fluidV)
unkR[365] = _div( LPRES__visc(&unkR[383]) * LPRES__cp(&unkR[383]) , LPRES__cond(&unkR[383]),"LPRES.cond(Turbine_FUEL.f_in.fluid)") + _div( LPRES__visc(&unkR[5]) * LPRES__cp(&unkR[5]) , LPRES__cond(&unkR[5]),"LPRES.cond(Inlet_LH2.fluidV)") ;
//[E-164]  Contact_Wall_1.A_wet = Comb_Chamb.A_wet / Contact_Wall_1.A_eff_1
unkR[322] = _div( unkR[51] , unkR[320],"Contact_Wall_1.A_eff_1") ;
//[E-165]  Heat_exchanger_1.h.A = Contact_Wall_1.A_eff_2 * Contact_Wall_1.A_wet
unkR[324] = unkR[321] * unkR[322] ;
//[E-166]  Comb_Chamb.A_r = Comb_Chamb.A_th * Comb_Chamb.AR_r
unkR[49] = unkR[50] * unkR[47] ;

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
unkR[533] = -(dyn[3] * LPRES__rho(&unkR[77])) ;
//[E-309]  FlowMeter_LOX.f_in.pt = (FlowMeter_LOX.f_in.W / (Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)) ** 2 / (2 * LPRES.rho(Inlet_LOX.fluidV)) + Comb_Chamb.f_O.p_c
unkR[338] = _div( _pow( (_div( unkR[76] , (unkR[484] * unkR[486]),"Injector_OXIDIZER.A * Injector_OXIDIZER.C_D")) , 2.,"(FlowMeter_LOX.f_in.W / (Injector_OXIDIZER.A * Injector_OXIDIZER.C_D))**(2)" ) , (2. * LPRES__rho(&unkR[77])),"2 * LPRES.rho(Inlet_LOX.fluidV)") + unkR[74] ;
//[E-310]  MOV.dp = Inlet_LOX.pt + Pump_LOX_OXIDIZER.dp - FlowMeter_LOX.f_in.pt
unkR[503] = unkR[496] + unkR[533] - unkR[338] ;
//[E-311]  FlowMeter_LH2.i.Data[1] = abs(FlowMeter_LH2.f_in.W)
unkR[337] = abs(unkR[335]) ;
//[E-312]  MFV.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[500] = unkR[336] * unkR[544] ;
//[E-313]  Injector_FUEL.f_in.pt = (Comb_Chamb.f_F.W / (Injector_FUEL.A * Injector_FUEL.C_D)) ** 2 / (2 * LPRES.rho(Inlet_LH2.fluidV)) + Comb_Chamb.f_O.p_c
unkR[481] = _div( _pow( (_div( unkR[73] , (unkR[474] * unkR[476]),"Injector_FUEL.A * Injector_FUEL.C_D")) , 2.,"(Comb_Chamb.f_F.W / (Injector_FUEL.A * Injector_FUEL.C_D))**(2)" ) , (2. * LPRES__rho(&unkR[5])),"2 * LPRES.rho(Inlet_LH2.fluidV)") + unkR[74] ;
//[E-314]  Injector_FUEL.PR = Injector_FUEL.f_in.pt / Comb_Chamb.f_O.p_c
unkR[478] = _div( unkR[481] , unkR[74],"Comb_Chamb.f_O.p_c") ;
//[E-315]  Injector_FUEL.PR_ch = 0
unkR[479] = 0. ;
//[E-316]  Injector_FUEL.p_out_ch = 0
unkR[482] = 0. ;
//[E-317]  Injector_FUEL.A_ch = 0
unkR[475] = 0. ;
//[E-318]  Injector_FUEL.M_out = 0
unkR[477] = 0. ;
//[E-319]  Injector_FUEL.v_ideal = Comb_Chamb.f_F.W / (LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D)
unkR[483] = _div( unkR[73] , (LPRES__rho(&unkR[5]) * unkR[474] * unkR[476]),"LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D") ;
//[E-320]  Injector_FUEL.Re = LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.v_ideal * Injector_FUEL.C_D * sqrt(4 * Injector_FUEL.A / 3.14159265358979) / LPRES.visc(Inlet_LH2.fluidV)
unkR[480] = _div( LPRES__rho(&unkR[5]) * unkR[483] * unkR[476] * _sqrt(4. * unkR[474]/3.14159265358979,"4 * Injector_FUEL.A / 3.14159265358979") , LPRES__visc(&unkR[5]),"LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-321]  Injector_OXIDIZER.PR = FlowMeter_LOX.f_in.pt / Comb_Chamb.f_O.p_c
unkR[488] = _div( unkR[338] , unkR[74],"Comb_Chamb.f_O.p_c") ;
//[E-322]  Injector_OXIDIZER.PR_ch = 0
unkR[489] = 0. ;
//[E-323]  Injector_OXIDIZER.p_out_ch = 0
unkR[491] = 0. ;
//[E-324]  Injector_OXIDIZER.A_ch = 0
unkR[485] = 0. ;
//[E-325]  Injector_OXIDIZER.M_out = 0
unkR[487] = 0. ;
//[E-326]  Injector_OXIDIZER.v_ideal = FlowMeter_LOX.f_in.W / (LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)
unkR[492] = _div( unkR[76] , (LPRES__rho(&unkR[77]) * unkR[484] * unkR[486]),"LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D") ;
//[E-327]  Injector_OXIDIZER.Re = LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.v_ideal * Injector_OXIDIZER.C_D * sqrt(4 * Injector_OXIDIZER.A / 3.14159265358979) / LPRES.visc(Inlet_LOX.fluidV)
unkR[490] = _div( LPRES__rho(&unkR[77]) * unkR[492] * unkR[486] * _sqrt(4. * unkR[484]/3.14159265358979,"4 * Injector_OXIDIZER.A / 3.14159265358979") , LPRES__visc(&unkR[77]),"LPRES.visc(Inlet_LOX.fluidV)") ;
//[E-328]  FlowMeter_LOX.i.Data[1] = abs(FlowMeter_LOX.f_in.W)
unkR[339] = abs(unkR[76]) ;
//[E-329]  ThrustMonitor_1.g.A_out = Comb_Chamb.AR * Comb_Chamb.A_th
unkR[48] = unkR[46] * unkR[50] ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-331]  ControlPanel.i_Comb.Data[1] = ThrustMonitor_1.g.c_star
unkR[316] = unkR[68] ;
//[E-332]  Nozzle_1.PR_sl = ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2) ** (LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))
unkR[510] = _pow( ((LPRES__gamma(&unkR[383]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[383]) , (LPRES__gamma(&unkR[383]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1")),"((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2)**(LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))" ) ;
//[E-333]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[518] = _div( unkR[514] , unkR[510],"Nozzle_1.PR_sl") ;
//[E-334]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[517] = MATH__max(unkR[516], unkR[518]) ;
//[E-335]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[511] = _div( unkR[513] , (1. + (LPRES__gamma(&unkR[383]) - 1.)/2. * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-336]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out)
unkR[519] = unkR[508] * _sqrt(LPRES__gamma(&unkR[383]) * LPRES__R(&unkR[383]) * unkR[511],"LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out") ;
//[E-337]  Nozzle_1.Thrust = CCV.f_in.W * Nozzle_1.v_out + Nozzle_1.A * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[512] = unkR[4] * unkR[519] + unkR[506] * (unkR[517] - unkR[516]) ;
//[E-338]  Nozzle_1.i.Data[1] = Nozzle_1.Thrust
unkR[515] = unkR[512] ;
//[E-339]  ControlPanel.W_tot = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[332] = unkR[337] + unkR[339] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-341]  ThrustMonitor_1.T_out = ThrustMonitor_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)
unkR[545] = _div( unkR[273] , (1. + (LPRES__gamma(&unkR[275]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor_1.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2") ;
//[E-342]  ThrustMonitor_1.v_out = ThrustMonitor_1.M_out * sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out)
unkR[548] = dyn[8] * _sqrt(LPRES__gamma(&unkR[275]) * LPRES__R(&unkR[275]) * unkR[545],"LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out") ;
//[E-343]  ThrustMonitor_1.p_out = Comb_Chamb.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))
unkR[547] = _div( unkR[74] , _pow( (1. + (LPRES__gamma(&unkR[275]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[275]) - 1.) , LPRES__gamma(&unkR[275]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))") ;
//[E-344]  ThrustMonitor_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[546] = LPRES__ISA_Pressure(unkR[497]) ;
//[E-345]  ControlPanel.Thrust = ThrustMonitor_1.g.W * ThrustMonitor_1.v_out + ThrustMonitor_1.g.A_out * (ThrustMonitor_1.p_out - ThrustMonitor_1.p_amb)
unkR[331] = unkR[274] * unkR[548] + unkR[48] * (unkR[547] - unkR[546]) ;
//[E-346]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[329] = _div( unkR[331] , unkR[332],"ControlPanel.W_tot") ;
//[E-347]  ControlPanel.C_E = ControlPanel.Isp / ThrustMonitor_1.g.c_star
unkR[328] = _div( unkR[329] , unkR[68],"ThrustMonitor_1.g.c_star") ;
//[E-348]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[330] = unkR[329]/9.80665 ;
//[E-349]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[333] = unkR[331] ;
//[E-350]  CCV.dp = CCV.f_in.pt - Heat_exchanger_1.f_in.pt
unkR[2] = unkR[43] - unkR[44] ;
//[E-351]  Heat_exchanger_1.P_av = 0.5 * Turbine_FUEL.f_in.pt + 0.5 * CCV.f_in.pt - 0.5 * CCV.dp
unkR[364] = 0.5 * dyn[4] + 0.5 * unkR[43] - 0.5 * unkR[2] ;
//[E-352]  Heat_exchanger_1.fluid_out[Comb_prod_visc] = Inlet_LH2.fluidV[Comb_prod_visc]
unkR[455] = unkR[39] ;
//[E-353]  Heat_exchanger_1.fluid_out[Comb_prod_cond] = Inlet_LH2.fluidV[Comb_prod_cond]
unkR[456] = unkR[40] ;
//[E-354]  Heat_exchanger_1.fluid_out[Comb_prod_rho] = Inlet_LH2.fluidV[Comb_prod_rho]
unkR[458] = unkR[42] ;
//[E-355]  Heat_exchanger_1.fluid_out[LOX] = -Turbine_FUEL.f_in.fluid[LOX]
unkR[421] = -unkR[383] ;
//[E-356]  Heat_exchanger_1.fluid_out[LCH4] = -Turbine_FUEL.f_in.fluid[LCH4]
unkR[428] = -unkR[390] ;
//[E-357]  Heat_exchanger_1.fluid_out[LH2] = -Turbine_FUEL.f_in.fluid[LH2]
unkR[429] = -unkR[391] ;
//[E-358]  Heat_exchanger_1.fluid_out[MMH] = -Turbine_FUEL.f_in.fluid[MMH]
unkR[432] = -unkR[394] ;
//[E-359]  Heat_exchanger_1.f = 0
unkR[382] = 0. ;
//[E-360]  Heat_exchanger_1.D_eq = 1.3 * (Heat_exchanger_1.a * Heat_exchanger_1.b) ** 0.625 / (Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25
unkR[350] = _div( 1.3 * _pow( (unkR[378] * unkR[379]) , 0.625,"(Heat_exchanger_1.a * Heat_exchanger_1.b)**(0.625)" ) , _pow( (unkR[378] + unkR[379]) , 0.25,"(Heat_exchanger_1.a + Heat_exchanger_1.b)**(0.25)" ),"(Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25") ;
//[E-361]  MFV.M_th = 0
unkR[498] = 0. ;
//[E-362]  MFV.rho_f = LPRES.rho(Inlet_LH2.fluidV)
unkR[501] = LPRES__rho(&unkR[5]) ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-364]  MFV.dp = MFV.f_in.pt - Injector_FUEL.f_in.pt
unkR[499] = unkR[500] - unkR[481] ;
//[E-365]  MOV.M_th = 0
unkR[502] = 0. ;
//[E-366]  MOV.rho_f = LPRES.rho(Inlet_LOX.fluidV)
unkR[505] = LPRES__rho(&unkR[77]) ;
//[E-367]  MOV.f_in.pt = FlowMeter_LOX.f_in.pt + MOV.dp
unkR[504] = unkR[338] + unkR[503] ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-369]  CCV.M_th = 0
unkR[1] = 0. ;
//[E-370]  ControlPanel.i_W.Data[1] = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[334] = unkR[337] + unkR[339] ;

//save last residues
memcpy(this->res,res,11*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::checkAsserts(double *_time)
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
if(!(unkR[474] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_FUEL.","Injector_FUEL.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[5]) == 2 || 1 && LPRES__State(&unkR[5]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_FUEL."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(unkR[484] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_OXIDIZER.","Injector_OXIDIZER.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[77]) == 2 || 1 && LPRES__State(&unkR[77]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_OXIDIZER."," FALSE  AND LPRES.State(Inlet_LOX.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LOX.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(2 == LPRES__State(&unkR[383])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle_1.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[275])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",807,"ThrustMonitor_1.","Gas == LPRES.State(ThrustMonitor_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",808,"ThrustMonitor_1.","ThrustMonitor_1.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[547] , unkR[546],"ThrustMonitor_1.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor_1.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",809,"ThrustMonitor_1.","(ThrustMonitor_1.p_out / ThrustMonitor_1.p_amb) > ((1.88 * ThrustMonitor_1.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(0 && LPRES__State(&unkR[5]) == 1 || 0 && LPRES__State(&unkR[5]) == 2 || 1 && LPRES__State(&unkR[5]) == 1 || 0 && LPRES__State(&unkR[5]) == 2))
		issueErrorAssert(216,9,24,98,"LPRES_CompHeat.el",284,"Heat_exchanger_1."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas","%s","CHECK HEAT EXCHANGER TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH HEAT EXCHANGER");
if(!(unkR[498] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"MFV.","MFV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[5]) == 2 || 1 && LPRES__State(&unkR[5]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"MFV."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
if(!(unkR[502] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"MOV.","MOV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[77]) == 2 || 1 && LPRES__State(&unkR[77]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"MOV."," FALSE  AND LPRES.State(Inlet_LOX.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LOX.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
if(!(unkR[1] <= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",992,"CCV.","CCV.M_th <= 1","%s","THE VALVE IS CHOKED!");
if(!(0 && LPRES__State(&unkR[5]) == 2 || 1 && LPRES__State(&unkR[5]) == 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",993,"CCV."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK VALVE TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH VALVE");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[178] * unkR[140] + unkR[179] * unkR[141] + unkR[156] * unkR[118] + unkR[180] * unkR[142]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
    ev[1]= unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[178] * unkR[140] + unkR[179] * unkR[141] + unkR[156] * unkR[118] + unkR[180] * unkR[142]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
    ev[2]= unkI[0] - 1; //Comb_Chamb.Combustion
    ev[3]= unkR[508]; //Nozzle_1.M_out > 0
    ev[4]= unkR[509] - unkR[510]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
     w[1] = cont[1] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::executeWhen(double *_time,  int index )
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Comb_Chamb.Q_comb_effective =  ZONE (Comb_Chamb.Combustion) Comb_Chamb.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Nozzle_1.A_sl =  ZONE (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)) OTHERS 1
     branchZone[2] = (cont[4] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::initDelays()
{
}


bool LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv = 103264;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv;
return true;
}



bool LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv = 460;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv[] = 
{
"CwAAAD0AAAAAAAAABQAAAAUAAAAFAAAABQAAAAUAAAAGAAAABgAAAAYAAAAGAAAABgAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAALAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__LE5B_valves_valves_off_design_ccv(name,dirInstall);
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
	sprintf(partitionName,"%s","valves_off_design_ccv");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+l+e5+b_valves.valves_off_design_ccv");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


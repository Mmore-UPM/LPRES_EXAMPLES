//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov_CPP
#define LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov_CPP

#include "LPRES_EXAMPLES.+l+e5+b_valves.valves_off_design_mov.h"

LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov* LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::s_current= NULL;

LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "LE5B_valves";
m_infoPartitionName = "valves_off_design_mov";
m_infoModelName = "LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov";
m_infoModelFileName = "LPRES_EXAMPLES.+l+e5+b_valves.valves_off_design_mov";
m_infoModelFileNameExtra = "+l+e5+b_valves.valves_off_design_mov";
m_perfFlag = false;
m_infoComponentDate = "05/07/2020 14:04:39.296000";
m_infoPartitionDate = "05/07/2020 18:15:41.733000";
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
		0, 0, 0, 1, 0, 0.001, 0, 0, 1, 0, 0.02, 0, 0, 0, 0, 0, 
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::initInternalModels()
{
}

void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__rho(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__visc(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[])
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


void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__Decomposition_fun(double fluid_in[],double Data_Array[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__Lv(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__T_boil(double fluid[])
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


void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__Obtain_Vap_Prop(double fluid_in[],double Cp_i[],double Lv_i[],double T_boil_i[],double fluid_out[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__cond(double fluid[])
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


double LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::initBlocks( double dyn[], double ldr[], double *_time )
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
//[E-252]  Pump_FUEL_LH2.tau = Pump_FUEL_LH2.tau_id / Pump_FUEL_LH2.eta_d
unkR[531] = _div( dyn[3] , unkR[522],"Pump_FUEL_LH2.eta_d") ;
//[E-253]  Pump_FUEL_LH2.m.Power = FlowMeter_LH2.f_in.W * Pump_FUEL_LH2.tau
unkR[524] = unkR[333] * unkR[531] ;
//[E-254]  Turbine_FUEL.m.Power = -Pump_FUEL_LH2.m.Power
unkR[557] = -unkR[524] ;
//[E-255]  Turbine_FUEL.tau = Turbine_FUEL.m.Power / CCV.f_in.W
unkR[559] = _div( unkR[557] , dyn[0],"CCV.f_in.W") ;
//[E-256]  Turbine_OXIDIZER.f_in.Tt = Turbine_FUEL.f_in.Tt - Turbine_FUEL.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[555] = unkR[554] - _div( unkR[559] , LPRES__cp(&unkR[381]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-257]  Turbine_FUEL.alpha = Turbine_OXIDIZER.f_in.Tt / Turbine_FUEL.f_in.Tt
unkR[551] = _div( unkR[555] , unkR[554],"Turbine_FUEL.f_in.Tt") ;
//[E-258]  Turbine_FUEL.beta = (1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[552] = _pow( (1. - _div( (1. - unkR[551]) , unkR[553],"Turbine_FUEL.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[381]) - 1.) , LPRES__gamma(&unkR[381]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-259]  Turbine_OXIDIZER.f_in.pt = Turbine_FUEL.beta * Turbine_FUEL.f_in.pt
unkR[556] = unkR[552] * unkR[419] ;
//[E-260]  Turbine_OXIDIZER.MFP = CCV.f_in.W * sqrt(Turbine_OXIDIZER.f_in.Tt) / Turbine_OXIDIZER.f_in.pt
res[1] = evalNormResidueInternal(1,unkR[562],_div( dyn[0] * _sqrt(unkR[555],"Turbine_OXIDIZER.f_in.Tt") , unkR[556],"Turbine_OXIDIZER.f_in.pt"));
//[E-261]  Comb_Chamb.f_F.T = (Pump_FUEL_LH2.tau_id - Pump_FUEL_LH2.tau) / LPRES.cp(Inlet_LH2.fluidV) + Inlet_LH2.Tt
unkR[2] = _div( (dyn[3] - unkR[531]) , LPRES__cp(&unkR[3]),"LPRES.cp(Inlet_LH2.fluidV)") + unkR[492] ;
//[E-262]  Heat_exchanger_1.T_av = (Comb_Chamb.f_F.T + Turbine_FUEL.f_in.Tt) / 2
unkR[365] = (unkR[2] + unkR[554])/2. ;
//[E-263]  Heat_exchanger_1.h.Q = CCV.f_in.W * (Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[01] * (Heat_exchanger_1.T_boil_v[01] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[02] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[01]) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Lv_v[01] + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[03] * (Heat_exchanger_1.T_boil_v[03] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[04] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[03]) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Lv_v[03] + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[05] * (Heat_exchanger_1.T_boil_v[05] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[06] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[05]) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Lv_v[05] + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[07] * (Heat_exchanger_1.T_boil_v[07] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[08] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[07]) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Lv_v[07] + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[09] * (Heat_exchanger_1.T_boil_v[09] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[10] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[09]) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Lv_v[09])
unkR[311] = dyn[0] * (unkR[459] * unkR[338] * (unkR[366] - unkR[2]) + unkR[459] * unkR[339] * (unkR[554] - unkR[366]) + unkR[459] * unkR[351] + unkR[461] * unkR[340] * (unkR[368] - unkR[2]) + unkR[461] * unkR[341] * (unkR[554] - unkR[368]) + unkR[461] * unkR[353] + unkR[463] * unkR[342] * (unkR[370] - unkR[2]) + unkR[463] * unkR[343] * (unkR[554] - unkR[370]) + unkR[463] * unkR[355] + unkR[465] * unkR[344] * (unkR[372] - unkR[2]) + unkR[465] * unkR[345] * (unkR[554] - unkR[372]) + unkR[465] * unkR[357] + unkR[467] * unkR[346] * (unkR[374] - unkR[2]) + unkR[467] * unkR[347] * (unkR[554] - unkR[374]) + unkR[467] * unkR[359]) ;
//[E-264]  Heat_exchanger_1.h.T = Heat_exchanger_1.h.Q / Heat_exchanger_1.h.A / Heat_exchanger_1.h_l + Heat_exchanger_1.T_av
unkR[323] = _div( _div( unkR[311] , unkR[322],"Heat_exchanger_1.h.A") , unkR[458],"Heat_exchanger_1.h_l") + unkR[365] ;
//[E-265]  Contact_Wall_1.Q = -Heat_exchanger_1.h.Q
unkR[321] = -unkR[311] ;
//[E-266]  Comb_Chamb.h.T = Heat_exchanger_1.h.T - Contact_Wall_1.Q / Contact_Wall_1.A_wet / (Contact_Wall_1.k_w / Contact_Wall_1.t_w)
unkR[312] = unkR[323] - _div( _div( unkR[321] , unkR[320],"Contact_Wall_1.A_wet") , (_div( unkR[324] , unkR[325],"Contact_Wall_1.t_w")),"Contact_Wall_1.k_w / Contact_Wall_1.t_w") ;
//[E-267]  Pump_LOX_OXIDIZER.dp = -(Pump_LOX_OXIDIZER.tau_id * LPRES.rho(Inlet_LOX.fluidV))
unkR[533] = -(dyn[4] * LPRES__rho(&unkR[75])) ;
//[E-268]  Pump_LOX_OXIDIZER.tau = Pump_LOX_OXIDIZER.tau_id / Pump_LOX_OXIDIZER.eta_d
unkR[543] = _div( dyn[4] , unkR[534],"Pump_LOX_OXIDIZER.eta_d") ;
//[E-269]  Pump_LOX_OXIDIZER.m.Power = FlowMeter_LOX.f_in.W * Pump_LOX_OXIDIZER.tau
unkR[536] = unkR[74] * unkR[543] ;
//[E-270]  Turbine_OXIDIZER.m.Power = -Pump_LOX_OXIDIZER.m.Power
unkR[566] = -unkR[536] ;
//[E-271]  Turbine_OXIDIZER.tau = Turbine_OXIDIZER.m.Power / CCV.f_in.W
unkR[568] = _div( unkR[566] , dyn[0],"CCV.f_in.W") ;
//[E-272]  Nozzle_1.g.Tt = Turbine_OXIDIZER.f_in.Tt - Turbine_OXIDIZER.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[513] = unkR[555] - _div( unkR[568] , LPRES__cp(&unkR[381]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-273]  Turbine_OXIDIZER.alpha = Nozzle_1.g.Tt / Turbine_OXIDIZER.f_in.Tt
unkR[563] = _div( unkR[513] , unkR[555],"Turbine_OXIDIZER.f_in.Tt") ;
//[E-274]  Turbine_OXIDIZER.beta = (1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[564] = _pow( (1. - _div( (1. - unkR[563]) , unkR[565],"Turbine_OXIDIZER.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[381]) - 1.) , LPRES__gamma(&unkR[381]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-275]  Nozzle_1.g.pt = Turbine_OXIDIZER.beta * Turbine_OXIDIZER.f_in.pt
unkR[514] = unkR[564] * unkR[556] ;
//[E-276]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[509] = _div( unkR[514] , unkR[516],"Nozzle_1.p_amb") ;
//[E-277]  Nozzle_1.M_out =  ZONE[3] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))	  OTHERS 1
 if(m_branchZone[2]==0)
	unkR[508] = _sqrt(_div( 2. * (_pow( unkR[509] , (_div( (LPRES__gamma(&unkR[381]) - 1.) , LPRES__gamma(&unkR[381]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[381]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)") ;
else unkR[508] = 1. ;
//[E-278]  Nozzle_1.A_sl =  ZONE[2] (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))	  OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
 if(m_branchZone[1]==0)
	unkR[507] = _div( unkR[506] * unkR[508] , _pow( (_div( (2. + (LPRES__gamma(&unkR[381]) - 1.) * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[381]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[381]) + 1.) , (2. * (LPRES__gamma(&unkR[381]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))") ;
else unkR[507] = _div( unkR[506] * -unkR[508] , _pow( (_div( (2. + (LPRES__gamma(&unkR[381]) - 1.) * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[381]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[381]) + 1.) , (2. * (LPRES__gamma(&unkR[381]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))") ;
//[E-279]  CCV.f_in.W = Nozzle_1.A_sl * LPRES.FGAMMA(Turbine_FUEL.f_in.fluid) * Nozzle_1.g.pt / sqrt(Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid))
res[2] = evalNormResidueInternal(2,dyn[0],_div( unkR[507] * LPRES__FGAMMA(&unkR[381]) * unkR[514] , _sqrt(unkR[513] * LPRES__R(&unkR[381]),"Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid)"),"sqrt(Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid))"));
//[E-280]  FlowMeter_LOX.f_in.Tt = (Pump_LOX_OXIDIZER.tau_id - Pump_LOX_OXIDIZER.tau) / LPRES.cp(Inlet_LOX.fluidV) + Inlet_LOX.Tt
unkR[73] = _div( (dyn[4] - unkR[543]) , LPRES__cp(&unkR[75]),"LPRES.cp(Inlet_LOX.fluidV)") + unkR[494] ;
//[E-281]  Comb_Chamb.T_in = (LPRES.cp(Comb_Chamb.fluid_O) * FlowMeter_LOX.f_in.Tt + Comb_Chamb.phi / Comb_Chamb.OF_st * LPRES.cp(Comb_Chamb.fluid_F) * Comb_Chamb.f_F.T) / ((1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R)
unkR[60] = _div( (LPRES__cp(&unkR[151]) * unkR[73] + _div( unkR[315] , unkR[53],"Comb_Chamb.OF_st") * LPRES__cp(&unkR[113]) * unkR[2]) , ((1. + _div( unkR[315] , unkR[53],"Comb_Chamb.OF_st")) * unkR[69]),"(1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R") ;
//[E-282]  Comb_Chamb.T_c = (Comb_Chamb.eta_d * Comb_Chamb.Q_comb_effective / ((1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)) + Comb_Chamb.cp_R * (Comb_Chamb.T_in - 298.15)) / LPRES.cp(Comb_Chamb.fluid_P_vap) + 298.15
unkR[59] = _div( (_div( unkR[70] * unkR[56] , (_div( (1. + unkR[52]) , MATH__min(unkR[52], unkR[53]),"MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)")),"(1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)") + unkR[69] * (unkR[60] - 298.15)) , LPRES__cp(&unkR[233]),"LPRES.cp(Comb_Chamb.fluid_P_vap)") + 298.15 ;
//[E-283]  ThrustMonitor_1.g.Tt = (-((Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] * -Comb_Chamb.T_c + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] * -FlowMeter_LOX.f_in.Tt) - Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp] * -Comb_Chamb.f_F.T) / ((Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] + Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp])
unkR[271] = _div( (-(_div( (unkR[64] + dyn[2]) * unkR[227] , unkR[272],"ThrustMonitor_1.g.W") * unkR[228] * -unkR[59] + _div( unkR[63] , unkR[272],"ThrustMonitor_1.g.W") * unkR[105] * -unkR[73]) - _div( unkR[62] , unkR[272],"ThrustMonitor_1.g.W") * unkR[33] * -unkR[2]) , (_div( (unkR[64] + dyn[2]) * unkR[227] , unkR[272],"ThrustMonitor_1.g.W") * unkR[228] + _div( unkR[63] , unkR[272],"ThrustMonitor_1.g.W") * unkR[105] + _div( unkR[62] , unkR[272],"ThrustMonitor_1.g.W") * unkR[33]),"(Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] + Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp]") ;
//[E-284]  Comb_Chamb.f_O.p_c = ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / Comb_Chamb.A_th
unkR[72] = _div( _div( unkR[272] * _sqrt(LPRES__R(&unkR[273]) * unkR[271],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[273]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") , unkR[48],"Comb_Chamb.A_th") ;
//[E-285]  FlowMeter_LOX.f_in.pt = (FlowMeter_LOX.f_in.W / (Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)) ** 2 / (2 * LPRES.rho(Inlet_LOX.fluidV)) + Comb_Chamb.f_O.p_c
unkR[336] = _div( _pow( (_div( unkR[74] , (unkR[483] * unkR[485]),"Injector_OXIDIZER.A * Injector_OXIDIZER.C_D")) , 2.,"(FlowMeter_LOX.f_in.W / (Injector_OXIDIZER.A * Injector_OXIDIZER.C_D))**(2)" ) , (2. * LPRES__rho(&unkR[75])),"2 * LPRES.rho(Inlet_LOX.fluidV)") + unkR[72] ;
//[E-286]  MOV.dp = Inlet_LOX.pt + Pump_LOX_OXIDIZER.dp - FlowMeter_LOX.f_in.pt
unkR[503] = unkR[495] + unkR[533] - unkR[336] ;
//[E-287]  MOV.f_in.pt = FlowMeter_LOX.f_in.pt + MOV.dp
unkR[504] = unkR[336] + unkR[503] ;
//[E-288]  FlowMeter_LOX.f_in.pt = MOV.f_in.pt - 0.5 * FlowMeter_LOX.f_in.W ** 2 / (MOV.rho_f * MOV.A ** 2)
res[3] = evalNormResidueInternal(3,unkR[336],unkR[504] - _div( 0.5 * _pow( unkR[74] , 2,"(FlowMeter_LOX.f_in.W)**(2)" ) , (unkR[505] * _pow( unkR[501] , 2,"(MOV.A)**(2)" )),"MOV.rho_f * MOV.A ** 2"));
//[E-289]  ThrustMonitor_1.g.c_star = sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid)
unkR[66] = _div( _sqrt(LPRES__R(&unkR[273]) * unkR[271],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[273]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") ;
//[E-290]  Comb_Chamb.T_aw = ThrustMonitor_1.g.Tt * (1 + Comb_Chamb.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)
unkR[57] = unkR[271] * _div( (1. + _pow( unkR[54] , 0.33,"(Comb_Chamb.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[273]) - 1.) * _pow( dyn[1] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[273]) - 1.) * _pow( dyn[1] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2") ;
//[E-291]  Comb_Chamb.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor_1.g.fluid) ** 0.5 * Comb_Chamb.T_aw ** 0.6
unkR[317] = 1.184e-07 * _pow( LPRES__M(&unkR[273]) , 0.5,"(LPRES.M(ThrustMonitor_1.g.fluid))**(0.5)" ) * _pow( unkR[57] , 0.6,"(Comb_Chamb.T_aw)**(0.6)" ) ;
//[E-292]  Comb_Chamb.h_g = 0.026 / sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2 * Comb_Chamb.visc_r ** 0.2 * LPRES.cp(ThrustMonitor_1.g.fluid) / Comb_Chamb.Pr_r ** 0.6 * (Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star) ** 0.8 * (Comb_Chamb.A_th / Comb_Chamb.A_r) ** 0.9
unkR[313] = _div( 0.026 , _pow( _sqrt(4. * unkR[48]/3.14159265358979,"4 * Comb_Chamb.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * Comb_Chamb.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[317] , 0.2,"(Comb_Chamb.visc_r)**(0.2)" ) * LPRES__cp(&unkR[273]) , _pow( unkR[54] , 0.6,"(Comb_Chamb.Pr_r)**(0.6)" ),"Comb_Chamb.Pr_r ** 0.6") * _pow( (_div( unkR[72] , unkR[66],"ThrustMonitor_1.g.c_star")) , 0.8,"(Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star)**(0.8)" ) * _pow( (_div( unkR[48] , unkR[47],"Comb_Chamb.A_r")) , 0.9,"(Comb_Chamb.A_th / Comb_Chamb.A_r)**(0.9)" ) ;
//[E-293]  Heat_exchanger_1.h.Q = Comb_Chamb.h_g * (Comb_Chamb.T_aw - Comb_Chamb.h.T) * Comb_Chamb.A_wet
res[4] = evalNormResidueInternal(4,unkR[311],unkR[313] * (unkR[57] - unkR[312]) * unkR[49]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[5];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-294]  Pump_FUEL_LH2.phi = FlowMeter_LH2.f_in.W / LPRES.rho(Inlet_LH2.fluidV) / Pump_FUEL_LH2.U / Pump_FUEL_LH2.A_in
unkR[525] = _div( _div( _div( unkR[333] , LPRES__rho(&unkR[3]),"LPRES.rho(Inlet_LH2.fluidV)") , dyn[5],"Pump_FUEL_LH2.U") , unkR[520],"Pump_FUEL_LH2.A_in") ;
//[E-295]  Pump_FUEL_LH2.psi = (Pump_FUEL_LH2.psi_d - 1) / Pump_FUEL_LH2.phi_d * Pump_FUEL_LH2.phi + 1
unkR[527] = _div( (unkR[528] - 1.) , unkR[526],"Pump_FUEL_LH2.phi_d") * unkR[525] + 1. ;
//[E-296]  Pump_FUEL_LH2.psi = -Pump_FUEL_LH2.tau / Pump_FUEL_LH2.U ** 2
res[5] = evalNormResidueInternal(5,unkR[527],_div( -unkR[531] , _pow( dyn[5] , 2,"(Pump_FUEL_LH2.U)**(2)" ),"Pump_FUEL_LH2.U ** 2"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-303]  Pump_LOX_OXIDIZER.phi = FlowMeter_LOX.f_in.W / LPRES.rho(Inlet_LOX.fluidV) / Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.A_in
unkR[537] = _div( _div( _div( unkR[74] , LPRES__rho(&unkR[75]),"LPRES.rho(Inlet_LOX.fluidV)") , dyn[6],"Pump_LOX_OXIDIZER.U") , unkR[532],"Pump_LOX_OXIDIZER.A_in") ;
//[E-304]  Pump_LOX_OXIDIZER.psi = (Pump_LOX_OXIDIZER.psi_d - 1) / Pump_LOX_OXIDIZER.phi_d * Pump_LOX_OXIDIZER.phi + 1
unkR[539] = _div( (unkR[540] - 1.) , unkR[538],"Pump_LOX_OXIDIZER.phi_d") * unkR[537] + 1. ;
//[E-305]  Pump_LOX_OXIDIZER.psi = -Pump_LOX_OXIDIZER.tau / Pump_LOX_OXIDIZER.U ** 2
res[6] = evalNormResidueInternal(6,unkR[539],_div( -unkR[543] , _pow( dyn[6] , 2,"(Pump_LOX_OXIDIZER.U)**(2)" ),"Pump_LOX_OXIDIZER.U ** 2"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn3(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-330]  ThrustMonitor_1.g.A_out / Comb_Chamb.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[46] , unkR[48],"Comb_Chamb.A_th"),_div( LPRES__FGAMMA(&unkR[273]) , (_pow( (_div( dyn[7] , unkR[72],"Comb_Chamb.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[273]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[273]) * (1. - _pow( (_div( dyn[7] , unkR[72],"Comb_Chamb.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[273]) - 1.) , LPRES__gamma(&unkR[273]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[273]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn4(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-340]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / ThrustMonitor_1.g.A_out / Comb_Chamb.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[272] * _sqrt(LPRES__R(&unkR[273]) * unkR[271],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , unkR[46],"ThrustMonitor_1.g.A_out") , unkR[72],"Comb_Chamb.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[273]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[273]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[273]) + 1)/2 , (LPRES__gamma(&unkR[273]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn5(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-364]  Injector_FUEL.f_in.pt = MFV.f_in.pt - 0.5 * Comb_Chamb.f_F.W ** 2 / (MFV.rho_f * MFV.A ** 2)
res[9] = evalNormResidueInternal(9,unkR[480],unkR[499] - _div( 0.5 * _pow( unkR[71] , 2,"(Comb_Chamb.f_F.W)**(2)" ) , (unkR[500] * _pow( dyn[9] , 2,"(MFV.A)**(2)" )),"MFV.rho_f * MFV.A ** 2"));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn6(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn6, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-369]  Heat_exchanger_1.f_in.pt = CCV.f_in.pt - 0.5 * CCV.f_in.W ** 2 / (CCV.rho_f * CCV.A ** 2)
res[10] = evalNormResidueInternal(10,unkR[42],unkR[41] - _div( 0.5 * _pow( dyn[0] , 2,"(CCV.f_in.W)**(2)" ) , (unkR[43] * _pow( dyn[10] , 2,"(CCV.A)**(2)" )),"CCV.rho_f * CCV.A ** 2"));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn7(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov& m= *LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fcn7, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::fres( double *_time, double dyn[], double der[], double res[] )
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
//[E-73]  Comb_Chamb.fluid_O[LOX] = Inlet_LOX.fluidV[LOX] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[151] = _div( unkR[75] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-74]  Comb_Chamb.phi = Comb_Chamb.OF_st / Comb_Chamb.OF
unkR[315] = _div( unkR[53] , unkR[52],"Comb_Chamb.OF") ;
//[E-75]  Comb_Chamb.fluid_F[LOX] = Inlet_LH2.fluidV[LOX] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[113] = _div( unkR[3] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-76]  Comb_Chamb.fluid_O[NTO] = Inlet_LOX.fluidV[NTO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[152] = _div( unkR[76] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-77]  Comb_Chamb.fluid_F[NTO] = Inlet_LH2.fluidV[NTO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[114] = _div( unkR[4] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-78]  Comb_Chamb.fluid_O[H2O2] = Inlet_LOX.fluidV[H2O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[153] = _div( unkR[77] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-79]  Comb_Chamb.fluid_F[H2O2] = Inlet_LH2.fluidV[H2O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[115] = _div( unkR[5] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-80]  Comb_Chamb.fluid_O[NH3] = Inlet_LOX.fluidV[NH3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[154] = _div( unkR[78] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-81]  Comb_Chamb.fluid_F[NH3] = Inlet_LH2.fluidV[NH3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[116] = _div( unkR[6] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-82]  Comb_Chamb.fluid_O[HNO3] = Inlet_LOX.fluidV[HNO3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[155] = _div( unkR[79] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-83]  Comb_Chamb.fluid_F[HNO3] = Inlet_LH2.fluidV[HNO3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[117] = _div( unkR[7] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-84]  Comb_Chamb.fluid_O[LF2] = Inlet_LOX.fluidV[LF2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[156] = _div( unkR[80] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-85]  Comb_Chamb.fluid_F[LF2] = Inlet_LH2.fluidV[LF2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[118] = _div( unkR[8] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-86]  Comb_Chamb.fluid_O[RP_1] = Inlet_LOX.fluidV[RP_1] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[157] = _div( unkR[81] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-87]  Comb_Chamb.fluid_F[RP_1] = Inlet_LH2.fluidV[RP_1] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[119] = _div( unkR[9] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-88]  Comb_Chamb.fluid_O[LCH4] = Inlet_LOX.fluidV[LCH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[158] = _div( unkR[82] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-89]  Comb_Chamb.fluid_F[LCH4] = Inlet_LH2.fluidV[LCH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[120] = _div( unkR[10] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-90]  Comb_Chamb.fluid_O[LH2] = Inlet_LOX.fluidV[LH2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[159] = _div( unkR[83] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-91]  Comb_Chamb.fluid_F[LH2] = Inlet_LH2.fluidV[LH2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[121] = _div( unkR[11] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-92]  Comb_Chamb.fluid_O[N2H4] = Inlet_LOX.fluidV[N2H4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[160] = _div( unkR[84] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-93]  Comb_Chamb.fluid_F[N2H4] = Inlet_LH2.fluidV[N2H4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[122] = _div( unkR[12] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-94]  Comb_Chamb.fluid_O[UDMH] = Inlet_LOX.fluidV[UDMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[161] = _div( unkR[85] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-95]  Comb_Chamb.fluid_F[UDMH] = Inlet_LH2.fluidV[UDMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[123] = _div( unkR[13] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-96]  Comb_Chamb.fluid_O[MMH] = Inlet_LOX.fluidV[MMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[162] = _div( unkR[86] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-97]  Comb_Chamb.fluid_F[MMH] = Inlet_LH2.fluidV[MMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[124] = _div( unkR[14] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-98]  Comb_Chamb.fluid_O[JP_10] = Inlet_LOX.fluidV[JP_10] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[163] = _div( unkR[87] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-99]  Comb_Chamb.fluid_F[JP_10] = Inlet_LH2.fluidV[JP_10] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[125] = _div( unkR[15] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-100]  Comb_Chamb.fluid_O[Kerox] = Inlet_LOX.fluidV[Kerox] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[164] = _div( unkR[88] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-101]  Comb_Chamb.fluid_F[Kerox] = Inlet_LH2.fluidV[Kerox] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[126] = _div( unkR[16] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-102]  Comb_Chamb.fluid_O[Oil] = Inlet_LOX.fluidV[Oil] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[165] = _div( unkR[89] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-103]  Comb_Chamb.fluid_F[Oil] = Inlet_LH2.fluidV[Oil] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[127] = _div( unkR[17] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-104]  Comb_Chamb.fluid_O[H2O] = Inlet_LOX.fluidV[H2O] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[166] = _div( unkR[90] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-105]  Comb_Chamb.fluid_F[H2O] = Inlet_LH2.fluidV[H2O] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[128] = _div( unkR[18] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-106]  Comb_Chamb.fluid_O[IPA] = Inlet_LOX.fluidV[IPA] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[167] = _div( unkR[91] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-107]  Comb_Chamb.fluid_F[IPA] = Inlet_LH2.fluidV[IPA] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[129] = _div( unkR[19] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-108]  Comb_Chamb.fluid_O[Air] = Inlet_LOX.fluidV[Air] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[168] = _div( unkR[92] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-109]  Comb_Chamb.fluid_F[Air] = Inlet_LH2.fluidV[Air] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[130] = _div( unkR[20] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-110]  Comb_Chamb.fluid_O[Ar] = Inlet_LOX.fluidV[Ar] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[169] = _div( unkR[93] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-111]  Comb_Chamb.fluid_F[Ar] = Inlet_LH2.fluidV[Ar] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[131] = _div( unkR[21] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-112]  Comb_Chamb.fluid_O[CH4] = Inlet_LOX.fluidV[CH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[170] = _div( unkR[94] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-113]  Comb_Chamb.fluid_F[CH4] = Inlet_LH2.fluidV[CH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[132] = _div( unkR[22] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-114]  Comb_Chamb.fluid_O[CO] = Inlet_LOX.fluidV[CO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[171] = _div( unkR[95] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-115]  Comb_Chamb.fluid_F[CO] = Inlet_LH2.fluidV[CO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[133] = _div( unkR[23] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-116]  Comb_Chamb.fluid_O[CO2] = Inlet_LOX.fluidV[CO2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[172] = _div( unkR[96] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-117]  Comb_Chamb.fluid_F[CO2] = Inlet_LH2.fluidV[CO2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[134] = _div( unkR[24] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-118]  Comb_Chamb.fluid_O[H2] = Inlet_LOX.fluidV[H2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[173] = _div( unkR[97] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-119]  Comb_Chamb.fluid_F[H2] = Inlet_LH2.fluidV[H2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[135] = _div( unkR[25] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-120]  Comb_Chamb.fluid_O[He] = Inlet_LOX.fluidV[He] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[174] = _div( unkR[98] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-121]  Comb_Chamb.fluid_F[He] = Inlet_LH2.fluidV[He] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[136] = _div( unkR[26] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-122]  Comb_Chamb.fluid_O[N2] = Inlet_LOX.fluidV[N2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[175] = _div( unkR[99] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-123]  Comb_Chamb.fluid_F[N2] = Inlet_LH2.fluidV[N2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[137] = _div( unkR[27] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-124]  Comb_Chamb.fluid_O[O2] = Inlet_LOX.fluidV[O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[176] = _div( unkR[100] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-125]  Comb_Chamb.fluid_F[O2] = Inlet_LH2.fluidV[O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[138] = _div( unkR[28] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-126]  Comb_Chamb.fluid_O[MMH_vapour] = Inlet_LOX.fluidV[MMH_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[177] = _div( unkR[101] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-127]  Comb_Chamb.fluid_F[MMH_vapour] = Inlet_LH2.fluidV[MMH_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[139] = _div( unkR[29] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-128]  Comb_Chamb.fluid_O[H2O_vapour] = Inlet_LOX.fluidV[H2O_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[178] = _div( unkR[102] , (1. - unkR[103]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-129]  Comb_Chamb.fluid_F[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[140] = _div( unkR[30] , (1. - unkR[31]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-130]  Comb_Chamb.fluid_O[Comb_prod] = 0
unkR[179] = 0. ;
//[E-131]  Comb_Chamb.fluid_F[Comb_prod] = 0
unkR[141] = 0. ;
//[E-132]  Comb_Chamb.fluid_P[Comb_prod_M] =  IF[30] (Comb_Chamb.Combustion) Comb_Chamb.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[218] = unkR[51] ;
}
else 
{
unkR[218] = 0. ;
}
//[E-133]  Comb_Chamb.fluid_P[Comb_prod_cp] =  IF[31] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[219] = unkR[68] ;
}
else 
{
unkR[219] = 0. ;
}
//[E-134]  Comb_Chamb.fluid_P[Comb_prod_c] =  IF[32] (Comb_Chamb.Combustion) Comb_Chamb.c_P	 ELSE 0
if( unkI[0] ) 
{
unkR[220] = unkR[65] ;
}
else 
{
unkR[220] = 0. ;
}
//[E-135]  Comb_Chamb.fluid_P[Comb_prod_cp_g] =  IF[33] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[221] = unkR[68] ;
}
else 
{
unkR[221] = 0. ;
}
//[E-136]  Comb_Chamb.fluid_P[Comb_prod_Lv] =  IF[34] (Comb_Chamb.Combustion) Comb_Chamb.Lv_P	 ELSE 0
if( unkI[0] ) 
{
unkR[222] = unkR[50] ;
}
else 
{
unkR[222] = 0. ;
}
//[E-137]  Comb_Chamb.fluid_P[Comb_prod_visc] =  IF[35] (Comb_Chamb.Combustion) Comb_Chamb.visc_P	 ELSE 0
if( unkI[0] ) 
{
unkR[223] = unkR[316] ;
}
else 
{
unkR[223] = 0. ;
}
//[E-138]  Comb_Chamb.fluid_P[Comb_prod_cond] =  IF[36] (Comb_Chamb.Combustion) Comb_Chamb.cond_P	 ELSE 0
if( unkI[0] ) 
{
unkR[224] = unkR[67] ;
}
else 
{
unkR[224] = 0. ;
}
//[E-139]  Comb_Chamb.fluid_P[Comb_prod_T_boil] =  IF[37] (Comb_Chamb.Combustion) Comb_Chamb.T_boil_P	 ELSE 0
if( unkI[0] ) 
{
unkR[225] = unkR[58] ;
}
else 
{
unkR[225] = 0. ;
}
//[E-140]  Comb_Chamb.fluid_P[Comb_prod_rho] = 0
unkR[226] = 0. ;
//[E-141]  Comb_Chamb.Q_comb_effective =  ZONE[1] (Comb_Chamb.Combustion) Comb_Chamb.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[56] = unkR[55] ;
else unkR[56] = 0. ;
//[E-142]  Comb_Chamb.fluid_O[Comb_prod_M] = 0
unkR[180] = 0. ;
//[E-143]  Comb_Chamb.fluid_O[Comb_prod_cp] = 0
unkR[181] = 0. ;
//[E-144]  Comb_Chamb.fluid_O[Comb_prod_c] = 0
unkR[182] = 0. ;
//[E-145]  Comb_Chamb.fluid_O[Comb_prod_cp_g] = 0
unkR[183] = 0. ;
//[E-146]  Comb_Chamb.fluid_O[Comb_prod_Lv] = 0
unkR[184] = 0. ;
//[E-147]  Comb_Chamb.fluid_O[Comb_prod_visc] = 0
unkR[185] = 0. ;
//[E-148]  Comb_Chamb.fluid_O[Comb_prod_cond] = 0
unkR[186] = 0. ;
//[E-149]  Comb_Chamb.fluid_O[Comb_prod_T_boil] = 0
unkR[187] = 0. ;
//[E-150]  Comb_Chamb.fluid_O[Comb_prod_rho] = 0
unkR[188] = 0. ;
//[E-151]  Comb_Chamb.fluid_F[Comb_prod_M] = 0
unkR[142] = 0. ;
//[E-152]  Comb_Chamb.fluid_F[Comb_prod_cp] = 0
unkR[143] = 0. ;
//[E-153]  Comb_Chamb.fluid_F[Comb_prod_c] = 0
unkR[144] = 0. ;
//[E-154]  Comb_Chamb.fluid_F[Comb_prod_cp_g] = 0
unkR[145] = 0. ;
//[E-155]  Comb_Chamb.fluid_F[Comb_prod_Lv] = 0
unkR[146] = 0. ;
//[E-156]  Comb_Chamb.fluid_F[Comb_prod_visc] = 0
unkR[147] = 0. ;
//[E-157]  Comb_Chamb.fluid_F[Comb_prod_cond] = 0
unkR[148] = 0. ;
//[E-158]  Comb_Chamb.fluid_F[Comb_prod_T_boil] = 0
unkR[149] = 0. ;
//[E-159]  Comb_Chamb.fluid_F[Comb_prod_rho] = 0
unkR[150] = 0. ;
//[E-160]  LPRES.Obtain_Vap_Prop(Inlet_LH2.fluidV, Heat_exchanger_1.Cp_v, Heat_exchanger_1.Lv_v, Heat_exchanger_1.T_boil_v, Heat_exchanger_1.mass_frac_v) %%% (OUT VAR)Heat_exchanger_1.Cp_v (OUT VAR)Heat_exchanger_1.Lv_v (OUT VAR)Heat_exchanger_1.T_boil_v (OUT VAR)Heat_exchanger_1.mass_frac_v 
LPRES__Obtain_Vap_Prop(&unkR[3], &unkR[338], &unkR[351], &unkR[366], &unkR[459]);
//[E-161]  Heat_exchanger_1.D_hy = 2 * Heat_exchanger_1.a * Heat_exchanger_1.b / (Heat_exchanger_1.a + Heat_exchanger_1.b)
unkR[349] = _div( 2. * unkR[376] * unkR[377] , (unkR[376] + unkR[377]),"Heat_exchanger_1.a + Heat_exchanger_1.b") ;
//[E-162]  Heat_exchanger_1.Pr = LPRES.visc(Turbine_FUEL.f_in.fluid) * LPRES.cp(Turbine_FUEL.f_in.fluid) / LPRES.cond(Turbine_FUEL.f_in.fluid) + LPRES.visc(Inlet_LH2.fluidV) * LPRES.cp(Inlet_LH2.fluidV) / LPRES.cond(Inlet_LH2.fluidV)
unkR[363] = _div( LPRES__visc(&unkR[381]) * LPRES__cp(&unkR[381]) , LPRES__cond(&unkR[381]),"LPRES.cond(Turbine_FUEL.f_in.fluid)") + _div( LPRES__visc(&unkR[3]) * LPRES__cp(&unkR[3]) , LPRES__cond(&unkR[3]),"LPRES.cond(Inlet_LH2.fluidV)") ;
//[E-163]  Comb_Chamb.A_r = Comb_Chamb.A_th * Comb_Chamb.AR_r
unkR[47] = unkR[48] * unkR[45] ;
//[E-164]  Contact_Wall_1.A_wet = Comb_Chamb.A_wet / Contact_Wall_1.A_eff_1
unkR[320] = _div( unkR[49] , unkR[318],"Contact_Wall_1.A_eff_1") ;
//[E-165]  Heat_exchanger_1.h.A = Contact_Wall_1.A_eff_2 * Contact_Wall_1.A_wet
unkR[322] = unkR[319] * unkR[320] ;
//[E-166]  MOV.rho_f = LPRES.rho(Inlet_LOX.fluidV)
unkR[505] = LPRES__rho(&unkR[75]) ;

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
//[E-299]  Pump_FUEL_LH2.dp = -(Pump_FUEL_LH2.tau_id * LPRES.rho(Inlet_LH2.fluidV))
unkR[521] = -(dyn[3] * LPRES__rho(&unkR[3])) ;
//[E-300]  FlowMeter_LH2.f_in.pt = Inlet_LH2.pt + Pump_FUEL_LH2.dp
unkR[334] = unkR[493] + unkR[521] ;
//[E-301]  Turbine_FUEL.theta = 1 / Turbine_FUEL.alpha
unkR[560] = _div( 1. , unkR[551],"Turbine_FUEL.alpha") ;
//[E-302]  Turbine_FUEL.pi = 1 / Turbine_FUEL.beta
unkR[558] = _div( 1. , unkR[552],"Turbine_FUEL.beta") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-306]  Pump_LOX_OXIDIZER.m.N = Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.r_m
unkR[535] = _div( dyn[6] , unkR[541],"Pump_LOX_OXIDIZER.r_m") ;
//[E-307]  Turbine_OXIDIZER.rpm = Pump_LOX_OXIDIZER.m.N / 0.10471975511966
unkR[542] = unkR[535]/0.10471975511966 ;
//[E-308]  Turbine_OXIDIZER.theta = 1 / Turbine_OXIDIZER.alpha
unkR[569] = _div( 1. , unkR[563],"Turbine_OXIDIZER.alpha") ;
//[E-309]  Turbine_OXIDIZER.pi = 1 / Turbine_OXIDIZER.beta
unkR[567] = _div( 1. , unkR[564],"Turbine_OXIDIZER.beta") ;
//[E-310]  FlowMeter_LH2.i.Data[1] = abs(FlowMeter_LH2.f_in.W)
unkR[335] = abs(unkR[333]) ;
//[E-311]  CCV.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[41] = unkR[334] * unkR[544] ;
//[E-312]  MFV.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[499] = unkR[334] * unkR[544] ;
//[E-313]  Injector_FUEL.f_in.pt = (Comb_Chamb.f_F.W / (Injector_FUEL.A * Injector_FUEL.C_D)) ** 2 / (2 * LPRES.rho(Inlet_LH2.fluidV)) + Comb_Chamb.f_O.p_c
unkR[480] = _div( _pow( (_div( unkR[71] , (unkR[473] * unkR[475]),"Injector_FUEL.A * Injector_FUEL.C_D")) , 2.,"(Comb_Chamb.f_F.W / (Injector_FUEL.A * Injector_FUEL.C_D))**(2)" ) , (2. * LPRES__rho(&unkR[3])),"2 * LPRES.rho(Inlet_LH2.fluidV)") + unkR[72] ;
//[E-314]  Injector_FUEL.PR = Injector_FUEL.f_in.pt / Comb_Chamb.f_O.p_c
unkR[477] = _div( unkR[480] , unkR[72],"Comb_Chamb.f_O.p_c") ;
//[E-315]  Injector_FUEL.PR_ch = 0
unkR[478] = 0. ;
//[E-316]  Injector_FUEL.p_out_ch = 0
unkR[481] = 0. ;
//[E-317]  Injector_FUEL.A_ch = 0
unkR[474] = 0. ;
//[E-318]  Injector_FUEL.M_out = 0
unkR[476] = 0. ;
//[E-319]  Injector_FUEL.v_ideal = Comb_Chamb.f_F.W / (LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D)
unkR[482] = _div( unkR[71] , (LPRES__rho(&unkR[3]) * unkR[473] * unkR[475]),"LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D") ;
//[E-320]  Injector_FUEL.Re = LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.v_ideal * Injector_FUEL.C_D * sqrt(4 * Injector_FUEL.A / 3.14159265358979) / LPRES.visc(Inlet_LH2.fluidV)
unkR[479] = _div( LPRES__rho(&unkR[3]) * unkR[482] * unkR[475] * _sqrt(4. * unkR[473]/3.14159265358979,"4 * Injector_FUEL.A / 3.14159265358979") , LPRES__visc(&unkR[3]),"LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-321]  Injector_OXIDIZER.PR = FlowMeter_LOX.f_in.pt / Comb_Chamb.f_O.p_c
unkR[487] = _div( unkR[336] , unkR[72],"Comb_Chamb.f_O.p_c") ;
//[E-322]  Injector_OXIDIZER.PR_ch = 0
unkR[488] = 0. ;
//[E-323]  Injector_OXIDIZER.p_out_ch = 0
unkR[490] = 0. ;
//[E-324]  Injector_OXIDIZER.A_ch = 0
unkR[484] = 0. ;
//[E-325]  Injector_OXIDIZER.M_out = 0
unkR[486] = 0. ;
//[E-326]  Injector_OXIDIZER.v_ideal = FlowMeter_LOX.f_in.W / (LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)
unkR[491] = _div( unkR[74] , (LPRES__rho(&unkR[75]) * unkR[483] * unkR[485]),"LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D") ;
//[E-327]  Injector_OXIDIZER.Re = LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.v_ideal * Injector_OXIDIZER.C_D * sqrt(4 * Injector_OXIDIZER.A / 3.14159265358979) / LPRES.visc(Inlet_LOX.fluidV)
unkR[489] = _div( LPRES__rho(&unkR[75]) * unkR[491] * unkR[485] * _sqrt(4. * unkR[483]/3.14159265358979,"4 * Injector_OXIDIZER.A / 3.14159265358979") , LPRES__visc(&unkR[75]),"LPRES.visc(Inlet_LOX.fluidV)") ;
//[E-328]  FlowMeter_LOX.i.Data[1] = abs(FlowMeter_LOX.f_in.W)
unkR[337] = abs(unkR[74]) ;
//[E-329]  ThrustMonitor_1.g.A_out = Comb_Chamb.AR * Comb_Chamb.A_th
unkR[46] = unkR[44] * unkR[48] ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-331]  ControlPanel.i_Comb.Data[1] = ThrustMonitor_1.g.c_star
unkR[314] = unkR[66] ;
//[E-332]  Nozzle_1.PR_sl = ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2) ** (LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))
unkR[510] = _pow( ((LPRES__gamma(&unkR[381]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[381]) , (LPRES__gamma(&unkR[381]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1")),"((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2)**(LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))" ) ;
//[E-333]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[518] = _div( unkR[514] , unkR[510],"Nozzle_1.PR_sl") ;
//[E-334]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[517] = MATH__max(unkR[516], unkR[518]) ;
//[E-335]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[511] = _div( unkR[513] , (1. + (LPRES__gamma(&unkR[381]) - 1.)/2. * _pow( unkR[508] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-336]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out)
unkR[519] = unkR[508] * _sqrt(LPRES__gamma(&unkR[381]) * LPRES__R(&unkR[381]) * unkR[511],"LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out") ;
//[E-337]  Nozzle_1.Thrust = CCV.f_in.W * Nozzle_1.v_out + Nozzle_1.A * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[512] = dyn[0] * unkR[519] + unkR[506] * (unkR[517] - unkR[516]) ;
//[E-338]  Nozzle_1.i.Data[1] = Nozzle_1.Thrust
unkR[515] = unkR[512] ;
//[E-339]  ControlPanel.W_tot = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[330] = unkR[335] + unkR[337] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-341]  ThrustMonitor_1.T_out = ThrustMonitor_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)
unkR[545] = _div( unkR[271] , (1. + (LPRES__gamma(&unkR[273]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor_1.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2") ;
//[E-342]  ThrustMonitor_1.v_out = ThrustMonitor_1.M_out * sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out)
unkR[548] = dyn[8] * _sqrt(LPRES__gamma(&unkR[273]) * LPRES__R(&unkR[273]) * unkR[545],"LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out") ;
//[E-343]  ThrustMonitor_1.p_out = Comb_Chamb.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))
unkR[547] = _div( unkR[72] , _pow( (1. + (LPRES__gamma(&unkR[273]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[273]) - 1.) , LPRES__gamma(&unkR[273]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))") ;
//[E-344]  ThrustMonitor_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[546] = LPRES__ISA_Pressure(unkR[496]) ;
//[E-345]  ControlPanel.Thrust = ThrustMonitor_1.g.W * ThrustMonitor_1.v_out + ThrustMonitor_1.g.A_out * (ThrustMonitor_1.p_out - ThrustMonitor_1.p_amb)
unkR[329] = unkR[272] * unkR[548] + unkR[46] * (unkR[547] - unkR[546]) ;
//[E-346]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[327] = _div( unkR[329] , unkR[330],"ControlPanel.W_tot") ;
//[E-347]  ControlPanel.C_E = ControlPanel.Isp / ThrustMonitor_1.g.c_star
unkR[326] = _div( unkR[327] , unkR[66],"ThrustMonitor_1.g.c_star") ;
//[E-348]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[328] = unkR[327]/9.80665 ;
//[E-349]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[331] = unkR[329] ;
//[E-350]  Heat_exchanger_1.f_in.pt = Turbine_FUEL.f_in.pt + Heat_exchanger_1.dp
unkR[42] = unkR[419] + unkR[379] ;
//[E-351]  CCV.dp = CCV.f_in.pt - Heat_exchanger_1.f_in.pt
unkR[1] = unkR[41] - unkR[42] ;
//[E-352]  Heat_exchanger_1.P_av = 0.5 * Turbine_FUEL.f_in.pt + 0.5 * CCV.f_in.pt - 0.5 * CCV.dp
unkR[362] = 0.5 * unkR[419] + 0.5 * unkR[41] - 0.5 * unkR[1] ;
//[E-353]  Heat_exchanger_1.fluid_out[Comb_prod_visc] = Inlet_LH2.fluidV[Comb_prod_visc]
unkR[454] = unkR[37] ;
//[E-354]  Heat_exchanger_1.fluid_out[Comb_prod_cond] = Inlet_LH2.fluidV[Comb_prod_cond]
unkR[455] = unkR[38] ;
//[E-355]  Heat_exchanger_1.fluid_out[Comb_prod_rho] = Inlet_LH2.fluidV[Comb_prod_rho]
unkR[457] = unkR[40] ;
//[E-356]  Heat_exchanger_1.fluid_out[LOX] = -Turbine_FUEL.f_in.fluid[LOX]
unkR[420] = -unkR[381] ;
//[E-357]  Heat_exchanger_1.fluid_out[LCH4] = -Turbine_FUEL.f_in.fluid[LCH4]
unkR[427] = -unkR[388] ;
//[E-358]  Heat_exchanger_1.fluid_out[LH2] = -Turbine_FUEL.f_in.fluid[LH2]
unkR[428] = -unkR[389] ;
//[E-359]  Heat_exchanger_1.fluid_out[MMH] = -Turbine_FUEL.f_in.fluid[MMH]
unkR[431] = -unkR[392] ;
//[E-360]  Heat_exchanger_1.f = 0
unkR[380] = 0. ;
//[E-361]  Heat_exchanger_1.D_eq = 1.3 * (Heat_exchanger_1.a * Heat_exchanger_1.b) ** 0.625 / (Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25
unkR[348] = _div( 1.3 * _pow( (unkR[376] * unkR[377]) , 0.625,"(Heat_exchanger_1.a * Heat_exchanger_1.b)**(0.625)" ) , _pow( (unkR[376] + unkR[377]) , 0.25,"(Heat_exchanger_1.a + Heat_exchanger_1.b)**(0.25)" ),"(Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25") ;
//[E-362]  MFV.M_th = 0
unkR[497] = 0. ;
//[E-363]  MFV.rho_f = LPRES.rho(Inlet_LH2.fluidV)
unkR[500] = LPRES__rho(&unkR[3]) ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-365]  MFV.dp = MFV.f_in.pt - Injector_FUEL.f_in.pt
unkR[498] = unkR[499] - unkR[480] ;
//[E-366]  MOV.M_th = 0
unkR[502] = 0. ;
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::checkAsserts(double *_time)
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
if(!(unkR[497] <= 1))
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[151] * unkR[113] + unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[155] * unkR[117] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[154] * unkR[116] + unkR[178] * unkR[140]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
    ev[1]= unkR[151] * unkR[113] + unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[155] * unkR[117] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[175] * unkR[137] + unkR[176] * unkR[138] + unkR[177] * unkR[139] + unkR[154] * unkR[116] + unkR[178] * unkR[140]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
    ev[2]= unkI[0] - 1; //Comb_Chamb.Combustion
    ev[3]= unkR[508]; //Nozzle_1.M_out > 0
    ev[4]= unkR[509] - unkR[510]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
     w[1] = cont[1] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::executeWhen(double *_time,  int index )
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Comb_Chamb.Q_comb_effective =  ZONE (Comb_Chamb.Combustion) Comb_Chamb.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Nozzle_1.A_sl =  ZONE (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)) OTHERS 1
     branchZone[2] = (cont[4] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::initDelays()
{
}


bool LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov = 103212;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov;
return true;
}



bool LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov = 460;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov[] = 
{
"CwAAAD0AAAAAAAAABQAAAAUAAAAFAAAABQAAAAUAAAAGAAAABgAAAAYAAAAGAAAABgAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAALAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__LE5B_valves_valves_off_design_mov(name,dirInstall);
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
	sprintf(partitionName,"%s","valves_off_design_mov");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+l+e5+b_valves.valves_off_design_mov");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


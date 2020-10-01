//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_design_CPP
#define LPRES_EXAMPLES__LE5B_design_CPP

#include "LPRES_EXAMPLES.+l+e5+b.design.h"

LPRES_EXAMPLES__LE5B_design* LPRES_EXAMPLES__LE5B_design::s_current= NULL;

LPRES_EXAMPLES__LE5B_design::LPRES_EXAMPLES__LE5B_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "LE5B";
m_infoPartitionName = "design";
m_infoModelName = "LPRES_EXAMPLES__LE5B_design";
m_infoModelFileName = "LPRES_EXAMPLES.+l+e5+b.design";
m_infoModelFileNameExtra = "+l+e5+b.design";
m_perfFlag = false;
m_infoComponentDate = "25/06/2020 14:07:06.753000";
m_infoPartitionDate = "25/06/2020 14:07:24.604000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "LPRES V2.0.1 LPRES_EXAMPLES V0.1 MATH V3.2.3 ";

m_solveInternalBox= new int[7]; 
int nbx;
for (nbx=0; nbx < 7 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[16];
int ib;
for (ib=0; ib < 16 ; ib++)
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
n_dyn=6;
dyn= new double[6] ;
static double tmp_dynInit[6]={ 500, 500, 100, 1, 1, 100 } ;
dynInit= new double[6];
dcopy(6,dynInit,tmp_dynInit);


n_der=0;
der= new double[6] ;
static double tmp_derInit[6]={ 0, 0, 0, 0, 0, 0 } ;
derInit= new double[6];
dcopy(6,derInit,tmp_derInit);


res= new double[6] ;
ldr= new double[6] ;
boxDyn= new double[6] ;
boxDer= new double[6] ;

n_unkR=560;
unkR= new double[560] ;
static double tmp_unkRInit[560]={ 110, 5, 1, 0, 0.05, 1, 800, 18, 0, 8, 0, 15100000, 0, 0, 200, 0, 
		0, 0, 0, 0, 0, 0, 4182, 1, 0.001, 3100, 0, 0.99, 1, 1, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 0, 1, 0, 0, 1, 0.001, 0, 1, 1, 0, 0, 1, 150, 0.005, 
		0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0.002, 0.004, 0.001, 3000000, 0, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 1000, 5e-05, 0, 0.001, 0.05, 0, 0.5, 0, 10, 0, 0, 1, 0, 0, 
		0.05, 0, 0.5, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02, 0, 
		0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0.01, 0, 0.612, 1, 
		0, 0, 0.4, 0, 0.7, 0.05, 0, 0, 0.01, 0, 0.653, 1, 0, 0, 0.4, 0, 
		0.7, 0.05, 0, 0, 0.9, 0, 0, 0, 0, 0.01, 0, 0, 0, 0.476, 1, 1, 
		1, 0, 0, 0, 0, 0, 0.01, 0, 0, 0, 0.392, 0, 0, 0, 0, 0 } ;
unkRInit= new double[560];
dcopy(560,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 100, 9, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=13;
static int tmp_cteIInit[13]={ 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "g/mol", "kg/m^3", "kg/s", "m", "m^2", 
		"m/s", "m/s^2", "rad/s", "rpm", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 7;
n_neld= 0;
m_numBoxes= 6;
m_nNonLinearBoxes= 6;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__LE5B_design::initInternalModels()
{
}

int LPRES_EXAMPLES__LE5B_design::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi1;
	int _vi2;

	_vi1 = 1 ;
	while ( _vi1 <= setofSize(&typ[11]) ) {
	_vi2 = setofElem(&typ[11], _vi1) ;
	if( fluid[_vi2-1] != 0 ) {
	fluid_name = _vi2 ;
	}
	_vi1 += 1 ;
	}
	return fluid_name ;
}


int LPRES_EXAMPLES__LE5B_design::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__LE5B_design::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi3;
	int _vi4;
	double _vr1;

	_vr1 = 0. ;
	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[10]) ) {
	_vi4 = setofElem(&typ[10], _vi3) ;
	_vr1 += Chem_rho[_vi3-1] * fluid[_vi4-1] ;
	_vi3 += 1 ;
	}
	return _vr1 ;
}


double LPRES_EXAMPLES__LE5B_design::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[28] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600,3133,2288 };
	int _vi5;
	int _vi6;
	double _vr2;

	_vr2 = 0. ;
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[11]) ) {
	_vi6 = setofElem(&typ[11], _vi5) ;
	_vr2 += Chem_cp[_vi5-1] * fluid[_vi6-1] ;
	_vi5 += 1 ;
	}
	return _vr2 + fluid[30] * fluid[28] ;
}


double LPRES_EXAMPLES__LE5B_design::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[28] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07,17.031,18 };
	int _vi7;
	int _vi8;
	double _vr3;

	_vr3 = 0. ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[11]) ) {
	_vi8 = setofElem(&typ[11], _vi7) ;
	_vr3 += _div( fluid[_vi8-1] , Chem_M[_vi7-1],"Chem_M[_vi7]") ;
	_vi7 += 1 ;
	}
	return _div( 1 , (_vr3 + _div( fluid[28] , fluid[29],"fluid[Comb_prod_M]")),"_vr3 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double LPRES_EXAMPLES__LE5B_design::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__LE5B_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


void LPRES_EXAMPLES__LE5B_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
{
	int _vi10;
	int _vi9;

	_vi9 = 1 ;
	while ( _vi9 <= setofSize(&typ[0]) ) {
	_vi10 = setofElem(&typ[0], _vi9) ;
	fluid[_vi9-1] = 0. ;
	_vi9 += 1 ;
	}
	fluid[fluid_name-1] = 1. ;
	return  ;
}


double LPRES_EXAMPLES__LE5B_design::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__LE5B_design::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__LE5B_design::LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[])
{
	int _vi11;
	int _vi12;

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
	_vi11 = 1 ;
	while ( _vi11 <= setofSize(&typ[0]) ) {
	_vi12 = setofElem(&typ[0], _vi11) ;
	if( _vi12 != 9 ) {
	if( _vi12 != 23 ) {
	if( _vi12 != 26 ) {
	if( _vi12 != 1 ) {
	if( _vi12 != 8 ) {
	if( _vi12 != 20 ) {
	if( _vi12 != 12 ) {
	if( _vi12 != 27 ) {
	fluid_out[_vi11-1] = fluid_in[_vi11-1] ;
	}
	}
	}
	}
	}
	}
	}
	}
	_vi11 += 1 ;
	}
	fluid_out[30] = fluid_out[32] ;
	return  ;
}


void LPRES_EXAMPLES__LE5B_design::LPRES__Decomposition_fun(double fluid_in[],double Data_Array[])
{
	// Local variables:
	double Fluid_Fuel[38];
	memset(Fluid_Fuel,0,38*sizeof(double));
	double Fluid_Oxidant[38];
	memset(Fluid_Oxidant,0,38*sizeof(double));
	int _vi13;
	int _vi14;

	Data_Array[0] = fluid_in[28] ;
	Data_Array[1] = fluid_in[30] ;
	_vi13 = 1 ;
	while ( _vi13 <= setofSize(&typ[11]) ) {
	_vi14 = setofElem(&typ[11], _vi13) ;
	if( setofPos(&typ[5], _vi14) != 0 && fluid_in[_vi14-1] != 0 ) {
	Data_Array[2] = fluid_in[_vi14-1] ;
	LPRES__Init_fluid(_vi14, Fluid_Fuel) ;
	Data_Array[3] = LPRES__cp(Fluid_Fuel) ;
	Data_Array[5] = 0. ;
	Data_Array[5] = 0. ;
		}
	else if( setofPos(&typ[12], _vi14) != 0 && fluid_in[_vi14-1] != 0) {
	Data_Array[4] = fluid_in[_vi14-1] ;
	LPRES__Init_fluid(_vi14, Fluid_Oxidant) ;
	Data_Array[5] = LPRES__cp(Fluid_Oxidant) ;
	Data_Array[3] = 0. ;
	Data_Array[3] = 0. ;

	}
	_vi13 += 1 ;
	}
	return  ;
}


double LPRES_EXAMPLES__LE5B_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__LE5B_design::LPRES__ISA_Pressure(const double & z)
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
	int _vi15;

	h = LPRES__Geopotential_Altitude(z) ;
	_vi15 = 1 ;
	while ( _vi15 <= 7 ) {
	if( h > h_max[_vi15-1] ) {
	if( b[_vi15-1] ) {
	p_0 = p_0 * exp(_div( -9.80665 * (h_max[_vi15-1] - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_0 = p_0 * _pow( (_div( (T_0 + a[_vi15-1] * (h_max[_vi15-1] - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[_vi15-1] * 287./1000.),"a[_vi15] * 287 / 1000")),"((T_0 + a[_vi15] * (h_max[_vi15] - h_0) / 1000) / T_0)**(-9.80665 / (a[_vi15] * 287 / 1000))" ) ;
	}
	T_0 = T_0 + a[_vi15-1] * (h_max[_vi15-1] - h_0)/1000. ;
	h_0 = h_max[_vi15-1] ;
	j = _vi15 + 1 ;
	}
	_vi15 += 1 ;
	}
	if( b[j-1] ) {
	p_amb = p_0 * exp(_div( -9.80665 * (h - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_amb = p_0 * _pow( (_div( (T_0 + a[j-1] * (h - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[j-1] * 287./1000.),"a[j] * 287 / 1000")),"((T_0 + a[j] * (h - h_0) / 1000) / T_0)**(-9.80665 / (a[j] * 287 / 1000))" ) ;
	}
	return p_amb ;
}


double LPRES_EXAMPLES__LE5B_design::LPRES__visc(double fluid[])
{
	// Local variables:
	double Chem_visc[28] = { 0.00019,0.000423,0.00127,0.001,7.9e-05,0.00021,2e-05,2e-05,0.00097,0.000754,0.0004,0.0028,0.0045,0.0045,0.001,0.002,1.803e-05,2.23e-05,1.1e-05,1.74e-05,1.47e-05,8.8e-06,1.96e-05,1.76e-05,
3.37e-05,0,9.9e-06,2.8e-05 };
	int _vi16;
	int _vi17;
	double _vr4;

	_vr4 = 0. ;
	_vi16 = 1 ;
	while ( _vi16 <= setofSize(&typ[11]) ) {
	_vi17 = setofElem(&typ[11], _vi16) ;
	_vr4 += Chem_visc[_vi16-1] * fluid[_vi17-1] ;
	_vi16 += 1 ;
	}
	return _vr4 + fluid[34] * fluid[28] ;
}


double LPRES_EXAMPLES__LE5B_design::LPRES__Lv(double fluid[])
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


double LPRES_EXAMPLES__LE5B_design::LPRES__T_boil(double fluid[])
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


void LPRES_EXAMPLES__LE5B_design::LPRES__Obtain_Vap_Prop(double fluid_in[],double Cp_i[],double Lv_i[],double T_boil_i[],double fluid_out[])
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


double LPRES_EXAMPLES__LE5B_design::LPRES__cond(double fluid[])
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


double LPRES_EXAMPLES__LE5B_design::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void LPRES_EXAMPLES__LE5B_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__LE5B_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Comb_Chamb.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",164,"Comb_Chamb.","Comb_Chamb.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(29, &unkR[268]) ;
	unkI[0] = 1 ;
	if( unkI[1] == 1 ) {
	dyn[3] = 0.001 ;
	}
	else {
	dyn[3] = 2.80123632766838 ;
	}
  // init(Inlet_LOX.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[69]) ;
  // init(Inlet_LH2.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[30]) ;
  // init(Heat_exchanger_1.Heat_exchanger,100)
	if(!(0 && LPRES__State(&unkR[30]) == 1 || 0 && LPRES__State(&unkR[30]) == 2))
		issueErrorAssert(213,7,24,98,"LPRES_CompHeat.el",280,"Heat_exchanger_1."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas","%s","FLUID CHANGED ITS STATE!");

  // init(Nozzle_1.Nozzle,0)
	unkR[502] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__LE5B_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-12]  Pump_FUEL_LH2.psi = -Pump_FUEL_LH2.tau / Pump_FUEL_LH2.U ** 2
res[0] = evalNormResidueInternal(0,unkR[515],_div( -unkR[518] , _pow( dyn[0] , 2,"(Pump_FUEL_LH2.U)**(2)" ),"Pump_FUEL_LH2.U ** 2"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_design& m= *LPRES_EXAMPLES__LE5B_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__LE5B_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__LE5B_design::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-22]  Pump_LOX_OXIDIZER.psi = -Pump_LOX_OXIDIZER.tau / Pump_LOX_OXIDIZER.U ** 2
res[1] = evalNormResidueInternal(1,unkR[527],_div( -unkR[530] , _pow( dyn[1] , 2,"(Pump_LOX_OXIDIZER.U)**(2)" ),"Pump_LOX_OXIDIZER.U ** 2"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_design::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_design& m= *LPRES_EXAMPLES__LE5B_design::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__LE5B_design::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_design::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void LPRES_EXAMPLES__LE5B_design::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-272]  ThrustMonitor_1.g.A_out / Comb_Chamb.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[2] = evalNormResidueInternal(2,_div( unkR[2] , unkR[4],"Comb_Chamb.A_th"),_div( LPRES__FGAMMA(&unkR[268]) , (_pow( (_div( dyn[2] , unkR[107],"Comb_Chamb.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[268]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[268]) * (1. - _pow( (_div( dyn[2] , unkR[107],"Comb_Chamb.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[268]) - 1.) , LPRES__gamma(&unkR[268]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[268]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_design::fcn3(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_design& m= *LPRES_EXAMPLES__LE5B_design::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void LPRES_EXAMPLES__LE5B_design::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_design::fcn3, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void LPRES_EXAMPLES__LE5B_design::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-276]  Comb_Chamb.AR_r = 1 / Comb_Chamb.M_r * LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,unkR[1],_div( _div( 1 , dyn[3],"Comb_Chamb.M_r") * LPRES__FGAMMA(&unkR[268]) , _sqrt(LPRES__gamma(&unkR[268]),"LPRES.gamma(ThrustMonitor_1.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[268]) - 1) * _pow( dyn[3] , 2,"(Comb_Chamb.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[268]) + 1) , (2 * (LPRES__gamma(&unkR[268]) - 1)),"2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_design::fcn4(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_design& m= *LPRES_EXAMPLES__LE5B_design::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void LPRES_EXAMPLES__LE5B_design::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_design::fcn4, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void LPRES_EXAMPLES__LE5B_design::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-291]  Heat_exchanger_1.h.A = Heat_exchanger_1.h.Q / (Heat_exchanger_1.h_l * (Heat_exchanger_1.h.T - Heat_exchanger_1.T_av))
unkR[317] = _div( unkR[306] , (unkR[455] * (dyn[4] - unkR[360])),"Heat_exchanger_1.h_l * (Heat_exchanger_1.h.T - Heat_exchanger_1.T_av)") ;
//[E-292]  Contact_Wall_1.A_wet = Heat_exchanger_1.h.A / Contact_Wall_1.A_eff_2
unkR[315] = _div( unkR[317] , unkR[314],"Contact_Wall_1.A_eff_2") ;
//[E-293]  Comb_Chamb.A_wet = Contact_Wall_1.A_eff_1 * Contact_Wall_1.A_wet
unkR[5] = unkR[313] * unkR[315] ;
//[E-294]  Comb_Chamb.h.T = Comb_Chamb.T_aw - Heat_exchanger_1.h.Q / Comb_Chamb.A_wet / Comb_Chamb.h_g
unkR[307] = unkR[13] - _div( _div( unkR[306] , unkR[5],"Comb_Chamb.A_wet") , unkR[308],"Comb_Chamb.h_g") ;
//[E-295]  Contact_Wall_1.Q = Contact_Wall_1.k_w / Contact_Wall_1.t_w * (Heat_exchanger_1.h.T - Comb_Chamb.h.T) * Contact_Wall_1.A_wet
res[4] = evalNormResidueInternal(4,unkR[316],_div( unkR[318] , unkR[319],"Contact_Wall_1.t_w") * (dyn[4] - unkR[307]) * unkR[315]);
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_design::fcn5(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_design& m= *LPRES_EXAMPLES__LE5B_design::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void LPRES_EXAMPLES__LE5B_design::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_design::fcn5, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void LPRES_EXAMPLES__LE5B_design::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-298]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / ThrustMonitor_1.g.A_out / Comb_Chamb.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( unkR[267] * _sqrt(LPRES__R(&unkR[268]) * unkR[266],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , unkR[2],"ThrustMonitor_1.g.A_out") , unkR[107],"Comb_Chamb.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[268]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[268]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[268]) + 1)/2 , (LPRES__gamma(&unkR[268]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_design::fcn6(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_design& m= *LPRES_EXAMPLES__LE5B_design::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void LPRES_EXAMPLES__LE5B_design::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_design::fcn6, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__LE5B_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Comb_Chamb.W_O = FlowMeter_LOX.f_in.W * (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[21] = unkR[330] * (1. - unkR[97]) ;
//[E-2]  Comb_Chamb.W_F = Comb_Chamb.W_O / Comb_Chamb.OF
unkR[17] = _div( unkR[21] , unkR[8],"Comb_Chamb.OF") ;
//[E-3]  Comb_Chamb.f_F.W = Comb_Chamb.W_F / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[29] = _div( unkR[17] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-4]  FlowMeter_LH2.f_in.W = Comb_Chamb.f_F.W + Heat_exchanger_1.f_in.W
unkR[327] = unkR[29] + unkR[376] ;
//[E-5]  Pump_FUEL_LH2.tau_id = -Pump_FUEL_LH2.dp / LPRES.rho(Inlet_LH2.fluidV)
unkR[519] = _div( -unkR[509] , LPRES__rho(&unkR[30]),"LPRES.rho(Inlet_LH2.fluidV)") ;
//[E-6]  Pump_FUEL_LH2.tau = Pump_FUEL_LH2.tau_id / Pump_FUEL_LH2.eta_d
unkR[518] = _div( unkR[519] , unkR[510],"Pump_FUEL_LH2.eta_d") ;
//[E-7]  Pump_FUEL_LH2.m.Power = FlowMeter_LH2.f_in.W * Pump_FUEL_LH2.tau
unkR[512] = unkR[327] * unkR[518] ;
//[E-8]  Pump_FUEL_LH2.m.N = 0.10471975511966 * Turbine_FUEL.rpm
unkR[511] = 0.10471975511966 * unkR[547] ;
//[E-9]  FlowMeter_LH2.f_in.pt = Inlet_LH2.pt + Pump_FUEL_LH2.dp
unkR[328] = unkR[490] + unkR[509] ;
//[E-10]  Comb_Chamb.f_F.T = (Pump_FUEL_LH2.tau_id - Pump_FUEL_LH2.tau) / LPRES.cp(Inlet_LH2.fluidV) + Inlet_LH2.Tt
unkR[28] = _div( (unkR[519] - unkR[518]) , LPRES__cp(&unkR[30]),"LPRES.cp(Inlet_LH2.fluidV)") + unkR[489] ;
//[E-11]  Pump_FUEL_LH2.psi = (Pump_FUEL_LH2.psi_d - 1) / Pump_FUEL_LH2.phi_d * Pump_FUEL_LH2.phi + 1
unkR[515] = _div( (unkR[516] - 1.) , unkR[514],"Pump_FUEL_LH2.phi_d") * unkR[513] + 1. ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-13]  Pump_FUEL_LH2.r_m = Pump_FUEL_LH2.U / Pump_FUEL_LH2.m.N
unkR[517] = _div( dyn[0] , unkR[511],"Pump_FUEL_LH2.m.N") ;
//[E-14]  Pump_FUEL_LH2.A_in = FlowMeter_LH2.f_in.W / LPRES.rho(Inlet_LH2.fluidV) / Pump_FUEL_LH2.U / Pump_FUEL_LH2.phi
unkR[508] = _div( _div( _div( unkR[327] , LPRES__rho(&unkR[30]),"LPRES.rho(Inlet_LH2.fluidV)") , dyn[0],"Pump_FUEL_LH2.U") , unkR[513],"Pump_FUEL_LH2.phi") ;
//[E-15]  Pump_LOX_OXIDIZER.tau_id = -Pump_LOX_OXIDIZER.dp / LPRES.rho(Inlet_LOX.fluidV)
unkR[531] = _div( -unkR[521] , LPRES__rho(&unkR[69]),"LPRES.rho(Inlet_LOX.fluidV)") ;
//[E-16]  Pump_LOX_OXIDIZER.tau = Pump_LOX_OXIDIZER.tau_id / Pump_LOX_OXIDIZER.eta_d
unkR[530] = _div( unkR[531] , unkR[522],"Pump_LOX_OXIDIZER.eta_d") ;
//[E-17]  Pump_LOX_OXIDIZER.m.Power = FlowMeter_LOX.f_in.W * Pump_LOX_OXIDIZER.tau
unkR[524] = unkR[330] * unkR[530] ;
//[E-18]  Pump_LOX_OXIDIZER.m.N = 0.10471975511966 * Turbine_OXIDIZER.rpm
unkR[523] = 0.10471975511966 * unkR[557] ;
//[E-19]  FlowMeter_LOX.f_in.pt = Inlet_LOX.pt + Pump_LOX_OXIDIZER.dp
unkR[331] = unkR[492] + unkR[521] ;
//[E-20]  FlowMeter_LOX.f_in.Tt = (Pump_LOX_OXIDIZER.tau_id - Pump_LOX_OXIDIZER.tau) / LPRES.cp(Inlet_LOX.fluidV) + Inlet_LOX.Tt
unkR[68] = _div( (unkR[531] - unkR[530]) , LPRES__cp(&unkR[69]),"LPRES.cp(Inlet_LOX.fluidV)") + unkR[491] ;
//[E-21]  Pump_LOX_OXIDIZER.psi = (Pump_LOX_OXIDIZER.psi_d - 1) / Pump_LOX_OXIDIZER.phi_d * Pump_LOX_OXIDIZER.phi + 1
unkR[527] = _div( (unkR[528] - 1.) , unkR[526],"Pump_LOX_OXIDIZER.phi_d") * unkR[525] + 1. ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-23]  Pump_LOX_OXIDIZER.r_m = Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.m.N
unkR[529] = _div( dyn[1] , unkR[523],"Pump_LOX_OXIDIZER.m.N") ;
//[E-24]  Pump_LOX_OXIDIZER.A_in = FlowMeter_LOX.f_in.W / LPRES.rho(Inlet_LOX.fluidV) / Pump_LOX_OXIDIZER.U / Pump_LOX_OXIDIZER.phi
unkR[520] = _div( _div( _div( unkR[330] , LPRES__rho(&unkR[69]),"LPRES.rho(Inlet_LOX.fluidV)") , dyn[1],"Pump_LOX_OXIDIZER.U") , unkR[525],"Pump_LOX_OXIDIZER.phi") ;
//[E-25]  Turbine_FUEL.m.Power = -Pump_FUEL_LH2.m.Power
unkR[545] = -unkR[512] ;
//[E-26]  Turbine_FUEL.tau = Turbine_FUEL.m.Power / Heat_exchanger_1.f_in.W
unkR[548] = _div( unkR[545] , unkR[376],"Heat_exchanger_1.f_in.W") ;
//[E-27]  Turbine_FUEL.f_in.fluid[LOX] = 0
unkR[378] = 0. ;
//[E-28]  Heat_exchanger_1.fluid_out[NTO] = Inlet_LH2.fluidV[NTO]
unkR[418] = unkR[31] ;
//[E-29]  Turbine_FUEL.f_in.fluid[NTO] = Heat_exchanger_1.fluid_out[NTO]
unkR[379] = unkR[418] ;
//[E-30]  Heat_exchanger_1.fluid_out[H2O2] = Inlet_LH2.fluidV[H2O2]
unkR[419] = unkR[32] ;
//[E-31]  Turbine_FUEL.f_in.fluid[H2O2] = Heat_exchanger_1.fluid_out[H2O2]
unkR[380] = unkR[419] ;
//[E-32]  Heat_exchanger_1.fluid_out[NH3] = Inlet_LH2.fluidV[NH3]
unkR[420] = unkR[33] ;
//[E-33]  Turbine_FUEL.f_in.fluid[NH3] = Heat_exchanger_1.fluid_out[NH3]
unkR[381] = unkR[420] ;
//[E-34]  Heat_exchanger_1.fluid_out[HNO3] = Inlet_LH2.fluidV[HNO3]
unkR[421] = unkR[34] ;
//[E-35]  Turbine_FUEL.f_in.fluid[HNO3] = Heat_exchanger_1.fluid_out[HNO3]
unkR[382] = unkR[421] ;
//[E-36]  Heat_exchanger_1.fluid_out[LF2] = Inlet_LH2.fluidV[LF2]
unkR[422] = unkR[35] ;
//[E-37]  Turbine_FUEL.f_in.fluid[LF2] = Heat_exchanger_1.fluid_out[LF2]
unkR[383] = unkR[422] ;
//[E-38]  Heat_exchanger_1.fluid_out[RP_1] = Inlet_LH2.fluidV[RP_1]
unkR[423] = unkR[36] ;
//[E-39]  Turbine_FUEL.f_in.fluid[RP_1] = Heat_exchanger_1.fluid_out[RP_1]
unkR[384] = unkR[423] ;
//[E-40]  Turbine_FUEL.f_in.fluid[LCH4] = 0
unkR[385] = 0. ;
//[E-41]  Turbine_FUEL.f_in.fluid[LH2] = 0
unkR[386] = 0. ;
//[E-42]  Heat_exchanger_1.fluid_out[N2H4] = Inlet_LH2.fluidV[N2H4]
unkR[426] = unkR[39] ;
//[E-43]  Turbine_FUEL.f_in.fluid[N2H4] = Heat_exchanger_1.fluid_out[N2H4]
unkR[387] = unkR[426] ;
//[E-44]  Heat_exchanger_1.fluid_out[UDMH] = Inlet_LH2.fluidV[UDMH]
unkR[427] = unkR[40] ;
//[E-45]  Turbine_FUEL.f_in.fluid[UDMH] = Heat_exchanger_1.fluid_out[UDMH]
unkR[388] = unkR[427] ;
//[E-46]  Turbine_FUEL.f_in.fluid[MMH] = 0
unkR[389] = 0. ;
//[E-47]  Heat_exchanger_1.fluid_out[JP_10] = Inlet_LH2.fluidV[JP_10]
unkR[429] = unkR[42] ;
//[E-48]  Turbine_FUEL.f_in.fluid[JP_10] = Heat_exchanger_1.fluid_out[JP_10]
unkR[390] = unkR[429] ;
//[E-49]  Heat_exchanger_1.fluid_out[Kerox] = Inlet_LH2.fluidV[Kerox]
unkR[430] = unkR[43] ;
//[E-50]  Turbine_FUEL.f_in.fluid[Kerox] = Heat_exchanger_1.fluid_out[Kerox]
unkR[391] = unkR[430] ;
//[E-51]  Heat_exchanger_1.fluid_out[Oil] = Inlet_LH2.fluidV[Oil]
unkR[431] = unkR[44] ;
//[E-52]  Turbine_FUEL.f_in.fluid[Oil] = Heat_exchanger_1.fluid_out[Oil]
unkR[392] = unkR[431] ;
//[E-53]  Heat_exchanger_1.fluid_out[H2O] = Inlet_LH2.fluidV[H2O]
unkR[432] = unkR[45] ;
//[E-54]  Turbine_FUEL.f_in.fluid[H2O] = Heat_exchanger_1.fluid_out[H2O]
unkR[393] = unkR[432] ;
//[E-55]  Heat_exchanger_1.fluid_out[IPA] = Inlet_LH2.fluidV[IPA]
unkR[433] = unkR[46] ;
//[E-56]  Turbine_FUEL.f_in.fluid[IPA] = Heat_exchanger_1.fluid_out[IPA]
unkR[394] = unkR[433] ;
//[E-57]  Heat_exchanger_1.fluid_out[Air] = Inlet_LH2.fluidV[Air]
unkR[434] = unkR[47] ;
//[E-58]  Turbine_FUEL.f_in.fluid[Air] = Heat_exchanger_1.fluid_out[Air]
unkR[395] = unkR[434] ;
//[E-59]  Heat_exchanger_1.fluid_out[Ar] = Inlet_LH2.fluidV[Ar]
unkR[435] = unkR[48] ;
//[E-60]  Turbine_FUEL.f_in.fluid[Ar] = Heat_exchanger_1.fluid_out[Ar]
unkR[396] = unkR[435] ;
//[E-61]  Heat_exchanger_1.fluid_out[CH4] = Inlet_LH2.fluidV[LCH4]
unkR[436] = unkR[37] ;
//[E-62]  Turbine_FUEL.f_in.fluid[CH4] = Heat_exchanger_1.fluid_out[CH4]
unkR[397] = unkR[436] ;
//[E-63]  Heat_exchanger_1.fluid_out[CO] = Inlet_LH2.fluidV[CO]
unkR[437] = unkR[50] ;
//[E-64]  Turbine_FUEL.f_in.fluid[CO] = Heat_exchanger_1.fluid_out[CO]
unkR[398] = unkR[437] ;
//[E-65]  Heat_exchanger_1.fluid_out[CO2] = Inlet_LH2.fluidV[CO2]
unkR[438] = unkR[51] ;
//[E-66]  Turbine_FUEL.f_in.fluid[CO2] = Heat_exchanger_1.fluid_out[CO2]
unkR[399] = unkR[438] ;
//[E-67]  Heat_exchanger_1.fluid_out[H2] = Inlet_LH2.fluidV[LH2]
unkR[439] = unkR[38] ;
//[E-68]  Turbine_FUEL.f_in.fluid[H2] = Heat_exchanger_1.fluid_out[H2]
unkR[400] = unkR[439] ;
//[E-69]  Heat_exchanger_1.fluid_out[He] = Inlet_LH2.fluidV[He]
unkR[440] = unkR[53] ;
//[E-70]  Turbine_FUEL.f_in.fluid[He] = Heat_exchanger_1.fluid_out[He]
unkR[401] = unkR[440] ;
//[E-71]  Heat_exchanger_1.fluid_out[N2] = Inlet_LH2.fluidV[N2]
unkR[441] = unkR[54] ;
//[E-72]  Turbine_FUEL.f_in.fluid[N2] = Heat_exchanger_1.fluid_out[N2]
unkR[402] = unkR[441] ;
//[E-73]  Heat_exchanger_1.fluid_out[O2] = Inlet_LH2.fluidV[LOX]
unkR[442] = unkR[30] ;
//[E-74]  Turbine_FUEL.f_in.fluid[O2] = Heat_exchanger_1.fluid_out[O2]
unkR[403] = unkR[442] ;
//[E-75]  Heat_exchanger_1.fluid_out[MMH_vapour] = Inlet_LH2.fluidV[MMH]
unkR[443] = unkR[41] ;
//[E-76]  Turbine_FUEL.f_in.fluid[MMH_vapour] = Heat_exchanger_1.fluid_out[MMH_vapour]
unkR[404] = unkR[443] ;
//[E-77]  Heat_exchanger_1.fluid_out[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour]
unkR[444] = unkR[57] ;
//[E-78]  Turbine_FUEL.f_in.fluid[H2O_vapour] = Heat_exchanger_1.fluid_out[H2O_vapour]
unkR[405] = unkR[444] ;
//[E-79]  Heat_exchanger_1.fluid_out[Comb_prod] = Inlet_LH2.fluidV[Comb_prod]
unkR[445] = unkR[58] ;
//[E-80]  Turbine_FUEL.f_in.fluid[Comb_prod] = Heat_exchanger_1.fluid_out[Comb_prod]
unkR[406] = unkR[445] ;
//[E-81]  Heat_exchanger_1.fluid_out[Comb_prod_M] = Inlet_LH2.fluidV[Comb_prod_M]
unkR[446] = unkR[59] ;
//[E-82]  Turbine_FUEL.f_in.fluid[Comb_prod_M] = Heat_exchanger_1.fluid_out[Comb_prod_M]
unkR[407] = unkR[446] ;
//[E-83]  Heat_exchanger_1.fluid_out[Comb_prod_cp] = Inlet_LH2.fluidV[Comb_prod_cp]
unkR[447] = unkR[60] ;
//[E-84]  Turbine_FUEL.f_in.fluid[Comb_prod_cp] = Heat_exchanger_1.fluid_out[Comb_prod_cp]
unkR[408] = unkR[447] ;
//[E-85]  Heat_exchanger_1.fluid_out[Comb_prod_c] = Inlet_LH2.fluidV[Comb_prod_c]
unkR[448] = unkR[61] ;
//[E-86]  Turbine_FUEL.f_in.fluid[Comb_prod_c] = Heat_exchanger_1.fluid_out[Comb_prod_c]
unkR[409] = unkR[448] ;
//[E-87]  Heat_exchanger_1.fluid_out[Comb_prod_cp_g] = Inlet_LH2.fluidV[Comb_prod_cp_g]
unkR[449] = unkR[62] ;
//[E-88]  Turbine_FUEL.f_in.fluid[Comb_prod_cp_g] = Heat_exchanger_1.fluid_out[Comb_prod_cp_g]
unkR[410] = unkR[449] ;
//[E-89]  Heat_exchanger_1.fluid_out[Comb_prod_Lv] = Inlet_LH2.fluidV[Comb_prod_Lv]
unkR[450] = unkR[63] ;
//[E-90]  Turbine_FUEL.f_in.fluid[Comb_prod_Lv] = Heat_exchanger_1.fluid_out[Comb_prod_Lv]
unkR[411] = unkR[450] ;
//[E-91]  Turbine_FUEL.f_in.fluid[Comb_prod_visc] = Heat_exchanger_1.visc_P
unkR[412] = unkR[469] ;
//[E-92]  Turbine_FUEL.f_in.fluid[Comb_prod_cond] = Heat_exchanger_1.cond_P
unkR[413] = unkR[373] ;
//[E-93]  Heat_exchanger_1.fluid_out[Comb_prod_T_boil] = Inlet_LH2.fluidV[Comb_prod_T_boil]
unkR[453] = unkR[66] ;
//[E-94]  Turbine_FUEL.f_in.fluid[Comb_prod_T_boil] = Heat_exchanger_1.fluid_out[Comb_prod_T_boil]
unkR[414] = unkR[453] ;
//[E-95]  Turbine_FUEL.f_in.fluid[Comb_prod_rho] = Heat_exchanger_1.rho_P
unkR[415] = unkR[466] ;
//[E-96]  Turbine_OXIDIZER.f_in.Tt = Turbine_FUEL.f_in.Tt - Turbine_FUEL.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[543] = unkR[542] - _div( unkR[548] , LPRES__cp(&unkR[378]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-97]  Heat_exchanger_1.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[377] = unkR[328] * unkR[532] ;
//[E-98]  Turbine_FUEL.f_in.pt = Heat_exchanger_1.f_in.pt - Heat_exchanger_1.dp
unkR[416] = unkR[377] - unkR[374] ;
//[E-99]  Turbine_FUEL.MFP = Heat_exchanger_1.f_in.W * sqrt(Turbine_FUEL.f_in.Tt) / Turbine_FUEL.f_in.pt
unkR[538] = _div( unkR[376] * _sqrt(unkR[542],"Turbine_FUEL.f_in.Tt") , unkR[416],"Turbine_FUEL.f_in.pt") ;
//[E-100]  Turbine_FUEL.alpha = Turbine_OXIDIZER.f_in.Tt / Turbine_FUEL.f_in.Tt
unkR[539] = _div( unkR[543] , unkR[542],"Turbine_FUEL.f_in.Tt") ;
//[E-101]  Turbine_FUEL.theta = 1 / Turbine_FUEL.alpha
unkR[549] = _div( 1. , unkR[539],"Turbine_FUEL.alpha") ;
//[E-102]  Turbine_FUEL.beta = (1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[540] = _pow( (1. - _div( (1. - unkR[539]) , unkR[541],"Turbine_FUEL.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[378]) - 1.) , LPRES__gamma(&unkR[378]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_FUEL.alpha) / Turbine_FUEL.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-103]  Turbine_OXIDIZER.f_in.pt = Turbine_FUEL.beta * Turbine_FUEL.f_in.pt
unkR[544] = unkR[540] * unkR[416] ;
//[E-104]  Turbine_FUEL.pi = 1 / Turbine_FUEL.beta
unkR[546] = _div( 1. , unkR[540],"Turbine_FUEL.beta") ;
//[E-105]  Turbine_FUEL.A_in = Turbine_FUEL.MFP * sqrt(LPRES.R(Turbine_FUEL.f_in.fluid)) / LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)
unkR[537] = _div( unkR[538] * _sqrt(LPRES__R(&unkR[378]),"LPRES.R(Turbine_FUEL.f_in.fluid)") , LPRES__FGAMMA(&unkR[378]),"LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)") ;
//[E-106]  Comb_Chamb.W_IO = FlowMeter_LOX.f_in.W - Comb_Chamb.W_O
unkR[20] = unkR[330] - unkR[21] ;
//[E-107]  ThrustMonitor_1.g.W = Comb_Chamb.W_IO + Comb_Chamb.W_O + FlowMeter_LH2.f_in.W - Heat_exchanger_1.f_in.W
unkR[267] = unkR[20] + unkR[21] + unkR[327] - unkR[376] ;
//[E-108]  Comb_Chamb.fluid_O[LOX] = Inlet_LOX.fluidV[LOX] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[146] = _div( unkR[69] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-109]  Comb_Chamb.phi = Comb_Chamb.OF_st / Comb_Chamb.OF
unkR[310] = _div( unkR[9] , unkR[8],"Comb_Chamb.OF") ;
//[E-110]  Comb_Chamb.fluid_F[LOX] = Inlet_LH2.fluidV[LOX] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[108] = _div( unkR[30] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-111]  Comb_Chamb.W_F_st = Comb_Chamb.W_F / Comb_Chamb.phi
unkR[18] = _div( unkR[17] , unkR[310],"Comb_Chamb.phi") ;
//[E-112]  Comb_Chamb.fluid_P[LOX] =  IF[1] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LOX] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LOX] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LOX] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[184] = _div( (unkR[146] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[108] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[184] = _div( (unkR[146] * unkR[21] + unkR[108] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-113]  Comb_Chamb.fluid_O[NTO] = Inlet_LOX.fluidV[NTO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[147] = _div( unkR[70] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-114]  Comb_Chamb.fluid_F[NTO] = Inlet_LH2.fluidV[NTO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[109] = _div( unkR[31] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-115]  Comb_Chamb.fluid_P[NTO] =  IF[2] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[NTO] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NTO] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[NTO] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NTO] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[185] = _div( (unkR[147] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[109] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[185] = _div( (unkR[147] * unkR[21] + unkR[109] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-116]  Comb_Chamb.fluid_O[H2O2] = Inlet_LOX.fluidV[H2O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[148] = _div( unkR[71] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-117]  Comb_Chamb.fluid_F[H2O2] = Inlet_LH2.fluidV[H2O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[110] = _div( unkR[32] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-118]  Comb_Chamb.fluid_P[H2O2] =  IF[3] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[186] = _div( (unkR[148] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[110] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[186] = _div( (unkR[148] * unkR[21] + unkR[110] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-119]  Comb_Chamb.fluid_O[NH3] = Inlet_LOX.fluidV[NH3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[149] = _div( unkR[72] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-120]  Comb_Chamb.fluid_F[NH3] = Inlet_LH2.fluidV[NH3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[111] = _div( unkR[33] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-121]  Comb_Chamb.fluid_P[NH3] =  IF[27] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[NH3] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NH3] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[NH3] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[NH3] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[187] = _div( (unkR[149] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[111] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[187] = _div( (unkR[149] * unkR[21] + unkR[111] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-122]  Comb_Chamb.fluid_O[HNO3] = Inlet_LOX.fluidV[HNO3] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[150] = _div( unkR[73] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-123]  Comb_Chamb.fluid_F[HNO3] = Inlet_LH2.fluidV[HNO3] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[112] = _div( unkR[34] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-124]  Comb_Chamb.fluid_P[HNO3] =  IF[4] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[HNO3] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[HNO3] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[HNO3] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[188] = _div( (unkR[150] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[112] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[188] = _div( (unkR[150] * unkR[21] + unkR[112] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-125]  Comb_Chamb.fluid_O[LF2] = Inlet_LOX.fluidV[LF2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[151] = _div( unkR[74] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-126]  Comb_Chamb.fluid_F[LF2] = Inlet_LH2.fluidV[LF2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[113] = _div( unkR[35] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-127]  Comb_Chamb.fluid_P[LF2] =  IF[5] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LF2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LF2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LF2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LF2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[189] = _div( (unkR[151] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[113] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[189] = _div( (unkR[151] * unkR[21] + unkR[113] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-128]  Comb_Chamb.fluid_O[RP_1] = Inlet_LOX.fluidV[RP_1] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[152] = _div( unkR[75] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-129]  Comb_Chamb.fluid_F[RP_1] = Inlet_LH2.fluidV[RP_1] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[114] = _div( unkR[36] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-130]  Comb_Chamb.fluid_P[RP_1] =  IF[6] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[RP_1] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[RP_1] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[RP_1] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[190] = _div( (unkR[152] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[114] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[190] = _div( (unkR[152] * unkR[21] + unkR[114] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-131]  Comb_Chamb.fluid_O[LCH4] = Inlet_LOX.fluidV[LCH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[153] = _div( unkR[76] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-132]  Comb_Chamb.fluid_F[LCH4] = Inlet_LH2.fluidV[LCH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[115] = _div( unkR[37] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-133]  Comb_Chamb.fluid_P[LCH4] =  IF[7] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LCH4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LCH4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LCH4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[191] = _div( (unkR[153] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[115] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[191] = _div( (unkR[153] * unkR[21] + unkR[115] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-134]  Comb_Chamb.fluid_O[LH2] = Inlet_LOX.fluidV[LH2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[154] = _div( unkR[77] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-135]  Comb_Chamb.fluid_F[LH2] = Inlet_LH2.fluidV[LH2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[116] = _div( unkR[38] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-136]  Comb_Chamb.fluid_P[LH2] =  IF[8] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[LH2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LH2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[LH2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[LH2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[192] = _div( (unkR[154] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[116] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[192] = _div( (unkR[154] * unkR[21] + unkR[116] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-137]  Comb_Chamb.fluid_O[N2H4] = Inlet_LOX.fluidV[N2H4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[155] = _div( unkR[78] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-138]  Comb_Chamb.fluid_F[N2H4] = Inlet_LH2.fluidV[N2H4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[117] = _div( unkR[39] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-139]  Comb_Chamb.fluid_P[N2H4] =  IF[9] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[N2H4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2H4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2H4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[193] = _div( (unkR[155] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[117] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[193] = _div( (unkR[155] * unkR[21] + unkR[117] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-140]  Comb_Chamb.fluid_O[UDMH] = Inlet_LOX.fluidV[UDMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[156] = _div( unkR[79] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-141]  Comb_Chamb.fluid_F[UDMH] = Inlet_LH2.fluidV[UDMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[118] = _div( unkR[40] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-142]  Comb_Chamb.fluid_P[UDMH] =  IF[10] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[UDMH] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[UDMH] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[UDMH] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[194] = _div( (unkR[156] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[118] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[194] = _div( (unkR[156] * unkR[21] + unkR[118] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-143]  Comb_Chamb.fluid_O[MMH] = Inlet_LOX.fluidV[MMH] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[157] = _div( unkR[80] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-144]  Comb_Chamb.fluid_F[MMH] = Inlet_LH2.fluidV[MMH] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[119] = _div( unkR[41] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-145]  Comb_Chamb.fluid_P[MMH] =  IF[11] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[MMH] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[MMH] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[195] = _div( (unkR[157] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[119] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[195] = _div( (unkR[157] * unkR[21] + unkR[119] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-146]  Comb_Chamb.fluid_O[JP_10] = Inlet_LOX.fluidV[JP_10] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[158] = _div( unkR[81] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-147]  Comb_Chamb.fluid_F[JP_10] = Inlet_LH2.fluidV[JP_10] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[120] = _div( unkR[42] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-148]  Comb_Chamb.fluid_P[JP_10] =  IF[12] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[JP_10] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[JP_10] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[JP_10] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[196] = _div( (unkR[158] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[120] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[196] = _div( (unkR[158] * unkR[21] + unkR[120] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-149]  Comb_Chamb.fluid_O[Kerox] = Inlet_LOX.fluidV[Kerox] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[159] = _div( unkR[82] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-150]  Comb_Chamb.fluid_F[Kerox] = Inlet_LH2.fluidV[Kerox] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[121] = _div( unkR[43] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-151]  Comb_Chamb.fluid_P[Kerox] =  IF[13] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Kerox] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Kerox] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Kerox] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[197] = _div( (unkR[159] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[121] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[197] = _div( (unkR[159] * unkR[21] + unkR[121] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-152]  Comb_Chamb.fluid_O[Oil] = Inlet_LOX.fluidV[Oil] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[160] = _div( unkR[83] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-153]  Comb_Chamb.fluid_F[Oil] = Inlet_LH2.fluidV[Oil] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[122] = _div( unkR[44] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-154]  Comb_Chamb.fluid_P[Oil] =  IF[14] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Oil] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Oil] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Oil] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Oil] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[198] = _div( (unkR[160] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[122] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[198] = _div( (unkR[160] * unkR[21] + unkR[122] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-155]  Comb_Chamb.fluid_O[H2O] = Inlet_LOX.fluidV[H2O] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[161] = _div( unkR[84] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-156]  Comb_Chamb.fluid_F[H2O] = Inlet_LH2.fluidV[H2O] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[123] = _div( unkR[45] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-157]  Comb_Chamb.fluid_P[H2O] =  IF[15] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[199] = _div( (unkR[161] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[123] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[199] = _div( (unkR[161] * unkR[21] + unkR[123] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-158]  Comb_Chamb.fluid_O[IPA] = Inlet_LOX.fluidV[IPA] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[162] = _div( unkR[85] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-159]  Comb_Chamb.fluid_F[IPA] = Inlet_LH2.fluidV[IPA] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[124] = _div( unkR[46] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-160]  Comb_Chamb.fluid_P[IPA] =  IF[16] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[IPA] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[IPA] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[IPA] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[IPA] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[200] = _div( (unkR[162] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[124] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[200] = _div( (unkR[162] * unkR[21] + unkR[124] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-161]  Comb_Chamb.fluid_O[Air] = Inlet_LOX.fluidV[Air] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[163] = _div( unkR[86] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-162]  Comb_Chamb.fluid_F[Air] = Inlet_LH2.fluidV[Air] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[125] = _div( unkR[47] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-163]  Comb_Chamb.fluid_P[Air] =  IF[17] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Air] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Air] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Air] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Air] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[201] = _div( (unkR[163] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[125] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[201] = _div( (unkR[163] * unkR[21] + unkR[125] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-164]  Comb_Chamb.fluid_O[Ar] = Inlet_LOX.fluidV[Ar] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[164] = _div( unkR[87] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-165]  Comb_Chamb.fluid_F[Ar] = Inlet_LH2.fluidV[Ar] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[126] = _div( unkR[48] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-166]  Comb_Chamb.fluid_P[Ar] =  IF[18] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Ar] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Ar] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[Ar] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Ar] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[202] = _div( (unkR[164] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[126] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[202] = _div( (unkR[164] * unkR[21] + unkR[126] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-167]  Comb_Chamb.fluid_O[CH4] = Inlet_LOX.fluidV[CH4] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[165] = _div( unkR[88] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-168]  Comb_Chamb.fluid_F[CH4] = Inlet_LH2.fluidV[CH4] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[127] = _div( unkR[49] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-169]  Comb_Chamb.fluid_P[CH4] =  IF[19] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CH4] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CH4] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CH4] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CH4] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[203] = _div( (unkR[165] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[127] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[203] = _div( (unkR[165] * unkR[21] + unkR[127] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-170]  Comb_Chamb.fluid_O[CO] = Inlet_LOX.fluidV[CO] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[166] = _div( unkR[89] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-171]  Comb_Chamb.fluid_F[CO] = Inlet_LH2.fluidV[CO] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[128] = _div( unkR[50] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-172]  Comb_Chamb.fluid_P[CO] =  IF[20] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CO] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CO] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[204] = _div( (unkR[166] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[128] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[204] = _div( (unkR[166] * unkR[21] + unkR[128] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-173]  Comb_Chamb.fluid_O[CO2] = Inlet_LOX.fluidV[CO2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[167] = _div( unkR[90] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-174]  Comb_Chamb.fluid_F[CO2] = Inlet_LH2.fluidV[CO2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[129] = _div( unkR[51] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-175]  Comb_Chamb.fluid_P[CO2] =  IF[21] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[CO2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[CO2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[CO2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[205] = _div( (unkR[167] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[129] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[205] = _div( (unkR[167] * unkR[21] + unkR[129] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-176]  Comb_Chamb.fluid_O[H2] = Inlet_LOX.fluidV[H2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[168] = _div( unkR[91] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-177]  Comb_Chamb.fluid_F[H2] = Inlet_LH2.fluidV[H2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[130] = _div( unkR[52] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-178]  Comb_Chamb.fluid_P[H2] =  IF[22] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[206] = _div( (unkR[168] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[130] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[206] = _div( (unkR[168] * unkR[21] + unkR[130] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-179]  Comb_Chamb.fluid_O[He] = Inlet_LOX.fluidV[He] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[169] = _div( unkR[92] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-180]  Comb_Chamb.fluid_F[He] = Inlet_LH2.fluidV[He] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[131] = _div( unkR[53] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-181]  Comb_Chamb.fluid_P[He] =  IF[23] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[He] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[He] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[He] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[He] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[207] = _div( (unkR[169] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[131] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[207] = _div( (unkR[169] * unkR[21] + unkR[131] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-182]  Comb_Chamb.fluid_O[N2] = Inlet_LOX.fluidV[N2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[170] = _div( unkR[93] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-183]  Comb_Chamb.fluid_F[N2] = Inlet_LH2.fluidV[N2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[132] = _div( unkR[54] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-184]  Comb_Chamb.fluid_P[N2] =  IF[24] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[N2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[N2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[N2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[208] = _div( (unkR[170] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[132] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[208] = _div( (unkR[170] * unkR[21] + unkR[132] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-185]  Comb_Chamb.fluid_O[O2] = Inlet_LOX.fluidV[O2] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[171] = _div( unkR[94] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-186]  Comb_Chamb.fluid_F[O2] = Inlet_LH2.fluidV[O2] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[133] = _div( unkR[55] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-187]  Comb_Chamb.fluid_P[O2] =  IF[25] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[O2] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[O2] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[O2] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[O2] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[209] = _div( (unkR[171] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[133] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[209] = _div( (unkR[171] * unkR[21] + unkR[133] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-188]  Comb_Chamb.fluid_O[MMH_vapour] = Inlet_LOX.fluidV[MMH_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[172] = _div( unkR[95] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-189]  Comb_Chamb.fluid_F[MMH_vapour] = Inlet_LH2.fluidV[MMH_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[134] = _div( unkR[56] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-190]  Comb_Chamb.fluid_P[MMH_vapour] =  IF[26] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[MMH_vapour] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH_vapour] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[MMH_vapour] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[210] = _div( (unkR[172] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[134] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[210] = _div( (unkR[172] * unkR[21] + unkR[134] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-191]  Comb_Chamb.fluid_O[H2O_vapour] = Inlet_LOX.fluidV[H2O_vapour] / (1 - Inlet_LOX.fluidV[Comb_prod])
unkR[173] = _div( unkR[96] , (1. - unkR[97]),"1 - Inlet_LOX.fluidV[Comb_prod]") ;
//[E-192]  Comb_Chamb.fluid_F[H2O_vapour] = Inlet_LH2.fluidV[H2O_vapour] / (1 - Inlet_LH2.fluidV[Comb_prod])
unkR[135] = _div( unkR[57] , (1. - unkR[58]),"1 - Inlet_LH2.fluidV[Comb_prod]") ;
//[E-193]  Comb_Chamb.fluid_P[H2O_vapour] =  IF[28] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[H2O_vapour] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O_vapour] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE (Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.W_O + Comb_Chamb.fluid_F[H2O_vapour] * Comb_Chamb.W_F) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
if( unkI[0] ) 
{
unkR[211] = _div( (unkR[173] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[135] * MATH__max(unkR[310] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[211] = _div( (unkR[173] * unkR[21] + unkR[135] * unkR[17]) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
//[E-194]  Comb_Chamb.fluid_O[Comb_prod] = 0
unkR[174] = 0. ;
//[E-195]  Comb_Chamb.fluid_F[Comb_prod] = 0
unkR[136] = 0. ;
//[E-196]  Comb_Chamb.fluid_P[Comb_prod] =  IF[29] (Comb_Chamb.Combustion) (Comb_Chamb.fluid_O[Comb_prod] * MATH.max(1 - Comb_Chamb.phi, 0) * Comb_Chamb.W_O + Comb_Chamb.fluid_F[Comb_prod] * MATH.max(Comb_Chamb.phi - 1, 0) * Comb_Chamb.W_F_st + (1 - MATH.max(1 - Comb_Chamb.phi, 0)) * (Comb_Chamb.W_O + Comb_Chamb.W_F_st)) / (Comb_Chamb.W_O + Comb_Chamb.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[212] = _div( (unkR[174] * MATH__max(1. - unkR[310], 0.) * unkR[21] + unkR[136] * MATH__max(unkR[310] - 1., 0.) * unkR[18] + (1. - MATH__max(1. - unkR[310], 0.)) * (unkR[21] + unkR[18])) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
}
else 
{
unkR[212] = 0. ;
}
//[E-197]  Comb_Chamb.fluid_P[Comb_prod_M] =  IF[30] (Comb_Chamb.Combustion) Comb_Chamb.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[213] = unkR[7] ;
}
else 
{
unkR[213] = 0. ;
}
//[E-198]  Comb_Chamb.fluid_P[Comb_prod_cp] =  IF[31] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[214] = unkR[25] ;
}
else 
{
unkR[214] = 0. ;
}
//[E-199]  Comb_Chamb.fluid_P[Comb_prod_c] =  IF[32] (Comb_Chamb.Combustion) Comb_Chamb.c_P	 ELSE 0
if( unkI[0] ) 
{
unkR[215] = unkR[22] ;
}
else 
{
unkR[215] = 0. ;
}
//[E-200]  Comb_Chamb.fluid_P[Comb_prod_cp_g] =  IF[33] (Comb_Chamb.Combustion) Comb_Chamb.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[216] = unkR[25] ;
}
else 
{
unkR[216] = 0. ;
}
//[E-201]  Comb_Chamb.fluid_P[Comb_prod_Lv] =  IF[34] (Comb_Chamb.Combustion) Comb_Chamb.Lv_P	 ELSE 0
if( unkI[0] ) 
{
unkR[217] = unkR[6] ;
}
else 
{
unkR[217] = 0. ;
}
//[E-202]  Comb_Chamb.fluid_P[Comb_prod_visc] =  IF[35] (Comb_Chamb.Combustion) Comb_Chamb.visc_P	 ELSE 0
if( unkI[0] ) 
{
unkR[218] = unkR[311] ;
}
else 
{
unkR[218] = 0. ;
}
//[E-203]  Comb_Chamb.fluid_P[Comb_prod_cond] =  IF[36] (Comb_Chamb.Combustion) Comb_Chamb.cond_P	 ELSE 0
if( unkI[0] ) 
{
unkR[219] = unkR[24] ;
}
else 
{
unkR[219] = 0. ;
}
//[E-204]  Comb_Chamb.fluid_P[Comb_prod_T_boil] =  IF[37] (Comb_Chamb.Combustion) Comb_Chamb.T_boil_P	 ELSE 0
if( unkI[0] ) 
{
unkR[220] = unkR[14] ;
}
else 
{
unkR[220] = 0. ;
}
//[E-205]  Comb_Chamb.fluid_P[Comb_prod_rho] = 0
unkR[221] = 0. ;
//[E-206]  LPRES.Vaporisation_mix(Comb_Chamb.fluid_P, Comb_Chamb.fluid_P_vap) %%% (OUT VAR)Comb_Chamb.fluid_P_vap 
LPRES__Vaporisation_mix(&unkR[184], &unkR[228]);
//[E-207]  ThrustMonitor_1.g.fluid[LOX] = Comb_Chamb.fluid_P_vap[LOX] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[268] = _div( unkR[228] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-208]  ThrustMonitor_1.g.fluid[NTO] = Comb_Chamb.fluid_P_vap[NTO] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[269] = _div( unkR[229] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-209]  ThrustMonitor_1.g.fluid[H2O2] = Comb_Chamb.fluid_P_vap[H2O2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[270] = _div( unkR[230] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-210]  ThrustMonitor_1.g.fluid[NH3] = Comb_Chamb.fluid_P_vap[NH3] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[271] = _div( unkR[231] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-211]  ThrustMonitor_1.g.fluid[HNO3] = Comb_Chamb.fluid_P_vap[HNO3] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[272] = _div( unkR[232] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-212]  ThrustMonitor_1.g.fluid[LF2] = Comb_Chamb.fluid_P_vap[LF2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[273] = _div( unkR[233] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-213]  ThrustMonitor_1.g.fluid[RP_1] = Comb_Chamb.fluid_P_vap[RP_1] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[274] = _div( unkR[234] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-214]  ThrustMonitor_1.g.fluid[LCH4] = Comb_Chamb.fluid_P_vap[LCH4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[275] = _div( unkR[235] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-215]  ThrustMonitor_1.g.fluid[LH2] = Comb_Chamb.fluid_P_vap[LH2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[276] = _div( unkR[236] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-216]  ThrustMonitor_1.g.fluid[N2H4] = Comb_Chamb.fluid_P_vap[N2H4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[277] = _div( unkR[237] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-217]  ThrustMonitor_1.g.fluid[UDMH] = Comb_Chamb.fluid_P_vap[UDMH] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[278] = _div( unkR[238] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-218]  ThrustMonitor_1.g.fluid[MMH] = Comb_Chamb.fluid_P_vap[MMH] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[279] = _div( unkR[239] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-219]  ThrustMonitor_1.g.fluid[JP_10] = Comb_Chamb.fluid_P_vap[JP_10] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[280] = _div( unkR[240] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-220]  ThrustMonitor_1.g.fluid[Kerox] = Comb_Chamb.fluid_P_vap[Kerox] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[281] = _div( unkR[241] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-221]  ThrustMonitor_1.g.fluid[Oil] = Comb_Chamb.fluid_P_vap[Oil] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[282] = _div( unkR[242] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-222]  ThrustMonitor_1.g.fluid[H2O] = Comb_Chamb.fluid_P_vap[H2O] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[283] = _div( unkR[243] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-223]  ThrustMonitor_1.g.fluid[IPA] = Comb_Chamb.fluid_P_vap[IPA] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[284] = _div( unkR[244] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-224]  ThrustMonitor_1.g.fluid[Air] = Comb_Chamb.fluid_P_vap[Air] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[285] = _div( unkR[245] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-225]  ThrustMonitor_1.g.fluid[Ar] = Comb_Chamb.fluid_P_vap[Ar] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[286] = _div( unkR[246] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-226]  ThrustMonitor_1.g.fluid[CH4] = Comb_Chamb.fluid_P_vap[CH4] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[287] = _div( unkR[247] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-227]  ThrustMonitor_1.g.fluid[CO] = Comb_Chamb.fluid_P_vap[CO] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[288] = _div( unkR[248] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-228]  ThrustMonitor_1.g.fluid[CO2] = Comb_Chamb.fluid_P_vap[CO2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[289] = _div( unkR[249] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-229]  ThrustMonitor_1.g.fluid[H2] = Comb_Chamb.fluid_P_vap[H2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[290] = _div( unkR[250] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-230]  ThrustMonitor_1.g.fluid[He] = Comb_Chamb.fluid_P_vap[He] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[291] = _div( unkR[251] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-231]  ThrustMonitor_1.g.fluid[N2] = Comb_Chamb.fluid_P_vap[N2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[292] = _div( unkR[252] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-232]  ThrustMonitor_1.g.fluid[O2] = Comb_Chamb.fluid_P_vap[O2] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[293] = _div( unkR[253] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-233]  ThrustMonitor_1.g.fluid[MMH_vapour] = Comb_Chamb.fluid_P_vap[MMH_vapour] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[294] = _div( unkR[254] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-234]  ThrustMonitor_1.g.fluid[H2O_vapour] = Comb_Chamb.fluid_P_vap[H2O_vapour] * (Comb_Chamb.W_O + Comb_Chamb.W_F) / ThrustMonitor_1.g.W
unkR[295] = _div( unkR[255] * (unkR[21] + unkR[17]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-235]  Comb_Chamb.W_IF = FlowMeter_LH2.f_in.W - Heat_exchanger_1.f_in.W - Comb_Chamb.W_F
unkR[19] = unkR[327] - unkR[376] - unkR[17] ;
//[E-236]  ThrustMonitor_1.g.fluid[Comb_prod] = (Comb_Chamb.fluid_P_vap[Comb_prod] * (Comb_Chamb.W_O + Comb_Chamb.W_F) + Comb_Chamb.W_IO + Comb_Chamb.W_IF) / ThrustMonitor_1.g.W
unkR[296] = _div( (unkR[256] * (unkR[21] + unkR[17]) + unkR[20] + unkR[19]) , unkR[267],"ThrustMonitor_1.g.W") ;
//[E-237]  ThrustMonitor_1.g.fluid[Comb_prod_M] = Comb_Chamb.fluid_P_vap[Comb_prod_M]
unkR[297] = unkR[257] ;
//[E-238]  ThrustMonitor_1.g.fluid[Comb_prod_cp] = Comb_Chamb.fluid_P_vap[Comb_prod_cp]
unkR[298] = unkR[258] ;
//[E-239]  ThrustMonitor_1.g.fluid[Comb_prod_c] = Comb_Chamb.fluid_P_vap[Comb_prod_c]
unkR[299] = unkR[259] ;
//[E-240]  ThrustMonitor_1.g.fluid[Comb_prod_cp_g] = Comb_Chamb.fluid_P_vap[Comb_prod_cp_g]
unkR[300] = unkR[260] ;
//[E-241]  ThrustMonitor_1.g.fluid[Comb_prod_Lv] = Comb_Chamb.fluid_P_vap[Comb_prod_Lv]
unkR[301] = unkR[261] ;
//[E-242]  ThrustMonitor_1.g.fluid[Comb_prod_visc] = Comb_Chamb.fluid_P_vap[Comb_prod_visc]
unkR[302] = unkR[262] ;
//[E-243]  ThrustMonitor_1.g.fluid[Comb_prod_cond] = Comb_Chamb.fluid_P_vap[Comb_prod_cond]
unkR[303] = unkR[263] ;
//[E-244]  ThrustMonitor_1.g.fluid[Comb_prod_T_boil] = Comb_Chamb.fluid_P_vap[Comb_prod_T_boil]
unkR[304] = unkR[264] ;
//[E-245]  ThrustMonitor_1.g.fluid[Comb_prod_rho] = Comb_Chamb.fluid_P_vap[Comb_prod_rho]
unkR[305] = unkR[265] ;
//[E-246]  LPRES.Decomposition_fun(Comb_Chamb.fluid_P_vap, Comb_Chamb.fluid_P_decomp) %%% (OUT VAR)Comb_Chamb.fluid_P_decomp 
LPRES__Decomposition_fun(&unkR[228], &unkR[222]);
//[E-247]  Comb_Chamb.Q_comb_effective =  ZONE[1] (Comb_Chamb.Combustion) Comb_Chamb.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[12] = unkR[11] ;
else unkR[12] = 0. ;
//[E-248]  Comb_Chamb.fluid_O[Comb_prod_M] = 0
unkR[175] = 0. ;
//[E-249]  Comb_Chamb.fluid_O[Comb_prod_cp] = 0
unkR[176] = 0. ;
//[E-250]  Comb_Chamb.fluid_O[Comb_prod_c] = 0
unkR[177] = 0. ;
//[E-251]  Comb_Chamb.fluid_O[Comb_prod_cp_g] = 0
unkR[178] = 0. ;
//[E-252]  Comb_Chamb.fluid_O[Comb_prod_Lv] = 0
unkR[179] = 0. ;
//[E-253]  Comb_Chamb.fluid_O[Comb_prod_visc] = 0
unkR[180] = 0. ;
//[E-254]  Comb_Chamb.fluid_O[Comb_prod_cond] = 0
unkR[181] = 0. ;
//[E-255]  Comb_Chamb.fluid_O[Comb_prod_T_boil] = 0
unkR[182] = 0. ;
//[E-256]  Comb_Chamb.fluid_O[Comb_prod_rho] = 0
unkR[183] = 0. ;
//[E-257]  Comb_Chamb.fluid_F[Comb_prod_M] = 0
unkR[137] = 0. ;
//[E-258]  Comb_Chamb.fluid_F[Comb_prod_cp] = 0
unkR[138] = 0. ;
//[E-259]  Comb_Chamb.fluid_F[Comb_prod_c] = 0
unkR[139] = 0. ;
//[E-260]  Comb_Chamb.fluid_F[Comb_prod_cp_g] = 0
unkR[140] = 0. ;
//[E-261]  Comb_Chamb.fluid_F[Comb_prod_Lv] = 0
unkR[141] = 0. ;
//[E-262]  Comb_Chamb.fluid_F[Comb_prod_visc] = 0
unkR[142] = 0. ;
//[E-263]  Comb_Chamb.fluid_F[Comb_prod_cond] = 0
unkR[143] = 0. ;
//[E-264]  Comb_Chamb.fluid_F[Comb_prod_T_boil] = 0
unkR[144] = 0. ;
//[E-265]  Comb_Chamb.fluid_F[Comb_prod_rho] = 0
unkR[145] = 0. ;
//[E-266]  Comb_Chamb.cp_R = (Comb_Chamb.W_O * LPRES.cp(Comb_Chamb.fluid_O) + Comb_Chamb.W_F * LPRES.cp(Comb_Chamb.fluid_F)) / (Comb_Chamb.W_O + Comb_Chamb.W_F)
unkR[26] = _div( (unkR[21] * LPRES__cp(&unkR[146]) + unkR[17] * LPRES__cp(&unkR[108])) , (unkR[21] + unkR[17]),"Comb_Chamb.W_O + Comb_Chamb.W_F") ;
//[E-267]  Comb_Chamb.T_in = (LPRES.cp(Comb_Chamb.fluid_O) * FlowMeter_LOX.f_in.Tt + Comb_Chamb.phi / Comb_Chamb.OF_st * LPRES.cp(Comb_Chamb.fluid_F) * Comb_Chamb.f_F.T) / ((1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R)
unkR[16] = _div( (LPRES__cp(&unkR[146]) * unkR[68] + _div( unkR[310] , unkR[9],"Comb_Chamb.OF_st") * LPRES__cp(&unkR[108]) * unkR[28]) , ((1. + _div( unkR[310] , unkR[9],"Comb_Chamb.OF_st")) * unkR[26]),"(1 + Comb_Chamb.phi / Comb_Chamb.OF_st) * Comb_Chamb.cp_R") ;
//[E-268]  Comb_Chamb.T_c = (Comb_Chamb.eta_d * Comb_Chamb.Q_comb_effective / ((1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)) + Comb_Chamb.cp_R * (Comb_Chamb.T_in - 298.15)) / LPRES.cp(Comb_Chamb.fluid_P_vap) + 298.15
unkR[15] = _div( (_div( unkR[27] * unkR[12] , (_div( (1. + unkR[8]) , MATH__min(unkR[8], unkR[9]),"MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)")),"(1 + Comb_Chamb.OF) / MATH.min(Comb_Chamb.OF, Comb_Chamb.OF_st)") + unkR[26] * (unkR[16] - 298.15)) , LPRES__cp(&unkR[228]),"LPRES.cp(Comb_Chamb.fluid_P_vap)") + 298.15 ;
//[E-269]  ThrustMonitor_1.g.Tt = (-((Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] * -Comb_Chamb.T_c + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] * -FlowMeter_LOX.f_in.Tt) - Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp] * -Comb_Chamb.f_F.T) / ((Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] + Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp])
unkR[266] = _div( (-(_div( (unkR[21] + unkR[17]) * unkR[222] , unkR[267],"ThrustMonitor_1.g.W") * unkR[223] * -unkR[15] + _div( unkR[20] , unkR[267],"ThrustMonitor_1.g.W") * unkR[99] * -unkR[68]) - _div( unkR[19] , unkR[267],"ThrustMonitor_1.g.W") * unkR[60] * -unkR[28]) , (_div( (unkR[21] + unkR[17]) * unkR[222] , unkR[267],"ThrustMonitor_1.g.W") * unkR[223] + _div( unkR[20] , unkR[267],"ThrustMonitor_1.g.W") * unkR[99] + _div( unkR[19] , unkR[267],"ThrustMonitor_1.g.W") * unkR[60]),"(Comb_Chamb.W_O + Comb_Chamb.W_F) * Comb_Chamb.fluid_P_decomp[CombProd] / ThrustMonitor_1.g.W * Comb_Chamb.fluid_P_decomp[CombProd_cp] + Comb_Chamb.W_IO / ThrustMonitor_1.g.W * Inlet_LOX.fluidV[Comb_prod_cp] + Comb_Chamb.W_IF / ThrustMonitor_1.g.W * Inlet_LH2.fluidV[Comb_prod_cp]") ;
//[E-270]  Comb_Chamb.A_th = ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / Comb_Chamb.f_O.p_c
unkR[4] = _div( _div( unkR[267] * _sqrt(LPRES__R(&unkR[268]) * unkR[266],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[268]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") , unkR[107],"Comb_Chamb.f_O.p_c") ;
//[E-271]  ThrustMonitor_1.g.A_out = Comb_Chamb.AR * Comb_Chamb.A_th
unkR[2] = unkR[0] * unkR[4] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-273]  ThrustMonitor_1.g.c_star = sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid)
unkR[23] = _div( _sqrt(LPRES__R(&unkR[268]) * unkR[266],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[268]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") ;
//[E-274]  ControlPanel.i_Comb.Data[1] = ThrustMonitor_1.g.c_star
unkR[309] = unkR[23] ;
//[E-275]  Comb_Chamb.Pr_r = 4 * LPRES.gamma(ThrustMonitor_1.g.fluid) / (9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5)
unkR[10] = _div( 4. * LPRES__gamma(&unkR[268]) , (9. * LPRES__gamma(&unkR[268]) - 5.),"9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-277]  Comb_Chamb.T_aw = ThrustMonitor_1.g.Tt * (1 + Comb_Chamb.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)
unkR[13] = unkR[266] * _div( (1. + _pow( unkR[10] , 0.33,"(Comb_Chamb.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[268]) - 1.) * _pow( dyn[3] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[268]) - 1.) * _pow( dyn[3] , 2.,"(Comb_Chamb.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2") ;
//[E-278]  Comb_Chamb.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor_1.g.fluid) ** 0.5 * Comb_Chamb.T_aw ** 0.6
unkR[312] = 1.184e-07 * _pow( LPRES__M(&unkR[268]) , 0.5,"(LPRES.M(ThrustMonitor_1.g.fluid))**(0.5)" ) * _pow( unkR[13] , 0.6,"(Comb_Chamb.T_aw)**(0.6)" ) ;
//[E-279]  Comb_Chamb.A_r = Comb_Chamb.A_th * Comb_Chamb.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-280]  Comb_Chamb.h_g = 0.026 / sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2 * Comb_Chamb.visc_r ** 0.2 * LPRES.cp(ThrustMonitor_1.g.fluid) / Comb_Chamb.Pr_r ** 0.6 * (Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star) ** 0.8 * (Comb_Chamb.A_th / Comb_Chamb.A_r) ** 0.9
unkR[308] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * Comb_Chamb.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * Comb_Chamb.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * Comb_Chamb.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[312] , 0.2,"(Comb_Chamb.visc_r)**(0.2)" ) * LPRES__cp(&unkR[268]) , _pow( unkR[10] , 0.6,"(Comb_Chamb.Pr_r)**(0.6)" ),"Comb_Chamb.Pr_r ** 0.6") * _pow( (_div( unkR[107] , unkR[23],"ThrustMonitor_1.g.c_star")) , 0.8,"(Comb_Chamb.f_O.p_c / ThrustMonitor_1.g.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"Comb_Chamb.A_r")) , 0.9,"(Comb_Chamb.A_th / Comb_Chamb.A_r)**(0.9)" ) ;
//[E-281]  LPRES.Obtain_Vap_Prop(Inlet_LH2.fluidV, Heat_exchanger_1.Cp_v, Heat_exchanger_1.Lv_v, Heat_exchanger_1.T_boil_v, Heat_exchanger_1.mass_frac_v) %%% (OUT VAR)Heat_exchanger_1.Cp_v (OUT VAR)Heat_exchanger_1.Lv_v (OUT VAR)Heat_exchanger_1.T_boil_v (OUT VAR)Heat_exchanger_1.mass_frac_v 
LPRES__Obtain_Vap_Prop(&unkR[30], &unkR[333], &unkR[346], &unkR[361], &unkR[456]);
//[E-282]  Heat_exchanger_1.h.Q = Heat_exchanger_1.f_in.W * (Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[01] * (Heat_exchanger_1.T_boil_v[01] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Cp_v[02] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[01]) + Heat_exchanger_1.mass_frac_v[01] * Heat_exchanger_1.Lv_v[01] + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[03] * (Heat_exchanger_1.T_boil_v[03] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Cp_v[04] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[03]) + Heat_exchanger_1.mass_frac_v[03] * Heat_exchanger_1.Lv_v[03] + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[05] * (Heat_exchanger_1.T_boil_v[05] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Cp_v[06] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[05]) + Heat_exchanger_1.mass_frac_v[05] * Heat_exchanger_1.Lv_v[05] + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[07] * (Heat_exchanger_1.T_boil_v[07] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Cp_v[08] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[07]) + Heat_exchanger_1.mass_frac_v[07] * Heat_exchanger_1.Lv_v[07] + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[09] * (Heat_exchanger_1.T_boil_v[09] - Comb_Chamb.f_F.T) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Cp_v[10] * (Turbine_FUEL.f_in.Tt - Heat_exchanger_1.T_boil_v[09]) + Heat_exchanger_1.mass_frac_v[09] * Heat_exchanger_1.Lv_v[09])
unkR[306] = unkR[376] * (unkR[456] * unkR[333] * (unkR[361] - unkR[28]) + unkR[456] * unkR[334] * (unkR[542] - unkR[361]) + unkR[456] * unkR[346] + unkR[458] * unkR[335] * (unkR[363] - unkR[28]) + unkR[458] * unkR[336] * (unkR[542] - unkR[363]) + unkR[458] * unkR[348] + unkR[460] * unkR[337] * (unkR[365] - unkR[28]) + unkR[460] * unkR[338] * (unkR[542] - unkR[365]) + unkR[460] * unkR[350] + unkR[462] * unkR[339] * (unkR[367] - unkR[28]) + unkR[462] * unkR[340] * (unkR[542] - unkR[367]) + unkR[462] * unkR[352] + unkR[464] * unkR[341] * (unkR[369] - unkR[28]) + unkR[464] * unkR[342] * (unkR[542] - unkR[369]) + unkR[464] * unkR[354]) ;
//[E-283]  Contact_Wall_1.Q = -Heat_exchanger_1.h.Q
unkR[316] = -unkR[306] ;
//[E-284]  Heat_exchanger_1.v = Heat_exchanger_1.f_in.W / (Heat_exchanger_1.a * Heat_exchanger_1.b * LPRES.rho(Inlet_LH2.fluidV)) / Heat_exchanger_1.N
unkR[468] = _div( _div( unkR[376] , (unkR[371] * unkR[372] * LPRES__rho(&unkR[30])),"Heat_exchanger_1.a * Heat_exchanger_1.b * LPRES.rho(Inlet_LH2.fluidV)") , unkI[2],"Heat_exchanger_1.N") ;
//[E-285]  Heat_exchanger_1.D_hy = 2 * Heat_exchanger_1.a * Heat_exchanger_1.b / (Heat_exchanger_1.a + Heat_exchanger_1.b)
unkR[344] = _div( 2. * unkR[371] * unkR[372] , (unkR[371] + unkR[372]),"Heat_exchanger_1.a + Heat_exchanger_1.b") ;
//[E-286]  Heat_exchanger_1.Re = Turbine_FUEL.f_in.pt / (LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt) * Heat_exchanger_1.v * Heat_exchanger_1.D_hy / LPRES.visc(Turbine_FUEL.f_in.fluid) + LPRES.rho(Inlet_LH2.fluidV) * Heat_exchanger_1.v * Heat_exchanger_1.D_hy / LPRES.visc(Inlet_LH2.fluidV)
unkR[359] = _div( _div( unkR[416] , (LPRES__R(&unkR[378]) * unkR[542]),"LPRES.R(Turbine_FUEL.f_in.fluid) * Turbine_FUEL.f_in.Tt") * unkR[468] * unkR[344] , LPRES__visc(&unkR[378]),"LPRES.visc(Turbine_FUEL.f_in.fluid)") + _div( LPRES__rho(&unkR[30]) * unkR[468] * unkR[344] , LPRES__visc(&unkR[30]),"LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-287]  Heat_exchanger_1.Pr = LPRES.visc(Turbine_FUEL.f_in.fluid) * LPRES.cp(Turbine_FUEL.f_in.fluid) / LPRES.cond(Turbine_FUEL.f_in.fluid) + LPRES.visc(Inlet_LH2.fluidV) * LPRES.cp(Inlet_LH2.fluidV) / LPRES.cond(Inlet_LH2.fluidV)
unkR[358] = _div( LPRES__visc(&unkR[378]) * LPRES__cp(&unkR[378]) , LPRES__cond(&unkR[378]),"LPRES.cond(Turbine_FUEL.f_in.fluid)") + _div( LPRES__visc(&unkR[30]) * LPRES__cp(&unkR[30]) , LPRES__cond(&unkR[30]),"LPRES.cond(Inlet_LH2.fluidV)") ;
//[E-288]  Heat_exchanger_1.Nu = 0.027 * Heat_exchanger_1.Re ** 0.8 * Heat_exchanger_1.Pr ** 0.33
unkR[356] = 0.027 * _pow( unkR[359] , 0.8,"(Heat_exchanger_1.Re)**(0.8)" ) * _pow( unkR[358] , 0.33,"(Heat_exchanger_1.Pr)**(0.33)" ) ;
//[E-289]  Heat_exchanger_1.h_l = Heat_exchanger_1.Nu * LPRES.cond(Inlet_LH2.fluidV) / Heat_exchanger_1.D_hy
unkR[455] = _div( unkR[356] * LPRES__cond(&unkR[30]) , unkR[344],"Heat_exchanger_1.D_hy") ;
//[E-290]  Heat_exchanger_1.T_av = (Comb_Chamb.f_F.T + Turbine_FUEL.f_in.Tt) / 2
unkR[360] = (unkR[28] + unkR[542])/2. ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-296]  FlowMeter_LH2.i.Data[1] = abs(FlowMeter_LH2.f_in.W)
unkR[329] = abs(unkR[327]) ;
//[E-297]  ThrustMonitor_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[534] = LPRES__ISA_Pressure(unkR[493]) ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-299]  ThrustMonitor_1.T_out = ThrustMonitor_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)
unkR[533] = _div( unkR[266] , (1. + (LPRES__gamma(&unkR[268]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor_1.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2") ;
//[E-300]  ThrustMonitor_1.p_out = Comb_Chamb.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))
unkR[535] = _div( unkR[107] , _pow( (1. + (LPRES__gamma(&unkR[268]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[268]) - 1.) , LPRES__gamma(&unkR[268]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))") ;
//[E-301]  ThrustMonitor_1.v_out = ThrustMonitor_1.M_out * sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out)
unkR[536] = dyn[5] * _sqrt(LPRES__gamma(&unkR[268]) * LPRES__R(&unkR[268]) * unkR[533],"LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out") ;
//[E-302]  ControlPanel.Thrust = ThrustMonitor_1.g.W * ThrustMonitor_1.v_out + ThrustMonitor_1.g.A_out * (ThrustMonitor_1.p_out - ThrustMonitor_1.p_amb)
unkR[323] = unkR[267] * unkR[536] + unkR[2] * (unkR[535] - unkR[534]) ;
//[E-303]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[325] = unkR[323] ;
//[E-304]  FlowMeter_LOX.i.Data[1] = abs(FlowMeter_LOX.f_in.W)
unkR[332] = abs(unkR[330]) ;
//[E-305]  Turbine_OXIDIZER.m.Power = -Pump_LOX_OXIDIZER.m.Power
unkR[555] = -unkR[524] ;
//[E-306]  Turbine_OXIDIZER.tau = Turbine_OXIDIZER.m.Power / Heat_exchanger_1.f_in.W
unkR[558] = _div( unkR[555] , unkR[376],"Heat_exchanger_1.f_in.W") ;
//[E-307]  Nozzle_1.g.Tt = Turbine_OXIDIZER.f_in.Tt - Turbine_OXIDIZER.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[501] = unkR[543] - _div( unkR[558] , LPRES__cp(&unkR[378]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-308]  Turbine_OXIDIZER.MFP = Heat_exchanger_1.f_in.W * sqrt(Turbine_OXIDIZER.f_in.Tt) / Turbine_OXIDIZER.f_in.pt
unkR[551] = _div( unkR[376] * _sqrt(unkR[543],"Turbine_OXIDIZER.f_in.Tt") , unkR[544],"Turbine_OXIDIZER.f_in.pt") ;
//[E-309]  Turbine_OXIDIZER.alpha = Nozzle_1.g.Tt / Turbine_OXIDIZER.f_in.Tt
unkR[552] = _div( unkR[501] , unkR[543],"Turbine_OXIDIZER.f_in.Tt") ;
//[E-310]  Turbine_OXIDIZER.theta = 1 / Turbine_OXIDIZER.alpha
unkR[559] = _div( 1. , unkR[552],"Turbine_OXIDIZER.alpha") ;
//[E-311]  Turbine_OXIDIZER.beta = (1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[553] = _pow( (1. - _div( (1. - unkR[552]) , unkR[554],"Turbine_OXIDIZER.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[378]) - 1.) , LPRES__gamma(&unkR[378]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-312]  Nozzle_1.g.pt = Turbine_OXIDIZER.beta * Turbine_OXIDIZER.f_in.pt
unkR[502] = unkR[553] * unkR[544] ;
//[E-313]  Turbine_OXIDIZER.pi = 1 / Turbine_OXIDIZER.beta
unkR[556] = _div( 1. , unkR[553],"Turbine_OXIDIZER.beta") ;
//[E-314]  Turbine_OXIDIZER.A_in = Turbine_OXIDIZER.MFP * sqrt(LPRES.R(Turbine_FUEL.f_in.fluid)) / LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)
unkR[550] = _div( unkR[551] * _sqrt(LPRES__R(&unkR[378]),"LPRES.R(Turbine_FUEL.f_in.fluid)") , LPRES__FGAMMA(&unkR[378]),"LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)") ;
//[E-315]  Injector_FUEL.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[477] = unkR[328] * unkR[532] ;
//[E-316]  Injector_FUEL.PR = Injector_FUEL.f_in.pt / Comb_Chamb.f_O.p_c
unkR[474] = _div( unkR[477] , unkR[107],"Comb_Chamb.f_O.p_c") ;
//[E-317]  Injector_FUEL.PR_ch = 0
unkR[475] = 0. ;
//[E-318]  Injector_FUEL.p_out_ch = 0
unkR[478] = 0. ;
//[E-319]  Injector_FUEL.A_ch = 0
unkR[471] = 0. ;
//[E-320]  Injector_FUEL.M_out = 0
unkR[473] = 0. ;
//[E-321]  Injector_FUEL.A = Comb_Chamb.f_F.W / sqrt(2 * LPRES.rho(Inlet_LH2.fluidV) * (Injector_FUEL.f_in.pt - Comb_Chamb.f_O.p_c)) / Injector_FUEL.C_D
unkR[470] = _div( _div( unkR[29] , _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[477] - unkR[107]),"2 * LPRES.rho(Inlet_LH2.fluidV) * (Injector_FUEL.f_in.pt - Comb_Chamb.f_O.p_c)"),"sqrt(2 * LPRES.rho(Inlet_LH2.fluidV) * (Injector_FUEL.f_in.pt - Comb_Chamb.f_O.p_c))") , unkR[472],"Injector_FUEL.C_D") ;
//[E-322]  Injector_FUEL.v_ideal = Comb_Chamb.f_F.W / (LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D)
unkR[479] = _div( unkR[29] , (LPRES__rho(&unkR[30]) * unkR[470] * unkR[472]),"LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D") ;
//[E-323]  Injector_FUEL.Re = LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.v_ideal * Injector_FUEL.C_D * sqrt(4 * Injector_FUEL.A / 3.14159265358979) / LPRES.visc(Inlet_LH2.fluidV)
unkR[476] = _div( LPRES__rho(&unkR[30]) * unkR[479] * unkR[472] * _sqrt(4. * unkR[470]/3.14159265358979,"4 * Injector_FUEL.A / 3.14159265358979") , LPRES__visc(&unkR[30]),"LPRES.visc(Inlet_LH2.fluidV)") ;
//[E-324]  Injector_OXIDIZER.PR = FlowMeter_LOX.f_in.pt / Comb_Chamb.f_O.p_c
unkR[484] = _div( unkR[331] , unkR[107],"Comb_Chamb.f_O.p_c") ;
//[E-325]  Injector_OXIDIZER.PR_ch = 0
unkR[485] = 0. ;
//[E-326]  Injector_OXIDIZER.p_out_ch = 0
unkR[487] = 0. ;
//[E-327]  Injector_OXIDIZER.A_ch = 0
unkR[481] = 0. ;
//[E-328]  Injector_OXIDIZER.M_out = 0
unkR[483] = 0. ;
//[E-329]  Injector_OXIDIZER.A = FlowMeter_LOX.f_in.W / sqrt(2 * LPRES.rho(Inlet_LOX.fluidV) * (FlowMeter_LOX.f_in.pt - Comb_Chamb.f_O.p_c)) / Injector_OXIDIZER.C_D
unkR[480] = _div( _div( unkR[330] , _sqrt(2. * LPRES__rho(&unkR[69]) * (unkR[331] - unkR[107]),"2 * LPRES.rho(Inlet_LOX.fluidV) * (FlowMeter_LOX.f_in.pt - Comb_Chamb.f_O.p_c)"),"sqrt(2 * LPRES.rho(Inlet_LOX.fluidV) * (FlowMeter_LOX.f_in.pt - Comb_Chamb.f_O.p_c))") , unkR[482],"Injector_OXIDIZER.C_D") ;
//[E-330]  Injector_OXIDIZER.v_ideal = FlowMeter_LOX.f_in.W / (LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)
unkR[488] = _div( unkR[330] , (LPRES__rho(&unkR[69]) * unkR[480] * unkR[482]),"LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D") ;
//[E-331]  Injector_OXIDIZER.Re = LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.v_ideal * Injector_OXIDIZER.C_D * sqrt(4 * Injector_OXIDIZER.A / 3.14159265358979) / LPRES.visc(Inlet_LOX.fluidV)
unkR[486] = _div( LPRES__rho(&unkR[69]) * unkR[488] * unkR[482] * _sqrt(4. * unkR[480]/3.14159265358979,"4 * Injector_OXIDIZER.A / 3.14159265358979") , LPRES__visc(&unkR[69]),"LPRES.visc(Inlet_LOX.fluidV)") ;
//[E-332]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[504] = LPRES__ISA_Pressure(unkR[493]) ;
//[E-333]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[497] = _div( unkR[502] , unkR[504],"Nozzle_1.p_amb") ;
//[E-334]  Nozzle_1.PR_sl = ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2) ** (LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))
unkR[498] = _pow( ((LPRES__gamma(&unkR[378]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[378]) , (LPRES__gamma(&unkR[378]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1")),"((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / 2)**(LPRES.gamma(Turbine_FUEL.f_in.fluid) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))" ) ;
//[E-335]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[506] = _div( unkR[502] , unkR[498],"Nozzle_1.PR_sl") ;
//[E-336]  Nozzle_1.A_sl = Heat_exchanger_1.f_in.W * sqrt(Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid)) / Nozzle_1.g.pt / LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)
unkR[495] = _div( _div( unkR[376] * _sqrt(unkR[501] * LPRES__R(&unkR[378]),"Nozzle_1.g.Tt * LPRES.R(Turbine_FUEL.f_in.fluid)") , unkR[502],"Nozzle_1.g.pt") , LPRES__FGAMMA(&unkR[378]),"LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)") ;
//[E-337]  Nozzle_1.M_out =  ZONE[3] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))	  OTHERS 1
 if(m_branchZone[2]==0)
	unkR[496] = _sqrt(_div( 2. * (_pow( unkR[497] , (_div( (LPRES__gamma(&unkR[378]) - 1.) , LPRES__gamma(&unkR[378]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[378]) - 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)") ;
else unkR[496] = 1. ;
//[E-338]  Nozzle_1.A =  ZONE[2] (Nozzle_1.M_out > 0) Nozzle_1.A_sl * ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) / Nozzle_1.M_out	  OTHERS Nozzle_1.A_sl * ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) / -Nozzle_1.M_out
 if(m_branchZone[1]==0)
	unkR[494] = _div( unkR[495] * _pow( (_div( (2. + (LPRES__gamma(&unkR[378]) - 1.) * _pow( unkR[496] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[378]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[378]) + 1.) , (2. * (LPRES__gamma(&unkR[378]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ) , unkR[496],"Nozzle_1.M_out") ;
else unkR[494] = _div( unkR[495] * _pow( (_div( (2. + (LPRES__gamma(&unkR[378]) - 1.) * _pow( unkR[496] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[378]) + 1.),"LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[378]) + 1.) , (2. * (LPRES__gamma(&unkR[378]) - 1.)),"2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1))**((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))" ) , -unkR[496],"-Nozzle_1.M_out") ;
//[E-339]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[505] = MATH__max(unkR[504], unkR[506]) ;
//[E-340]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[499] = _div( unkR[501] , (1. + (LPRES__gamma(&unkR[378]) - 1.)/2. * _pow( unkR[496] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-341]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out)
unkR[507] = unkR[496] * _sqrt(LPRES__gamma(&unkR[378]) * LPRES__R(&unkR[378]) * unkR[499],"LPRES.gamma(Turbine_FUEL.f_in.fluid) * LPRES.R(Turbine_FUEL.f_in.fluid) * Nozzle_1.T_out") ;
//[E-342]  Nozzle_1.Thrust = Heat_exchanger_1.f_in.W * Nozzle_1.v_out + Nozzle_1.A * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[500] = unkR[376] * unkR[507] + unkR[494] * (unkR[505] - unkR[504]) ;
//[E-343]  Nozzle_1.i.Data[1] = Nozzle_1.Thrust
unkR[503] = unkR[500] ;
//[E-344]  ControlPanel.W_tot = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[324] = unkR[329] + unkR[332] ;
//[E-345]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[321] = _div( unkR[323] , unkR[324],"ControlPanel.W_tot") ;
//[E-346]  ControlPanel.C_E = ControlPanel.Isp / ThrustMonitor_1.g.c_star
unkR[320] = _div( unkR[321] , unkR[23],"ThrustMonitor_1.g.c_star") ;
//[E-347]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[322] = unkR[321]/9.80665 ;
//[E-348]  Heat_exchanger_1.P_av = 0.5 * Heat_exchanger_1.f_in.pt + 0.5 * Turbine_FUEL.f_in.pt
unkR[357] = 0.5 * unkR[377] + 0.5 * unkR[416] ;
//[E-349]  Heat_exchanger_1.fluid_out[Comb_prod_visc] = Inlet_LH2.fluidV[Comb_prod_visc]
unkR[451] = unkR[64] ;
//[E-350]  Heat_exchanger_1.fluid_out[Comb_prod_cond] = Inlet_LH2.fluidV[Comb_prod_cond]
unkR[452] = unkR[65] ;
//[E-351]  Heat_exchanger_1.fluid_out[Comb_prod_rho] = Inlet_LH2.fluidV[Comb_prod_rho]
unkR[454] = unkR[67] ;
//[E-352]  Heat_exchanger_1.fluid_out[LOX] = -Turbine_FUEL.f_in.fluid[LOX]
unkR[417] = -unkR[378] ;
//[E-353]  Heat_exchanger_1.fluid_out[LCH4] = -Turbine_FUEL.f_in.fluid[LCH4]
unkR[424] = -unkR[385] ;
//[E-354]  Heat_exchanger_1.fluid_out[LH2] = -Turbine_FUEL.f_in.fluid[LH2]
unkR[425] = -unkR[386] ;
//[E-355]  Heat_exchanger_1.fluid_out[MMH] = -Turbine_FUEL.f_in.fluid[MMH]
unkR[428] = -unkR[389] ;
//[E-356]  Heat_exchanger_1.f = 0
unkR[375] = 0. ;
//[E-357]  Heat_exchanger_1.D_eq = 1.3 * (Heat_exchanger_1.a * Heat_exchanger_1.b) ** 0.625 / (Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25
unkR[343] = _div( 1.3 * _pow( (unkR[371] * unkR[372]) , 0.625,"(Heat_exchanger_1.a * Heat_exchanger_1.b)**(0.625)" ) , _pow( (unkR[371] + unkR[372]) , 0.25,"(Heat_exchanger_1.a + Heat_exchanger_1.b)**(0.25)" ),"(Heat_exchanger_1.a + Heat_exchanger_1.b) ** 0.25") ;
//[E-358]  ControlPanel.i_W.Data[1] = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[326] = unkR[329] + unkR[332] ;

//save last residues
memcpy(this->res,res,6*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__LE5B_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[30])))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",288,"Pump_FUEL_LH2.","Liquid == LPRES.State(Inlet_LH2.fluidV)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[69])))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",288,"Pump_LOX_OXIDIZER.","Liquid == LPRES.State(Inlet_LOX.fluidV)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[378])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",119,"Turbine_FUEL.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED TURBINE!");
if(!(2 == LPRES__State(&unkR[268])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",807,"ThrustMonitor_1.","Gas == LPRES.State(ThrustMonitor_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[5] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",808,"ThrustMonitor_1.","ThrustMonitor_1.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[535] , unkR[534],"ThrustMonitor_1.p_amb")) > (_pow( (1.88 * dyn[5] - 1) , -0.64,"(1.88 * ThrustMonitor_1.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",809,"ThrustMonitor_1.","(ThrustMonitor_1.p_out / ThrustMonitor_1.p_amb) > ((1.88 * ThrustMonitor_1.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[378])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",119,"Turbine_OXIDIZER.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED TURBINE!");
if(!(unkR[470] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_FUEL.","Injector_FUEL.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[30]) == 2 || 1 && LPRES__State(&unkR[30]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_FUEL."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(unkR[480] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_OXIDIZER.","Injector_OXIDIZER.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[69]) == 2 || 1 && LPRES__State(&unkR[69]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_OXIDIZER."," FALSE  AND LPRES.State(Inlet_LOX.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LOX.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(2 == LPRES__State(&unkR[378])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle_1.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(0 && LPRES__State(&unkR[30]) == 1 || 0 && LPRES__State(&unkR[30]) == 2 || 1 && LPRES__State(&unkR[30]) == 1 || 0 && LPRES__State(&unkR[30]) == 2))
		issueErrorAssert(216,9,24,98,"LPRES_CompHeat.el",284,"Heat_exchanger_1."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas","%s","CHECK HEAT EXCHANGER TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH HEAT EXCHANGER");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__LE5B_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[146] * unkR[108] + unkR[147] * unkR[109] + unkR[148] * unkR[110] + unkR[150] * unkR[112] + unkR[151] * unkR[113] + unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[149] * unkR[111] + unkR[173] * unkR[135]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
    ev[1]= unkR[146] * unkR[108] + unkR[147] * unkR[109] + unkR[148] * unkR[110] + unkR[150] * unkR[112] + unkR[151] * unkR[113] + unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[149] * unkR[111] + unkR[173] * unkR[135]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
    ev[2]= unkI[0] - 1; //Comb_Chamb.Combustion
    ev[3]= unkR[496]; //Nozzle_1.M_out > 0
    ev[4]= unkR[497] - unkR[498]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__LE5B_design::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
     w[1] = cont[1] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__LE5B_design::executeWhen(double *_time,  int index )
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
void LPRES_EXAMPLES__LE5B_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Comb_Chamb.Q_comb_effective =  ZONE (Comb_Chamb.Combustion) Comb_Chamb.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Nozzle_1.A_sl =  ZONE (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)) OTHERS 1
     branchZone[2] = (cont[4] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__LE5B_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__LE5B_design::initDelays()
{
}


bool LPRES_EXAMPLES__LE5B_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__LE5B_design = 89104;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__LE5B_design = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_design[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__LE5B_design;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__LE5B_design;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_design;
return true;
}



bool LPRES_EXAMPLES__LE5B_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__LE5B_design = 120;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_design = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_design[] = 
{
"BgAAAAcAAAAAAAAAAQAAAAEAAAABAAAAAQAAAAIAAAABAAAAAQAAAAIAAAADAAAABAAAAAQAAAAFAAAABgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_LPRES_EXAMPLES__LE5B_design;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_design;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__LE5B_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__LE5B_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__LE5B_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__LE5B_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__LE5B_design(name,dirInstall);
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
	sprintf(componentName,"%s","LE5B");
	sprintf(partitionName,"%s","design");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+l+e5+b.design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


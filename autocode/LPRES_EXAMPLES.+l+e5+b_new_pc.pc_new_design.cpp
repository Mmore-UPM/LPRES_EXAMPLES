//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__LE5B_new_pc_pc_new_design_CPP
#define LPRES_EXAMPLES__LE5B_new_pc_pc_new_design_CPP

#include "LPRES_EXAMPLES.+l+e5+b_new_pc.pc_new_design.h"

LPRES_EXAMPLES__LE5B_new_pc_pc_new_design* LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::s_current= NULL;

LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES_EXAMPLES__LE5B_new_pc_pc_new_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "LE5B_new_pc";
m_infoPartitionName = "pc_new_design";
m_infoModelName = "LPRES_EXAMPLES__LE5B_new_pc_pc_new_design";
m_infoModelFileName = "LPRES_EXAMPLES.+l+e5+b_new_pc.pc_new_design";
m_infoModelFileNameExtra = "+l+e5+b_new_pc.pc_new_design";
m_perfFlag = false;
m_infoComponentDate = "29/06/2020 23:49:53.744000";
m_infoPartitionDate = "29/06/2020 23:58:02.052000";
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
static double tmp_unkRInit[560]={ 19, 5, 1, 0, 0.05, 1, 800, 18, 0, 8, 0, 15100000, 0, 0, 200, 0, 
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
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::initInternalModels()
{
}

int LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__rho(double fluid[])
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[])
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


void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__Decomposition_fun(double fluid_in[],double Data_Array[])
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__visc(double fluid[])
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__Lv(double fluid[])
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__T_boil(double fluid[])
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


void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__Obtain_Vap_Prop(double fluid_in[],double Cp_i[],double Lv_i[],double T_boil_i[],double fluid_out[])
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__cond(double fluid[])
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


double LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::initBlocks( double dyn[], double ldr[], double *_time )
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
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-12]  Pump_FUEL_LH2.psi = -Pump_FUEL_LH2.tau / Pump_FUEL_LH2.U ** 2
res[0] = evalNormResidueInternal(0,unkR[515],_div( -unkR[518] , _pow( dyn[0] , 2,"(Pump_FUEL_LH2.U)**(2)" ),"Pump_FUEL_LH2.U ** 2"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_new_pc_pc_new_design& m= *LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-22]  Pump_LOX_OXIDIZER.psi = -Pump_LOX_OXIDIZER.tau / Pump_LOX_OXIDIZER.U ** 2
res[1] = evalNormResidueInternal(1,unkR[527],_div( -unkR[530] , _pow( dyn[1] , 2,"(Pump_LOX_OXIDIZER.U)**(2)" ),"Pump_LOX_OXIDIZER.U ** 2"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_new_pc_pc_new_design& m= *LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-272]  ThrustMonitor_1.g.A_out / Comb_Chamb.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[2] = evalNormResidueInternal(2,_div( unkR[2] , unkR[4],"Comb_Chamb.A_th"),_div( LPRES__FGAMMA(&unkR[268]) , (_pow( (_div( dyn[2] , unkR[107],"Comb_Chamb.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[268]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[268]) * (1. - _pow( (_div( dyn[2] , unkR[107],"Comb_Chamb.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[268]) - 1.) , LPRES__gamma(&unkR[268]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[268]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (Comb_Chamb.p_out_ch / Comb_Chamb.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn3(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_new_pc_pc_new_design& m= *LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn3, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-276]  Comb_Chamb.AR_r = 1 / Comb_Chamb.M_r * LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,unkR[1],_div( _div( 1 , dyn[3],"Comb_Chamb.M_r") * LPRES__FGAMMA(&unkR[268]) , _sqrt(LPRES__gamma(&unkR[268]),"LPRES.gamma(ThrustMonitor_1.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[268]) - 1) * _pow( dyn[3] , 2,"(Comb_Chamb.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[268]) + 1) , (2 * (LPRES__gamma(&unkR[268]) - 1)),"2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * Comb_Chamb.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn4(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_new_pc_pc_new_design& m= *LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn4, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fbox5(double *_time,double dyn[],double ldr[],double res[])
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
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn5(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_new_pc_pc_new_design& m= *LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn5, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-309]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / ThrustMonitor_1.g.A_out / Comb_Chamb.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( unkR[267] * _sqrt(LPRES__R(&unkR[268]) * unkR[266],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , unkR[2],"ThrustMonitor_1.g.A_out") , unkR[107],"Comb_Chamb.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[268]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[268]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[268]) + 1)/2 , (LPRES__gamma(&unkR[268]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn6(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__LE5B_new_pc_pc_new_design& m= *LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fcn6, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::fres( double *_time, double dyn[], double der[], double res[] )
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
//[E-297]  FlowMeter_LOX.i.Data[1] = abs(FlowMeter_LOX.f_in.W)
unkR[332] = abs(unkR[330]) ;
//[E-298]  Turbine_OXIDIZER.m.Power = -Pump_LOX_OXIDIZER.m.Power
unkR[555] = -unkR[524] ;
//[E-299]  Turbine_OXIDIZER.tau = Turbine_OXIDIZER.m.Power / Heat_exchanger_1.f_in.W
unkR[558] = _div( unkR[555] , unkR[376],"Heat_exchanger_1.f_in.W") ;
//[E-300]  Nozzle_1.g.Tt = Turbine_OXIDIZER.f_in.Tt - Turbine_OXIDIZER.tau / LPRES.cp(Turbine_FUEL.f_in.fluid)
unkR[501] = unkR[543] - _div( unkR[558] , LPRES__cp(&unkR[378]),"LPRES.cp(Turbine_FUEL.f_in.fluid)") ;
//[E-301]  Turbine_OXIDIZER.MFP = Heat_exchanger_1.f_in.W * sqrt(Turbine_OXIDIZER.f_in.Tt) / Turbine_OXIDIZER.f_in.pt
unkR[551] = _div( unkR[376] * _sqrt(unkR[543],"Turbine_OXIDIZER.f_in.Tt") , unkR[544],"Turbine_OXIDIZER.f_in.pt") ;
//[E-302]  Turbine_OXIDIZER.alpha = Nozzle_1.g.Tt / Turbine_OXIDIZER.f_in.Tt
unkR[552] = _div( unkR[501] , unkR[543],"Turbine_OXIDIZER.f_in.Tt") ;
//[E-303]  Turbine_OXIDIZER.theta = 1 / Turbine_OXIDIZER.alpha
unkR[559] = _div( 1. , unkR[552],"Turbine_OXIDIZER.alpha") ;
//[E-304]  Turbine_OXIDIZER.beta = (1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d) ** (1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))
unkR[553] = _pow( (1. - _div( (1. - unkR[552]) , unkR[554],"Turbine_OXIDIZER.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[378]) - 1.) , LPRES__gamma(&unkR[378]),"LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)")),"(1 - (1 - Turbine_OXIDIZER.alpha) / Turbine_OXIDIZER.eta_d)**(1 / ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)))" ) ;
//[E-305]  Nozzle_1.g.pt = Turbine_OXIDIZER.beta * Turbine_OXIDIZER.f_in.pt
unkR[502] = unkR[553] * unkR[544] ;
//[E-306]  Turbine_OXIDIZER.pi = 1 / Turbine_OXIDIZER.beta
unkR[556] = _div( 1. , unkR[553],"Turbine_OXIDIZER.beta") ;
//[E-307]  Turbine_OXIDIZER.A_in = Turbine_OXIDIZER.MFP * sqrt(LPRES.R(Turbine_FUEL.f_in.fluid)) / LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)
unkR[550] = _div( unkR[551] * _sqrt(LPRES__R(&unkR[378]),"LPRES.R(Turbine_FUEL.f_in.fluid)") , LPRES__FGAMMA(&unkR[378]),"LPRES.FGAMMA(Turbine_FUEL.f_in.fluid)") ;
//[E-308]  ThrustMonitor_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[534] = LPRES__ISA_Pressure(unkR[493]) ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-310]  ThrustMonitor_1.T_out = ThrustMonitor_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)
unkR[533] = _div( unkR[266] , (1. + (LPRES__gamma(&unkR[268]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor_1.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2") ;
//[E-311]  ThrustMonitor_1.p_out = Comb_Chamb.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))
unkR[535] = _div( unkR[107] , _pow( (1. + (LPRES__gamma(&unkR[268]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[268]) - 1.) , LPRES__gamma(&unkR[268]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))") ;
//[E-312]  ThrustMonitor_1.v_out = ThrustMonitor_1.M_out * sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out)
unkR[536] = dyn[5] * _sqrt(LPRES__gamma(&unkR[268]) * LPRES__R(&unkR[268]) * unkR[533],"LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out") ;
//[E-313]  ControlPanel.Thrust = ThrustMonitor_1.g.W * ThrustMonitor_1.v_out + ThrustMonitor_1.g.A_out * (ThrustMonitor_1.p_out - ThrustMonitor_1.p_amb)
unkR[323] = unkR[267] * unkR[536] + unkR[2] * (unkR[535] - unkR[534]) ;
//[E-314]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[325] = unkR[323] ;
//[E-315]  Injector_FUEL.f_in.pt = FlowMeter_LH2.f_in.pt * SplitFrac_1.TPL
unkR[477] = unkR[328] * unkR[532] ;
//[E-316]  Injector_OXIDIZER.PR = FlowMeter_LOX.f_in.pt / Comb_Chamb.f_O.p_c
unkR[484] = _div( unkR[331] , unkR[107],"Comb_Chamb.f_O.p_c") ;
//[E-317]  Injector_OXIDIZER.PR_ch = 0
unkR[485] = 0. ;
//[E-318]  Injector_OXIDIZER.p_out_ch = 0
unkR[487] = 0. ;
//[E-319]  Injector_OXIDIZER.A_ch = 0
unkR[481] = 0. ;
//[E-320]  Injector_OXIDIZER.M_out = 0
unkR[483] = 0. ;
//[E-321]  Injector_OXIDIZER.A = FlowMeter_LOX.f_in.W / sqrt(2 * LPRES.rho(Inlet_LOX.fluidV) * (FlowMeter_LOX.f_in.pt - Comb_Chamb.f_O.p_c)) / Injector_OXIDIZER.C_D
unkR[480] = _div( _div( unkR[330] , _sqrt(2. * LPRES__rho(&unkR[69]) * (unkR[331] - unkR[107]),"2 * LPRES.rho(Inlet_LOX.fluidV) * (FlowMeter_LOX.f_in.pt - Comb_Chamb.f_O.p_c)"),"sqrt(2 * LPRES.rho(Inlet_LOX.fluidV) * (FlowMeter_LOX.f_in.pt - Comb_Chamb.f_O.p_c))") , unkR[482],"Injector_OXIDIZER.C_D") ;
//[E-322]  Injector_OXIDIZER.v_ideal = FlowMeter_LOX.f_in.W / (LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D)
unkR[488] = _div( unkR[330] , (LPRES__rho(&unkR[69]) * unkR[480] * unkR[482]),"LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.A * Injector_OXIDIZER.C_D") ;
//[E-323]  Injector_OXIDIZER.Re = LPRES.rho(Inlet_LOX.fluidV) * Injector_OXIDIZER.v_ideal * Injector_OXIDIZER.C_D * sqrt(4 * Injector_OXIDIZER.A / 3.14159265358979) / LPRES.visc(Inlet_LOX.fluidV)
unkR[486] = _div( LPRES__rho(&unkR[69]) * unkR[488] * unkR[482] * _sqrt(4. * unkR[480]/3.14159265358979,"4 * Injector_OXIDIZER.A / 3.14159265358979") , LPRES__visc(&unkR[69]),"LPRES.visc(Inlet_LOX.fluidV)") ;
//[E-324]  Injector_FUEL.PR = Injector_FUEL.f_in.pt / Comb_Chamb.f_O.p_c
unkR[474] = _div( unkR[477] , unkR[107],"Comb_Chamb.f_O.p_c") ;
//[E-325]  Injector_FUEL.PR_ch = 0
unkR[475] = 0. ;
//[E-326]  Injector_FUEL.p_out_ch = 0
unkR[478] = 0. ;
//[E-327]  Injector_FUEL.A_ch = 0
unkR[471] = 0. ;
//[E-328]  Injector_FUEL.M_out = 0
unkR[473] = 0. ;
//[E-329]  Injector_FUEL.A = Comb_Chamb.f_F.W / sqrt(2 * LPRES.rho(Inlet_LH2.fluidV) * (Injector_FUEL.f_in.pt - Comb_Chamb.f_O.p_c)) / Injector_FUEL.C_D
unkR[470] = _div( _div( unkR[29] , _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[477] - unkR[107]),"2 * LPRES.rho(Inlet_LH2.fluidV) * (Injector_FUEL.f_in.pt - Comb_Chamb.f_O.p_c)"),"sqrt(2 * LPRES.rho(Inlet_LH2.fluidV) * (Injector_FUEL.f_in.pt - Comb_Chamb.f_O.p_c))") , unkR[472],"Injector_FUEL.C_D") ;
//[E-330]  Injector_FUEL.v_ideal = Comb_Chamb.f_F.W / (LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D)
unkR[479] = _div( unkR[29] , (LPRES__rho(&unkR[30]) * unkR[470] * unkR[472]),"LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.A * Injector_FUEL.C_D") ;
//[E-331]  Injector_FUEL.Re = LPRES.rho(Inlet_LH2.fluidV) * Injector_FUEL.v_ideal * Injector_FUEL.C_D * sqrt(4 * Injector_FUEL.A / 3.14159265358979) / LPRES.visc(Inlet_LH2.fluidV)
unkR[476] = _div( LPRES__rho(&unkR[30]) * unkR[479] * unkR[472] * _sqrt(4. * unkR[470]/3.14159265358979,"4 * Injector_FUEL.A / 3.14159265358979") , LPRES__visc(&unkR[30]),"LPRES.visc(Inlet_LH2.fluidV)") ;
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
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[30])))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",288,"Pump_FUEL_LH2.","Liquid == LPRES.State(Inlet_LH2.fluidV)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[69])))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",288,"Pump_LOX_OXIDIZER.","Liquid == LPRES.State(Inlet_LOX.fluidV)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[378])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",119,"Turbine_FUEL.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED TURBINE!");
if(!(2 == LPRES__State(&unkR[378])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",119,"Turbine_OXIDIZER.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED TURBINE!");
if(!(2 == LPRES__State(&unkR[268])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",807,"ThrustMonitor_1.","Gas == LPRES.State(ThrustMonitor_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[5] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",808,"ThrustMonitor_1.","ThrustMonitor_1.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[535] , unkR[534],"ThrustMonitor_1.p_amb")) > (_pow( (1.88 * dyn[5] - 1) , -0.64,"(1.88 * ThrustMonitor_1.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",809,"ThrustMonitor_1.","(ThrustMonitor_1.p_out / ThrustMonitor_1.p_amb) > ((1.88 * ThrustMonitor_1.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(unkR[480] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_OXIDIZER.","Injector_OXIDIZER.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[69]) == 2 || 1 && LPRES__State(&unkR[69]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_OXIDIZER."," FALSE  AND LPRES.State(Inlet_LOX.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LOX.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(unkR[470] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_FUEL.","Injector_FUEL.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(0 && LPRES__State(&unkR[30]) == 2 || 1 && LPRES__State(&unkR[30]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_FUEL."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(2 == LPRES__State(&unkR[378])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle_1.","Gas == LPRES.State(Turbine_FUEL.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(0 && LPRES__State(&unkR[30]) == 1 || 0 && LPRES__State(&unkR[30]) == 2 || 1 && LPRES__State(&unkR[30]) == 1 || 0 && LPRES__State(&unkR[30]) == 2))
		issueErrorAssert(216,9,24,98,"LPRES_CompHeat.el",284,"Heat_exchanger_1."," FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas OR  TRUE  AND LPRES.State(Inlet_LH2.fluidV) == Liquid OR  FALSE  AND LPRES.State(Inlet_LH2.fluidV) == Gas","%s","CHECK HEAT EXCHANGER TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH HEAT EXCHANGER");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[146] * unkR[108] + unkR[147] * unkR[109] + unkR[148] * unkR[110] + unkR[150] * unkR[112] + unkR[151] * unkR[113] + unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[149] * unkR[111] + unkR[173] * unkR[135]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
    ev[1]= unkR[146] * unkR[108] + unkR[147] * unkR[109] + unkR[148] * unkR[110] + unkR[150] * unkR[112] + unkR[151] * unkR[113] + unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[149] * unkR[111] + unkR[173] * unkR[135]; //(Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
    ev[2]= unkI[0] - 1; //Comb_Chamb.Combustion
    ev[3]= unkR[496]; //Nozzle_1.M_out > 0
    ev[4]= unkR[497] - unkR[498]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) != 0
     w[1] = cont[1] ; // (Comb_Chamb.fluid_O[LOX] * Comb_Chamb.fluid_F[LOX] + Comb_Chamb.fluid_O[NTO] * Comb_Chamb.fluid_F[NTO] + Comb_Chamb.fluid_O[H2O2] * Comb_Chamb.fluid_F[H2O2] + Comb_Chamb.fluid_O[HNO3] * Comb_Chamb.fluid_F[HNO3] + Comb_Chamb.fluid_O[LF2] * Comb_Chamb.fluid_F[LF2] + Comb_Chamb.fluid_O[RP_1] * Comb_Chamb.fluid_F[RP_1] + Comb_Chamb.fluid_O[LCH4] * Comb_Chamb.fluid_F[LCH4] + Comb_Chamb.fluid_O[LH2] * Comb_Chamb.fluid_F[LH2] + Comb_Chamb.fluid_O[N2H4] * Comb_Chamb.fluid_F[N2H4] + Comb_Chamb.fluid_O[UDMH] * Comb_Chamb.fluid_F[UDMH] + Comb_Chamb.fluid_O[MMH] * Comb_Chamb.fluid_F[MMH] + Comb_Chamb.fluid_O[JP_10] * Comb_Chamb.fluid_F[JP_10] + Comb_Chamb.fluid_O[Kerox] * Comb_Chamb.fluid_F[Kerox] + Comb_Chamb.fluid_O[Oil] * Comb_Chamb.fluid_F[Oil] + Comb_Chamb.fluid_O[H2O] * Comb_Chamb.fluid_F[H2O] + Comb_Chamb.fluid_O[IPA] * Comb_Chamb.fluid_F[IPA] + Comb_Chamb.fluid_O[Air] * Comb_Chamb.fluid_F[Air] + Comb_Chamb.fluid_O[Ar] * Comb_Chamb.fluid_F[Ar] + Comb_Chamb.fluid_O[CH4] * Comb_Chamb.fluid_F[CH4] + Comb_Chamb.fluid_O[CO] * Comb_Chamb.fluid_F[CO] + Comb_Chamb.fluid_O[CO2] * Comb_Chamb.fluid_F[CO2] + Comb_Chamb.fluid_O[H2] * Comb_Chamb.fluid_F[H2] + Comb_Chamb.fluid_O[He] * Comb_Chamb.fluid_F[He] + Comb_Chamb.fluid_O[N2] * Comb_Chamb.fluid_F[N2] + Comb_Chamb.fluid_O[O2] * Comb_Chamb.fluid_F[O2] + Comb_Chamb.fluid_O[MMH_vapour] * Comb_Chamb.fluid_F[MMH_vapour] + Comb_Chamb.fluid_O[NH3] * Comb_Chamb.fluid_F[NH3] + Comb_Chamb.fluid_O[H2O_vapour] * Comb_Chamb.fluid_F[H2O_vapour]) == 0
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::executeWhen(double *_time,  int index )
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
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Comb_Chamb.Q_comb_effective =  ZONE (Comb_Chamb.Combustion) Comb_Chamb.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Nozzle_1.A_sl =  ZONE (Nozzle_1.M_out > 0) Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1))) OTHERS Nozzle_1.A * -Nozzle_1.M_out / ((2 + (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1)) ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) + 1) / (2 * (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)))
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1) / LPRES.gamma(Turbine_FUEL.f_in.fluid)) - 1) / (LPRES.gamma(Turbine_FUEL.f_in.fluid) - 1)) OTHERS 1
     branchZone[2] = (cont[4] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::initDelays()
{
}


bool LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design = 89100;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design[] = 
{
"AAATWAAAwzoAAKr7AADf+UF0sKRIJvez9E8Jf8d7NholgykeU4tpRg9B0VNA1+2cMyjbuTIVSzVIYS3xFeHHMw/4C1gZn/ytlhCnP38pwez2y2X7amFlihHYB9X3g1jOSt3FtYJHppoQjOqvYN7taHEBNj0/aHxOCXjF0242kO8aT+NXCJ5ILC+uUM5vZ5w3EMjOt4A0GtLszpj/D/ysSwT6qvGYWG++/7kOCOOJUiujDVmHFhy+WKO1Fo6p5Z/Eq0o7GCOzQ4TmP4hdIlL49zHHDv7Tm93zTPfrlm4wRSAHRxqb4Y1B+QaMS8vLMbXuIjMLBWInVp/Mbhpxj5Jr4kKpclJfq/c23VQgXQoFpq2+6X1VlXoSQ+JryM/L3g0FUL9tSw3qEDBnrDHfpWn8mjDbUPrszobaNndOoh7UFQUioVsH3iOiGjA5eScL2d05qvQhezrMH5+VYRYtMy/Bm8tLypBnqVsWO4pweC69HgBtm0nxZzdcfyOdMOrbMEE7Ycgvv7ZL/7KIkYrWj+KWBZvXJ/aLbd/jTahnkujHmjPx9ZDtjDSaX0SSEGpblnlBs1MOimEZQmTrrrNr2Gc+nfUXT0BiYldtqeMC6K7jC2QDtATBc4TsNKFj3PjF/dlDDoyyHtNDmh7Cu9y4yg02b5aCJGAYQ5zFapbaydY8WXWK1GMlYjD4O/Bo2jkbv2LbPm9bH2ufvbZUpfcTjE7/9G622koXRqgWoxFkhm4w0d7m1H1OLv4Qm2i8eyCSjZeX93LTKMqh8E/sGC21K06xhhGF5VOa3n/S6u1YylktuaUiajbLnw7wlET3wao2yWq8ZXjP/Dv5riHS8Vd7rZvY73kAYRd6tMcCr3i3xL56DBP+RqZApo6/vEb46mT9mZvblanh2V8IJaOTdGc7PZr7s+YCdpy0DBn0XniSbl/yTwfP3d1mBilEGqgU7qdK7lO2KQ1+5IpsScWxrlsV/BzbX2dbOLV3Dt1mK7QuEgmX/FdxcOZ6xDLYgBZ0XLg2NDqu3fn4PFyGv7b2U3HMzVeksm18dM8XRQWQoy+D1a91OiqCz5r1Bj6So1tWsiSoC6eTX/8lJjyBBhCEl/W0eGRK7A0C+ADQtMHKHEYFFVSMI4j/FhBs/HF947ti7pEgSY5p0HUB6GEBVjLUUirp30OaM/4aw1d4d5HDlHbWv40x2Xl0zeuu7wHO/sQ5NhoCE0rZy6nZthrRzHmL/0bmF8gSm0zuk4iyfzb91zhjdbdHkH3+QpxgkOxpZPVpBRtsg6vmRW3V0Mi2FCmfwVTfuT8hp/hv4wVGLEaftGtMG/IiR7LbkRAhpA0KiPplobhXe0hbAuCtwOUJLK0wIaG+eVcu798UgMhtWfQtjdaQU7WiQEKJAd+7JcDjrY/I4m7pKglI/GwsUH4cA+vjnAqGOdX+Q2wIQ5e67OkXkz2awdseYdHV4qyWrD2FFnUpdUp8bVca2K3UhlZ34r5bm0gdXsL2jjp1WDeYbTIaXBzn/OmewUTsY9RoAZz6aOu4kC1ezi+APYuqNsm/NFIKyCBuXw2vseuXjNuikybmDOMhCQByc0mdh33j5Gioj5kXyFoA5a5zuh+x5AWqY3QoBQg0x8jDbVAqu2p5iIYaYmvFxYHs12fggKkFpqJ6vlLcA7cLSYYBo/5Df0U4U5R247aHyKOK/TMSyLijRZrNq80C8ogqTUtxHsbPjlhTSoMGd6q6aYd+mvhAeRqwwSZnsi1GfmwOD73BYnmESwirSBPjjca31DrbG3odLsKxzeDpFENrwep5LQic718GHkoE7DhyFPDg6wDE0uKT4l5pM434m/tt6qcksCLKVEAcb3ZxxLCi31GfqA1fMSmdhwVEXSX7zu3oGzC4XINAjqnHxFa0Fj8BtMwfuRfGLeZx3QdLxYvIw+FjtFbKTu047iSKJcfe7uSAGHh1VYXP+Gv/EQiykzNr3VIM+GsLdj/3NYcnuSlLeHFFh1+WDtSZZ6AdfUDZ",
"PJ513nfGU3EUh3EttuJe+HG9uEBN4xi2cEqDRLqcTS4oWSTZlNikc71xdzuFJNXp2Z8V2pJkCUYbcO8TpZsmVgnOqNZQuCXA75stZIFPn5kT57CESeFFBlvBpVZozwzuoYPjBVcBuOysBorYaz1ZneuY3cqT/m86ASqrU+XAL3uiYIhPdnA3wWHmpA//syKmbXIGTbAihtlLi7sDhT91GUnIRcdcOXFiLoBls+thSUlkefslYpbzxoreo+8rAZa9e7q6WMs+vLl25QqmdfGz5EtVsbgpje1uXqXveJnMVK7giBTe7HyPgQrTMa78ESbcUVgGLylDY+9u1ZQKii4m269UQ2wdCcNHldDaqQd5aeKicvu4JKB0boQWvrhw6nBd8at50l3ooHcMvvoRFMK6He9suMW6gfePChajVOG0wcK4zHC4Db0ixPRT1ileXQMFBKVfxb8Ts4Xa3atwog9pwcrX1JrD/q8W+jtJ/LA/85hSYXtEwiBbW54TdLeEuLi3mdcm1VN2zh5aazvmW5lRJ/nICewo2WxftNatKpcQtjnqRh2iHMZHJZRHuvqPofC4JssLQf0BIP/OIXQp9ooaS1uG3DmrqKXJ2OgT1zZhjS2KUoYzCD6rLUR3dbV28wqofYC0hiBgzaHXu28nMJaHnPLSEEr+BcaTyqEyBkyMuelecnn2GXti9k9CfkGiYvS2vFF62OgeWPrZC6IfTOj10qKEMIhtq8H8G2FhBOVAdR7tG9pj5g0baSeNLaCl4HcVa8UVngoE7pJgDIdha7ZxTYNdB2TwXU5jYHEIIjg9X6lv4mzFTJ4ElWnA6t8Ut9XZjLYXbHPwZhqmdzIaDCp0fNV9o+zOvWwmZUNPaBww+MrWOZMqVx+OTxDz8+sBmYYJ+/BlnSrWttC8jeBIUwoowr+5X6ksX9x22iRNVDFOmIJxeodKvEFHgGynrSU6vv+RJ7O/noMh/kBWnABn8sz6Q2lsxq49vcP/VBSjvwV2ZBvizq65QPwQpf/+lwijY/XeO0TPfjE4jFUZjq8VoTarmgLpLgmqs3wzLqeneFApEO4rbw1qj1hIHtSeKOeTQxgddDAOEm0pF9RJEWFnfebLEdk2vt2/maNGiwfiv3bZG12Y/KDdG+Ry9iSEjtt/LVsjnnM7ChIrbOfbzFYrG8XhMVf4Lky5J1pFBXDY36clkOI8R2gtjku0KyD+am/AouSc9+OHAuaUMSubpWZyqAIPsDIXYTYIFlwKOXCoWPp5U1c4EnWoJVlNnBFvHNSfm8HvqbbhCq6r7ANb7PwI2NaEj9tdMAa4APqv5cleCEwet7J09Li4W3Kf7HH+InVJYJqf/XV+CPKYLsv4p4zVnkXz/7/ysK6PEaN6VrZRVoOXxad4PaGDago3RZMJyRjYbhg4xby+sj4/SfsjU28GEP3zh0BktcXhx/rok/gZo2FFpA+BoojZIH2cCDrBXcCDan1KflQG+0s4UVjoKQo/xDbVWm1jW820XceH81YZbeb8kJ5NMtykLPkEgp6L9dS4/bZyPVr4Xr9XykIO1wL2S+GasCyvc0JITbzQvB4nwW6KV6I+Fq52ZHYfCFK/TBYRxTGbO47dzW2ert9J5uJrS2Lh5AU4VLosxIVTDYBkyv7BK8OiIBkVSPbaFpPKpB9Kvkx5w0MgvQ2/KyoxceN9LsPuZNlZrVZwQCoHLq82yNd5zvDQOSDaD8nsHGxHs5NLvIVmQQ4/cbDVFlYAv/fMtfcTotJbf9mcXlgxjuqZ+oYtGbnxfKiXYqyp10J06vRd9r39ED2dnZjbJb+M7hw9GY+dzGrEOHptlY+jhVIqoOJw2b9q13n3/CG5/JVsXPc5WNWgj6CL4pDQ+s14PoIg0TlR0FOpXN6+XMKAQDDqW073Egnb9U3/sBzR6UbZnRzF4x2F9bqTIyygylRWz1MOD8fGsrKdZMfKhZlNIV+N7Ydgdm4yWv6rD1I2bkFaQm6VAbSGHQwXJTNzu86IDMG+",
"EYygMnjqqrHZoO0IN4dbeQA989y6mw5ay2+S0orRZXnidfguPyvoaSxnbgAsOCWK7esO/r9++ldbBeZc9PoGi/bCgGxS4tpafQ6d1sF3iEbHWGFxLd9HfT0abXUv7tqm9xkqyWwMGlOvVgJxjRxRSCyA5dxUJ3zMMaBfEY7Gqkt2I3h5j9ff+IZr57c22KiomA3+yQ1CBifKMBLp5aM94Z1KVzY3PtWyESAq7N16WOkMZo3LnMMpmEvxOuv75/TcfEoeICGMYoDGUjPrn9zmTKTBQDVEbW0LaQRIbkfUXUw35zKoharSjI55z0nl8chy2JXJrCVD0KhRA37HonbNMG49QUcP3UOrj+R5LryWFSRhPWzPHmsbqOKHQEAaVcX6cLs+Z7DKI5sM0CQFNW6beizbAFbMSomDFYzqFRN0G3AFq9Kuezp5c9ht6KO0VIJTMncD0FZQuseOkVS+aMfNVhwcq+nuyuG+LjK2eB6nc5xhSdzXjstwp/uu/QAAFCaw5zxdb4tEuzOgOTTxdqg33s6/+o1ZN50HXGD5L8aZiA86evRRMv/6plbfGiiFNiNSPNCNloj651muGWYVfJALAfaZM57stBsnXDOnMx8vvxX1pvqRn62EiNz7/yBDN399Ge2dalHLKqwOSKwrcP89nGSyz/3fjReBqy/ZE4b55QjULJ8tn6hGFbt1V9p+Pq7Yae+13b2t+J7DmujruSP4JCSaBinkQqN1CRUDWkFXXR0FkDVfF9naPvJE8SpMdtTJax+zMtsiOfqYm6h87ldcuVp0+6Y6sUPS4zhBi7UbSVTZWRpNWLB4CybZkIQFGT1YPp524DpauX5nAHSd3wNXN5yT1/nKCmdx0TO8pmdpvH68ywBLjDNwqTM0N5lmKbGhsbMivJfEdSD1G8Ua+8wLJZp7BQVnTtC4NOE+hAabytjy11bqBblGABembg3BT2j0jkf29H7UvHFT4Wkknh7Cel+F6S/rmAgioA8nVeiXVLW8AtIQ9VI5lrVHj56wZgT5fI5EYGbRLVrhosM2VdXwb/PS69EbcUXuHFQFBpRczj/pu6Qgnjjg6uuc9iMLoAHVyIApKZrYOxig9Lvi1lIuKUasCk2ZiHNNwwpQg9qX5pPW1qOF6lGKck3H6V4MQUot84Sbj7dLVnWcKwykoWPlfi/QMGmC06OOKUwvRfzX6uHFoxLpBRSKsdaoh9dKFpRQmXFtTZ5DA+lF39btv43N6pklLcmPN1BEVIMMAIy6bB9w9OI44kKJPFofdST3lFHVU/xv7Z7BSRdKGGKkfhu070otlnuJxKYH+fdJczagyPrQ0ljNwme1+3RrSo+90sXew7PvrLio76u8c2Z5x0MWONI4shIxiYOg92TD9QVHbQTghwpntwhMmhdGcPkbhFXF/jDaWAInNQpd3zoKkig5/dpRzKpgwt1fski/MxfbJVFcbykhsjoVeiqRbO/nncbQGvDzTcpRMB/NIzKLnrIv5T5ZR+hzKrP4SmiJaR4JsQOEocxdzYsT2r0+vCK0WtVjAdXIl5w8e24PUQfWXj+gwmFjauN5DEN00/LhcB2eSZQts13eVB/5Yc/ioyteuPPyBTOOhYx5Ir6e9ZfSoHE37IEWhz1Feb/XJ926rC5fqns1xjjXnTA7xnd4e1/MqvAzQpadfGPRi+5ffLbAsEkURDbuJflOnNgukjVZxREKmJi+WN7TeGNnITgwEwn32qGmhm0IePKkTsOF/BCDGtNrqim12V8fM7WNM+rcHdE26HGcesv6d1104oYT5L7hSPcumWpf+/udK6yhZvNJ482qVBy8xmNQV3uDtcZ0JDfuR5xWUGRTAzuWjWecBK04GoaLFrzjJgGIHzWQZHALvalb3pJwnqjqbjc+eZFfJ8oJTjTQIuH/wdQkuvBveu8SyyHGGnFjNZYj/qLDArfyu0XzOnuY9VgFREuc2Hz6c7Ly/ZJldOUFkdkUlxR3uBSotpdGuDjIi4tV9aqykweT",
"eUWtgOcfRFx1IfH/Kj+hd9EzfDNJ2v82MxciHKGZLdrJzUME0ZkvEO10lB/Eed3dIPJJhbQpFx3Np/2nDDRvXf6PW1NagMty8asDh+kAXM/szlHUQQt13r4zfZphIgNK488IIKyX6l8Q+CFi+aMDe6bIEgS0LaAC3T/N+BwEledCli7pjnX6t4GxdMqGTW1ioc3PawwzIJw2gttDChZ4Rykn8y66gy7Kpmf7/tjpbntcM+y7C7evgBjbSkUa4yJYPXiSl6JJfTDIyiG1fKtrbXdk33brbPIIHd584H4h6Jtu/Im1TbV7V1aXDp86vNlMm/TvZql5V0QXYSeoqSVYVk7ZE3p6zvjyu8ncSQrM5DxWOTlwQq+NTYuOsJ0hr7w49B5otwDgpIdZjLCBiWR89NSYPisYo9ngkzDOxdmRGr4R2davUxvJTdTT41fAfZx5BZ926HC+ho2b5MQfnGqQAVtxsYDnOhHYi42BaZXd1vqAvZCrIqT7rBTZDhhkIKl863Lo3IKKW4AA3FSdAR3akOWf8ENwZZW8IC6WA5p19oT3Hi8Pw4MQNdF4q99TukejJXfpPVKpaPBPBF5RaiNSaCVgTRj4+RNiUK/C/Z6WMdvzISB4VitzYXuC1tKztPC52+gGq2fJFcwZ4kvLsE02/V0OtyJ5RqDvHvcDYtGiN0++gcXotYYpp0Is2CpiVbM++dUF21DVx8Zhu7wJHp8Sr5wy8iMTe3gUhUEehHIn0EtYXhteSXdIGB9uPeV7e+Kmdb371gpZy0lFzdUqFJFPuBrSk+ecKaMDUw0kVVhjQAAVmNL3Ub9gOX667schAJlQQDKERlE4FMhmd/LRyLTHgf6WtlXu+hmLTgVgx/0DuT4UruwCh53qsaltpObtMmIp1x88d5BV0sm1E3454jugxymtoS6chKw5jxYkBPQDqRAipFYVIZTe7VY0MuKLHe97nCp8Q3NTWJ4CYKJYH2ricQTgxONaLqlL2duXjTR402MfeD3rY4MIso+4FvBUe5pX0AfLJVJLy1hxmOdRLL9YBkqfafKBpeh9kXp/SnxnvTVtZqaaPqLGn9h2Yhe7k1f1LbQynbnXKkBgRmeMG/f3vUdZTgOWvejZqxkqBR0P8TwtGctRemLjfZOF0oEftrgE45gCEdKHkvvBCzkwVcG+cfoyV7vG8WGBaj1t7Blo/uaJfCek1jhl707x55w13KlgIP0v2YkFak5eYAoq1bkenNYgZMo9Vvv0mXZf+2iXtHY7Ab04J5rujhfEowHw5EquomVmu6gL/GLg4EtrnxCTAZehB8C7ak6G2Et9sCG289pVEAuzzZe6E+aqv+yFA7As7dvqLEhEeP3I49nl6FkM3hQdJ48XAwmxJI2gkGI2MJkV/DsZalFV2v/5GI3s+MIqxD6epsNq9cXlRICrU2s0wckbDmo+CSnGCwwNlw6hfER+Q7NxoK01NVwoR7+t+CHljPbA8WGoNvIGYghZz5Iil8s5pFIWarTuUpRYTyK538bVYjl0AdUBbQuPblxqVBpQhxMbaxtPfGGWr8W9jH27RfIyKkQtB+3SrNiLNvYuHb8bf3PchI1TDAZV+y/RG1gwp1DnM2SgMqFQ//fLYSVV/w7Ecb0EGoLtGLkNkv8RukbFdv1hQCZJEWsIUAuTu5RkeL0lNQGYEHnmjfnL7kJyjeMM9T+VqDxPeUCdanJ4jR6GcUbSd/ucCIRyEU3s3fOC+uf+468d7pq/Nn/6Alnia3Gsg0BXqVKGrQc360j14WpPV3wv058DoH7ppEenv4MKIdlkS4ScPIbN/vWnV/tU98uyFU/tun7ekBjfLwgHiIZL0AmWyHxKI3qT3wSNgJqIrXrm39BJb8eR7NQD8fkGitrWIrxxS+bfJDPCmRTQKLfMASD9Q1G1aIHUPeLPevk44sPe1uh5jiUxZBG3EseyCBiZb3hGYRJObAZMDaGzM9kRRLnRSPtGZVjDYOKF9Ukfl32Hc4w3U2bADsgj",
"ryFUSkk05teqwSaq/rPU/ol+rdWETiUqmIZcygxLCZI9+IMpRiBF8rfgPinYFvymLy6N/zR0aCTrtSAiEqfEyBBwd8CyAZxa5e785paFwXyvXSYM6ncQ1L+mFuGSZ8h9TnbTQ5FOtUB9E2yGYlIuzbd9mFqOEXZbkAwFTLm1whlAGmTCnkmlprWF0rw9tmV3j5b2bO8+/Xr12rOTccrAyV3gSB+yEhhBVlEs1yo1qWkaX1ORbHTg2s+jWRJ0rAD4T2gn5yKu3XNX5Y6wProsTmN2dRgc0UdmgzQAIMDR8fVTzBtkiVgKWSXoCYetglVMPNxi+ceMEJei8lk0TNkRVeq4jfihbQFVLuPiA5cN1u7Z/BOClZPU0/pV0sauDh/TPMb/Jk/DUM2izF+tXf3LVr0Vk10I1NgmYSvuji3EgzTV/agXpAL1GoH/r3DJF1rijLVEknKM4iQIzmHmjJWbIA4DFpUYRUYBEpC9H1E8cNs/sLgp7u83v9w9ZIxJobAe65vLuHkDdxSBDA5Nvs+2g8n9pHSC7TTb6R29NKFraoxGZBzw5EL4FAd4RhMDT0AIC5WMADOI9EJTGCUA/nI2dp99iE67jd3ibsWyeUtPJHsonnbnJoBrAOXN7qk82CJ4Y8HMA0bYBE6hOY+UWjeYC6ywBuyN4L18upX2dFxVNPZFTnmAgOeKKleyMfr6wi/LJ50Ix7xlOpG+v51o5D3wxzh5yf4Trh1RY0uOaQw+FW9Zd4I00eqaj3pcdlgzF6tJTBzK6ZoQ63PgnaEtgfcsb0IRdkz2Pd6s+CUZ8Wf0o5gabWjMovBa6VgZNxNc+cnWITI05f1kk5LvrrdHcNRYItM5r/JwX9SewhYPrLoVkEKKO1Rh2lZvxB714YZmeFixgylmbm6AibDvqalYh0iEFOu+pUGlgjK3aLDNA/hA2CJBBhpIzrSUdWvcUJozQRvSCUj0KGlxbSROPgPBTz+pcaoRTZk2f0a9vxjuprpqCYf0mY8N2Xt0zCNYLsSJQxoQcgZbg6kkRRpUJrkrLvmibjaO/HEbEYBpyvvfCoVLuB+MXrFt3QYYoY5gl7kPzAPETUu2OkzwROIonh5j4nF/MkzBmzootzbRDe2PDnj3WGR/gwobqod0SGaMV/wX+oTrBlTDSTVTayQNp2I7P/t2Pi36KiJLRKqTFT5L5142a+CpDMUgbyvyO7JAHn6YL9VE3ypVR3Fnwvk4mjUIEp4+83nYpnvXGEE3IFW9oZATUsjoZgD2eBaBLZLDuYf0oRNr8nH42aHnbFuz1XWp7+rPaez8gSgBDfIG8OhNAhSnHbx1i0sWp+16auq9Dpygok8W+N7ZbG/7+XwPONYDFZah13Zh6/UsTg2wunJyAxvD/REAK04iFN5yXKELX47+8VfEcw9ZUPLm7WJhkm7SMOEqLB2QAOdjP3tw2E/5R07AsubcQjsY35G3vALpwX6MA+DBIFgZAKUVCs4UCNf0r1VG/FBEL7HPUQg8v+0KVXKg6kM81wSnUYLk2maXt3dHQ25XErSNAAJ+4buph29ON4gumorqiMeJOsYYkwB5E+DvBFwDWeqqnav7alPhGUpuD9AH0PyO4yoSz7FbBjkOVs98UKZYAb2EKUcKdyGTIy5rJU8RXoF+RxE+asGVoOg4ZZUMkp6BCU9WlBeWrOADBgG+TTuLnj3x+IQ9yrLRVhNB3fjuBMeqyj81nFfegNYWEA1xXjKtMyjv7r7L5Ae+8qe8HZqhyPB7Kb2vd61CoSpY6EX2Z6+xbRfCLMkLd8KkCbIASmnwyMLZK5bCho1VbTTRIlEaZQSMZ6DXTnA/aADKfB7Xqi7QI5SYLPT3kct1IcrDsatzb9KMMA9R/pcvdv5VYK998qHhYg/ttWpFaOn7FOXfPWcqfWHelz7m5u4UD8T+cbkbcSOSqIp81nIyYaQ2rieUlYbqe/MhN1bRgT3jmjlvN0jLIG4mxp3SvukHDY6KvrdfHasjv7HDO9gL",
"Eo1SpaVHgeLPsuYZJaYE7G5lHX8aSxozTJ/fp2CGCNRAbNbPnA4miTF+kzp+nLDHmGhmkez3lDaEMi3rp9bBGimgBmCQjQNYK9lrX22ZqA4jw4b2ZciBlWjx1ELShxEU2iiHiPE3euRKcWCWupWCb7mQ5gdu/9kKnW30IKA3Trs6xc7N5lHZmqvoKyzDFbNkGNi3YqtbuGebI3q92dH4znHKbyBXBFIFRQG05ELco+wDCQmy0KbFWxc9w0Rougibgp1HhrIGrITA/1Q5pHzEntB1woo89+seTR3PtcDnVcG1Bryb2DXZOF+ABKT4UXoEMqpuVCQpnqRJrVHp57xpFzGu0bjt/yyT9Kr0xFv7X68mIoQYBIwZZVwmGEYhowa/cV7qjq7beEFYMWkidzYGjBK3lQ7ZU2qe1xX0xRgshxMwXf8i/OtwxylXM/AYI9bB/3zo9roBISzOJthLNc6ZvMcmx2/ElnGJEB+oiHGwErlawXkiUN6i5K5JOQSy4c4OABw1zxnVZCUD2ifUoxalKFmWQAsxzhI6rHbYlFRPMzspSvqzLmRu+4u1AwYaEfLR22eLn4IxfPdAI+b8UjlZcV+T2BSlie0Cpw1U2syU6SJklYB//jbpbGXunDwX9ZI8kwuqibpnVDQT3VtDVyMR22bphR4ChbRYiyX6Gf/hmzScqszoKfQgdv4dcJs9o9v2Zpi0SARrDPQ66je/NV/O6bWFwMUWSXqk9RoOBR9NAxfOPu+LPmnQ60SoB4EVRDXCvh9LVIj6eIn2OKVwOHK7pw3hDu8K+9xw0d9n8uNsLUNy+fGiBmuMbCq1hMCEmoQEBNiZRYt7s1UMJkGA2mcWDR5o0wCeqLedORmaXUyvXHF0Wp0FUsAkr0Hffvg3F79v/ENjYSI9Y978N07DeDams/XCcoTw+MSJKd+WoMDtsWMQcXVJ7rorRoiMp1N5Y/deEIONTBWjVAjd9aLe2BWY4QThWjdmlK1vpzg/QYXeIV25MVdMv2sAMIG2QEwTwlUcCJ4I9vyFWoO1AplDPHEc02ZJQ5XqcL9D+1PJ56lmROJeHS37BOgaH+VEtTgheFe9TGv1wD6BM0oJsmLtXdXHx4qG0UEu/NgaPm3o51zrHOIXKRQ+wV/n9QDpFgMHUD44mgqO1PtDowAlPv2/UT2vpd31RrSSiQ6gdzZ2ta1DLjj1tczWK+akOt10z3deXEnPN1sWgqBEcNar2OlY/62MC1fHlsVAQKrJUu6zJfxsEyZdGhzKo+oRmfFsjkUF/bGdwef8sWEMHyKRrLYEd44dTCrEK6Dwrx24G1feVmInduCrgdk403PqiyA1aLGvQU8hHzhS99WRXRrXFrK7XJSGw3Cgn5tUrhX76oK5jeFbzrss0U5OJKJ40uu9UjwG9R86q2+F3fAUCYHZHq5UEOZ6v6rR3OJTuZAr558ZtZx04iRM+2DLZJVrL2yj6tLko08BGXlGJt+59JIEwXoF5utSwmXgybR4oTzQqCR8+pHe3at2gOe6I7RHjhgvAdqETplmlt/v1uUCxjvOSDtCVxIDdtDxvv3jfQzeTaZehwyYMnFDek0M790zl/xNJURTpzCTsKJkftiXucrQ7YHV9XWXGZgvNGn347KO0jrn9FTqNmg1fjk7YboV/GHlGsNAIeJSkHzynNvS1zvrpeT9bbRDnSqrZ8GFjGyr5tE9gb36jp6FmukyuImgP0bPSBgwcG9yz9t9pRTisLRCd2T2DF5rPNBbBGmcU1ATyYvc7yTn4ACNkc4FOwTra75VtSS9XHxCs/o1/EzXxTTgUYjrYzeM0GvYaQ6XyBLAYL+HPAzMvr1eDEkRhBDjgED9n1520luxuQhoWn2PPKxQkEKoCTpNjygoa99nvjKMGJLwT21HPa6Ysx28QtlDqjI98wpn7aDLRfOX55EFkdVmAuXxhj+cWRmPjWiWaGoH5SGexCSkQW3qjwQTr9ScwgvWc88X104TnHscSnB4NNdQnKra",
"Pu+NTSJqH2mjl4gGi2/Ky+vgLG1gxD0VZqXsZhOtuXQFoF9+eIcNvNfqOQHachmT/YLxfJUHvIFRIb1pB4PuN4bnpalZRwO4K7pp+VIadbGaDF7LcCeYvpKCrJbM+HOcnD7I2KZxrCrQ0nkfS2Hq2f4YqYAuo08YtyqUo+eWEXCAkOL4sPx/LCjlWHFVCJ0geRBMk5UvwcW0kVpId19eYAG/x/NBqKynnxHkgsDsHQGP6dsjTmqmF7U2KB0jMHa3UcrLPXW1JblRnh5nvsfK2WR2Dqv8wlu7RFTlCa0BfVu4WNgrVi6rPfICfKPE3AQtn2CkNiISTJO/Fl49dcnFqXxs4m1UMsqLeEHA+fNxVQb2jX1Uk9O1j8tkFKYIp43ZqGw3iBbDJZeQABefXzQVrnnYkWhjce+eeL9cwmbpkfTygfleLto/1JpiOCY2NAbrkJpIZj1bYyeuT8+z6HSKvvJwA2XMJsjTAKNbyPKNXJHGJhZx8kb1uw5egtuDsoj1dfV8RnDBJbSlEsUxClAKEgPtLA32esIS1OUgmQle6dOJJpcXw8bQAOr7IhzSY496tigiubQUxV1+NY6L5V52vSuKOoYMNLLRzwSZDuHcuajXSS6NqwS8R6F4odHp0qSj4Iw7Kf/T9WcWQS9Gac8cOpGi7/lzt74saTJvDCRFD1+p28zz6IAND1JcurUH7xpf2BkCXzQL+rt2iAYGuysS4Rfz/iA+GWRKkGBPsKfe8DGMWjNmwJFwcBibba+t+ut4VEunw3+d6DhMpW7OKt0yavvJORrQNcUiO7XmOyEStyp5NA/5ZEYG/jjviixOHFu13zkunczIJIBdlUNxclQUj+aE2ZA+vhxVbrCvYGGXaDBkPNVGLEfa2tpfNdGoB47ZgwCFjkswf3M/Hz9nRJ9wKCMTiwqVqG4Kes3yhsiU7r1W8d9m9xV3iZNh4fshLUDdMu+Kp1KbF9ZB6qcimA9RPiyNbP2HMZg8E7jkw7MDJMWXikWjc7wdy4sOe+AnkGv1J7xbvS2y+9FwmYErUF5XLEkz/ZUKAMZok1bU91LjOm399/76MpLhuqAH+265qdV27N5CpYOAtx01NFw/jeYL6dPBh20ef0jXVwMoiL1COn1Eds+jgNlOeprXV0YL1DwKlRDgHqD71nzm+ekqI4ViP8q+rCq8Am7Palv4WmK5+7U0Ga3PvWLtQzFgUy2vfd54vCW2GNbUrJtBAtAhXGtDfIfFeSYKj21jbvdKOxWlZPbHjzMq6xIzepazuQFc6q0uASfyz+sssBao2gBr19YLZcN6f184ucr8RpWmkNYS6NqZP/+tUq35qT5v0ks42tFHZDLJKlODFGHPCr1QRAMzJR7EDh+twA3fi+8sH2ESosMQGTbo51CSuI5O/Wg4EqrDyPJTQEwItxMS/dvHEI/Q9e7r9BlqhbkCpsd8XVcr2uRCMBXRSC52d8mM1HtFo3o+YovG3JSRm2X0Oqg1KuW1+/MlnDxxFf9Thw2ZMNnfZGQ+2uz8TmJicJWY7J0URccvb/IvoV2f2JKWN4o+OnySHp8rfiOG0sgP0sza1RfeJBWUjp7dJn/YI3aZ/DQTsXOx0RvJV5GdlKdyABEG9Qae3FSKlcB27b2YFJlko+7IivzWPubWmJ8ry11yDWoS0ZwggItEqQGOLvM1lCBx9qS8LR+0gvzGlpM/mbnmP9pzNmD0ZkSX5nKpsgxYUgRHviUYXgm2n/VWhDRIdpG80LlyQycAwqTKjPJ7FPUSi0RqzoLbadhs8bgl42s6UK+kvXnEPaIGKikra05P6uQ/XVlJfAxFHoxzd85+1JRMZ2cVjKWzXSb5aPhnPWRkcmKLPZfLGMv2vsK5qqE0yeE5Tg0kBX0bvMN6y6nwgrFGeb+CeGKY+yuLAXxBrTsnig1hHqY7y0hFczW8qB2gUsY+7c7fMkkedz09IaQcHtF+Ur7y+H/3+uSzV1Wg1VSIUCTuh2i53Uu0cbJYQfWmpGIh",
"bArxdjLovgwL7Kuj1cqLzum9/t96/Dx6MR+53le5VDfXzGzefdSx0fBdgiHHuFPj0POk24iLxgn/CY4023ieZw7Srek71kgl0FSI9SNm4c/L5ffHQy1f/YSvOd/sUDiUlP0g9r/ZhKtZIsD7ZOdIPSfYqwm/2aKiHmL9y9okdxkzhw03zL6GLcqipgQ5y2nve8Rh0uuUDtIIV5FJmeITR5FrwKk3JsdHqTR8y0PdOLg2O3HRhP9Ih9+0x4IcJxM1hkVeoA8pt4VUPGQ/cqe8ujwkhvlen9wRmYEsWjahLtP5B5g20BBeEQbcBusdzmEGkfwjgunycswJy5XsUqLXU8qFEVkAcqGATWuz/KDlIJp0SgbQWet1R3V7BmsL41HLulaM5BwZ1YU1jUbuvsUU0f4DvWOI6VnWrWI0iPLJwH+NlVad/kxkC2zhcZroWpvh7XLluEVGx0ERZ/nSQqH8XlkphR1FOjnmX2dWu18m9YjVavs7wJKfSBAHAtOltXsAJFWqWF6LKwqHMDv81cXOcYxlJlQW4TwIrlwb47aFbvWuWd2E7870u/dckKF6eUWJtJID3N5gliaRwKrKEB2WXHudLNEE1AIPYI4plnZDOH2VN3E5rSqSbT7Cl03B9MpIjjGetD34+IdW938tGnoNK4wRAS+sQvLHGmMxEQCu98vB6CUt7QxV8agNvodMpu3O09f+p7fkgkhaikLWOcyssMpVNsIa281MaDZa1t+DjUK8ENZ2w8KyX0n0jIRFxQNSCooeByWc5PGbe/pEHy6gJDqVSmqQ+KJUS84pJSzICZ4+hpw0izqSf5vuUzYFQM9/a3mCtLoNotUxt8s+hN0F66+2sJ6/PnWvGrl5ZqzyXsHP8NjzqIlyeunBUc+k33f3McdCsqtM1tKPDqaVST3IfdKGyl/wfGt2vIakJV2vQywPGh65EKc7/0AfjgHzuOrlTN168YAg06X3sM1COjUL2dnyyUtOAWmrs4XotEJ2tK1qM50WHiDw+geCUR+CrkzwjUNsGfWONTo4oykT5HykFE7EKVocIPzte3B9oPOul5TqQrziO9fnLot3SGjZqJNDxKi1vOOrPDJgMKt8zorUSuUOVeN8AP/ZiEIibmcSa1EXSpytkeP1XI7EQsBxd5hK9L3wy+sNd4iWizC95BjLa9vTw0s0j1HTTpaeOzuzCyGSnQ4WChbO7IiWbkbAh7nQudms+W6chfp7st4trkOG6twLHYKr1iUEeEzHS7/a3S2Dyhu4XwdT0BXcLJe5jZYAn8em3to4Q5SWutt/FFddssvNbeIy/y7eWjt/f7iHeAjjU/mEqTnAN8gtp1HPmMv1Br955tGusz/MCBR7JX6BiC5yg9TK0fdFkueJh+vxdK7Ii4L+cSep8XgxpcJSbbSJdLWOIXV9xPPNS9Iyngoik087FY89QYvGSbR3oLcfJlkBUxYc5hhlNunnwJMqMUGAn2l6Xce7uFe2SxVV02DeNcVggSl7/PBG3RVC0g0y9C+J6jC/uRk5Jt4wqaTjG60rXSH+MsfvMWISaXlYxNjDo1StfQtiNnG+ulx9eSZqnzZjEJxGcE9zsQTG3f38yNvn4xzE2JlfzYAfYt3yQgO8KpNM/jH5FhNI9sgXn0+fOFDGlDHeVxIL3RkiYZ/6GXTbXN/dxoB6RpytY4tZvVNx453YITnlwAaawaDE1oQfg0u3bmaLSVUqyclYZpjVaxlLIGkXnIbmy7RbrBX2yhZXgAo2IRFTdnIEFq1Wdo+xQbD67INaG4FiQ2pO1LyIoEvCT9GdgMQea5d0HelC/yhrduwPBQUc4GgJWSuy5NIOu85cmAK6R1CweIss5AvW+pUj61yFxnxcVqje5Q52GTLVXDvRjr/AM0o4iuv10E5Glaja2kn2HucaxuPY2uBCoNfBm4KSaLRZMdhDRhTZYeRxeJZZ/SWmZhWK4laUkzE71XYBgf7m39dL386xVpcsIyzVGqQb6LSZijTUmpA4",
"EFc+GmlYzkufFtWORugVGL2oVthpPI1wnNcv/T9UqW1GJNbtwK3zuugs4H5VmWJFuMtZMOBEuUeXe/ZWRYfptETe7FVPeQmQPcp3ey3keeKszU1eERFgthzYWmJBa1WZ0xQQCWgV+isxmJX7DKlC6hvcuY3w6IIdpNdOI4Ammayq8RjVSxuLjn8VhL2Uxkk0yUpBBrINmGA+Kcgv7DYO56qORRPQ2N8GqzZdd/fpn4B61nq3Ami1z4l2UIlyht5CoKz7Eg054J/0g9+gBkXQ2tM9UsDLvA+DXX+eECgrnJeYWekCQnB7RkHnXvRgxw5EG3RKRBVxvaAQT4tdF5562rfbfPngh7c+Kp3Pu/rtWxuERlcVVZlTPxewxd4UhCN1iewana4NxKfPK4uZQwuBvKcnHxzwiaLXDg42Rx4AXrgRyF135TvCGDPr+BVVdzKfxgOjAqtv6J33nj/efOs0ouY9hhpHjWSpE6+IUM1WmbtcCZueogDGkraEej3ePq4u4VLk4kJoeolAH9X5yrNhIXPds3RlL3w1/rh8stpX5b7/9V7nPdodVwBO9WYGfOqnzUPKv+yHHtt5u6ffGjdvfxDk7BxkRpPpYEiuf1hye+3UFQGNLgddL2gdpzo5FqukUOgipFJf1omxV6OdmvwThlTEXySDcr4/5/eUBEka34BTUMsoa0x0zXhuXIyX1x0i7BdrqUSN6gggkouVOrUc9eBH/N7ewHVUo/CFPlHqMCTOeROqAUFKkrWHMQsBltZeHUyIwK9g/lrioLeLrLgOk/zgtUlMkdjTweDoaJCH3kaMdWO75G5DZ4cscxcXts5lm6N9pav4sIBNUHpEv5t7ksdPSUnmgsN0tbk17zrVAkNUWyYsc4HWN2BVri0Go368B40VdipHepMmEP5OytDvA6PSkKqb0QMYRnSH9LXNYRle5aR1JSFwrvsXFBTIc4FlbwFmYJp+T7pKSFVlzj0ZJUgLtjZWgg1ajdtkNa7vs9k+7GMBS+AYntZ19h5nuYmrJpvNzEEdksnPb9lVMt57XN+S3OvCyElEshoVyScH5nmjGtDSIPYCXwquHSi5plYQS3PivAHC+CXkJmud3leHCI7N3XPUNYVD9S6ehxCqTuVB7McdCcOFvfpVEsNrzk5zSzn2X7RD8EwNOII+d0zXKSUMcupT6A5v2M2YTskUzFXSUCdC0phbBylPvenSm3iuF8Oc2aEYilzOOgBtrodcbg2OnpoYzDhAKufo6RxHrfnsQT4j/Tp5wTBfQ9lU1m/Xa7QqWBBhei23z6ngtya5lryQfxNwhLBGA5AWdDOQxu9RNfbYoH75sp1gCOvTRt9T5H08RUsnfoER4kbAHuc/H+quXJsztUx+TWxsFjDWtzyfSbQOxXSMSNiqnFkb43wwbdXu2q1bOUVTJ1bqT5+R/ryk50T8fcZFuIqGu+pA8jjkiHD5itxKGVV02706CJPND7ji0pElGZo/q1ZA7HU5uIjGXQpASmdAGSmtz3cW2hoNB/2QqAIuwv5VypKZ1m0rBMWRst8mEjkIaGmCFrUWDqJFZS9Q2VIi7JXkLfQjSgrOszxoEhmnOcUnA46kPM9KTHG/7UbA69vl90H1mLUWuLbaMk9d4lQDWWzmCSCPBpa7fYdhsN3LQnzj/woKzU+HnlGOymAK29JdZmpPGCt5I4OldG/Rzu2/cuB+AbWfbUABAxklqWGPrlgC9pVgB7c9y7IthR07ivZF3KufbDHxZto/Bw2vqCVPk/+dV0ofxeDHykG/BiZQo865N2RXww1RH/9wMeiGSG90u4haXZn4iipu0sdJRTQ3BQ0MwSTZv36625NASXejZaw5mEN2a6sVJUPw/XCKkjsrlQJAklm7pKuYVDlzeAk1pbpeqiTc24l6s41r8XQ8WzhMbAP4QnofKMOp085bmDzFZEsSTpZGXfsu082mzADqcCG+oWVpVWcBZRvmIWA7b1ncBiSMl72YrSvmEnyQoDytwqI2",
"0Oui7TDbPlmvU7iywwPSC3TK15UrNT0aJUct/JHKhpuNCv3x1eD72sd3xtUyKz/z3+x2j4NxQiW0ADDw6/oK/WgKYgyYHMcoHYh6hJKkrxKiXStrMhs9/z7E9rS3qtNgT707zMmks1646m7W92pr/JIMn02wwThcbEEKrxp5w4no0G9o8RwP76JYgXNO9lKx48gcW+3awP8JUFoe+nNnvP5iCfindKc2TPLyxK++vkUnrbT5+Lyvxj1F4Qr1rJWrpCDmWw6JjWETafnxwlPHFjnR6ACsS/eZ0yGBvDpX9VXd65q0fJlQcfFNSsIzlvqSaifrt+4S59yrKdRXH4l/ewVR//Dqgnxuhc0RjR1dU5gVPVRxbazqcCEegPf2eskm8uJmKyN/TEOii/tXcZHDcU4IhIDKHyc2cLip6IwaLyERdDKyW6B/yahGjUt9luAPiAV8hjCxan+y1KU8H8eE8TFWWi3BGFdR00N8TgIeiunH3mR+iq1P/Qx6oiVr0C7PgY/XPsYArnzLJRVdzquMjy/Bo4EXtB/5ekB6e+w2Yd1F6OlpQ++lK/2DFMxcPwpjV1e+EU4+hA9UOMXwFxQNxMTCnMKKGbexim17fW2f9pfbG6SrPfjmBQschB6hckFkHrpKpgM8xthiQ8DeayGkSwqMb8lCCz1hxviuXDV4LN7I/C5/Hsbqcwhfdz2IkAJFpxGO7wri4UXGci7txh5YOzWUJhnseY3k+lD58nO/i4R5XjarClrKMcbIY7lON1Kj8WsyOi7BQwmZ21OQANSm7vK0DzrbCfLltEOUcii6yrjigg6XC7DacEIc6dYBEujnsKEajJFPP/dEK6bX7YDYPnvywVkyxvfHIgWu+gDi8yXYeUYjpNxhrapGNIVFsN0LWous8do4Jx5K1BsllHB2Hegr/Ijx+P2QJfdHrjax/yN3gUYSYhZG8JCBaLMb772XYrxSz/VconwjLjr1g7/iGDQEgtfzuRPTM/BNOaUobDAsuISa6BsAn6Fa1Qvaf5DHuu0eDjfIxxzgUBaVB3/BKjDQ++e4K8/GAqCgVgqDBZojvvcUAZnq6eYu/XKVCSOm6VxH74aHbhXg2NRaXQLKtYn8BDm7OeddjItNDSLnrPdxQnkn/8lvILOjDSXnSNDkn+bD8+D2PhSVRvgofkrSpElGxwXwSHkprdjp15OWatY55AiGGSSojkLu2pZedF6t/WvXA2lUIVgHWAYg6jj15fibpqKxNFdmuUoLokyl+uAGoI9VSM7DKnts1SHBjqxUcP5Qo1b/nQovlH+mEXm7+vhr+6ZB58cFAgoe9m7+TeZnPJ4S5Gve1tSu5WjtpGmXnZ7Gql6StxBVFH51m3UujJuxnF3UoBzEJWkcmqdFaFLFB1DZx+EovCHDYXEuEJ6xdmq5JpBUeewhIANAuJrZMyjvg7PgoplUnFOEy70rPzBkpj8y4NcOFK/OQJGxiDvOz4+KQtb8hA4tl0UpvQvkU1qvOeHXn4Se07bZkVlI/bPdj8++jRbUZcGT3+R8C+FzdlT6QpdPBsFcZRWwUv3qq3yF8oz7L5TH2KLzx4ItFddOojLZnynJRUAtZLCojYThPWBL/jCzvVDQEnVkfeyaeqAqXghfZzeG2u7LHq0GcW+Xo/SR1ReY5ti9f7tjgNabse+ssMsC4YQ105N7DsWU990BoB6dSwrwogpZ7WY5uFR4aQ5VdcELfkbz1YKj2hi1GMPoyljirVkQ2qoh0oGyWX90e038FxY0qMHvNLtXLFu9fnH7YirlntT9ktVkri8yuvss5xTv0wct6H/78G/mUcaNzhp93fdIWqgfjUea2EI9DZOQ1dc1Wladh5Fv/9j8EMBn+fX+MUUj9qSh1nkFBUL9BWl+WQiCVYorm1DpNBsioc6ovBdksm3z+Uex1Ul5LdzVPQONE850XFi85dmaiSNxOB8/VocLhnWI7vQBUfqz7UaLMZBxsdqlwz7cXl4qcuQNCRTpV2Lq2SBM",
"P2wWIi7iBA3koOR2TLr6ka8+xLdIq9nyeM3Nmwl+BGqEKBctWdUqDgjHloa0cBbcChQqc88PiOQftYaoWrLzT627WD+sTqN78nzm01XnrmvS5a8a0G12Fw3wGSuXvUsnSb54D2xhNpaGNqaESro65Vciz8J9CWwVdnBoNqOIR0P9OutwL78klW6HosHyKQxmHucCwkkiHmGfxbuPjUyvFLT+FEC9gtllfu5DaAh1xyGpsi/9cynwUMh7e4v7/wu7DvW2fxVFJovsiPVP7nc9t5iXPYXsOT8WIRX3dKiXAx5oJkGJF1+NFspoQBuRbl2FsgV3pM50mFUU6TOJmqsp3izwbM7K/3RCPbwHiAi3StJiS/5w/SYnxbht7JGgjhKQuS1POVCCPCmp0szkHJaAtvdV2tvlws+eSVGpUKfr/qgRJufaWZz2eoL9ySPs7HR4bFzzh9le/C1VetciJ9J4sRBKe9/duixIes0O1XPWPv10CKIAGgf3Fnd8cViXMh7ieLbBx2V6aanYYqVusJad9tSA+lITnc1L5S+h+kcksxxVH/tCKe8y1r7X+q/r2vZ8OYrGLUwJfDA6ybeecwsVbjJpn9RKBzBGsdVkvnyEauRT3KYSMgBr+kU9lpvUZqp4BAjxeLc307toMoJ0/tFdJMALzwvYY5AbKtVJgn1Wzb0bZw2WYv3u6VVElLLgL//hP1UJPSolBOdL3HIKUvHrxheVrxwhazBoCiAKTDp3z3vE8LPLJ/F8lo/v/0UjM5vharZKvPE2HioffrhSbdhbu1YlhT20e05x5yY8fbqHThzbIq+qg8mb1c+idmASOHtA2eo6LPr6L4fSs70G9HhAzz6FIJewYsHeJrFs/rIQvCbWyEsY/dynTobHnXPF3cTmAc5oiqIL5MCBguYqK+GwhoZttM5E6VcyRojnDAFTVMOgAqbwetj6BKFwkPsVYoQ2Loayx+S6e5RDHKYODU3kMtC2vWQ/WhRu6AoqkXcBXCghH0Jd0PIGDYoIcBvUbyyCiRh/qSLe9nG3Sb4378P1Vyqve+tJV0MFcpo5bvc4gconzg+a3kH7rQq/TN8k9CG/vEcHorwP+6618YA6rAQrv5jRXV8gCrAO9f8QNjvkRCjn6nrKUDR0CW237fyJhVadz73LJ7izvH7HBTkwxf5BhV/sNOz/MjvRbIbVfKQaEchphmkHWCa33/S9Xx00LkHHSRBc8r8GdVpJE+rAT2ivX9w98Z+9O0B2wLVCiQ2BDYoAnUrflpruo48IGbF7a3RqKBW1o+F6aVrubaGprlY+Hcoq5rKxd1rRU/eulJ94jFsHu0r94hZsQnwuSD9rrFOMEP08WKP3B4pjqEd1USacjOqQL2yg6X/yB0zibMyC2I/EXf5gGsrC8NY8XCjbfByiKjNAq02Fvrth99IAmIoLDR+8FmQKEs5h4b6X9LNb0olPY1kcc0cWMqQPhCg7mZ8KU9Zl59ZMpdEKDNLq9ySk5jFDqMZXAQ2VQsXQo/vwCONuHFRprnbWirva0UvpnyjQ4x4+irYueLUcXLdNuREKH7dv9Jc1sO8agVFejJeoSJyy3k39P4WQeglR8rGUE+fY+nxdPPiUwt26XVVCNMjIvJZTC5qvpm+7yHyjNK1j0Q4cl+XYL0sVXdjtVGI+aFGNmzioR3UHmkBdhRNwHIFB0e7qtkYpZMk7VFigi/bpsNce/WNF+TmIuO9SfpsuAOtc1/dYGm8gGWxJRSmMuxXkY9yemD0RpSzwN6JoyjEG7rz04jg9AnOn6azAcCph1RaO0ah7xRhqjCICxlW7G4T8wRail8KBSEf7gOlB/CBqrRgfrla5j9+02sYxntUA8Fzb0siJDZxof9D9U0RRaNo7U9SBZx1cSGc7hw/1/BofXFEVLNMo5AXfLs097N1Puiur8XoBh7B3gzIHdujsovTKDf2PoFVFi2wddmHMFGHSO3qb/eI7w3twB7/JJWFfUeEJGRcVcXydXwgD4QbR",
"AJt+eYcpnsklosL7uslnoUZFpcX4HW8ZafXGWKNSgU58RY99mnqIkvxcUndDKgqX4K6CqiJz3o7LsyWCOaYG5cXMN7HFl6tfR+sKEyzdI5Z/nkCPDr+SW/ogxkISxdLdpjY6hOliaLM7Ow6TwBYWdAiderfWlhIbO9BjtePLbNUW9m5sl39S+tDfZfcnL/bp48u1v0n4zSfVC/TqHyhX8U4zYsxtlD8nHobnvs3beVruXA0GQeyxzbcZ29uBk8bMm7i1fMQR1OzxLAkxp9LXpkowGkWBNXAbGU/lryYH1OIc/kYqO3a74066kfw2JLgrbPFd+ChcoQvtInRIGRT7T220rVR942RVgC14sEgS8xUa5HHv5y/jzttAiQnjPEkIzmP8yEdloEIFQO8sGxSxeTggwQ+/PmxspNexsYIWIyvf/5uXbi5UHC2CUScTtuhH3XLmpbugosOUcYWXrnqx6sDsNv4C+0OfhOTOQnssbl7wEwTXWM4xMltGyAGYKtDpmoTPO1t/mB5IwudNJ+DJO4EFL07zpNB4fkpt/G5eGRQ1y1DFz7qlqcUuIZqFJ2wT/sP6jyIk5fD0QlG/OZU2HM5Ad3kdTA6BNRK9y8uk4VCu3/p/+LQgDte5Mrt2BCdSoUDDka4UG5YLb7SUfM6VISVP2iZ9IVKhAn5p7AMgqg85wpozcfC8SlBXRAPqKuUzFhtQIS8qiStRopmZOZhRwQtmCx1unsI85srnaE10mV5LfypHZyhM64jtyQ85Tucj6kB5ELdyuB2vNeuSZrQQtRGXRovHysLrRBSug1pGiS779VNgGnUb5ti3+Xwv2T6XHwTzFmAl84U4ycXd44sw7rzXd0M/osH3FgfrXj+VvJqX2d6ss7aabo/ozGesXOuc17CYdC28bGUhUssbAF6w2FKEBXwRym//RuqG/FFXdOUOEV3Kb1qw3vtzilpb8BxyFcv0UcDN1w2iOBF52V+RHCJ5sLgs6ghC0KPfxCcVN/ttm/HFyTikjR/HCwiSHx/xs8Hl7IscoIajud50qsJ8kaKGMFaq2xUltNPBAaXNk26DDxdiZa8yMX8eG44/TxVLJ747zEOQOrVBMcN4vF0uG5Da0NrxMBChbyq2315bXxJWWhsvqYKz1hlhy5CGhnsWiEpvp9l+SSTdZMCeCDiyoDrqSIzy+9aYVUL8laUPDcYhovQl8QC10cX1kfIP6kv6Jew2oJKSDiC/cC3zl8VVGy4C7Eyk27yOA9c0tmyMR6ntogbN3tJcKNkAlJyo5KVrOC6/xS5WOoZhtYJ/2rjQR8JgkxFIRenR9VolgwHqvxAsA4R9ipqGAmTeHPseOAcsNC8YCKmznTJ5Kjjdek+tMsEay7W1WL2ezNMajwqCIqjXHPOH9uns4uBcmH2Fs5mCz9G8KUV9eVCUuzrn97JIjiDbITVgOgpROcX9ufFc0gKjP0IkJ3tOp9b0u79lLgeVjGjlpP/GO5Hvt2kXnzoHL1bkRtQhmtXRUo9rhXmTYkTFISQKoZxF+8jJv0Of7GKEtjjCR1J6avdPjck3JXRnZKP/n9F0RMw+BJZqz28Mrvwz7Zh4S2il2DILP08RCjugUMfkzTG/LnNvK1na1Vwth97s/lVIfGj8VIer+A9NHOsqttnL5JmrWjozM7Ad0OzxVg16tXqfJC0/YD4q/Cy1u1ftQyyRF44B7SGXatjz7dyQMALv9fyEGK94w6bNTgpuwiCIcCrtBOyCIzR+jrgrm+dkt9K8+MUQ/hK/lb7A+Mi8Sw1RsuOULjafD8KswSD1f98RcTS+OjA27umyExCojL8R6VmPUY29flap9yMf3sP2RZEZr/KYVYmEzSf5hYceULqVIDye5VLV8oDrL/IznF6WSGM0roCSJ61929MiA1B/yhXU3dp0shjUkZn5RgeBeIJfj+m1LqCoPhW2OTHK/hK6Y8LmB//JeOLTSPseT4Cl3t22ngUdqxLRQqUUZQ+gFFEL2K0rOxHtfdpP",
"BqqFFi5D3+bl3GCp+1R9ErVwGK3H3whbT+od7B+7RGX1FDvG2ZE8w8RUYGYGS/Sd7LSUWYZ24bF760DkQfhHFYj/AYu85iRqoocerc7De+m8UfsDnwF2CkFvD57HMHgCPzZgjlQG92uGJooYcY/QO4OntgYUlnBP3IwntpilbfuqRsEF0N+qSzZwfGslPANYNFZ3dsf/0ouCa1slKm5bXZDxZmoyfRlmn8Voe6wNqS8Ylc9da042PTud+8LnBygRuJJBfq1QVs8Ku6i8SVCMgqY7UY3hoqkDpCN5zGgfbEBsuBzI+rSIUO3iPIHPjcKQcBBmPqyZadzgMf7g8PlQ0m4XUpXWXIw9GSIrT9Jhr9V8qbPRYEj9tDRd6aiTVd+4sy0BoR2GMjseCUjQTJ9fnXKkyQsbvOkbWww0Sd0LC4Pf/TdiM9x5sSwLGTmNLsOn3NblxfiaKswlwDpmkSNwrjoeu8VxdyxfMhbO9i3Di04si2K0hHJYQF9dN5FkQtX+9Ef4Emhk+efPDb+wO091Wprc2Kp14aI9YdPNVMHXKxQgvCHI265dqwoZh17MFxd59INopmRaeKMEssGGv3N4llQsZAF5wQPg45JeqUdqMk1c1OX5EiE3I/UBasJKPRB1gLJmJA7/UDmAFxaphh4DtFxxy6KFSp+ZuWgLS/26LhCf19htRa9MsSACfVxUC1Fv8ba+RJB0vmGoys3z5g4KvOyY1Hory3M5Qhaet2U+KP67Xx5GefEMnZGO2itfaeOuZgRZpWZV2Ck4ChzZQpJ9za/6R9huFjN4cpv0MqbvRCNaO0tEtmq7pb5JfIS45oY8zGW95OGuYZssVAgnq7e/GzD0zRGsFRb0s1Z38IP2nyrVuay2tztKCyGbpsCCUxDY1yaKyhQxgMCMDMWyAnILlhq34NWVhlthSTZc4kZwz3Ms5g0e6vTOQmtsT+qAzuva/ZHaJEFh66k7+MESAdwuXWkBIUiN/GEnCf1pcKr1czM9Ke3lx+1WhYQvsGfd1XsRE021NU54yVXJ3A/NaFESuk5JuVuRqrW+gd0c/dc4o2JMCigHoCmLD9J3Tj//XdLEZRIc7kg27eSRDQ4upxGsHqtjIuEIgzCWgoMZdzrdh543QFCLeUkPGsZmD0CqpNpxfSyMHshzgDoOT+iVnmQrazxnpMlF7zI0/OrKZKjdjqlAu/8JHxQXO6OQ17HfUfTfk5yLvRETBxwgF3So4M7XKD180eqy37d2+/ECTVoN6IODs+lWffyi4Q35L3c1YumwKmjasAGE17fYrp4Q1uGfKFL9OVNHdBEqvLei7wpbnsaPNXld4MiF5SErug2iOWfS9wY9QSGrTT1M0d+MO8MmcPnFp1KkszcbADt89VgCktWdFXNfWpCAgaf0ZfQLxAKlMBi6CjCaH/qqy3Cz5TGUWFHFk2SPa3cEc9YZHT32cdf414300eSOQeaN+geoLTQWRAcEnNXcuQ5AGzRTWEJsmgl8WoEHW7lYue/1KbvUM/hDNeJpPHswXsjM7WshWG+IftIG52Uh7Irhc1o8QPsmUuFT1ylhvoaQ7giwzC+Ry2UmftzUQsEVBS8NwyHU8gSQqtnIuH2PHFMhSApNxyFOJ03SKjAxOyeZ6qACMNuO+xyQfsaLi+VYfH2lbJWVfWxzRAfBQRD5Ke84sfT7W9LPhEAmLZVuDUCIOoQdsxcWmwsgT0wXXvGj/BTwjdC6VkXtpMVAKdA33vdsKvRU95wWBFRP+pZgYfwZGDM6kM8lwdaxQwfZhjqGQDM/1w3dRpg12X9DpWD9FLIBEtqIE9NON8UphQKj2dv5C8Nn6INXypGtrN5gBjYidhafLb/ebpT79t5bzBcmkAumyuADBxMdJQyd3T77gzlPPeXanKgV66tsqkpSV4vKp5B36EVznHZ/Jhm1xAmbSvipqCoulen39Ukf50PdDAU3ih/+8gdLOyhx/x+Mcgon7WMuONg9mw+IGtttE0K9m7VVffId",
"c/ytNduDoyZGqTQ9JApAW6fCVcOWa2pazebNa8rk84ripraJW68u51elQqCbKgEDb269LAO1cvYkRblwQdn/sIosRuUTmvqrWyfMTqjltpM7fsjd2PtBd2Fz9CWKgERfMCVLpokKTMpFqPUWyl5ae+n9GGgDsQPrgeb/UXzhd6r9wTbw3HgMWnf2daUD/iMqeCzZl0wBfzPw6cKMX30C3LMHcSdHHUJCKXu/nI94s0KROYu8XkTrH5lnfdMpf8PLdb7nCXaxfyWik46uVLENYddi/X21irKM/8vuWkCfMLsk3CeCIfZ76WCuAblbi3dsnHUUoaEHWoDIBSIo8pWwTwCv4A07CQwgswlD2r2Tymdtll5ibowohnkmhoNAntNJQCfeY3vbuAgBNzArf8W6rfZ9BP8MF7hdtJAaN2r86U/NH3OQlidqOOsNJVLjEQw3H8rOxgr26QjIUpVUrD/DAfb3S2bfH/8pLlOdXGzvoiKp773ztj16uv4oj/irX2+NikbMGjwUJ+m9RJasMb7lkoM+LXHu8XaFXlk2j1gsq/ZWHzcQFAgta8THRa5p/4RT9zYSxEfsf6ZJUyJaI38UqKqwvMnROW+aSsoj6zWJmLuCYKT0V+/8+CFZTrXi2EMPpj+4PY202VeWrSmYeMClnoixBJcb0pQVWvS1q5X6aozm8H+c8ASoJHD1B+6uIgVdZuMfwUHVghntthhFKeKm16XeUK/JaVEeaE59X6D/Z5V1ciqDvweqNP7ImS5qLlY9sEiB2db/JU6cshoZwh/uJ11sEgGZhQpysONrIIpK5MKTY5XMZkf03SgHUovXUxIizAouE0GMjQUP775Y8WeXR4Yna5BJvR5IaRTpOkaPimEquCZvFiEWynf347fvp2gMSKuzKuq0ojMgPmvLufQGHAxXxLAcyPv1fjkyCtz0SiiLjG327HfyxeLEtPw43XF+cBLYgIHoZVK2GVLye0qUS42SQh4WSAOR3RIJBjqR8sVagdY39yhhEHxdqATO9J/aE1x9+tNhEPh1lYMnalwmY8e7ln70kj0vfvtK/8I57SSXHxtAbYfPmfgJgLUTw317mTxAxzUCbPrFRE2wtLBk0GiygcSJNu1yeXwNLBcVxy9tEF2dOLE5xLzNu/Fq+x0qUDE/FXHSj2U+a4taSaTZi58aWx505YSf22HVCu0nNnX68yNayrEDhr5zZFn6Onowt3HStGXGO0CET5dx1al9NUOjjRoC7Imm/UYIlcAK0OtfcXqm5nVCXEB8rC7HvvGqyBIZCPSOjcVUFx/AZRVwbBDjPfFJ69UZlRu08Jkh9hj/UBvpmvWGcmo+Qu3orBsNbyper7DCnWIVvv9m2U/c3b7bRY+umQjlcSoN9MGnfvrytNe9Z8gf8lE3fa8ksWQa6rSBPcrKQEo+HQENS8F6AR5BNR9IEezYAlkuhwqbRTgjIoIcZZX3vU62VHXhdrIV2X5TdY5WFS7OMyHjK/w/yb06ljSfTpwNQBE2bw5oz+PsvqPFSFGIwaTkPj/xpkeULdgLGd+uIBj+1siE5UAaQ5WA5n4FZtyX596QjB45kzzEnn7yXyLmzczsnqlIfltx+Gup38vxzXBKOswwgP2K1F5/swTqu+vAZ273dIz+A13X1GDF0nSrbEokjOzeIcSBzzJfOyYD0sYcMLD0Bj4sPZ4Bl5f215Al9km09pTduWKr0KA01YxC/ybb5HME1gxUocLdjoitWf+3owv0LB/3xmYQoXjox2R5rCwdEAN2bFQmmnDv0Zbym8lQBQ7bjswkaKHoWeFcH+sVScf9Xud0W2N6l0XU0TtuJePkXUqtCQvFDhKQGq7RN65QhA4YtvMf02++a0Yqocc88wdGMoW2xfcJ8kp10VQaTduiK8ydl8Qu+uOXk9pK72rBhQsLVflocGACnBPJZz2rp977DR2nxBK9xFk9OBR5D8O0JHnFsiksm0p3PEGe75/xLC1Oz/3N6GtLODDNGz4xkLff",
"BJu1zjBh+YFHDhN51mO+fcR3BPozI5SQsOl8b5HyyMZi/iqfmcZM3yB4aluMtQP9kdVr/q+OGhmGA/ntqb0tjgGGYH+hnJh49t650iz3nyhi49GujTSulXVUXNf2Jz4l2l9Bw8VqhgDoaI8Lno4tnHdth+TI7gG5u8SD6xwv2AUi/yjP5PLNLvx2qsZIgDVLQ/0b5JF3++tKQVG9JKGl8njAUWMN9UQvLUSMrCk+5+/J/LJxBUip/tx8JXlZaqwZ+1ykGVdJrDbAGy5IKt6ZhWKboZmD4B07HksUiGFmivpWwVThWbVQoj4EjKLgF2lk2bUA1pIRBCcR797qyPA6Uclwr0JJJjU7v+TjLBeuWpa7r3SaycBgh4obih31KeCUFsvHnYrPi8Q7yPVyOyBuyNPOdcH1IOIAEpIvL3dXEPtZZE3L5vk9K3cIVfrmSGSEgIr2fpaFvkOO6VvJi/kYb9FxCKSUKoYEVsju6pxYyNR6gH9xfgFNF0XICb1Au1D0cE9gEIL5G0GAXiY4P6GyR7trO0thf45JmxyT9r7UMyBmwgNkCLUkkUvxHAPNNDSRH4mylZ9wjq+BhYo2noO2XuLekcj+xVYVpqEZyhd1s7qpygcoboB4TgQt20CuhJdbpwKOAzVX2MR04YSby4GSRS6SWWRJdqdw94vNBxO8awN6SiaceX8pnjPK89/cr+zKMV5+nv9ECl7u2dc6B4MyrmV6BuUfbH39xPlkWJ7gxhfKD0IhL1LyWSbQYJrKx0W/od3W1R8SenWrJW96oJKGlEpabe+vlCThe4dhKRmffltANRQrBzHMM36f/0Vce30UhUFxuJ3ytEDy+8WRRhDyna0r8NJripK+eF4uQo1ptpXggDlyChcZBu3jS+T51vFrZ7YJtibQfC0XghvaPsn9zQabY2FHSsD4QWliYzV8kY2OkqSLVJ2jsnGx8BTrf5cwTwu2vWn+V1Fk+fTVfyJ++E1qKE7WNSLQzK9PprZKlblOUcLg+zKVN/kEGyySpLhOPwGTZqDQlOoV6t+Mud7yRpjV3U9Fip7UGlf4fYt9teDQ7eybArp980obg7rPK3HRLKFDEtmu2QJaYzoSQGOXFGgRVsoBgwTS4p0BsCiA8+ZObz5K0/AO/g08KuaU1upHZDxurCTYe8ZstcMEWPalwlDe3tVQ+HgHvD6F1NwsxFqP8w0tK1uY1ycqsAgr+ecjPjBheQthqqcRv+YMXKCikvQqdDEGrDJH8pypDR4IGZXkDJv9hUJv82e7AufszOUG3VR8RrrEyhfaiJyn3y3oDLxrOjXdCaWYdzNahpb4k4Tyx/SWOj8AMbeWnGrBSJbxf+mfyklEi6D93FTPbHB1SLRZQw26eyl9skp8IqiZc/sQwoB+ARWvMyK9bp4pm2PKHYbL/u1uyMM6NfV6+B3KnYPfTOu+7HPc/7DiEU08b3tAMFkBFBfstvWyAKvN4SbEzZSZBhP5tNveBCxCk9XUyMJRoSVdUIM92Hh9xPzQ3OBDdyi614TiM5APHvRxGNGE2EM4H3VzEx8YP9XRAWlMfZqp7HGbFBbz4AFRCCaPsFkAYMSvMHszWOPMUDUlkWY+aBmycb0sLZg3SJAGoqBo3M6jihdEkyzprLZU7+KGJhEzqH+tP3P4zKJg+NZ9mfkV3UGG0r2vtv4MhqTLlcECvBFfrmO8MSvA7ifIuWXVZULT06Q17Jnmedq/9zVac29/RCwetx8HX1sbbxszjFvMH2MYmLVl8c3YONiKvR/tbwaINge5b9FNvE2pCvxOFXbuws8U3qx8sCFgcB6stZl3kNSe0kEMUV5Zzt53YegHvW+5dB9QZvcNrW4YIen2scoxdmtoRye/v6roxXrtQ6GrycdUmb0bYzH+8ayhqbNbYYJKKa4q2Xy5jwBfMSkChOjgPqhjPshKZ94cFBixtNGyU+qy8IeEi4cmNZVUDS49WVoMuksfLY5iWYu6HyEXqPS35Lysk2NwTFskm7CW",
"S6yjjBUwBOweZNNjOnYfAN84GWEJvL6jss7zik67i7FQe54Ep9cNluahe21xyyPUCVfLdJRx5JyeGNY+yERDeOk4kJVNTWMXAfJ7qV6vgCyDuczZekSklUMJZyx5pEPyRkQU8wBCGuCDn35gOcL7FvNhRQkHN/twv01jSuBbCjn8Exy+tFtY3qC7K9DAaO7OhJxHMO2nDyi0cBfs677FOJsAE4mk+Pl9r3ENzlPj3rYoXbOKXElbK/XhuoayX2c6TqSxH3YRqLm4C8p44z5FfcMjNaK1Bb3+NXMs81IedYkJGs4AKtfsSV9fBUC8NuYMqr/Jc4/tPTrvA/5Qk2hc1dfWaFOK+PTy6mKA20E4vSdp6RBv9EF/JOOcNX1Q7k+dEBJ/cZk5eYnKKSQhSAPVNqlYYyxTJTzyNv03lyChk4Uf8RVoh8KLSPNZqatiOWZfLNQoXXFrzMBh6LEhwSytAX7U6yxx3TGE7s9g06l00phg2I82/ciTao+ffiOD1j6o9xq6Gj8nE3bWNbJModW098BNAoKYSqxfrEbnBGPv5X3cxztiRl7VYBQqyR3jZanbGJPuQKUFY1iMBmfLd4l7ZiEtd6+hFs6Fgw83sL2bckBvYrJ0HBaXBahTDgI6JvAvMutvlvm2ME+FKeX5H0tT5FgE+GcSELfVpFRTAuUHBiUFEzoDLRZZkXYk4gy3PTt+tNqPLOt8f+zSLu4wx68gUaeEgbgFUQ0Gg8CE/0hHNPFwb/MajDCDi5tOW+Wx3pHcKeq2F2ozKAZ9tGWZ28Pntc4xDBEWQDxVX7BriP+nzPtGDrtX14N6ZRi+CYo+Gvkp2O8hTg7xkB8HF/cW6pXmoCei9lr4EStzCbulXSVr9IWJ83PfUMFuUjynSwQzT/ChriIMr3AhxNAVK08UHLzBDYaTfEPgCFRtcWzbBl7G+x4MfvCGgKkWT1QX5WOaUJDT9yPb3wDUtlBf1jIFraL37UZ3ggH+1s00CVC1H3gjg+GbZUUsWg085vksQviTmSfyN8HNVkRHbT+aKzEicBJCq464Dir3ineZkcqTdACddTfD6fcv5PkpIsHnuYQPs7KC991o6IEB1qjqXDFiBVhy0lU2RxK4llf8UZb5r7cnnhJmxGdFlOU0s61QAMJO+cfAG4Iu2ORsj45depZV1KEEpLQbIC90nKvJHccK+U2P+318Cs3VGZ31xmPid2lvGAQ2Os/iFlbdAs3ZtLfhXa1P3eSxLoBi6I87RBjhGiGWllIarKsFu/2RgmurUYeKhIP9CHX2pvDOQHX1p/msDySho0wpYzAFouZP2T6kd+nPgvERAwXRNeZS9xC0knD4KkWIsfmmASsDXA5DkD5HCzXrKFexGu50LGLmYj5M5RofUdoeObEN9PBWmfRnf1PoyL5Mz5d8tlS9pGWy7+YRC+zvU2kFLoZb08flyslKXJbw5cmR7mHuXZp2tXDlx7RmOe6PnAxfOX53ejGlE/VIU2/fLAEIr8lZMzHUN5xQs8MJmUc29AKdv4aNvfqSPu18WyKxwdp1NNAC7VFUnAtmGPFxwVU3/tNy+aVs1kuuUYgCcIeSfrWzt93GL+eSY1dFPKOfaOYAyXqQevSHXAmJZP4L4BZLxWKurLQC1h5Q8uBwaPzka2aCIpNoZbkmAh2VyKTPGVBzvqGPVfX8mUfuJf++5OZ9U0YfMTnr2h1omMBs+9PCOqCOt6hUAhwV187oSNvxFq9jEWaJxL4DNX9RGSsMLeXlXF79XBzwyFBDIKNP7TPreMVez/gw6a4tPzGwrtfB+kmbNaQGUIswOrBOOAQQE8NH4k/EMBDkvTK0O/PeH2l+q4Xed+UYVzFj9D0BbbR6QN4MKGRETs9y1nMDf9d8f7rKfo/j1EkrVmZOtnIr9YN2FMsDmeTfm/xQM4LhE2Vh3G6Tf/7dI6oszkPTc9n8EcLWQfdpzzj82aV6PRYm4uJ6OVGEsnKZnX3pev217CMNvxC/i5ILK5v6EO25",
"96IYuDEMbzwII+FNL5U876qPgsp8SMCAJFcW4R++elrCA4g9T3h7lrEkWaLIXxuyUjw8uyBYE+6uBWMDDR/FPVFUwQHIF4CvNmDFcQki/42vFyg2mqwyKOScplf1fNuYccokPVPOYDMavZWrjIIxzBc0kJekSIwUNu5MaawKmFeDS6cAOqNctkmFxfTUmT3xBzsb+7+BsG+1DMTBK4x2G3CsNvV0VNZPfWXQEV89pCyJTwderN5SAkSS8CJ+9VsXLwd5eiJ3U+YO3ol7bjA/q0UO21ffAqm49asBJzyYCoqiO0zqMke0etKjrGgHj5Chkn8F9cxPJbcYAlIcFKmr+lpqw1UP/AHkLHOQpa8GRr62RUNp58vaRp23U5f+9ogV4DB31qti0AyH2H1J5Frc/RtiUvZ9YW8uFN3Z76L7thx70xtvDTZit9G23JZt9nS1bIyxRmwwh1b6yrQPsxfXl8v1VmkaS+SQVNCbRLjB+xIoY5F7F9DJTdCfDSWPi9hPq6GOHk/k47zUSDxi0Xw2Z4FLxaxbhT7baLovqdRRqT2bR/nHoWyjTWBPAF9Lck/a6v1wYYXmDF+mbNRQARPojP8BSCuSqEZJdvByNflVZ2s/9esrS3qQs8Knoxe7rc1tPKyTGtTcnpY8PDR4fzx8Eba3uPg2j079HE/ixGzelYP7pDtZjzil9g3dpcqgRxMI4/HqFGgjcPMwLKa51oFMxZafur30RFjQQvBN7f8nLpBUMEgZDaxs0ilJo1JlpMxGIJopfOhil5DPmfqGXCpMv4eyWKblqMN4+b0uGQSUXsfJPez2MMTvcVOB0UKItYEJPa/egdFD2crEf3h4yLFsxscd/TSklMhcZLXskdg89ajO8Qa1d1/avo6mHBM5jbayHdHURvasn8OfVzllHP7CVqw2JaiBIOfsf/IvW/1yelMrjeqtLw2L+EamMCgoydL3FRsXAUNfp1UPbwJgsP15LHpEsimSaBT/5UF99iCcYLWq+ohjXcgFkct06lxmIfgJb/Sm6ibfn+Ve3jcV7FIQR7PbeaQJ9lITk/nsAur9I1/AGFxhv1Ij1hDBtUX19/zoReCvKqq7VquX3mjIoqLOHwVLsQCppem3LQjw/HNz6EoeaQ8lsxKX0nUF2eyo6A18BiPQliGJ65zbXJjY7Q2RFaKFoPdc4Gf2+V01Vk7FMsYIWmVo1dBmI9jEzGCc+ybeSz0D4uVs25rRF+L/xWDc0q2QByHfc1d7DBIUklAfVwdekS9td9V+saO7ZXDsOStkXCWSsW3FaTC1JlRgv9UADsvIhNVJsbdZ4LRcy4CFba3LaSka+BosyfMWCy/bhaZm0YJW3DibJnFaPOnO7M3WNUWg3IcycQuHlQ58mdftapbaHz+0eCTu2P91uPj/MsEHulllRFgIp56H26j5XHMMwwJUlWoFQ62/fkT3U/lMxDLI+wSPXvFu/Zlj9GrsEZDL8sLq9G87PnGjFiX1gS83+q6S6SXy6l2PGaumKgqi9BqoE2+Ubj/7sqj8W4xYW8jMHcgW9vdK+nJkaX/1hdPvEn3RgNBgTPq15PQwEr8DJABuCyh8XkxgsSvcE/NfstVM7PsnNc1rC9Xu5HqzhfI3POYOqH1ePV/vOapDAcxkLI2aVxGHEIF3L/8HBhenWzIEZraQx1BljE54v2VCQmFKxXK/idUjsuglhFDbCATnWqnA4tQTKheAzziB+C3EkPNc9cp2uyptdFTMhuZcjOq/Y+bhrDFyBjfKOLfDwbJKuzkyUloXuHB2kdkR+lI2seQugIpI+5tccAtzgNxYCurYqdJ4y8p5q7KzARIssx+ALA1a4fBAJxohEp/nWllF8nhaHvwbWA/8ROzg550H/B3vlGDRv9GPztBKUnwm6oj5XxIJqtvduToWWAnpeWuHZAyYS7e0GqCHE8nSocvhXagnOlMBPgQC93zvYKECIvaXHlsfXhWUf8LhMn43BLZQNz558xO3ridFFQb62S7G",
"xF8nPq8P2YI5qX6Bw4pAvjfY8l6njUStsPfiLeMID816b6SN1+fxuD0DLiWzOKGUFTXLueJW5e0pyw80PXtQdQ/iSmTMY2qG81lZZkKT/Nb7MNL6oc/TBgzObR0bIW181lJFgh3iEOTbEUchpc2hQ1pl66zwJuwqo4ei9OuqBNQEn/uZ1EinfkcFlkBKn9AQ93BicUfDhvLkm6DDC4KepNxaA+AGiZ+lDlbsYgZ0pWbGQTb6mS4rg8oRi+Q0miOUMRHC25kk5aN2qVDGa0XrzxthxGhUSe5VOKuW62andZPeCRyDq57GMj80T3SpL43TgSb4wuHYBRgdmmEx4tKGHPO1TPLpmjykklSlkplBQJ46sdQB5pDQeFw8qWBJuLt/6pAOVx/FCQX/pnm3OuX23qJTT+qZYoTneR8Nvx0msN2xAUeKHU/qkwtwrwEFo/aMz9BELJnAbKaMS3U3jESctbf2HLbcdPF3lKov5OyQ7/Qx/ccLcaTDkKpSWGZeZPPTqkb4ewtyI0Fwb1AXHOcbP456iO+AdG1MnYoZECATyG5mvkwNKuXzxvo+qREvJ4q8JNaB11w4WCt/S+ruxMw/muxzQ6BOBpmF9Aeiie0JtRqoxHaNehb4SQ2fZQXv3YFDK7/5q5nWPS12L5vUpNhMVucTGbXRr7hivpNXThPzVjJIxQmG+3y01u9PmblQlhcEJz6yg1YWtpv4LADUha2dgYavu2fPo1cVyCtbnccGtYoyicwFpiw1z6nm/4PE36eXtSMBxZ6tNVShpvFyd95kfS/76vDa12qfojt2TeCwoy2ojvHj0k3NRjeBrkSUt3qKpIoXHZIf5ERjx1kYxgq1orPosuHH5gVe4oSEMVoDJ014Vr3mms7sgmV/qfRe4rIhbByokPO1uO8GtkECJ8UyKZZLcMWvT9zbDmMA8Wcj8dp2pe4V2RXoRd3zCAtmjYfUIgYmNiK+sLRymbaBJ/5hmxYnxrP7b7+3z+YPK9yvre3cvKm5Z5J4E9M9rkiRrsqlWU4hv7/NEx7ZNGNCRMjkLV/51+gMbIs+91iLj5pTUVZKtC56SIGymntFIr+Sm2rpFL/dcvl8I8aQMzPil4cD0CCl+2d2NICkiMNTGhGi0VZD1Gj4ISb0/XWs4w++rb59nrT6zm5AAiDxybVFdyF9rOaP2hkE5gA4kpPuKESnreEtfBVdxJjfgmSusv4N3VknpwOqmZbuxFsgkTZhYOZ8+30GVZ2OnQmBN/F66OYitkxGAHQ83YUurT0obcOMwoASRZcn5sOxuShZvoezTBtZvOq6rQHO2l+dlJVpmxyJWsJM9yhgjtRxyRXJ10mqZU70TBGgkvlqNcIaKVdNMkeqlkZwFQmxHkuQPIBVvd7eYBDuV8kac8xwW07KJdGsuDRFc/BLV5hH0F0Jge3m1R9Q/0/ev/OE7xXXCcz/n/SlWFtkE0ZnoM8IYTsNkiayudzE30Va5Aue0R2w6VF11J9cBEnudchsu5WwWfAhfZm5hHDbsUXLmtsWtr8l0NM7oHd+FO6UgaqyTYsZL9GPyiTGJJd5PGhAxZzPGDZ7doBpShhu16CeZPaY9l8gCLqa+iRxQTxDlVxEnnZHYB0UDszvpcBxawG2QgPN/rVpcai6u8iu9S9pd5PAu2uudcrICuWIssW0ExQ6MRAukbsa2MSNSHce+uurv14dRtnNuGjZJQeN0saK6/qjyvcIB2XMIPC41QtlQayknivYGa+bzt+bXTc251R4N+d/Rh32cRyAPXX5UKwFgG5Bh44hdbIZLK98zoogRDDZQ/0jx+NxHL7DwvMq0pTqB5Frj9ARVuXsHtbH2vpgLp7TyazgyoFJ36xeRWv/g/4a0BzgsUs64wbm9JAMLPQJFbGwp17pWtR4cQiUPSH4/j+toNloDL/QdI9vRO33oX3v82oHMWcjtsgCTtTGQrJ/ox7sdBj4A/IUhDWVP8za98S2IJcwp/duL0O8D3JA0Z15IPVm38Be",
"rUZNPy6LbRKeYxCtvh6RIpTWlqxxpzClNE45TpcNq6Pp/9B/rzDNaOtL64SITMh6XHluMgv0+ynVolcD8YAw5TUot0zF4HuFJ8bovgmMQhzmp4h76zOYFoW+/aa2KuONdTOpddT5FmzjHLY1YHZnJeR3ArKEVtxr0ORuGnpYuh6FgQfVBPGg6cZL1EVv5eVzfd8ZZdgccLvGjWbnb8D1duvnor+AEGQ1YIaisbMl78F+uuduD5aWrlBpufrVNf7s9LA4Ap1AraOtvqgWXniSFRwUg8raVjTDhjAGi3oEDobsBHDLImbGpXYYZieszRWcMOa5Q08TrBnyoaLFz5Qt5udyiAbQZLe1xpZXVwqlM00drLkWqyV2CdK4OJh4shZ2y/UzJvc5TjmRwS4GrjKCabngQHVqiXMF7YLV4b3tYSha4bIT6/XC26S2KXJaHGkX+AEOytcZ3WS0bmatkbI9MFRsyoUXYVX8NsGcFcgfxinIeLBs0FD41bM3RB3Szy75QP7FKQf/1tr0UNCVBe53BodWc4rz43zsUb+t2AxsL8TxdeChCcAeffvR4Oqp6rt9XFtPk0UQcVguejia840peDbXpsvvxl4tyDPG379ELLYeR8WB8g1T4eEWQW2rIcUkrSL3dOmTYRasH6L58mNxfzvRkOQW5JZlpLq5/HxTKnPPf57bpyUmTOuOJjSg6TEH9pcGklTqdvrmFE1WPNllQfEBKHSTvodNPAU9G5KfTdGGCmHlh2cJjSuLt7IBZsz4/aUlGIdUBEL6opOu2t41xCNPseFgd2U5PVRaOL1mnWdGmUwZ7RIXRtyNlMeQoWdpR4anIdFCC+q/YRQOi4QPva6bqDvcVOT3MKSGeaLyl74h5ODQd+gYmoyF8KH7IylyWUBuFHmlzI5vArGc4j/dFT3MBJ0tnpYvmQPocukSCQVMMD2TJfcyEoB/Uo1BDc3ZDeTwBie5btCbRWRPaCZyRD9V+fUfWk9stVEaVQvUQE3aebv+HVJcvlO7F2kmANXjh72Fq3uU7FkueehAXncSEIydbFtbwzxgg2NujCGMAh5zjCuU1lWJqN7Sem127jEiiKKAy2d7TTUfAYskt8nMLN2H+y6oLSqknBKyIPvUnchxN94MBgnT6s3AM0dQETeVzUfaFCkKsLtZOGb5nY+f5dCkKGKayKLNb36eYYbadJ50mxW5FDa7kAdNZbbij90abvSxJL2NgwHOSYomGS1SJeoNwa94yA9bIGZEztQ7hsUqBvFcgyA7YYwPHZBPrJINKyrQ51YAl6gRE4g+MRMj9X2codMX/Rzl42oceAkNq+q1hQw/58XJKRZDgLWZiNrES/edM/Z32/ybqXn/Lc8MJ8GRudkdxyEPKLHlHGGNgWFj86EggJdUYHsYXefIUdJQscwyuXFQdAyDeKdXDQP5aOidOJAe9sj94Y16cC97kAT5gfIvVjpIHyuhtM8NreHaDs5r+lnN+kRzuV5QEXn7tVk9bHUmf6FqZBdSWko5Vjvla8kCg8NwiXORErCkDXD7hsgTg3D4F6t6DgvkGJeezWRQYlSyeiJVROA/uEJoynDMT49ElCo6w8pFHqICR2/5dQSWtErxwc8GclzBQN4Oi0An78bR57Qpibd1aqL7xdCdlBWIOfAQ3ovTuz/9zNixllFOgrpDM2ZufoYl27RmRk04Wn80txsGnAX4s995mIeC/i1dKnuFpEYqkjtK/iMjOAPUcCoBNZrfVW1CqfnZc6Fp0JQ682smAsKwhPDQBVE+yd9H401u3LbQd45x7A1wIwWe9oeCqk+hvZDvdX9oBhcNUNxUKk+oMOrRM5jjm1fNfeBRnoiUSF0zJB0ekdiGzO6fTv1ptQ0cWSiqXWMD9UUB9pYLNYXDqWm2p9Gev45H1TJzhohprb2VwP55VGS3HVlglIvn0yH9GVyDyVqROHr8gd95mAjaVfw9BRGBpMvoD8Z9syzOZwpbRSBdcCtFY8GHZCs46x0JZ9tl",
"QQX9mw2zqTQ9lhsFsTf4pVuyKxTAgFwF+04jjlBW9AClqVxxoslTjhBimNZZcMHYNmRWdWYJuyOiOnw3ZR2VJZlUwWrduhGD2tJGj+cD4arUJi8VO2aevprSeiNV6Ers1b9McVNYnaxk8PUgaaBYlTRKaculBYfY7YvAkhCOH6fWVQZ2kQZQ8NL4p5h2+QrnXEnnzLk84sGb0olWL8hxk+FMQ1m3JeUwjWDa9EuGOzwKc9OA3GO9vGv+CIu8D/zviFGNYd0obFftiEtA/MJomQxsGsA/breNvYxJFm3A7Dqvlvj4aeX5qPUV14SXdNi452XLNEcKbG6bCfqqo6ENXKI6S5nCYwoLN7h/+zZ9/s/VA3wZe/OgbVScpfgWoBNsFcTK9dS+8+J6IGoIGqsKAjkq32gk2gCXKyCtulCy8kk5lRFiWTiVBgj51unhSy4WOFW2tVCsyoExipfpN4LFzYg4LEZ0ik0sOtLfDOkCXoD4dBo001vrlv9sl7kq9tN1UBZDi0GWf13POt+Jb8mUOyen/crIvpTAHWLnGiKH60Z3ylpZD+Ubd1HHU9xw6l7W9tVuocwT0TXXOAWGhpLFrGYdiQ2xACpbp/DMsrxZNp6Jw+pIBfJMjQdMZx57fnb8GdWDrxwFrl8DgGRlWQ9YHyyuI23fEkfDVrPiCdpI4+ZJuwPQhIU2w6Hhfr9ZLIDAJAFyJTPbwhctGNpqtjgLkUIJwcpDorQo6b6yhhklKN4JPjkZUnsanjwuwEuNC0lvjI4t2ipxPIuIFwAFBNCFV2dMlFWEyLpnFyQwkzSTvGKpOEWAA/IBxNLS4bIYj8i8eQzTkaT1w63d29u2p2ElsIu2y90GtPoIncgJSMziMA6nK66LVc4vQFb8hQGEiNcqKPXRsaxT3xLBKST94f3/NAo4MTO+1DguOG6mZ/yW0Wk79zDGo2x4GNwVmsY4y3dtNZf0l/uIfXEj0poZ3a0irchAz2zIaYQA4gsjFnecaxte9qt2h7ZcG1lN1HJbPRuYhdAMgm0mNQ09KrXXvQSM6DzrYaViPowxAkiFqUAx/wmomhlMulLbyEWAlgdhtqkW67noBmhFe559nKvVTAdWq2uyPsd/ifMB/tZx+AeEdrzz/MZGBCox0AqBpw85QL2nrexthSoEK9fmzOY2VmBSycsjOYRKNXJ0nLSbjU3nj88N0wF8JEs1YjQpeE7Y04w/MVPnPa9WSX063pa5Tys1IkU8hxm+Kxk//pC3iXnCs3Rsy4BEwHt4YRwFWCB9c/4uokT8RTcbu9OD+/QdJAaPQ17uFb0yLmVsBgJIIo9R3vuxXgZaxmxfM5cS9GjBMI8K8zKB6p1KRHzCduCNjMgZ43cZ4WrfzmmlLmLVNhTQcwyE78Fi+F9nR0n1qizNX9NYJlF8nv1a+4orq9+wl+uIdMf+TdloGxNW1NKZrurS23djWSTj5K3AwrA/cARWUcrxzrtuiuqpFQRwgi8YE/AejhKL0lYGPtEz36JV1zvUReW5hvzt6wmfKbFW/ibx4cklzLL2p8wNtCuA6XIQM8Fbmith4ukdoyMjb+tYbca/J4ZwnriqQnrc2kY0iixeVFBkzSLFMeqbKTS4UkWBidV6ykXsaxdCPOoeDsWEcBlUDyf5poAPnZ5LJCamFmaJa9luNvatw2b6on2CVCqPxkxUGuXrzOxPSREC3Si4s2fu4YEyrfLBP+U6EkW/DTfniAREHza3qjOfxKbI8LHWopa+cbCaq1wZTD0Q31v4lJr0K+wCrEwFVhFn5+i4N0pQtERn4/+5oaQkkqeYt4OwV8/tu4crZmQ+QWbtgm7kCQOMQyWefbxM5se/QUuGHynawrck65SIAgwonKOVfTc2Q9QPlNE0TemAoYr6lV2FWsUz5WwqynpbmabUj3MkM2eMotua/1QtMuD4mexR1zqK5+nKXyRGESZQeuEwRboJckxws159TU1autKtQtU108hcutPRobvcNysxiDlb3VCC",
"A5nZ36y539zyJDtpWvgEgn6Xq67Nw5dnoKKxQn5ikNSy+3aM3+eYfybybUM2kBSGWjrtBd/tRlJK2xUuxihmsEq6ffrhc1bgjNv1/cBQoGRv+X95+lRFE346QT8g55xv5Xv3yIWca5soPxJi75lS+BD7JyPl9JmKK/uSbhSP+oe1gOHNSepp9SPPY9ok+o7IwDFQdvLe0Y/dlgfHgBPs8/5FrCxIJK/Z0eK6CXylM3wPJTDPLzG1THOiTeBierZIIKOfPANmi8H/F+DDmhzz/SBh3hUrdKHN6onVQQc45aBsFW+hWgdCrbmbeN2VZvGWBOb58uQ8IWXISlvWY3GDVlRYqixCI5mVIJGV/DZcSkjDLxMaCLFDzfV4M9rl25oVZC4wWRb2HIMXG+01tVzDaoiRoc/knmPOYZbstaSsqjxJ9UvjSB9k03hIBfFMV2yR4C/EYXJqCmsXV8xjRQnmZpiNlqgfGQ+TG7nt1dmcE3Vfv/kjIqG6tWHuMtDG7ZiYEpfHFURaYS2z1YHIaIFgw4WZF0Xwe7cle5WGJ1FiuVJ/hRsd8UhMvoe2CPr8qfL2UPfSoquyA8Kwy0UzAFVwQgEcm0Nk32fEne9asO9YZuFrQWci2jwvvg9A1QXKecUz9FOjLz+3VeKEAuPgimDCC/cm8/qSiCyAKeClZ9Rtcqcpsq1ILCH0DY9vh/KQ1TvLaw2VgOqLPWmJmgkDiqS9XHZbu0OYdhZgwVJsZGAP2Ul4GeDpC2b+8sUKKtBjg1sKuEPMRaJuMaFQSsFxKE3GVfBf3vhEWSSGDoTKCVny2r+0G6yycUUmQwGfurgMRscXfEpo9VpmlWKpe8CeeroWSpvuDbgtaOt5JvfvZVky9v/kAuCetWMzsD4yruk5Ma43mjwvcok7Oo9VoTGHdxOmGY4f0jFym7calQyht/jc7o0BiEjOIWuQy/JXEyA6W1CsYJbnXFqipxLo42ZBOy0Vj7YN3yk+TENnULtXVekGiMXpZOmzzKI1MLkgIaF+jRfmP19q1YJnjtARU85nPAIgSU0spcFf31YtIw7tSZz3eDNi8v+LvWfPGOom3VpeNSbrIMGqJe5YjggfSz813iFhpvO7+B1R25fQehbciSbFMSTGMSUOb5BCVYOgqmoLPA/uaYBezENgcWB+TiXyjQgW63vOtf+2jSLalTxurH125OiwPLqGUyi+gApRMfgskq37vz7Hg8bYITBZLxsueBU5zYUIX8EEO2dQBc8RqWARsuXO2DhlDkJLO04f0kPVhu+4pAzm7e7UiKpPQ5IuozwRFZW0wvfB74Q3e460ZNhiSXyLrjXRiG0zcD1uPlEulhZyBzAKnmNc4CYw88vcc12FXeeuJGXSzazQ2tt0nk4Avjgv1Nt6BqqF4xFor9XUh7kZj/B/b7z14eUvmIYuopaHgnHRUamSDEyZIQcfWFaFhzngWrP49Vb9DX+2YQGDPHYU+R13lxIh0xLThwAlipiDRlJ2SGBkmh93rShMhQL9qtrAFw9Mr+YpzejYinBD/DEH51BldgTwFPE0AUbpSx3nP45PYlB5Fn9qbFl6qDu/f23dvXexQwrrORMLRcj1CRj16Qh/Z94WueWzUkNyMS4oEI1xCFxaZuE3Ce+HgyHrrG4fzK5wzh6mCBnb8KFP4v/vHoeqgeU14sHvO0cTA/D0wCl21wULpXOeNnqv1tpBM94VkC7ABstShkIiOw5dAYT5FJ8vOSHwQG6uEPMe0Dj+WZyH6M0rg4f/wykk0byZ6VCfJk+HO6eFJGGlwn0P2yKqrjdhLadp81hR16GBmkCAUT7baOToPyYAcZgLVg5SIiE6VGWf8rAqPpG3tQJ/irc8r2PCI0obDuMej6DaGC/AYqHQCQ8/exSIsb4w76/ul4sMS15eKGtsuGSoNZNDXKG2F5ohuNPp9XcZj4H7Hn5egYk2K2Ui/F1X4wsx7cnzFEt/opBa9yxDaK38Zt9XWTih5qtdv0ut/jX6opf2",
"xlqoLX1Q/5HtISxIWoXYXFyBsG4UhP5WknCOW3e3gn2EvEHC2nM6VsKGETDlpMoqa0O7clcLBHMp4Gj3mAznVJ8lSwm34AnBmGIYRO1+9znlc394twCAFRyJPjOoSyOLlu9AwE8xUNDAsferEnMUszlaQIzAv0vduFLeva7X0g/qiHRRV6WDPa0g65yVdWBDj3lgHyrgH+NucaG/syHjfwIm3l+jCKUOIQK5my3hVhLRBDyscDKooy4zVjKbLd6/EeQIpziZ/CymoGg324doc1ffuCWIU0F8Jg5E66R0lIb4bLpIHVSASQwdjTFbL47Pdjmt2G2XuuM37NsAMbcRLzbfeZe44OhdgiSSr7jN0+qLDWZpFn9qvHe2oKlC/KYCH7/E538KV0Mt1ORlTgJ00j+xMNkx8+C8E6Ub0VrwkzAR8K8MnijNCkEyweltAsL0rHcBPwJgTigMRNrefT+Fc88ArsJhQt/3A3kF/aiX6FXKt71Z2my+9EFia6UUsoPrUzadQnihyoXqqhr7GQZSqeNmGXG8YgjqidI6HMKfhxHJYMXvrIfuOzciUecVpt40dLZgieUMaj2+Jw0Qr3Nts/xNErxyi2Do7qHXLZAUIpie+Vv9b5P9ucGp1LYY2W+bvOR5y5FNf/9bgRWZry2xKWH6NbBMWQt+VuaW2JQlvOUKvuaU0iE+LVILV1/SIEUb4+KTIkudAHJKLLEek5wRATUHpZNjzoln49xtRwO5Gmlw6fLC93boI3ZAFMIvrb4hte7pwi3Ji+rJTFJBv5fBj5LmVZoUZ7N2UJwLZtKrTMEjv+e+yKn7J/k9J+1eKjCS+D7M8ZGvQK4UwlcyLpfogvPBNJSx2vleGXGrCjv0ooO7rV+gpdwyRAmK6d0xZCRCfnZpOn1WT5rKf1vDGffbKW3YFSfnlQW/L8zVxXeTYv7ZDYJBtA6bYqSgkcw6E8vsCXt5aLeMDlcV9p2oVGsyPBakmrArOcygSUZT2X2Pjs6jMDcK+Px9aC/h+1FgcYBWOUqd4gfbh4Kt6fRaS3bEKcpA9oeJf0+NtmOD7YLiHqWpuT8/AjElAOmar+upG5rliI+Zmjuvq0ZA14sb9Zh2QqFCRVGWbMby121EkljMNqgxLnoR7TTO3GGtEqQD2dUDEPcB/0/Tn72qFDamjIrTaHKYvScw1DJom7VrMs31yUUofZClV3ElMODy3DzYMS63mcuByyHPlL82ZCDof/psuyDAcyjptfEIyxkT6G6cz3VWsK3uQfAHPX6fXf9aPcPCFLXPjbBDWahF2Au3Rd0fLfbtmiDX4f9pu2tbHbfDG4jGtgoWpwqnLPlFQiGJXgyhAjips/ztOyXCQ/VpLtujdn7A7acAtaXMg8e6jKBYjjD/GrI1hIv1pWaWuGBnoq0EVQjcLCK0ys2NJTJ3cDzesv3TUk9V8QOnP50DPj9uFBfArB8hjhJkAED0Qha2dzudGqkM2kyh6LevKZRuzFJr0UYcQBvV1ro6iY1w69uYXSBDOsbsxfiltDeKTi+SKjfxdLV2jkwlBdnTSTMa+o72jCY2hul1pKLbjAYwSdFfiRJsRMcswhUJGxDWbvKpFJ2tyUx3jIYB4/xzxColBZWnziJwdfnpKmYX+QdoWzlo6wbD+QUEwpVqDgmb0O93je5apXuxbZrGRUDg0tU8tHC4yGnlEa+09CNvdswgSfnXslwjXpZlySZ9fMrY6x2tGXh8pVtjZVSxWLkTQJ0LDXeoPc802FBILHigjYcLdLckUY6UVnGhE9hOSd+hMMETVfQs16DfrI56SYYx58YNWYvnkvVVbMNz0Xyq6ZiRqyiiSFBMWzFoFBBIiSufu/ufksgOxgMmDTlt4PddGinGm48OswXZpXB/zw/VWkgNggelv3UwbGgdJzb5aHbMefS15qYj+4V/HgGWXEtgdt4TsB2qz3KMoZihiqb7saxL/PqL+rZLdhalrfJ2IB07/UawQnswl66+Ej7pJEYBAXRu",
"KLWQKbaOpZm2ulBp0WkdXUaVbWKXSLtnJfibDDVkTbyPiFRhQeaAjOzYbBXSYBw4oiFe1Kid0gUhRuRQjDaDde3WGFP91QPS/au75KwzlpbQpZ3UCnEClqDDhrSRTZL+mI7h43qmXHvS1jmL0XvnfOKZBS8LNhb9EpxOcQYbCSRjD/4qfbZXv18sCDARQBIP3sU9SAtJe07MuTbRzBxl3D8cQhtWB0UH59nE7Uh6MhNETH259jg9AaqaKRsKxpnBeGaJwEmd4hQfLT0+Wfp5/DWMEI7chur5BvPE+8pXBgXuYneKDzzD26UxF9jNBCnA1Z/ZEQIVjq8enJGig/JXOBdpkAVcjpr9QE2fIML/dn3tmcMprivdp5w0tjJRuUOKHnzsg/RVGSZ9meFwYkKP5u6ia8J/AejVoTUTYmW+P/GQM2oHlpowMFtQewMIWakKCJN4eN5UxXtlk/IaZSx8tqSUOH4PykXg3YWPJqK0v4RS0izCqaoZJdVsCfRo40oQYk4NO1sFr17P2ejaT1FbJ4vcjuHyl9kjw2umtk4pVRQ2Rtk5WR68v7DY/qVled/abSHg9rm3uR8xUZxHjHgA6eXkMW8teLol1v55SDa4XCdJkNGK3VEa9oPs+PcMdqt2wVBWLQ+GuqKxCE5cOIXwSLO+6i8f0NCUOjtwpiUXBqOFpA+5Ou/gZKPistnTy7OgA6Wj0a22ZsmPRSQ/RZR6pViYmtQyY77Pq/9jgX/wCHeXPNME8hinUBGmN2kG6fsajceGTipMGH5y+BXiQpZkAiw1WGckW3PQ6yOdDONmml1L3Y7zegSLL368gk/+/jKdy7t3Xe5eQpnKkRLo0pu9PpkkKS+6++zIlSkznbEauYa0gB1Katg4FG5TJPPeQCLw26hUW3amUqP8RtIDdjKcFky86nd7PE96EGIn2ZojpwYQ5PcfKoPiyDrI5/vkAdFaiYp2HvBXSItnGL4Qht5Oo6V3GM19j7+ddk/OYbZrgO+t4wynRh/BQHSk35tiT7duf1iF3KGr55l+8oKxqLxoIoZGLtPtIGEnurnXD7Q4IaKYcgvOLddFYlM3IJABKdOz9bybEBBCKIqGURQIlrarZfBky1Wyc9k9KrSQXWGQtSqhbD5YQiZwj/zhHaFW2/bXfMjIntPCeAlKZECqWhNVfGEaXq2rCys9ScQYS2hWkMocIzvwbA+uMyAtKyPRurepTQWd1WjY6dtk1O1QYXuz9q9BLTEoLrMHxySyD9FrTp11Pav+J/4JCLSWLT83Ax8LhFThOkLvstgmab3SSfsK0cma1BLvJA4n83lEiOQdtskHtzL6GiNVrxJ9N9fcMxrfRL46hetMskQHQCIhBzi1O40Ct4COQuXsjZRQ/YX3CWZ5t7PbAwuvWG/3NjqbMT03g1HrMRqF3KumWam0jSTq+8kVYo0wdsfOkjDPtfalaulHiz2NOKQFy5PmihqACJViXyBfr/io485E7M7DZBD+q0KtHu+6GxjIGEShpWGukS5stXXxKCiOiXUW4v3c96smojZKV19PSlbZePdM6s4raf9CXt/1nXejicX8MymzdFKE5Tjp/uQ5Pc7lWCTpz9OsHCA17J/EFrk3sw673YIMXV7XAnwGpeL7OhXjz4V0FH647ptA0gOhSb6bXUhG0XP7LOHTxsftb20x7c6z0fwOr69V17/DtoGDlKcUc6k/pkRkMN8WDPUwqEvzHadXrv/tU8A+6T0aceRMkRYFqCqYYh5dGGIWJZcjEGP6qn8/sTwl52SNhAn+I56vjqrkAryim90VSpkjwd5HB+iPVjqO7UK1g10vIT1m1ElmtrUiytq7y9h7V5syqvFqtuiRpMadecDF79af/1N8RrJN0LYTcoJe0SP9UC9mH8nhRMwH+dB8UaMiWLczTKxJpj3q2JznQWyufyJalfFnBfl3rmm+ALSu7qgHYEMxKToTNkmFd8YmmXQQOfdXvSsL7uwrB6tlSJ7mhJpSesI4vtDG",
"yuH+WkyE//+wIFd/YtVmLlr0fw7yfUzOduE8iJHSQskdkQiHJFIx2bO3xqdWJu/hFLSXbOS28KPukpj6yagBNfk3CGcRAQ/buAj/EmARbr4Mc+rnQrK4tdjLootoiplCNzechIrtsaZG1eEArZPToRRpqnjX+jvCenZW62Eg8EisDkzF5ux62LeSgXB2bLXutkTBxVY3vsVw2D2oMvSLACoPcWg7ryIRAF03HeBh2cm/jguOuVIRVG7r1aHglGZ4Ky5HmNS6ANsI1YM1cIyi7UFZok+Ob08IfMTzF6nqErz/7gZZ+BPd3Mcu9wnz0YbKrX1eAgVy1rFjA8x4Vm7hPb9qriFCr87X5QzZPat83efDhR4Atow/mOurW7X7lwJtbQCjF57nOFW4qV96mrphmZnRed+OUzk2sT+MkAPvbo31wudsNJzdx/1s0RDC20+rH/Za/f97HkyYsyG5awIRy47tQR0SXOnEAD+BdjxZdwRqx1X6d6lRZSYrL9t+iVYKKNZrFv683Z0wAVlhQF2mT3Va6HrkoUBmBSxtBKXuNlAj+kyYzZOC9XmHXfCl31z/0Ta0uOBH/LQVdaXHKpRdLm9wBHKmsteBLGO576Z9YqhF9kHTglVIRMI0wXfTmKUsFf7+oYiVweCmLljiTKn2vq86hfFuUdnbSiJF4hvrWxRsC8oSDY35Tyd2nkEG5QK4RPWvNnebRnv9tkyEqPD55MChvVzjT19H/MwQuOlGfkHCsKEUKlESGtwgvTyczF1G4SLwazq3lgmdNs1FmrhCQZL+DvcO5ldgunbJlWTCg8KESesvpRxLJAs/gyb1mcx7YLMoVrBRafulyPuFLWpm25MEk5QhbF1GXC0QLfPO1oOMlifxWBSBQmEbpf6bFfW/iiDkkY0qwhKU5JJyABSnnqb5UnXjzbXYVqOFvicnPtMmXiVw4e0UIqp5fZ9dqyoIHUd/M+b3ksNVpkSIsDYLilrIKywOjidoiqTxC7VTOtA5oTXPpDdxruOagPUGUyBUtmrvf7YcHHV7N0yHbS5OwwabOGiKQ3V5XY43fhheJ0eTvDetb0UC78t1lVmBu0VwjsvjzBaYE09yOE1T7OZpj+Rz9RLyhWtjOoEaWopoVwhAISTaxKU5ga10jXe6ohxVHAzO0OiWbbIy33TEDqojcFwAsGQfX0lB2G0h/bTJowriLC3TP0z16eymdi/HXtHNjc5UfVAoRyUvmrDjvQxEhhaIDhp5wZ7UQE9iZCrWDKYsKddeSmcRKsiHW78gpKqXKikOnRK7xubjlVPQfKOTa1lPUDW87yCpOBtjhymtCFlOS3sPh8cMdPned7dqWdt2dQaKVzv/4NHScZYTKjXEJXMAyIWurVG808iDJD8Jf2X/9gwMd4yUSBFr2z3dmS8eK57JcqnhpmGlCdN8dRdeLB4ekgGKsSQkIlVOaUq98DZj2z9//EWx9NfSSS0a2yL18E3fNcIekD7LI9K9RuJEilwjyHkYy97GJMt65Ca7z7rtNzECtu7AlkscDI95zmwE3WcRi+CipJ6jsy6hlHL6rBJnOus+k/TAEU2CDVPt/kYRz1uERqc7rA53Vq1hY9rNc7tdQBDjMY8GpY2PK0OY00qw0KwgzWZvVejSi03cpCcl2s3/nfYLb0uPw49V8gS//rB8N6X/6EcLClFtMn6Cm8w+f+FDzNagi43RkHI5Gx2+D/+X5dzb1S5Q0as4I6t+UT7Z9PUGtL+A6nm/sEA+i631Hw8Dhf5LSAU3tjo8TniUJMyBfW9ROR5xdmHsWglH/jBap6r86AVZ6bxY8xe/imvFq1FUMJeetPC1GSFW2F56lOqrsozReTl7zQCL/fiTnYG1GAF7VXQQWvIY/G8xHzUwHhLohX3/NPX7O9auAChtI2mxgIL2gkQHCLfzBIhaS2QhH2Nj2xI//Nd8I+AFN4zH2TUx/5ZT0Per8t44BiJRRvhkeNtyE0e4L8gxmBh9JbMwlzHpLPlxoWDO",
"kgfMwmoXNDbJtiC5siYhW1snRnvIdEWkU48xZOT27PPFrw8tUW7FLBTPliR54qLPjkHPR6wGmp4KttABd6tvcylD9L8izmNKAEvO76k5ENVnJtSkj5twVfjSC9VYXMV3/jCImcnuUMeJpcvn66D8U/KKKEE88Zx9/wR0N2uwUDrHu4EIOPmrg2y7fp2jfcVNy1jVeQMZScpjZ110orVrv5pp58oY1UgMv3dKz+AfYh9H4NtugCtv0XsSOCjIzdQGM1x7JpCBANmQpFmR2SOUm5zcHs5udvMkdMA+3jV0GoqGDFQga42HZ33UUfeyv2YOaOi6LAlSvEhwnTkSt2ljSBTzxlpyPU41L2vwQkHky2B0pjA71hqzECdnje2enuc3+WS/DdMyHrn+3sd/YpJbo7CWCXpj6Cmf6NZbhga2tepvQXp9+hHvr7UCbh7RuU37AQuL4DE+3/jZsTntKocykGdMTiVxSY0wapoXziQuWlXbjfoXExaWmXmY2+WgS+nPHOz7WvTgGqoHls2E9RKIalDJPT1u5kpP2zI7PUahE7Y3OjP6Px5Vf1UQfJGmIqRGEeMtUdXWjGvJg9S3oxWoos7+a38/uUozXPcVhvtmsgRAmVWWSz35YbWgC/45kO5Kerdt598RjUeE0WFA0wNALl/wuCkxCNKJH3HF2DZTzOpA0Ce269cxKBx/sEsTNeUBsrDHtqWnoKBCmiG1SfJfZje4w0tpAr51aKxxiAtZ2QOaLdeJ7T7qqFsHaI2H7dpBHf5rOULaGid6iDQUXk52ntEFuhP09XRoyxEhuMzGceimV7a29jwgkgmUWywHlyiTnYOxKzdCNzgivMiHbWjdyydpQMafEnuJZgNTnhS1hlBGR+r5az+f6O+Dvk0O+wkHkrhxIc6ibxmBXK6JOHgNSgypW7nb5OjihO3Af+FpwqhDrnRdnxJGH9xidD0wGOQfoVUYUm9cec4JyxTYX3SOX3t/1h69dGJXr+CCis3pDlgmn3St61z6+1IVlb4gRKUkjBssoV4A2nQ0pyb+bVVKHAlnlUaFczdxFHplA9MkwuS37QDQgudiQf0/KzPWC6IjzzPZeUD2HpQ6eIqau8L7j0pVndjHpxljuZ3C8EV+3CxsGf/z2Zh5xqspYvxtjP5aSP87rcfQ/jYkiKpFEzprtK0gu9fI+XqW9I0bN0Ey/bW+MJ3ClAiPoSr4PfWTMFDONiweCCGMXBsYQFBaxTV4d3lW7adV9cilFkpGB1q4AuTv9EI9pyFUjyRjsJ70YrTDjhHREyxWSWn6nItoV0wUGUtzK8gVs/NJgPBhWYOt4orJFhzXoSPu9Y8eg1eiiKRjwzYczXLH5aajQMskab4ARiPtWzF9T/L7MVsd5DM/paEKJq0FU9KKDyEjzSlR/PQsH4QV0if8rVsrlVUBatO+SqRKNol7VJVDLtUhzcNVGb/lBWltGjU6fw2aa3d9YBEjGsTR2kuUd9B3/VjDDu/9cEMGb7UlDWAAFteb5ozPnMVWtnV+NbejTn29mj3h1DWSnCJA9S20mYKvee0kyKAFEcqULYoLywP000veIC9af2CzStQDmiHJs0GRGgxIyaSI9UjHFCF9IY0NbIFixbm+8k9ASKxBD5PJqMbSbG9gLjvA0BkPRpF3xLCp9BJD6Kj2A+eFSPCt/YJdEUdpgSZZoLVtIkNz26OX++d8Urv5mJOrGZcRhj9R2SBTZ+l/2u44Tgu59CH3leA5FMXx5WXeACWukILDqls1q7IB+O3FuCt20zGxNmHxH/XHjHjOPdzHPE+6jqb18Ty8IpwXgmX/ssyTT1PVqrGOCCgUA31KnLt2OGiPT5kFZ+p34zrqAvUUjbMX3pEVhVL906OsHnF6n4JQmdhe6JurMu37COGmwh7cK05XI3z/Wr9YHYKUbiRrwnQo2FqMOquaPmhTvHVKPa8HHPpyazD0DNcvFeoVG8Xsx5hUGXD7eVqDSTLMVYJHlnpuGvjXrEwlQQjg",
"LzwgvWXhdSAvMPe668TY4+tnuPzrPtHzKTgEPhAdTsRbZleF1RCEDDb22gOZ4+hPCCDyLTa7eqeHYJdrkuDVFYiTq/+cYWfmBnj50GSHlknbhVv8uPE4isVAhh7QwhuGL/+gNm0dgmh3Z5ypVAWW+OfK8OXwkPAC9bac8wIILtP2cruXHBh+e6GRBSuoxQO3gQR4HneVnTFuIdTgNWvtOW5EdVfgjFqsbixP6NtY7fIqOaIJZhnOBBGAEZ9Vi02LfSgyJ37Y6Vw3w2ZfO+hMcBVbp7eIDwJdXVt3cOdPxlcKNs7/V9ATKSBMUs18fLOgyQNaDWdUKAN8iqWSX3L+bhihygzw+q+QlP2LpHlTaNlDaUfF9xhBFLZoIcWECW63vHDOt+iWRx5A6oe6K0n/f1lohqQf4hAclF2KDQEh8Wb63YhOLxsPhNQn4VmBe1ETD78dAHpDfv1FRq97KRYV/OdZoNlczOjl2K2UUXLkA/5QwlOT0rimvNbwNc/UiFMsWTWnNg0YG0f6icXsr79Rms2x81B+2SkgYsw3vHNkTIfjQm2ALQGb3+9Eav9fSBDwYsbvwhhcBtP/O+4VvlezzTyquyYeYVOIOUH2ElAFUtCUEMe6HH3WLBHWzNBzqVV8LiXHq7w1pbWgZaNmOLFeijC+alxQC+/5yLWabALKJ9hLM5Jn1IMCaqTaZr5K3+FDeC/M2X2V0HFVIQG/etCRLNv0s4np10VyQTqpg5PshIdqsvP0rwFYBS0g+FVN0N8DdUr4utJ9aI21ZnocGLHY+A+QJylhjl0H96JkKEoRTCwL1kA8RBpE6fUM94ynMbqA3kHx96DjyhAKomnEA5GoD248sqZEG0LS8aqfFdxJXiyDuVO+u6AM3FpBoRPbX8PDkVltDUEYW3TixMyslr0nS4ubkBFfymu+MSEGlGP62uWitmUiJ9b0QSS7+O/kDw2Et1m7ki7JYyBfgUGMYpHQ1PQesMufadRZ5aOGueU6C9Up1H8ehxfExlbZ/bDAhpkActi43K5XO+8enXX+DLMMljG+D1EqoTT4KMfeTXDCEbQQj6SzXQkfg6ijlU49V9lzjVjuTRM0JR0ooHyIpCvj4S9yYYdIvcIeug6I1OmhmF6ARaWIHUCAuYf5A30jVD2d1b1EdcQPNc6wD+zcc8KIJsmojl+okviAQN0OQX9Rc4vC/uj93tpSFgGzw9S5ZM55sd9sCEVOEn/0Is2kUmxZCFbbTNRtVp22wB4lA3/1RzTY6eRscy2RnOnoZYpTgD+39FO7HqLZHihzsCPF7f268T/wSPwabi0FAVLwLoRTPxBUyXnPlIiqtjWb2nhdF5Jriw1ol9MAPpTezOAdjvYKsKpv88pEluE6NMQ9uyfnKFdvNKxLu1Z6F/3VhUw5DU+08eQ5ZftMrpZ0AF6on3sxkvbcY9bllOOwpVOWiR/QTzb562o69Bc1uqR7sS+s8sJgTfu0AicNdXVjcrZr0aKLAvCjCo9m7G0dQ01CKKRKbz4+SyZoCt4tM1YsMZG5mz0iT5+dZ51O4KAW3UEhATQqLaLpgVXLhYO99npbxBBz9FnTri8c1kcDG7XBz64b5rzaQSltU9hyP7dqRDuXPOxGgx5kho0zK+h3i1sSLzWLAc6KWGxNBg+ViZDLYfGoFJpYB3AptPr21rUEUebGOzNkLcSrvOluW6HYrRnb5VAZIqBLBOJ1JQa+xorFs8a3eR667TvEj8eR4FNrd2/ExhKKzxSmWYtk3y5QwriloEsZkwPnkHld5SnQUSHm9n3xZ6kjUqLTHXOXB1OrBrKpVavQlwsrWbFsLKVaV+4EBASoAY1wVQzisGMUogA9wNXh5MHULTHefsOffKVEYfmwDZsWU6/IXiwwJIg1EZ14cZv+csIBnbOEvoER612HqGzMyUCRTZnisFut8VvGb+9IAWDZ+yajysh75sMbPsBCGCE2pc8ZXeGtJHJqhrEhE0h5qnOFZ9vp/M0pz24oy8UM",
"L6JkkpBnKwkoFoWgn4RLZWjhgR9in1jxdPWAaiuzGRWN+4UiFcDHjeevoB4yZdAZ2T29VhpSRDcDe3uJDcxfALQ64itngKQRsDgf4UXfAgmY6KJ/ID/8aKA9ydW64ZWreqH7BejtHtP2w7XYWtdokKc59lLCDyJy2A5/s617KqSBgdiZf1sgfKbBy/2EJZMSjiN+B5LB5GMUIYZb0DlUuaGtgsHHoidMBrunBy0w95CAk6HBUXn7TUF/jSjXMJt09W7X9weZWbaOw66rK8YyW4SjuRpJXsjPamZuTbnucaE1sFku9U3wT5Wr/zIjv75ip+HSUEB5+BqcndyaoKyyG/DsckZ6FBi/9WLRS3E6HqMTrorLsF2b0NHCuOu0lGpRo2RKpJx6YeGs2hYuVB3RTIQH7CPXYUFqypF9cAzOtv+UJyFRMEjF75FQy9jHH2TKqx+Xy8IpPfmQDua67k1x6eu1ZWuxt8+NxdaEI/5OENP3Z1WSRXTWJ03jCg0cZ+GvrzG8NJ4tk5rVe5DPIPrgAg72Q9sYwITnK6F9b801bWjQETZf0D1AZ4OoClywYWLBScnl4OD9959mveKIhZQXJZIEYqFTXQ+DxWimTVuyTVBnKSK2LwccCVdMN/lhiie/mVV3ZUoDHOlnbwjbCaj0ktQG7Ze59LezOeMA6LmVyw1XQM26XvawjYKUNzgiMsw9Q6VK/uwqU2yG8eCnLTbaH3RFH3rPUH3/8+P/lSpBzGcYLJyRX8Ulj/vZU1DG/oMWZz2ofT2Nu26AjrIk2i84Zo69kvDFyzY3rOhjQ8hEC9I2OgmwGQhDpq4NT1wPnQ9yT1lsacZxiO4vYD1Ooq0m8ZqGkI8DPe3014N15q7gbME9rfOPxr3QD2EWAZWatpSQltaoR5DcfmW8LIbU344enwLcM89uL0jqTJlwuzt8TzzjDEwDTZZr3GImExmIBgj7zdB/zy+ZPk5C9qb+z9MZVYDcvoPQ6Rs50HhQAE2n2/vBHAB4MU/vXnIiSlcOqsITrAW6Vxb/SfEjWKLLaqkZqXmXxCq3txMWAT6juNTE7QC/zMpOQnpsre+nNyJZ4O1tG9lE/JJlud1KUVOoH1ZLI5rVpvR28PPtcsVmZMWVuJqnENji+Np5DUMut8kaeT9W6cLYk70KCkT++s1DeWn7xNPJv28O/v1+X0cvtm8WZF6GgC1RCAAgHHguGNpATprS6S62pQSKzwMj72fewwTOwVhudlf9/3/0cYmWFpW4wt8exBBgTVXzw0pslNbPAPvvc5wp6zphIVUmEVXdty0Zl4FJ0SJJX0zz9Y8AQH+cFXedxTzV24iuKAczBCpiNc7H+7AJ4Z+/Jg1GIJkR3hKjpeFXSsNT/iLVtoIcCeXPOCGcfL3Kp8U1SDSl2R61SKQaH+ekoisygkTbC8QKlc1jT/DFRTkYEqFtBpVr1zPwXUDuIcs36e5zWovp2bc/fafMSNrbHDoGN3sDWtc8hqRNqEEQ78BKJm4qqth0v0Vq1WigvpZgtULK47KBZkcaU8H73KyiMsFkY8WqBpAKtNvndEd1YfrKqn4XQg4cbZ4W95SMVvzfS/BSFfVIfiUzJjTQz29leLny+4jxt5YAkRdfNVl9RtZmj0ojnwBKJv12y01igqC+TigWgxYqI9kQUuhhjQdES/nDeVbWW4lq256A8FNHnO1LMtpoatJCAS4YsxMZvEsQ5zyYCSyovId70ukeYS4xR/zCbSi0EKdz1Q4j3EategdSh8YvMqji3in48Ve8JtQDZJV2U3A9FaLOdW0AjQ/6spJhN+qp6jqHOLnN5B+IXRveIkBTg7iMtnXLizZ29M80zPelp4ciO2P7Enlk3sfMgUF2LeEDkcT6XEhGu5WVkZmQBoQ4r5pVMzRv7g1XHwZ3HiJ+fHiP+HKNMFYEHy05TxvryrhgBBO7lg4d8Xtz04guw5Cfo+OXQ8IRxOM/D+38ctwBaiiB1BvsG88OzVtQ92eEqfnCdrwX",
"AEQTD/rxHwmSpoXmaoqcW3YCMaMlLTAZCTwd1djl4Z1y6SWtc+KwcupP+o2b3qn4VxYE3ZP88U/09gyOWZTGbNLzT0blhXqQodYtulBLCJ9NpRWAqiKyZhDun0q03I1mSdxVha9W6A/2J+GSI7gf+nfOUTaVKIyZTCz1XuG9cj585eHOClIog+tBWI/dVLcicmFeN3aUWlTKw0JUQfjAZM5OCxQIba0Jom5Uc77GkPjfE5x3tpYZ8wAs0hgNMR8VjU2nrf5ESvTuUBiqiJQE6o3C8bkw+1eIZkjdULSdf/SznwQMW1S7YinqarhWQbHW9pltaZCTPab8XCCnYisgCMRwqEl2LJMlMdYUEqxs69E0p452uZwsnpjpPGG99CBMUqeqrJGXqjvUPhxvvj8mJnrFCnIuX3+l2qO+Ul6LCb/8C3GmbhYVEyy5DTEfZCWUfy+J81dhqrdfF1l6C8fKO5BgBsn0g7fUe4DQ2VnKwHjgkBR2k+LjXbfpNSUWqLi2gJT8ahF2LnZuEeKyCMeDBVimDhv+2UVBJL5RodL6TGBsCycHd+BoQSJElgSJRj1NhQ7QB1eChmSF79EPF/roqZSMO8Ow9Z18ZmsoqppSGUPr7rLR4x8iTmpwC7VvtJt5wQznAvYhHncU8x6KjidqpER45I/6ZDEmp9OxzvKdGnlZoJVwbQzndgAZRE/+Q2JRxBtW8yEva6VdsV1flRi7n5oQtC5GkDBDEVRJmi+hpMOA5g3X66usc/zz+hDsnxRxVys8+1FtuMuxRKh6WrKq2O0fjOkBTUbf82ssYgTYriy5mwE68W2iOUoPSNGWxYMZRRedyA/Hd6CaUl7Lug0XCz8boZFo8quHYzQBUDu6iRo9ukYke3lWj4br5Zm/9yaV5hpb5lbIkAJx9aywxCWc0DO5iwTu1bcupyydRYQIaUpsmlWmKQVaBUrroz484PfgV0uW8SUQIcuyS3tgMe7aG4GbuCWfgxYyqwrUb+MSKMly4jyPQOHGbZfusIPN2SfZGdHXV0UIyM7H6/8i+osNuLCIaNuDqhbMrxad8wrY9ifI7wzoQAFZYqFRAs+yfDhp+alngOWCqn7Kes71Ve3xhcrYCu8+2t7/lYSigtsy/nYCeP6v7qxWdyCB4seIlEKtqw/D+eCBqHPpBW6WYfhDi7mKC5DQIcGi/7Qmmc7vSB+JvxUF9NRAUReWr0/MVyIAYbpZmHg07Okc14RAp+mzcRroEKgWZO9UF5O/gGhR7G4I03klj+aOKCdMPbJMa6uttZV0CVzOrWqyJUDP5GAo3BlgnYFm7cRa37hnKHq0kTmdUFrcKMjJAJjVyM/rCKKFUXoOmgi6Y+dk+VGltEvnsSz9c8nzOX2eDqK2rFQjrStlcFxl+M654RnKPmxl3ZDDxID0tgz4zecOkc6ry/PYU1lMNlQ/b/aaSNdnyqorRLUgvOqQRwSJpu21okwlcHAuteDSD+l6UAfOAEoB982qvnIOkTbnC37TAK60voZjyHb5ZIOrYKLsLprkI4KtZETmN3UVT/ak4NC6zq0V6jT2PD6B6bceaItZcdV5Zel99cQa50FkrRWLtyAJ4AThLgNvdrt3i8lSN5leJNP9PM4uorev7D8MvlfrdtCV9wSLAJipJ04XFfIAy0PEwBQT1XFCJIR20OBbEun18mw8Ys1pf/wc2eCv10Y0IcO1Mn3YLHhcAtKmdyK0EElcNefPYKGSs5QBotbHRqw1XgHYsyZdJroTnz9VC4TC04aw9TVY85JlhCcqb+LD/2mdXzAGWbuBFeYk8XLcLGr9kZKMy5+fjL158UhlQiXVnLx09ONSuavC6BBesZh8+YDqa4aDMq65LXlNWtgAcSNlKcg+XtAYKArMp5QLdk54rFv3jLF09mWqD+amZmnGjPfxEI4GTWPvC1aNtFcT7sRAFvf4K87EtpTtvvwEqr2w+XTFizLwDOm8ZVfzBtMZBSOyeszSscqCHWxQNPT4moOFl1MF",
"gKNIpx64IiBK7nCjjHsw3I28+xV8e6DRxrzcuKq/ekaPhwWSDqiFwkT2RYGAIv6YrV+y3Faq+B6tdJPbx/E7xC7rrePOA/MPsTHzXaumLQBsTbSIG+sKjBGGf3/kA4Bl7M1VLKoeIHY7X3fTun5bTv0u1TPzOLgVw2oW9JAY7KIwpQmn1EYj/KZ1LuhnNjKzbrgkbRzhqGK+kO0eUvARMNfJzcve9yfO6yQjoD2ZGaFfywTylPi/stv/PUTvVU2z0RDb+tRn1VITLwOyQ5Z+ag+tTi9kkngPDFVgkUZiZ3xdb3/VMsIDB8aTyQAZhvXNVnRAxYq9CMaTsCUxCneEeldZCKYisVqOUsXmPFQ4jP+GmOkw1bEhlV7gDVZFtnK5Au4dvT9zy4r+50U6DfZuNw/kMs28eq+bFuQ+so32s9KTjcUTK69fu3RyTQbw1BX5PvxyW80zRBCjpDrVqkJ2ntpUcRzsoZw7sBRXuwrK838YPHOX9F0BMisVdkzOT0ud7zJCVV+sIoOtUchdVqB27ewCWjD4itXhyWTjRExNIJHaem+NqmL/i4BSTkAjcGxTX3HakrK/3uJNrmRjHE4dkAUQ1oyuOkkG0HbH8IFXzvU+bR1oi32eW6T5C/FmvTb/bKFPFnVFX8EM4oN8k7b9a1WQsTJM1aCuTUT0w8rxcScRXKd8lt2RN2grE1vFtKq6MSP+zQRMeVEinrhoZmGt5UKWOehJxFNobPYOj4Mb2nU0ICBnW0j4maxRlIPZ3xXdkqRZ3rXrb5y509YorceFWEzCY6czl9hCDFcTGwVU6WsxTqU3DUDslCPm1j3AtdktDyqI2MLVkOQWekZ30kvSg7R8rr3OLFB1C2mtJXJdp2sU8ed5FrUO1CLLymrWY2aNyL0olA/bv3bGWecNJn/qAoskMeKQgFQl32zVyftww9bBUYnEgSzVlrtm1n3cyhSLKSoBefgQXCjHDHZ7EWlPqIvUJVI55YaL4r+Xcvy6quaYn5P+aBlrNgn29/A1MWKuYuDjl2Lq273ldW7SV4JIyn+kp9pCWtdy0DqQ4os3H4iEi52xtMJmJdeipP+yzEucQW42BKyESkHF3hdkvII0CW9m4AGCtxgnQ7h7ReI3h9icJYRyyoOdSnL03wNt6txyrL7HvDSzxUEia7SPq2gmF5/AeMNkYM8yCr8Wz9NvR6tKsaTnq2vPwz15V97jc5i6yf+Pt8aITqtAR5strZ0hJsEuuJyFxXpf+FdJS2TxDUDKraS2YHGg38lznhJrn8VN9r38jpMAnMGm86hhlSPYG2KdTuV5g8Iztk25er6/rN8KOP4DimYJzIA5Td4OE9b4mnhXVTT0RMa2iAn9ex8Omgvi0cwv25ovJLKjs+QzEiqAEiK0ckm9vB8CzhYrQWMgQqlXvQkSaGIVbUO2KGDXdabFybYaI26PBSH+hfeky9/Z7JqmLnxda5Q+SvI+/JPa+V5YNETpsSrsg5HPSx1fx+SwuJ1xRaQAn0ZUHVZ/JcSf8VPmYEkU7m1TjpxmgKgr38RaIqaxzh5IwQ4FZvvGTwaZii6maMAYGVr9R6eR9I59iWhC/izQSINpVR7RFSPIPcIvJ/u9lklbbfoiO0DPITMf/998PV0/mTb1V5n3OXvsBBlkyo77NFRq7PsA/QTLCDrU4DOjgy9drNuFZVA0vJ7D5DuCGGyCKExvr64d1qLjpCOgePALP5tvEOO1hl46fXXygGKDR86NdyM+esP7BMylSsU+RyH9KPwCE8sEKjW65/wZgA7UED1NjsXhkobngq0RSAvOaQlVNik1zak4alghDQeo6dgxvGaeyYyHccxyHR9oLKranP+1GkR/bmRVzf10yG835CbxJ0ZGzAS8DffOUumtraQOZn15cNHGbxiThrrBostFB54LVGu5+p6dsK+UqrzsGy2CqpmftJ53pu/LrAPNzENaKRB/8mEwC/Qz1+5UrdgJw4xftXKssZcbO0+ExL5PQsi/58Zg",
"Yuw4yZZkoDKxOxcXvu/1BQVXDw1kwuaLzS44O4iKSUSP5EKeY1iLaB/lfVO+rZCGLtSm9/ij5ECQ6beuMoeV1hyPSgjIk6xZdNOYV9PWqs1XK0WMpvvEA6mqsS5jOUq1eS/kr76ZpRLtRsKaNudGPI0kL/r5xmTwdFh37RDtpFNpnKihj23kvgcEGEz3hsNTtcEn+5bK6r8v2lkNlOC74iE20JfgIjqynRylBK/bj9fTqwtW6g+buduIR/sgZfU44lAXxiX78VqOZyxTfGsTpSd6WFKsPcqIduyaaYPBM++bmrpkeVjDySr4lluy/V4QFDg1h/AWhtS3pdhuJ0WKoiYA3r+PaPi+AqrfrHRek3yS0nxFtHfuuwCqjVCQsAah4zUXxshrYjVhSyyZuVsht84jJFzTiIoPnKLNn3xy4V32rBhXAo5YrcCz4tQhueer1paLwCO+4iXGEbbd4ZYobyWkC4ywL5JTTcOodq0OEfn1xvvjOd7ZJ+nUO8p7Qoj/48KyaKe81k0mli3GYaNvtlLblXatOR9ZGnGP+6GfDic2g41j6kkHPIAAGwVjwz5vRzMrrhcCfUUDhdKrqykyFBxemgB7tyBcrJsV24x7/rdmmjo5hYkOXtnVLvIfR72jtajOI3LNRa6EDIIsm765enWmW2jb3gQvMoZtY0hTUk3z4VUJQhEwVf4rl0ed4IbURukVzXidvI/6JO6moYzNQ07Ln00gLi7BhSnYIPnfCW3o6SS6HYLBuqqzSr3mlhcC98RM4dyJSQctrUT1MtSN7IJ+tOvxgUrvSzg3mQwa7Uga9bmbdU51fYYQZAPw5xwZCCyYfATMWqRY4T7S07PwwAcElTO1Cd29jtUUZB/iAkNiejN2yhHwOlu71ZqsAd3yvtGGrPcB0X+NuTzEmHIpyx7zpcecKWVC4tBXljzEZe6m49T/W766wQFf5FSOqsMKvvIucf80gdmepl7ULFGn/yd1DEFgu2MJ9hYOk00rH3APWJmCv5fTi6evApc6+FFMsBnyUKhnguqbYgkmX6DV6LLV1E6RjELjDIMK1PEysyv9e0dEsOg4DHrs+XcCAjkQuQYkQusJOBx4SJRRfzfRyWWYrasRDcA2p0X8EhvdHyBNmJ8vGY+Dbdu3bHo6VpLYQBGtrd4tv4RmjhrumTX+/wSmnF6BYHQ5QlNyQvmA8nSRDH6GpAFBasAUZmQBB7CsvCBiqbNNQpHuZjIDZrDVWnr46OEkY7uEfosgR4XjlqdpsLkn/7PJFx9RhFlrJUoK6Dr8T8giPhB/b+0Zw3VWlqY0HDB5DzjaKRAISgEhqU4jPxsEttlPukGo/JZ15zdB3Yn1QLQmOvejrAm5b0bAFU2hOVmGKl4uhUBVQW/MTmBddDrWKvHx7zl35ym8viW1a9Wd3KtNa18k7O4Cy0PdsrOOiFz6ZlJmRizdwNbPDn4eeGQxyh1P2GY6ugtuH1xsalEIe0Pq+v1zW8SewsbN5Vjlv7miS+0ToeaDNZzUkxLcJakV9PzEiIi/S2orwKnQzRhEvGJcel49E4xty8WXGEejKOZlv/joC0uEJEWgrQ/Uy9CGgCPUQIf47pV6TcVjF/BjHOSJvRB5CtTgmY+7btzKUpnjS2ZevC3mPE9P4vKuUEFhyvp73aKm+tMflRfYzonoQOATqy/S6M72aoifXACNY8apwMKMsVKdGhZrjomxP5yhVxm7Cg2F0VidnfY1jXevWMDCihMbdpqN2HQIHFpLE2XaLBHb3IU9h2JnZDkDH019+03YcmiENJ/xgAYLPxaaX7pn4ZhO2oYYaMlepfYaLwGq9shmb+lWF/vkfCM5bz5D4kRCwQPxSoX06q7t/6VRriVuCwpqNk/Y5Yzih9/2Bu6U7uY02tGG7VdLf8iDojD27rEnUIecGlnNk26YgItDTz/akwxnsDFFRYGYZc55r6jq08z6+YTFczSwuJL4/kS90OeJVdQIqPdKyKIZyWXvWC7t3LCYncep",
"stjYKNYpxdpD7fFaFcjSiwPVJ1/DFvN/GV40gVquM7JKE2iV9RbKb/yKLdz8EoEgs/KG80WvPFo00mQRlzpt/qO8YL3hoTwdG1BTf9nxydwsCU8BgjPjl//uELRE901/8XwHWuKKyK1zl3wV+5IMeHP+Ub9fdhFymVlbmezGXGRNyZUF/xPq4ck4zbkmLmgbM0NRq5Z2tZIV/VAdh7WU2xRAsP0+OMfnEsfecpS1c4P+TM5tV1W5cKfkVMFqVJwUegVMo1SNP1v1MWlzPTTtI2x43Bjj7wA4mikgERTal9LtpDJ/y5J0eX02wyzniG/XziZnWiu4kCgnwZUstyTNHKkSs+uVJkjbCSSxwUf1uLHBD02qoSL2caCpYN9o9M+v3bsdBWByFZI8dnDyrL+vEebebIjlp8meiVxN/QHGcSgpiUhD9uSlLRecsRSjKUR3e6F8Yp1mGl5N44RIzXvQGi5mAcs01zP/4fMhE0BRiB43bieywORJqtGfsgIMNcqqi3c/TjiuogygFsAHyWdJoYInXoo8t2o76+76uRDt6gzYK0RIZiZTi9Us4jPki2ewYEYZE/wdZawP1C4eTOkZxQvE1mh2WjCpL/5UGDlcLUWovfVZcQpu+xqB2S58q68MC55yE0Ssn2PepJM7oakJskELsW8avLRL2bNE3b+8NAihpgho0eMg74uxL5TSv7bRxScY1RuD3aawBnfov2zBsmn6unQAerkdWxdfQ2RIX16vnhgfQ/taFXl87DL9WhYMgiTf5ONxy1+Uo4Sa6tIzVe3KYkVJIAIkqs+wG30KL6093C7CWqH4AukM8NgIupqJLUs0XiBCoQmhdHn77SiWGOvnbmU2nnuCL4iLEz8p9R0xCktogh1TqNv3zjlsWzGQ14j5UAo9/KYD9ATvwrRUuqQ0sIqwGxOML5G4NCJrinqVluAZJ3ZESPgdOwzpraSCaIOYGnwyJm9VtupBuUybnUsKdjscbZviJ/N1b4Pg9xGq9FdyQEJUQvFijvmatBNgSF7wLxSl85gf0bZ5VcPZF9GEDqpI8hXuEL/M+yhZCzEh43tYxrffcvs94MEO5b5mW6+HdVJwsDfUfRCc4SFAXETU7Pyvl6sGRFtzxiggye11FkQBnrCQ8z1J/hojNCsy2hycGvI4W06E2dsTcU334f4gpIzsneJ4zzXR/M5DdKTx5WcefHjc6dwQoUBvtMlOufAIvPeIe9TFot7WlRFz8RPkzBbjMjFnM5eBcgsolIsXm0k5uXn6N0G9J34ooyKh1ijBRTW5E9XJJtkMKqC8uwo+6YHBIAkksNVBXNTwIWLsTq5a+u7dyyRNVxokSvhPf+4yYDP6iG3YpuQOwtHji9qguR0hoAQhP2vPR/0jiUZHBZXh4ohClR5AhhVVaOORdie8TriWv9WizLlILTO+8SaZc1AeOwpDX3xSUzs7OWyoEV+bHknj7AdV1tJoJV3hlJfCcOETzOX8g0Ho7Cp8f3/uBzFPrEBnDZ79C6k2ulf1Q95jz+rZmSPUAB47GqbPgxG0Qb1L6LBUVF5c5EzAx5ie6LARUBcL36519jFu+wTM8kpkAI/1vsW3zuC/OqVVjtMhGnN/FkKFNQZAIY/hdq4Jm+ZpaZ+NMLF62bupmmf9kPT5J8uwrObd4zbo7G80+XVw5WCI+QZy5s8sm6R5R8u6ESMiMPMunUtsZ++dMdLWtstShNBgFzWop01SmlxmvgRVDvKBPtCAIC9Hp9Q2ISwNC2ej3gYRu6vEYCUvzmdj3mzHmnb4VVhvLG82FLoGzywlwut/IRVYOiJWYYmmC/iGLK9TLtB6Hij7EFgT9oGbHwMzgJvMK/2FUgPFiCEr40wUxgB4SiSS9wgE6uhJ9+UAgwRoqH6Az0HDbmFMUr6VtD42K4sDdQ3dchM0IX3wVMalbkJKyItt+TsLpRknEzo7iykS3ePhlX1j72wq+n8nPkkReuAhkGC81pPa/kkemsTvXwuj4/X/D2pE",
"7sqZY6+wINVVRN/9dAnlwYgvaXxFvrd2vGDicV92q/CqSPYXTx5eew4Ud41ZZN3h0cpDQihzYnKjuT1txL43LjAGJmRv+SxC+w61CQA5TEnHOuHOY0qfhI6zWSsJ/EyyXUwWzwNP1rl9YGmsvtvNDXeqkj4dqGi/yp8s5bex6R6j2/CEFfKCNg2Tx1Ar6T8Y8wkPDIGjX6le6ge/BP9hco4X682KFoVhcEJB/Kc18B5zsvurchVp/MXya4utMov3leSTu0umfMpn0KklT+93Wy5Lt4bPJOTBb+uIPexMPbvaj/0unXI6/hX9YRQXnltFiGbKVaYJHHaTPkSbyBceCu4FoNjhLLUTXhyAfMFpJY5gBgY2HeogUSz8hZjVJK2xBI5KVl8iM1lsq/TlmNl5nfs0vWtYnxeG+MxVaDAQSuIYR/s5tGaBHhfjrWoy2rESJgZbs3pphK1B2YpLeW8SCS29ERpxhhwVyh/76djkEK7CeUhGv/rvhdZ5PGDklHRAXHIk7cNVYOKZ0I1jLk79onFhk0q1QrK+hoqBUewSYSYnbSVAkXRe2H+/BTkDLxCli9E+zpG35hcpUd71Iv7Ttip/N1oV1LDVyZsdJhhrFN+C6iXt7ewTevfqXeLrVsZkuqyBLuuXXV2orqOoMMwhtFXzgr2PB6Om8cp1BcmCVmRRhI16fqI2auT7IRpXnI/su2VBaviyhFGgdHPgbvu7O45ob5T3BV3err4nr2DFqka1CG0if8pdlnGtpGJCSAFGz8yssXDLr8vgUMrpRu47bM9DIte2747pw3K8KlcfNvVgDcYHlKDaKByufn4cpOxJo/jYCzDa+qkXmQmwen5QAnqZOhGW/uexc0EdSXc1Rh03KYiGJ+3VPx3XFvtSCMipZJzOKMf3Jr6MDSRAwIdtgxy38tiqAbOfkxIqQiMOZx2bWD305c0HChEwHZrgsoKLs+k2IDu2PmsaDxNI9PhGQKnITPUfnF6ufLQK6uptzY5B+UNqAXGqEpdCIpseBzs9X5fSzZVHhofi9wDcKpfsTUe8TpgFRqZWSjmZ7K4Q5V8Y7Yf1AvvjCDXFSJaCGwmwAYIGGSILsujdlb7QnmMtvPEsHB7kDGg8Zktl5Wr9lFrr1D4GcUTv+hyRgfW1FMgvfVI2CEMIC5zcXSKrRsZJ5LbaMIhn7J1X1ZBCdlL+67oqXTCd67tjcxTx9aKv3h88PN7tKfeCc/TxuUeAL2e0ldauTb52sEJz3ZO1b/N+wY8RTpj5R/ryp0JbtCXykBiVnT6MMyQFMlyIurHVx1OzueK/fjSN9Lwj5WVSG+R8WUvo5Oi4Pf7ocsgl5iHFnjfLS+kSOIgLrBO4uHrdqCBfDJMo3/2fQ6xT/TeM7eGX/6Z+smBERxwSGfYdYA/1q+j7XlkB+/Ko1yIrA4E/YsVTU/NnPR88C/aNcPZvWDWzWodOczsdsVHNJTwUyFOZ1wchDM13gL2AGp//fECsnijFKCRTgEcLgYRoaLRzXFVReFAs/Jc1O6oYP1EcLb925LWwDCz/7H/TbX3kZWa68LUMfdVYYXZpLaCJeTGG6rArshpX66DNlx0Mda8Tyd68ui9mHpkaMhMvok0NAspAnYHG+mZaPYfBS6rhSKdjrDodTwBsFrKhNgHYMDIMsi+QuFkV6YNhG2M3zv9Y1b92gybSj3fogTxsUBxX+5U3Mv1bExwqEfLMWYh08Y9+FLlhgQeuIfVWzZhDm0inkwxmKkP0hQbUqBIvGOFgyH5JTRCcc0RVA/8yZ3+yYTJN0mCQpiXf3ijJpkAwCWGi3+/xU+3XNDjCwtpbUHMwNxwlKNZArWIXAyK4sgcagPHzkSNePA5OqHOOP4ZlCBZhd2kHNaePU4xc2lzrQoi8j9HP3BvaHuRXf6R54H5M7kfyOMkbbv8SIqZhD4NOHWLrKS7cQTJkf0pe3deb0pUVAgGPci4oMENnOnFrv4NNScKVvBAz/+72dPPCULl+ajVOmF8x",
"ViFkb+OpwxjJ7vEynsbEuT0FYlncT/Bb0J/ZrFuEJF5Z1Ij2kM16ppWixenwgjoVGmhC/dDxYG4oA4rhonyDlv4vxuI7KVO0J/p0EU2SPfRpJr9F18AhpKGGr9Rjck1rYDhLI9zCwEt55MyFmA07AL1GHFB9r5mcptLBz2ULhwCRmInOgHYsunnWcwotwlKv6Intibiloz9R3KmXRnDLnd9/HQ+HOwzy6ydVb8LdLoJsMQfKx0TDNUlZHbCaLHYtW6isQbIw+nsRWqh7MbGDU68fOvH5Kg2+jsAm3GaLbIV7FTMIdXg9H/3zuQQKi6VAFCTh4X+dfUxy8o32JcWInxLBYRXFBdUsZB8em+IvgBBl2gsD8R9KNUcLDO/x1eJrt6sNPCYBcBak3k6PGOAta4//u0NPKDSpz4qtHYaE8wQ6aJYQ4uNh+pW3DX+WfLZT+Aw23ncmE/t8kU16jU4jpxYucrT3Gplc3NTwaIpUHplJoqMVgL3+sH9J1jT1qEC2qyblH+l7H10UVe2LP5z0yvEo0L1X5PIaKW74qmI4JqQL/Fs1okvCVpKgmaOFtkMJ6YSiSSl2YdO9vJD8XCJ9DLl0ZZDK9ChP2Im2n/BpEhAnQVzG4Y+DkPDY/icLqlk71EHYGrI/uWIPqtmYhe0SGLJJrONbkZYWOdfXDqQ0dTMbIIvV5kYyhIBhxLBJsnNnE1VdGeQ0yra5GMAk1U0ViRNsDDwSQySnvgxbrSOvzO5yZMeG8CpQKy9v3rlZg8Tblu/YYZUbZROPMX5zehigZCyQgV94iJKpO4UtBwuI5K8wykDDxAWqqDEDCPqADk/sSTXUOtVf9WqBXCOc85qFPLj2f/eKnU/uecyN2VHwPiF3DMdI83mVoNBUi+TwALNsNoOfgXAt9UzDTTZMeV88y1GjUrlO/Diqn4KwIxFxuD7cIYwxr5kzKinPtHV+7+1t1p7l/5Blkddw6ygv7t0SHmenh9bT7v9Ze62eshka6u0d/1OirKy4N3o5jZbnpGdQE64wsoB4lYrcyuUcqLUojrvGK7ps9E75pEsdNi3DnzAod2wNlYZRe6Y9tgB34yRWQeIpP4GUG1ioSU1PiKGrp6932xgqkbibelBswce8dvRAOEphFLNIkHTnk8M18B4+STlYCgwxtb/HapB/+aOJA4hQwklaOW0eZ52IuEJz349/a4hDjLnfzobIgWOgn4WaL6c/5LGwZy5LI11xQYvxzx8V2Srgn04CLpwe54pgFv61bHC5NZe2CTa7Boa15IIk/p73Eq0gtr9FkyFvRCuKwbO0VL8n8ZUYcmv2nGYiMDdjqzULr40rAQJzk2TIgcphXBbZjx8Z8PThjBGxFERW6EDk3W7P9PhlxmWbbiWTAzwA0jCTRlMdNqxUB7o8ekdRf4ArsfK4bz/QYUimjzE6eoza7QrDWRbOaEx0JrRWpF4o0JUQq4ouxJz6F4PBAadQfhPA/Z0Jawh4h4YAHl1DOinoIvId/5uPEx4DT43y5y/WPWIfTih6AjNEIWJU2q/bbjxzTffEn7yi4ecIn3JnPbNKwLVfsfFwv2wDLQL7uaPJrzxEXCnw7S5bikhlrLFJTQis9qdgw/YfV82zcYtlCc3fm3Svw4hJ5rhEZl+fU7NVnYpc4A3k1DtAxxXv7Ds+5XLKR8LPi4IAr1tUXTblv7x3XdvSqqTPHUQnH5DyJ2laCMmBjP9QawnZhqw0iqgBeW1eaQX/M3H/Xq7r+QT0RgMHuS7iwv6sPyw3T0QGRfziL7oA8wULFNJhz/lR4Xbr4TshjBgH1Avhzqfo5/f4rd48ndLqttJMtxrH3I5ymXaz+hdIgJ8fBmrTW7ZBUNk3yMwqEY1SkWYyaYJ6T+cR1bwNY9+Ng8a9jZrMXAOv2WZjk0kRUCXreA+nwIZsQwZ/5xaUJxZc/Anf1fpDQZjo54BCdSsdgv8Ffdos9ovGnDyWNrh91qk5YUsFNiJbdNufIGKsHlzPhIa35jWp",
"u+ZPeT/yzAN1KchU+gU0/jvzj3jrjKx6F6bNR5v1ZzRNLjWJg0Yif2yTYUlH6Vmer52SjjKd+koRGOvCeM01Ys+R65gyKauNxeI152j6KIlxuwP0cSGYQ7cB55/TQCABas0XS9hFzMm8m+fdhbApZ1GNQMWRp5XKou2nqkwfxJb+pEPMKT0G3YpxFqsoYhLxz/ufzr8mJy8QCo+uxAb8/o2S4oxi/WSuViTZNFOgg0GyLUu246ps/Wq13HBG8zdgboOwXwtodvVXcZPMrPUx2+EDrTxNOJ3zhmZWuD/Rn8FLJoz6GQO3nAmNFkIpzsmpR+xrKlXfd7AEcGkA5jqP5Uo9XF5v9HyVNJ/Y+gEFsfmmpCYwDvBEYnsfxkYg/DtgrkHYZhHCaBwnVTRsZ0slcExKXcM/zdq9iQbCFQG8xpWr7ABXacgM7CtHTbmXyGpt29ido+fZz8jJFSgflwUa2RqmNFbImY3KdSlEXQeh21iZrIKG+FK86uPsJ8t4UMWfCi5Rh28IgOuUE32y189vayLJypGItm8JGKwuDQc/zCdtci82AEPAwMPR3sytbNG19olp4ZkS17tP/AdlpxznXgVK0osRbOZv2Ftm01on5CFOFG8GwsIktLZJNs7WnL9swmeBWPPJe3BSRdWpmV6LRD3u76+8jgh8HENA3DBftVjTp2vhkazsoQlBxxrXgLTl5uqQ6RVXundootnODqJw8EdSHz4ki4arLOC73IGeZ4xw5W3sOIBPC0erGtB/nxWsRFebRRwOCDgf/E/mHCg5OuqEOEtew5I94fLqNNIsoaBZ75S4xzkURlbNynx04lG3UU2X7FahWJyF9SKvXYd6B4mOmeI38DfdsCq/CgrgHRFC0Mm+6O8WARxhOUBsMNRhncJ/ICqF28CLoGBqEn7QKwAEdh/oUVlvR6RgYXBEYME3fE2idlSJ9SI4uB2/+ZOCrQxC9db1PDIqIl/o/SNlxtj5SKkXZE8c8/bc+hDzQxD2wxJ9F3caAU9cC69C1q6UChGgZzm11xuisB1ttxbbhELbnFiyGcw0Wxmlo3szCXw0HF79EqPWH36Nz5/GH4UXRoZJAxeinGtYssX+zzd40kcoePYAJ0dgtOv2WPWGzMi7tjzEk++7uz9/qa2aWq+mQjoP90syKkctVN2L4+lzZczZSC0MlqsCHU9I2tV8KkNnTkSjobaawOxtBAGpvGF+/OW/ysDqTI3JdoKmKUugqVo8xZExkg/uppgThmJ+/QvaRSeRHzXPq2v5PpjE4GzA2xtwtUNWNehKGb0p767hPV+uEMaCeU6jXC0kPol+ahXQcwhXsRPVtXrS+2LmFEK9ihRla5pEsGA/NYzMO56yw1+xUQXAm52Jvib3c1JEd/K4X12FHVIsgajxPOYciq0IN5XhIkt/qwOttQrdV80NCeJQ0HSDxZCdGeGXTOYeFG6z5CE4Vz2UTZXk2RXIbdHp5fWjGvcnqqGbf4tARsg+ATY+YOUulu1xVskZNydeLgu/H4BYGj3dOnTBocj6zrMhGKFfGhlnmCP0ZaoX5sLBX5BKhXl2X3sDfChRVkcsLzbejYhVulfANXz7hHwre7QBlbKwSH/03o0z7fq9wI3oeb64/FC4eOC539s4FHMnsN5AIGoQu7ZCI/Jn8M8YVDNZv1EFl92sFzfdoSC9AsbyEUfR+VsL+53L2igGTWW19z4NR7FShyr4LpQkaWcwc2dhB/uQ4OyPdf3h0mMKNNe91t6k0ZYuypEXRV7hjbHhn+ElfSomEgTNMB3+fpAA3+ixRYTGMZBr88ogmwfRMK2Qq/8rJh/+zxunkfQ1u4MV0/Kxc0hvHttrtsLDsQYtgujND8X5pGvvGHPfsclMaKVxQ5wlES3YJ/GZJixKenx2fflX81xUDPnrh+ZpKgSbQXPJxY4xmeos8x0JFwp7m/Bpq22lR9n6iNVFPrymf95Py5j03xZ66QVhY3j5HmtwNwkqUxma3D/sv11cUhA/",
"PX23/RKa/wE8ivVLjWCSpstbtQC6JcnSY17jZRgCG8oCWiAJJu9T9Hp/mCrFJ8FWmGXz8zOShhPIjvQ5cb+SkoVOD4WuQqp71G+z2eCn/flKrlUa2QZQK2/dVPzY7sz6ovLvdQiu5i36rfuupMD2ug9UmJJy9iWdXm5bs+ePvxAcsXuy5w3lT8g3KUtaFNXdVC7+ggB8l/c0qNbpZ9vfHf+JGNSPcLKdZ+0cjb2MmXZEboy7pTNmVBJc1gWugVcaI6lYhZ+ykw8APahvpjdVt5IsLlv+fg+0v8z3cXmB6gf0V5IfbYNo/CBE3MItozNteuOH0fPH5r8XQGhLIYxTd7GsZVQ3+ao+Tikw5Z4395TmyI2m4L1FVxKGeY4axD4FSltrgX1nBup+zwcI67RJDYuGaq0cb9vKQ9Y3l6/xdBGwAPVB47VTPr/ADAM6bSsf7crwTWQfNEwqgJV+H0ZaVKBvrIOWGLnBHFRqy3R+3yCqT03DDJA6WacbQRi9lKye0ujOvi2iFR+ZbO1HmCtfNUV5cnRT1zAQ9bi0Ila71Tv0nyhZpOBQhUqorhEFVutecoWas68zKkheaj6R3LvlMzJfo2zVkuPN3k5f7Q0ZKn5feCb+32uWjURu+XtxiKwG4d12fLnwEj+ghXrnU9VbUVI6x8HWRu0RaqTfTAk58dvGLW2BAK8Wy3amqfDZ7rVok1lvC/8B96fnXMDGVA615xGPFCbPy3kwREYG923pWReIuHvxDhIFh7hA6AUZrxf9QGl0Dd6T8twMBqW+K6Wl5cF/NEzFfJbAqv8DWotRjyx2jjhL3UPTiI6zVEDPu9Fg+to6WJbMJjPUWM4fbVcHurlWjRL4O9I+ZdUolpGkN9+TakCUcuwSQNg2X+bBKnBHp3rbFkXeLaAG0d9dErbb1cqXFcAXPAlr0ovJ24Bu3yRZbak4eWKQ+X5gfDHdU4A6vg+9U7jXfrffoDNGrrHgghBj3j3X0pwpR/5lqTYDFe/a3rpU0wKUDr/kUqqqdROdp4Xzpd6w51Gqqqsh7uF5KWZpxd+YuyGEtEJp0t7OG5vvgdiiRybC3nNpZ34CDPAfREg6oUwYvvYRuknFik9dRyEgyMbp09sf5pgnypnn3/scEyA40kj1AIx3qW4xe8W0kdG3Ybpq9/FFm1+FAKAnhZ+P5CWECxj29PyCkSzfOLCCJH8O30dHKtbsh0V9kjqR5YcN3zGHiC/2Nd2qhlm/FIBIQf04FsQ9uji4VL1zMD4/x4GFy4V6Pzxv72OJGTDWoProVj0F49QqxLdRiOVZBOjdQlWTGIUs608PZYr2Be83SpstNLfjaJoMYbnIMqGQsjE6NUr7LOfgHXGGqxCKHql9a8g9fY79RIA5IMCR9BjNzM/n5XsYk42rdShF9GO2QInMTtwtbDtHrEHTgy+/XfEOUH6Ot7xnysuV9SzSxI6WhDNJEo2N25AL+iPd8o4SJokkK1229L6eOmBD4AJS0ZbmVNJ04OeRWbhjPZ3+Vdh2KkxI6iXOIzL3XrAPyJ41FCOyFxrUAuVV5n1TcUyW5heknZvSwczKIM9uzzT1kibKPjoQVNRqlQlqBr56VyoWjowlaLD/7je1ZAs+w7TdcTNwH3k5NoAIRrWB8T7jlYsx+qjX9EZiB5gopezwn25xo9z19gtDVkqaxNNhYIVbTCGUrq4kWHiCHKzT8zHS/hTKxkvH/Ll6z0F0Qy2DndtyYZBBK6KxYiGo0/rcJnDlvziljKh1uSs2WOi1wRSFo3cfHXX80EyLTOZu8F4GJtFWJHkWwZa+FK+nGLOTgP9KyVzVLwaDUHVkRaHUGY6nCoXj64JT7WcISM5dNi28ea9tgkDrblxzDGXhFDhzOFx11K9uaXDqnAxSgaIqWfJ22lExvOs3KfeqYQ2jhgTp6UcqkgeNsXI+pRpX91vebXqEdVF1VWkxFxHvDNGznfoL5petM2aWE+6IUTpsOG3p+5BeXO1jz5KwAJqSDpJg",
"MtGssGV+MGl2MiY2UsFsTX5pmkZ5QvTVKXsJq3GKP3B550nXhpSoD9TVY7YLoGzXXGT0YhWP+WPsFUtqiu6BvR8pJxwyDuFXUp9tzkRipZVBOCnH98ZKuaXMy9ziCMh0cHfl3qrYT+eQst6CWxgeA/eiiX19IDosyYyOIJo6TsDZ1tdicJHFaZ6N9ZWhMSt2//XcSBKokpc2rzk8gxFMf6WHfNF0mN87ynxliKT8kgZo6mN94sexYUxyN4/i2hQtFD/BWHG45dZRoxyyZ09wP2bEqSDU4nXbI8PWal5U859icLbH8qSEEnltPFEBZSzyUmsBvbLdQJ69/FDMdjZcT3mjBIJFv5Yjqs5UEmkexGick1Inmn5DKdTdaYQhVpmX2zug1QjqlHeTZkeG/tcYevGXw+1KA5ufyTKdYDlo+Yr24jbG8RKhORIlD0CTa9KQmQmC1OQd3HGH0DG5fZj9ypEOZz+caZZh+3Ve11R6qGV6BkyjY+G/wGFXEFj2ZHnZyV29WnCARN3FhmKoOUD34Aj1GgL9e4e1l3Hbx+DLiDR8Ke96zdkJslGPSN0iQjvoozlcwW5HDUnjPw8eZeFj+j++yaQfZ1MfOh0Q8FckH4F05C+0Fxc7sGuOykh0+xTHXsO/Omg98kaqz1eafqtwTZNlIOmK1mRGSi3NB5LKHlZ8o5RY87f3nUZeVklToZm/QaSrEhujCxhN6ewE84reh9CaOQXMZB+RFwHR5CjKHJzErcmq2OHza63fKqrkqExXAgL43Ek01v0fdZ9OxXsohl7ARoMsdts+3wctu/0kAflRALvi90MImCBZHvDmLwimL9HR5iWrx4IInIa1rnM5t8Unss9KXB4enk1H7LPk2M9nzqx2eoQU65v7RjKrtkcU+bqrIUgJoizSMu1EBuM6KsmhVsBJfgE78U4GRuKeu1znqcVDyvS4WAaSX2fkE/gv/HTk2izd9DXxLlCNAjIF1bQUgusc5CMcVUZLdQc5SjYjGSitLpzZKdd26BJ6ZddUQbySsmvWPG9ktJRa5Jgc2+q0TKggROjuWmxuedCsuu4uKKte9QTrGpbu7wlhaWL6ylmc9wL/axlF9yYL99b18wLuwnFvS18LqaSFwKNGtvU2Q5+/N44CYw9OznOeFbaaPZd3/yPJTOZvAZtdkWbOPt5MaA/SCnVQpHE4TySY2RLGb8bmX/qcx9woXrMgdvHU+RfflnDq1Bs7tJfSX+fLqzAc2of1yL0Dstj43ilM0gV0mMkrnYPk5BeOK5StIORgKx696wYg+TOxEHifClTfI3FeKsVRPSL3s00DeX+b7LBlCPqnwOAh7qkqdqIhKULTTQhNr5dVad0YJdgpNaNtumNLHCKGynqIRWmSPyp06L5B80g9FgChqlpYdKihaijPqjd0NNVTz0sUS1BEtImpqRe/uMxugT/y2ghSc5K+4SbRNRlJIESzX2ueNmBA4EqBK5694rtxkCEXN9OhHIeqKJCHJjeXR3ZdfAM7gqBuZ2VBXti5d0h1Hf8fhSMb5FL5mG137ojfUfFyPVcsNYGJXz76upZkKMHL8M59Qz2mx3ky5Zg39t6tfyHM61wk6vCkiKiuCh82wk88Ozv2iInulGp7RaW7QjhaMt9ceunKlcgspi20/VzC4Dz5qYtBQkMdNvMwCPUKk9QvOMSrBhIzrMX9mN3TjLJM2GUJkNyw38j+cqws4IvynZD2E/eqwuB9RLZmRMmzDdijrcXyr51kYC/5PHLiT5Pm3nZBYpTUswMoUytFQKOMOOpzyFBZu0VbOyeWzVe8hc0UJiMfpMu/h6PY1Bgk5/YOG6oZH1pvnwn0bMKaoQITimAz+WH2SalKx0s2gL15Ci6a+mIMgcwU3z7V82qO0NHD62DdiWGevTD7S85/eWLUh3A0Dq0UPWGbQd0iT2suLppTtDHYPVXqewlGXEGxk7uopNijDtVwFSgecSscvQgvnim3HXF47QTAoTg12PTyDG0NUgWQ",
"htCcmylwEX4EF8xH3QGp1BQH9F9pfziXvOQQs79jttz074+U/1YUjUsn4h1zOeGGOCgnYX/A1qRYs7VH8lfBu9Re52VsmVG7CTrcRXyMslsbbosDFLDJ8GzL1G5Reehm4IfScTzL4aMIOSJae1pTszRzcedZ5zMLPMPPavLTMpAlJ6oLO3Bir+E6lsfVRdQXKwX0ygBnbHPMCTKPf/N8XeR9ZFUEopEYzKk0AZ1G9FlrUhgRtoAe+pwYdV++4acemkQtFAGxABGQEpuqE/wPpb/LEDgn9A1mowurq4UdY37UETiJzvg3Kj+VjhkDIP3Hyt812zMGgpJ9+9SzLxX+6KqWipg2n8/LAF/7CdF31tvYLZMQCuuyU15IkwxSmj25I7Il6J8V/lEOY9oM7pqGTh8a11lcVUXLB6Wl/ykfld/qo/84QUpJs9jaNkKv/N17fbIRca71IKzNhrW7MFfAQDaLmmmCgNOEU+fGHqV+GQ/H7habtm65pDpD7R/3QN5tHMsLylmv3HFqN9jButzDmF2ZrcqObOWHUjFE5uV+ZxTgSLRAQiRGVUHkrzlBZjLmsP314TERnaV+/DiyX3NAng442sL/WmR1iLnoCRBXuXLNppBFeV0x3O5wzVXKekPDzTeu8InbvWCXNOVozSSqVMCpE69HyRvq/wLesVGVRG9+AC1uo5CnwLd6hiVsbeNYUPdXOqXVMRYmKeLFY2fN3/czO0eCO0WD5OCblvq8yT+k8MkUOQhTzoaA7IRBTMMBc1xl3QcOOWJWr/ifK9asGcA1BfTXcPUFdSLm++LnmbPqmGDI+BtKVjNeRCXjpIX8aUfed2mzWX1fObBBh2FBrf+GR2Qoblfe6tcaTta2Thew6L1bp1m6dukGzv6/AMJAOIXTFJ/gqNi+rHuXYd1NHyV0SOsYl2vYZ7uQIIQKxKuQ9LLLKPyQ+o849yqTZ1jlzduqIA7idGgTkACsP6kiItvyRB7bhX7y/Lkj0TcSZ3BpnHjBFbSAor06H/gUQh6mmGJD22rtmM+OMszeYtd0ilhu/WlIaq2rsDZfcEnltOuYerTTPtF+SSjDyKchYJfeHtUwtirEgu568aDch2+XD8JuU5ux/EzrRi3WL6E0E30+vfninn1pynwHYC92j0hNnlTI239SXsuXmw4+Hs4rysCkFwXZEXmQJCd6trL6wHzPIAS+yqRWDtsburYtFLx00MPrdIp2fDaY8RN2uYWFiJgG9Jba1Wzwe4kle1LNLdeozY/vdUhMK+0q3XLyEjfPb7xwoAedwvoMyVRKYKS7l0RulrCWZ1VehACjdRL0fAM5GoMF9SResbV3AFkETB75okt9nvnDpoPFHVWMWEIPfTNg62pdV2vdKn4tZf8kj16I64NWxFE+v9lNdZRBkj/AAMsIEUET/CDGo24atqHkF7Dyj0rcXggFYBjWoNTP++eD1qfXDy5Q+BejHkcYi0FRp6lOftmnzBXvujUo2rrt5dMSe6Lm2bsbggarus4GxyEulrz4lH9Y+4BttLHuOGNdv8Qx1WInMZZkF4kV4QGlSZVJycczkHYRRB5HrtkMdPBQJQndZAb5e7wMLIPcopabwOCAsS2dNm1X4Kx0K+jdircnT+z2ZYVmotsTnM2KPRM7Ivsp4sU40uuGQySJ4lZiPdp8QOYysubFenoj+TMDnCeCF0BRkDOnxjzh6rvSoWcNATCfGL8m5BmWfNuPLMYVEEie76g0KDIqcxjc6dDSGzE2AHdFGraWmRsKbo3QL1dwp8IdehOIeAkFo5WX5pXJOj55hIOOSx1Klg21yIxyXNCiaSDK+5Lb20M8Dm+XPwMk81cvkiUtpNbFzr7MkQ24wsoFX9Jfr+Kd+Dd/vNJWW9jQzCL3OUYZwNoYGyOtiutWVE1DtDQ8TmMButt9g2Q3NS4EeoX7lO3rOFRg0Y9XExXA5hclZjPU502+0ThmCPocnYlX7hjOPqli1xMOLYzJbLUQjYTMn40NNWBC",
"fHVD94RgwEqqa0uAieb55aGPGFHowCHSqHSglqs6AQt6vokuINQ6GgHg7bsqrwkHP8AyfNAGBZNqO0/79UEzBxGuDcr1z7uEgI2+tHopZstX1oPB3gNsrKc5+JjvNHszwNz9VC/oBlQDjfY8CUaWoP81AsUrbH41C1Jehb8AYI+R3265SlJq6iGE9xxHrKOMbPNUjZ1dSOUqtQ2L6QaoOBhehsKTP9Gv+YYWxzbrkGVLNI2iV/MACAgTE7r2vMeZ8+6SIh326o3CrhrEViZbGgaaZyjCGmuzInBbpm128E6jskIjUMmp5Fik4MEIc0p4C0LISHu6m4qFzPP1ccwMLF/IpcNQvxCD1J0deFujmRkvqdNKuVIG0YDaPirXxCUvclr3LmtOts3Hfj1uUeQftmK/Qz0Lxa+7GwVxUV9nC6GZi0SabzGLRJQYuBFX/eIpYBK9wwxxaGL5DD2HhiHwepUz+kkqQwxtOVU++Lbl2EXp0M4abwNbwgCges3NlqgYSRlrENJd7enIgBb/Inovc7BhwsFNbooJpMe1c+7L/aQyeuteMORvGSQSor5psnz0mCOeSIvc8vWt9wz0h/Zcegnd9dRJD7I9JEdi5Ho5+HMk7cptqq1yJvSRJ0oUP6GKpGqtzae0H36jQbvv0iLlrLC8ZFjc+QepqVnEN0lnwqmKU+US4LilRRtXwhmsdGT0eUTuf9ROYOPOHkGIcFHdJP3WVgC1lMEQADO3nXeAqojNMRANzSDz0qnvc3BcR3ksSwxQDnjO6EWOVBx03zAR3aqYUpyTqUFej018ZxkW0vHI+r8uw2Udoz6v930Ua+qasmQzJ5A/7E/EMI9eJ/uoxgAYijsGlIveYq027HuuLV7eQRXjUeSbKCTM0PZl8P/qhfGhN/3q6K+3YxefH77zmh4gC7cSpsJyjzIO6g2zyYJkimvTawldY11DrpNHBcaP6tvwetf5VVhhb9LK6QtXnIvnttEWMpPkj59QuWAqAqMfZHEA3SrzjqVm+o5ReDWd9M6Lhu60enjcx33ESusvb9kmt0RbC5Uz7Ceou4dMQWGzZhjwXiect9Fv5E4NX5wq92yz9TYO9PhlUog0HeGvWhyX3rQ0+vRnu+FLk41QNJu/d4/uhnR8JgI8ytDdA02VBScCQwIdYBgyuwEPPctYiUCFCBsY0dT1Vf0EGsjm05Qswt4pBpjegZlr3hcxmiyc1w1op9oUYteKUfXnt70HYqmW/1gCs4WCnCDIGPWNSjFPekLiLaavVn8823TsTnhPXxsLhMOrEQAu4bWZ/7QqZsRf5PVIDUb/R51UFC2Wyp66LwulrET4FzSOJK6Lpg/RXI/ZKzosdM42/5mmiLsghT6AEdDLEvgJbG5CYx4vSKsAWjqVKY+Adtu95kjNAZdihntPj246DXp1P8FGtrlafs3g5AyFm03olIQmAV5sgN+t/ADfCvlLXidyX6uPzKQ33b/XG77iGxpzQf88PqOnk1v1QzM9xuNU6FPiD0YZyDEiDe7DHTBncyFn5iXT3EAQ0cPhrul2RVagh4lvj71JTWGqWk7Qc7a3H4SNeNQtcPOLg5z5ZGUHZTmGyPyG7QOqgBn5uyxpk4NMlCTL+tfzj2mSm/6nrujcUTjPLGQOOYG2ptiAHf210NokFMkx82nRmtgKakS/7puG5FXzGiE26gr0qdj2lilGB0OWMs3ZuWpVj/stNPayRQPm2Qbh879Qa8CUpAugKERVo8oZEDSc9nxjP8h5cJj6NXrnVd+Fns+wVkP8u9tbdeRdF2NGE0IrwP9ylF8QKSOZcb/S6tifvx7muIT+eJDeRovNLbPN9T+YYpoTeutK7FdWIuc9G7CuqBuQZS7zyFm8sX4ZOolDTrSSiK63W4n4S47aFZPrUYkD0821bCqjsJMK7YNTlRRvfy+cDoReNBG8v2SdHFHQoNdonEZHnqbxO0F5dV9bD+CMobv/GqFSUTuAqb3n/T4q0R+GWhq4OBykLtGY",
"9MtEgh9z0HLl3/keboP1MQLg2U+JJS1zVZnoPwXbGf9OwoLT8LQ/igAiHq01L4hDjuGosXzcibFWxA/gU7QHkicglnkA672d/fL7KTv5SCHo/+6lGkH9adPE9n2+9IGY3417iPET463AW50rvPmqj0fI9v3PX07GPZmLZ87c/oAN8Psg3hVtqWdR2u2+nDeCFfQZ9K0IV4EQuxAnb0/ryuMTmTQ/NfBCUSOEKKPp/p/N9BCAkICJdoaggKF9jwRyyegjK2CrksYa/YlERJZaWkuo/8dBGMXBYv3QS0LkY2bv2pTa2bxRfAg+Rr0lPpCDWMP13q5uWXlu9o/iXRRnMpp7803xdL91r86tOC2tccO8xF8RSpch/bOT+SVf9HF/sCpZaYumzVqVJVI9fA3Fzx2Lx3KyO5f0OYis3eqREFNkVo+0UbUNVRwrAw3al4wQAU9ZHoyCiavJG5nA++DwiM9QiT02islYHwoNggvmXU/nGE1jKqM49x7BuHaXhfNwV9004njPJ4Gzf+vYpDXc5r8D973NtwEKQQiLlfEVC0WxN3+8dPS3h62HZEhoq+Pwz0gpSuasLx9eKWPzr4GxOn8aLzEX3uV3q/DCJwZ75fMQKVz3k8vzWiBrudMjqHUeb55z418ableFFfJ+ZBDkbcXkElTZ7gHRthoovBFj9+uvzDZLc3yJWJHdYyAyRKySm8ixtC4xtwI/QiaU4rNDsiclwNpTdCu6VmXQ0b6HGLagegQGDcnV4IGFDaBZy7qCV9jEsmFis+0o0xMs4jnelEQCUXWMTMRwmOd0nd5TYvgJv4Y8at75IHcHFDUjmXRzjusSoPQuP/EWNuMABQzmT8cwOVeI61gRjk6MrMC+Cnv9d9TvFH1l13qMdQLHTO+vDqL7ypN93Z3yrmqsXcJ3hSnvuzNUWGenRGdIaiQsulbUPKB56lZ8Xxx6EuOIe6x800yOguc5M+SCvmv93BiDSJCgcDxpLau7846WZSvng3VgNDk0L24K9J1HHaW3MKWj/nKCgk+/dHSqpt/9TuFSkf9ojQ1QF8oOd88R0JoVfkAnVnveP0shdkorJc2O62ur24ZLQV67ouAUECdTTWxKEo/yXbMhfFDN0N3PeRUVrux/EAbcxwYoDL9X+7XR7couU1ANxJaLhXXZcPW74zjsp+aQ6KmKtgo0aJr3PyRmMXqDG96Tkzi09kGw0jsHRNVKCNN4SX+8h54yvlxjb7l0xEULSMLgp3rQS1GXcK1cYafPCQrqJ3cXVIID0WpMQXYfEBhFowfg45dez1CDK/h4/x3hFJpQ1lzTi1I2/8egDRioIVMjl+9IGU2BUS4UvU5lSXr8l3J74XlvqBGjSVrp8niViDNKZBWisjA+3fZVR3o6cyTgrliNLXo6zkJ0OBttEAXJ9NovZwNWkm8wo/OcUuwwhXocXlol2VAxO6bB/WxFcvgv4JrTLdQX9HTk521aZBp1xEJ7kZcwfq4Dq2QzBgi9GctnGWmBAtur7WED9kXWDF4H1gIRFepTUZFw6HmAoeaPnG0ATLaeGr64jkG+xy9s99ijYXYq+TpSVX8BCk7iJgTL4d7tjGiXi6Fi2ECTv6DnOA748MVof7zf3zx6C+RlSjKi5Et3lYQfJmo5L0xv3QuXS5a6Ff79npMu8TcZbw+8O1te3ESXES1Uijhih3I8RxgkmtfiMfYV0Y0evJOBre0g4dKTZNtacpyskr1WbQzZGSnkuWyOAfub4dBvooJifVjYraT/jUyfap1TLOY2nX0JJ5gXxXBl0upbpgK2A7Bi3DOpuWySIoghuqs5/l++cfY05S9hUkB16JEWUIxAKR+RnkYu4O0u17BmnDQpRxDQ8W/TRKyPJaiUCoRCnhEBEvK6cpELjLUHONhV0sGCezNv+LWMpDaYAgUMlniNusJM7Hl/YJtA/TdXBzEr6cjXUhJG5KCN6sooKFYK1IPVApXAO2e7yHBQWy9Oscj2cULAAyZ9m2PnU4k3",
"qfCqfD1zHpqoVh+HkQ8mEZ9mUzCWz6ngwUNjvKZF+0GcAIDbC4eSjIBHFf+iWGTPlDdX6WnQejesV3jjvioX2IUuNpmKgOlHpA7shLlQBk9ThkYFJU7F+gis1JqVGzlO6QVIijjzrk7+LtkSZPVyW6zgXfT1OFDKqucC8poGXf/+Gz2ZGHBfUdz78kI9Km+Wo1xscW0FaRgub6v/unIG78n7HAlewARDTuUHC7kC+UiaLPgMpXfvbJtWUhW5hRTTJBnE/5JyzT5nsXvK3dEN6ZW0Rbpv2RxO2UjPTk3+6Wzs7k80rcfxrQv1SUT+HoaifZaIqUiXBSfxrfcKdA9+lA5FZqgUBh6CcHWr+yHxH4fjqB+dth1lPK5QqjczwaKr7FZM4KOBezC9tHyWl2ZE8hjY5a3oZUj4Q0fe3zqH6ukzY+PhNnuuQ4iPqa2oD7mLZlM5MOFTxfvSS9WFAomDkKQBTIdnYjQnfLehN8ghmW36oG3cLIxFWEG1LEQzj2AqsXRz/euDQYjc+vANQjgitrIx/ABTfd3uKPi6A2UddNUACTotIHedL7Q35/HQpzeyE8pF7m0jJAgEgAx+bPfP/TAqyK22ZbSH/7x98FNUZltbnQzet+10G5zTFHlYUrrV0caeu5yG5kxhvSTfp4rLdcu8Ye7kz2UU2lr54Pd/SpppxJ3yCrskdipGtlEajEN6aFEqSsEyLWUA/yHY/UXe/17DgR/rt16rRZwLYJGgxJ5GYoBWriYCm3pw8C5VuSzdQ2kDM4pVZgAeinJWlPftBKMl5Y1ecWJfnSIzthvOdJmDBTH5vfHhdsaTbnFjFz9ASyTDtU9LYwjJZBZz73XlV1FNlU+F1QxdYkkoXF+HAfpspH2eOaffKNE3aST/rDtoIYlIOITVJX3VvKQ/PWYja+ev38PFw+13Aj6i5CWg8fPoyzkncSzKGujzTq6cu+vAxh/ppXhCJOC6FlvTg0O89CgkVmw6Jba4krU0GU9B8zWBJlZro/cmz52HTrU/uQCrzgHkx/tWIiwFGjLJQB/YER5dJFXvKgyNxbB5SOlus4Qw5znsqHS6RXmXzZdXDIoJyu871uW9o3478leENLkKwJJG6HAu4ZbMq8zMac7pMiM7vEVVNa3dWq+WuLKRI+0V2hZH6TN7F4avflo3bbIlFbPKWI33ak68rZIUKahyxUUuTuUa/NzuAESnjQBVlHqAt4UhXIDCRNB8kMrI6PJ9QW0nDeRXwDbvhot5Sh/be8j3pNsJ3Ih+JfHOqwp46YHr4fsaH7KoILMQ5v6ZbClxcKzE86p9gDDYVEYORIp/w90ccS9ia8YHQek/HW/3+DoNDMY8PKhqwkEIqgdL4yDJGYzUn00xjoen9MtDCZUThkEnpuXG7EeYg/fCd328OKFhr9mHgHvkhALDVx4x4MkZERFSRXQPS2BhS7q8dG79PpIvncShFnzK5uTZiW4sTxHuwSwaVj+3eNnLtl9N5pSjc7/pmdZZkomi3XbEKmf21qHjA+K4sipmKs2icyjE8eamh9u2kvHQueV7amFn8esR53sTo2CrasEN5B5Uf66/9Jb9DQmft1+hpHI6NNeXGFPNGmL2Fn6G4s8FoFD/YO6UZM8ggjBrLELYUf2dqSZzpxnYC1x3mlnanpu/xePYYmjwHZTngi0wZOjtuQL/Y4nW9q+TxQyYbmURDSu6sbhUNdGxQxliiTMpatLZ8MNmFB8sWCPwH8uPUqLBf0g6bh8gw0nmEPrXZ+SJHdCe6l8UeXnF5obL234cgdV2YB7RyB+hEcLu/bAauydrIhDIAPOdCb7nJ3gJ1zX/Cq/X/S6Jn6uvNr58soemCtQ/3UjLebe3rlWPAt2z3MT+r2Xu2N0RRs8CWiCp50vSRr47gwgH4xsWXl4llWJylSdKMlI0VLnmV/o1z0/x0DMoODR3vpEYUI4TZmWztKNCFbpPbvXFzU0LzAjvCSG29kQlRO6zNNCsldH7JXm+2MmHpCmJ",
"ZEZMlv12ocoe4XQzL9PHfLRQdkS9ntBoEah4+JvsUgZ04egXupFnmfRNb07rLCSx5IRoZTQZmy5UoGlbhOKUlo0YjW3nJTuvl9V17sNW90Lnl63pylwdmasbh+IJhr+9SHXFMPqX337ruU4VFVd/f4BFLcfigUuoMNcNQC8DsNu28H4o7CQJ6Ou8ZYQCEu9kWW6rqbHJFkK23TCHfytTcsfvyxyb1xUArW1YTKFC/3okAAPeklf1HCI1VAnvMp2pVYA9PvYZZNwyfbwpqnVb80oNkVeULo7dbhm7CB0euTL9u7XnT63s6RGL7eRZxx7oPoDpHTOuKQud5cp64SwHAwwP1gRYHlWAlxcBFnSm8TsAzEnLCkxBJEwSQtfjBZUlFoBBXtmS2LN5a//R6CfFyq8HF7Bl0FzLdwjhipxajVYMU+OYo61J+aKxMdaGHaljqxkXcAc488sZBLMLwxGXIyD6xGci6ZXvD1gRSUObX3ITkzFu4Tc0nIompN6bozKBi1Bc0LJvp0QfemeB61n4/YP51dapdIIoxmdI2voQPlfR+X641wCFW5ex6x0PcWruyJ/mKQ89NelyaRRt+5EQEx3PmljzkmC9dFYjCEMJchfBCFqToJBE+murqzc8mnipMzqnNJ8Q//SNJOYEwGoDEe3x/amq54mUH+VBFYnJJIKE+oQ0Q38HTIfNR9UEQKG+G27joYwPOsmQQaVYKIUcU7TQ7vB9nkYWmAbW6Swdmr0MBrknF2epjqatqW6qQti2QdEbgSHgKkVBk86/IcU85C5bBLT7SZINnUXQUbkSAJH7RGx5ExIJvfbkGP60c1TXnuiRr5isWb0DH5gWoniEBwxX7TGGY3FVmwk1xidFby8IhXCrPoNUuwUS5//ihj2stMdamCifWgjogZ92npfn7SDLVlREwS5/sINLPIe6EMSQ6ZYt8jqprIvV06N4m3xfcHFm118ex9qYVXXmh7//MTIv1MOP84lMk/Rn25J7Pt5LKsWSraYyyv3hRgtCjP25rWpJ38eiB98GVrV0Or6fl9tV5lGQIYuSOR3PB0+NjIYyHiUU8qYTG8RBn3sAfhERnv/1kqsAD2GvhS2cr5aOVZO5ZIi85zQODyXYjc7PSK4PVUmgzL5PrOrLdNgwwqPgJNB72ZKgFWtZ1wPOXiuKGmYNeBcbbEHTF+nRNFWBf8yn+K48zjFxQfTl711Zeay8Mb6wo658CDwbNbD80slZZnKbLnmpwNAZTN2L/3TVCHG3YJbwj9cqoIy6cz2L19W+Gx7yDZXZYgd9vj0pJD8Ck1mBWbdtlam7cKVs18DtbeWFAtJbsemV7+lUvdBTGZeD2DXeqiwJgiT4Oo4788gxSN9gg0mKNJ09R11WW8pfHQaHrPaBmoIL70daw8wGpugW7WfrBvjg2MxHLdPKbmGoB6dG/eou0wrHY12ON9VVMPdJ0C9RSW9rVysTp/7zbVRBYEAEFtpbbggTqc0u/2e/iBGtqa0SNFBJAZzdiYUcQo+96Y23Zl5OVewQbdbEQIAKRpktDMC/oQ7zg6VwGCxcAtBRnrlTN4B63QQzGbWCuMtabyfwEkcJYEfEno0dRHkOVmnM7oo7R5PFBkL+81RsEJi+/aIfd0xQzKv8+rsgs6JryGHOoFvUhFwSashFZjqUkaZsyF5Y/5l5W8C0fFaHclbkprHdZ+q87MPLo3v1CMGz35sa1ya2BWHzRGwRrBbHShCNEwD8ig0BhGcN2sEymV9nLJK2KFnRxNtL28ZSuCNSOQKQLZTGLAgd7lYR8FyTo89zZXb6wCl+iNEqcTKVWPLl7mmNmZ5210HqBoEUzExKO+BeHVQ5oic1vfuLylw9xJO1OYZv8myIjuHKS2Te58yCS/XHhemjvhA7btbmBSoUJXBNqzzscRc08yA0gN5QUWGvPnJNAgSao3EpsF3H7M0Dzly2OOPE7F95/tN5GegFM/wXLTOHIxu/gSba9XEORqTo6kVqRBWjdBgR",
"zJtgaOfEfonbpA+3mmnrT3LMHn82L8/21m57RQKo1la/NYvPdMum1etAnYZ8bOu6iX4tpwarT5uKJNa41LyqDQD2k6ojINHl+mve4j8xuQfifbVc+jQaGI3Sf4W0c/+HKVFWZK48yHs2W9UcuAxZH1rDaGjc7VkWO1UmehOl1ggX2jjBRiql35nT7iZPRIDyFRVJrNNd9Bb43Qh673sI3ZPml0SIy9zwv/ycz3xjhB3eN2imEPrVqaONEzXwe0X+xNuV16UEnUEJgGdkB8/7YReZk74ZBYgM427VeyAHo0yx6yfK5HcEmcTMAXVQFgZynC4+zF2/4RCwqeZWjX12NXEPyNLCXFeeva3822bWYYpCbIyT3hRxZ7Vtp+6UIn0sDdnm67qXxbkBUj/iDA/ryQmKWBUJiz/ZKDXv59mWnn7p0fRJnBFApbRUzIfSorP4KgT62m7hJcvXs4wVGluWgNqTzN0rR3uSmVjxl5HiRIVLOeCBHAJDRavx2LCi7MJ3ojHRsrEleQaV+5X4YUFJwVTeu0KZeTDSviWYSeqhnfFmBy+FEYDLE23/WxYWYVNPUwk9Pc+NuAFAcffbqZ/HKk5nAbtyX1kO57WERTch9YsRy/hKVS1kRK6ILJ88omTfC+kLPhKRgzHCvo4a0swVu5ELPN+DRfXOXJJBhCK8g6FgtUv7tvs8bQU6URLUPnWZV8EMK+a+goTC55zQ0JUtPyWklpKELL8SfRbyL+d4vZFPN/St1iKTrvQ6DMEtDu/ClyJw9YpvFPrRLZFsWR1Ew/jDXG7MeQYwLulQxpxMCkOP8XakXXOCVsmWbIVngNaYxkCSlMnbE7y4IldXf06uYyfauJxWm19G7FaovK4aGdYC5oOPuFbiBzLXgnTAzHQvA7xcgZ4OCG5RYHU415sSQouiInCGYh3OsuwdNySvI1okFEihzySqbNOg+0GgGLEXFr32MvhPtuMHaDV1kRGmZHewqosSrZCou3toymmJWkOYP1Khl5jQltA2EF+XdrSiYL2NlUbASTX54tw1z1tr43XtCZaTsMFZBIRGwrRPmzYpcNk4ylohtNCeTdwW3spyeecJkDZHOGu4hQNYqn9bLsLSrpt0Sr4W4fJPprjnXZOzr92tGrYynsTg9AZlrJy01oH5ZPuqGxq4Q9FAgO75H/X7mRmKDBk/1zJEcBDDTNmu/qn2ZESZ65OMb3Pn9wOS2akhW6GF2WNG7+mrBCc25Vqh5Hd3CaZ6jSkY3HJJfg4DimOvb1Zo/QWwt85SVq93uuQVxXIIhbhR+P5VLEYBav65Y0vGokQaA7ZgLRMeambLR+LG378V14ez4UZ6I8F65RjMAFEFv+dlyt0RJsDzE/vSfl69hmndFzq/qALv9AiFkncjLN0XzsYO9L2eHBKeuL76C13rkLXG44yuKmemr4KaAhlJs8LjGiXcacqQniSx7oPHMhhdKVr8SJvRWt5Mey1xaCjsy9OaX8cfntzFLUuIaUSupFwWxwCjUQfdrB42T5qsrVNUf01vcgCLvLaSdLrMESEebQhuGNdTM8I26pWpVODDodGDOxJSRym/RwaPYNyrDSiW/yvzSwy4H4R6ivj1dLJoYU21UELgLKpXWxkbAkiCMXWLCnHyct4VZ1ZC/7xf+YK/UlLCbgbwzkgJST2Eve8PjrnXL+8IhMwlhgFHFAdlUUbmNTUFd1znUpPIuHq2hfcNPwK/tWBf7NCecXwvH+WaFBoSlNzHmymzoFaitnT7XB5Ebf6xy00DhaR7LWXF4yp2CeHaSYT6pmy7PfT1U1HEw2HN2nvMGhk7+7sd9YzBFSG43jkZzbtv2She+eOJuU70egeN/x2tmSGppFNAaD7sb/GNIrLTZVFg4OV7zYCY5bBx1cZ5IofIIm6XFO0KU9ezg7pHBThcd2FIhWJBbBAZmgXKzZrBYhd86kxqiE9GEETJt5nBJO0OSJCRJoCQ7hJn6eIYOpThwh5FIBX6S1vlf4zykaG8",
"vJIGsatBgDg3lq0/sxa8Hswz7AI7QgTZ03FobhTfJ+t1OLkT7Z1dSRB26IcEh63e2lqoRPU1sJObzDXE4DvTCNRwoXTQElisqFahJnI++rYq+5E+/u2n7AIvu5TL4kx0n5AX9h5h481mhg/HYd7XAgCoErHcAz+gmq1fzZDGJtQ/vX+IgP9aanYOc8dtWaNMWJx6eniFbOoHs1r36JCehx4JhiRYlQJyVXjVuSX1cWt44pUfYvU23/1BkOZfhIrkhcIy0r0MdNQgj6kI8axXCOR2vCWeI2Ie1hlMEbrrD48VGNLkrAsxKDrE0T4X9cwxHvySrxuI6sRKCjfTAQeF0O8MC7aCJfFWl/oVC1WaMiL5jYXjayl3dM3GScIuL3FSWOk5/Rb9lWgjpH9EALJ7vKyFR5mYO5tTjaCiGm5fAOory9RDiu2wQetrlBKFVnyGHl3okB+jJ18ofvJ6o8Yu5m+vLsffeRB6P2gwMysoQE1GZlW+5UIa/mDrLjMcBnJ18IWlcF807fHtEu4kkre0QNHggJfu66wl3Id1d1fyBeDf1Vf4TxPADHiA+Ip5XxUZFpC/xTLwBHOLX328kMctZs84cB/3YBYcBx9S5Y/Ew7LgXEplFKYzAzo4+oWgB9U4KJmJ9dAG269q0cFJeEEWJ38Odbs3ABmsL74uaZpSySxcCmRVjcT4EM6aymjQdO8dDYc22sa8K4S4FCF8nCyHTjiJJP+nT+jFjrL8zlw5K8KHbyThD/NcBV5MD2vizkzDNvJr836WteLuUop/xVCywqa0Ad5XeFNxbIh6+0snfRXA/sQLyxwmA6ksMyaK7TsiVG24VKh4HWKuv9u/4CtScNow9dbgYzXskaMSbx730zbDa0x2P1w1bJ/Cltbm5h/xtgfwT8LnRLNsLAHQwprPzC87AYg1kf8FHHwITB+lvj+igRXe3WXk5QBtEYuO9dstl3NHaMb2GSwBXIWfbm+fmWtZ6hIohx3zAjh3ntKIfyJ/2PybEJLiu37fHrLpGj6miFtzK5qbuT3Lq3wXGV9hLjOP9HoZVlbyltDkpaxcKTcu2YuCZcas0wE7BOdQcYWwSZwBHIo8mmxvZw1D1hs6a+hLLDKZV3QU4QVCXIOHU4lQjlaYmbh38+2NoP51ASezLbIgSAcw7B4Pyq/STm3ZBh4NFER8uN5if6+PKLPJEWY6hZr/x2xwku+uOL2hrhtRcDBQW2XTwrg4dpBCQm0+nsYYeF0SeOh1q9NSRWQbj2i5iCB7BPwLr/NTYlgCfopH5KLOTnidXYZ/8WC6iKhl/53J0YkaRinUrSO4utPeT26UwpfUjVWEUsYIMrbTMs0B8suioGIujYs6tyYuOpBlOcQk87CP/jN6HvDShZb9SwJBPWt4HLjqWSXGQmxfIvbLysHcCCTC/umD0hfD5m1IkA71VDfsgFoZb63b1BQ4HsxrvQo7FrZxw9mXAYijBkHrQNue/woPulI98LmGQbOavAwi0pE0w+YwqqPsf1Z0nsGvM+NBXTw9RBoOgwuymkePGw/UBLZZHZbLYdzSu7b/M8OjImbJeFH0HYTq/0Pcu8WUq9eOhC0a16NjiB9da5ZgfWSvvuf57KZuZyyryPHHQRKMPQ3ppwvu7wmMzokDK6k/K4ekjCGIgEiffdqIH2VZyuNPo2yEQJt64Yj4xci9tpe3rwRlAofM0mPs4gQk3k3OeIcFcEHZMH/s7VucsqV3SKOu4HN5D2bP4jAHryrGPfSZaBV3alFeeQO3gGaHaOm/XXnSdO1vXhlVj2va21NBD53eiFKFngKfi7x3btyr4dtxJswJoI1CdIKlqxUqa+Ivor/OjKgZ2MGrE1HjB1t5AsQ3jI+yNWMcvZLYWJZDOHagH6ykjKywIv9yzgkGG3EPJHAQ6CrUN4q+csjhNArWdp513ukmSHtRSGOwhq8jWl1SsF2G/nB0ODmZgDYZ4APiACfqB1DZw2mnF2LHNiOk1YMZwL6oJC4/Vr2z",
"SMuSh2KbmY/YR4G3BA49O1le63SvXh7vaXPE3tGrXg1HFSePmQkE9t/MbkWcH5tU1lcWePVsfKS1Nh/1QwyL2lFNX5N56G5p9kzL5mni1zRSVScCBLGguV50jaDwqhnyunTEkGObx7xFVk5WAXaklcB9FI7Ldfpiu2pOseDw/xwFRruanjCj0uDzcucsna6cNAIB0dRDsEMyvI65vcnJN3n/YFAkMnmUBzutJyOC/Qn9X9Nba0g6HqLP5+VcUIk6GPZVcBStoL+pweINRvPU7b1CnXCp2tD0bYh0GxWjOFDGcigroMdeTv87gHOOqWAI0luBhRFvBUx+nuobmU2Hpj+1AmhKs2ojekRvmXjjyZ4j4z08VJYGTBghllMtaY7/sexzlq2zHL9kpiFst3ge1fBMXkIzJkNvEng0jQ9acc/ECYMRiuzat2c6+fZJniwlicMfGLtewVKgYmmZu8MCZMdUb49M+7jvmFx4ST4RxSdHs6rk/Qvm61ZnFTycyRcvO7Vkq4DOlxesI69yRiN4YVIcojbf+YidkGk8UU0b4RO8/Z97Y0Od7jqiskht7e8Mg1cRp3J60ByC1IoA/OLxE//+7xTVrqKSpXkZf9yXsLYWZ59/PspJkpTADQntJwby2ufVWeApIfKpNozpd5zE54GagjVuhoPwpB0Z35gpVc4LHTsZrAe2eploC23L5AhAUPNXOUXrXu0swSLW3h1vbDKoKPQc+Ww8uBNfsYpXzRkhJ5aCC0fX9lHsyql6LW8nQTznDwlNd0cMqNqa9jqwE4D1SjZjqS5AKG/h3+/9zw1ud9bSOqMvNmJnemzDiqNcx6FMhOKcMcNs3s2foqztZSK4DdxAK6XFNVWPGpa96DLYXy5cULDjR2kul8Ts4gBe9+j/oohG8a66jsQs+C3qGA0iHLvJmGIXdE+WFz65WhidO+fXeX92r4IyHSDQXjhfWQY2ghPFFrJEY1eofK+BBn8KPyvAp6pxLUTBfL6LJ3rLkc0hcz4GKO5U4CAtedWBXJQDfsPLfV+9gUjjjETFnt5nKtcZ4M7XP+B1SY0OF9hFpbBdGh5FStyRLXRDse/USeKM+lkyRX8S8+wSAUtfQuuaW5fXa3GtMKCCuIN+urPzO28dsn0I4xVfawtTzlp3YdrYY6GmBDLKFqZldGbsJmVkQY/RFeu4oeYnw6ysspoUDdTOJGFV4P7ETA/FvfXiCXN7Ln7jvOLo8WjbK6mroCdUAPeixY6TxKyfMBSzskv63HJgqNkHtx3UG4euV3mPyZz4PLAPDMcy2OR2gVkB5Vv9dy/Em9adv8ACCB8PkUqbGY7jOV18DMjIZLROQe+zpJB3EIr4Qe5y4CxxgEkk0Lj7AM8e0UjDm+b+tjRwUGsFYscPZyf0/hpWcrz8CAi4+UYapE8/UJfdCzVBJKmAq5ssqdI1bWs0Vegp1nzFL65Xv1j0u+7nBTxYbP1TW5pSqv2jTmCFOkzj14XZvx6BsLCjeKFMG51Sc+mUGtm6zKrd3Lp+3re1a1sq9lElnlpaUbp/nIXbP4/Unt8DiArgIJbaZK9YcebPbMMUcdEwcM8nCj9Ha4wAmcCfBcWLxE41x0oC7n4/lHKp4J4ipl5g/AO9zfp+5Esqti87nsRgmrqqW0bOS9QcIQjYPbXuF/JVepfxkVBaXkrGTmDjN8pxFYaS5nofC5jXo03E0rdYwJn8CixtkMIYPAtg+zQ53WYD6pMIVoSrqdSLxp+G9Hk8yMJUTXHZcnXPgxiU4NX4WQ2mKw1vigdWHvBn6hpO5/Hz5OyE7/NeujYOfh6m+CLsjm+uCN+EE7NDRfOdluGo5AKEKJT8n8Dq8Kz+D8Lt2MFU1IV0rxISXnEZr8kad2jxBSC0JfvM1Kv1HxITHJdRb6NCk4YJHQUnfs7yrF+SwxKneLd0hRQ1jZp0OTr3fyCySB2qbQd1EJvQDLF2EKY7Rn0NyrC3SJ9r3o8lvKedY4Za4wj0dWN0Pti7ERtV",
"NluTyZ4GEMJl/fJxy9A1ORpZVdkIYXVZfPJ8YrwZZTZou7FAj2JwmNL2PEAu8MKWjN3Jr+mcY6TztQv1i4gGxq1sEoMpY+hKIPK1SKSPegKF63xrgHIU/QAh4EsgxtlwK+8xYjwGjUizSQ1tK5PXl9FtBfM6XNjQ5hiXlpvX8td7Io661bswsbjXfI2xsRmQJzX9f4wRpwKM6oWm4bD0WNQaXknmgWw+cJye8J6NcaHg1maMmtJXzY9g9y6bLCpROtyaeYo+Fg6/feXTYGWqvGbsWq842g5NLiVP15bp0Ca3WVU2VUGHwsNyQA0mr3syC++/254kKZ6kYgYS5eQsDixmlDkbr9nN9SY6OX7jMgIKeflH9RA2rY8CcI3s2OEsSk7CT5hKpjB2mPasHRbYPlH0Y1XdRw0XsnISeyw8a5j6uuksIdbC2HsfwObPnemiEccuIqTY2tWF8UhTdNQyYGRzNf+izzVbKh45T3FjM/lla1EZFa4HQ7r3dsIK4R4worcC2rt+hiBY3MXCraijB2b7UqJMBWwTRSuqC5aIFIHO6XhAeYnxzYncFkLteyYYVWaOIFdzdqkC5HkL+5kJ2RAc3satwxmH8t4LeGqqrK/ZD7ji3I9L6wDaNo2pXnsVu8TWGR+lAnFGAwKDCLknZ0Wxya/1vx3FcJ6nnycADh/iJsOXdN0YKGj1b2jcFaLP36kTyRkZNAaVXKB6s5g5aQoGTOLIbK6ZvpCOHt7I5e4qQO5WV5Ki1RphGsgYAaIcm3iUOYV4XtQMKkYMwwnKAKn8/2SP2RABwYEC26i1+xviHTPyQhJZXlP5AUkTQeudacYv90IcniAk2P2DouUJ8VvPhxh1/WqAF1QIKJFpfnWL/Yspik8WSsanznmE3GFP5nf2uVxVhTwlsYHkhKdovwe5c1HgQhDBcxCRslnMuyyRpuclvetSEWQaulnZEnMFP5zfiNbLwK9pp16OXi0rfx/4uxHYenp+5QuWI2KzBqDQ/e+/nf6w1FM48GTwd01NnURO2tRF3W+Xu1NndBNx1C67CiIWaWwUzcafebdGirBHrVtLmGGNxlNGNY3z2z2JZPKJC1/z34p2"
};
*size = s_gst_size_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design;
return true;
}



bool LPRES_EXAMPLES__LE5B_new_pc_pc_new_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design = 120;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design[] = 
{
"BgAAAAcAAAAAAAAAAQAAAAEAAAABAAAAAQAAAAIAAAABAAAAAQAAAAIAAAADAAAABAAAAAQAAAAFAAAABgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__LE5B_new_pc_pc_new_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__LE5B_new_pc_pc_new_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__LE5B_new_pc_pc_new_design(name,dirInstall);
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
	sprintf(componentName,"%s","LE5B_new_pc");
	sprintf(partitionName,"%s","pc_new_design");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+l+e5+b_new_pc.pc_new_design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__prueba_design_CPP
#define LPRES_EXAMPLES__prueba_design_CPP

#include "LPRES_EXAMPLES.prueba.design.h"

LPRES_EXAMPLES__prueba_design* LPRES_EXAMPLES__prueba_design::s_current= NULL;

LPRES_EXAMPLES__prueba_design::LPRES_EXAMPLES__prueba_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "prueba";
m_infoPartitionName = "design";
m_infoModelName = "LPRES_EXAMPLES__prueba_design";
m_infoModelFileName = "LPRES_EXAMPLES.prueba.design";
m_infoModelFileNameExtra = "prueba.design";
m_perfFlag = false;
m_infoComponentDate = "17/06/2020 12:59:40.868000";
m_infoPartitionDate = "17/06/2020 12:59:44.365000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "LPRES V2.0.1 LPRES_EXAMPLES V0.1 MATH V3.2.3 ";

m_solveInternalBox= new int[2]; 
int nbx;
for (nbx=0; nbx < 2 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[7];
int ib;
for (ib=0; ib < 7 ; ib++)
	m_boundaryBranch[ib]= 0;

m_branchZone= new int[1]; 
int nibr;
for (nibr=0; nibr < 1 ; nibr++)
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
static int elmind7[] = { 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 } ;
static int elmind8[] = { 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 
		18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 4, 28 } ;
static int elmind9[] = { 1, 26 } ;
static const char * elmstr10[] = { "Yes", "No", NULL } ;
static int elmind10[] = { 1, 2 } ;
n_typ=11;
static struct INTEG_enumType tmp_typ[] = { 
		{elmstr0,38,elmind0},
		{elmstr1,2,elmind1},
		{elmstr0,10,elmind2},
		{elmstr3,2,elmind3},
		{elmstr4,6,elmind4},
		{elmstr0,2,elmind5},
		{elmstr0,12,elmind6},
		{elmstr0,16,elmind7},
		{elmstr0,28,elmind8},
		{elmstr0,2,elmind9},
		{elmstr10,2,elmind10}
	} ;
typ= new struct INTEG_enumType[11];
etypecopy(11,typ,tmp_typ);
n_dyn=1;
dyn= new double[1] ;
static double tmp_dynInit[1]={ 100 } ;
dynInit= new double[1];
dcopy(1,dynInit,tmp_dynInit);


n_der=0;
der= new double[1] ;
static double tmp_derInit[1]={ 0 } ;
derInit= new double[1];
dcopy(1,derInit,tmp_derInit);


res= new double[1] ;
ldr= new double[1] ;
boxDyn= new double[1] ;
boxDer= new double[1] ;

n_unkR=338;
unkR= new double[338] ;
static double tmp_unkRInit[338]={ 40, 5, 1, 0.05, 1, 800, 18, 0, 0, 8, 0, 9000000, 0, 1, 200, 0, 
		0, 0, 0, 0, 0, 0, 4182, 1, 0.001, 2500, 0, 0.99, 1, 1, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0.001, 0, 0.05, 0, 0.5, 0, 
		10, 0, 0, 0, 0, 0.05, 0, 0.5, 0, 10, 0, 0, 0, 0, 0, 0, 
		0, 0 } ;
unkRInit= new double[338];
dcopy(338,unkRInit,tmp_unkRInit);


n_cteR=5;
static double tmp_cteRInit[5]={ 8314, 298.15, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=4;
unkI= new int[4] ;
static int tmp_unkIInit[4]={ 0, 2, 23, 26 } ;
unkIInit= new int[4];
icopy(4,unkIInit,tmp_unkIInit);


n_cteI=4;
static int tmp_cteIInit[4]={ 2, 1, 2, 2 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=15;
static std::string tmp_cteSInit[15]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "g/mol", "kg/m^3", "kg/s", "m^2", "m/s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 1;
n_neld= 0;
m_numBoxes= 1;
m_nNonLinearBoxes= 1;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__prueba_design::initInternalModels()
{
}

void LPRES_EXAMPLES__prueba_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double LPRES_EXAMPLES__prueba_design::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__prueba_design::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[28] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600,3133,2288 };
	int _vi3;
	int _vi4;
	double _vr1;

	_vr1 = 0. ;
	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[8]) ) {
	_vi4 = setofElem(&typ[8], _vi3) ;
	_vr1 += Chem_cp[_vi3-1] * fluid[_vi4-1] ;
	_vi3 += 1 ;
	}
	return _vr1 + fluid[30] * fluid[28] ;
}


double LPRES_EXAMPLES__prueba_design::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__prueba_design::LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[])
{
	int _vi5;
	int _vi6;

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
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[0]) ) {
	_vi6 = setofElem(&typ[0], _vi5) ;
	if( _vi6 != 9 ) {
	if( _vi6 != 23 ) {
	if( _vi6 != 26 ) {
	if( _vi6 != 1 ) {
	if( _vi6 != 8 ) {
	if( _vi6 != 20 ) {
	if( _vi6 != 12 ) {
	if( _vi6 != 27 ) {
	fluid_out[_vi5-1] = fluid_in[_vi5-1] ;
	}
	}
	}
	}
	}
	}
	}
	}
	_vi5 += 1 ;
	}
	fluid_out[30] = fluid_out[32] ;
	return  ;
}


void LPRES_EXAMPLES__prueba_design::LPRES__Decomposition_fun(double fluid_in[],double Data_Array[])
{
	// Local variables:
	double Fluid_Fuel[38];
	memset(Fluid_Fuel,0,38*sizeof(double));
	double Fluid_Oxidant[38];
	memset(Fluid_Oxidant,0,38*sizeof(double));
	int _vi7;
	int _vi8;

	Data_Array[0] = fluid_in[28] ;
	Data_Array[1] = fluid_in[30] ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[8]) ) {
	_vi8 = setofElem(&typ[8], _vi7) ;
	if( setofPos(&typ[5], _vi8) != 0 && fluid_in[_vi8-1] != 0 ) {
	Data_Array[2] = fluid_in[_vi8-1] ;
	LPRES__Init_fluid(_vi8, Fluid_Fuel) ;
	Data_Array[3] = LPRES__cp(Fluid_Fuel) ;
	Data_Array[5] = 0. ;
	Data_Array[5] = 0. ;
		}
	else if( setofPos(&typ[9], _vi8) != 0 && fluid_in[_vi8-1] != 0) {
	Data_Array[4] = fluid_in[_vi8-1] ;
	LPRES__Init_fluid(_vi8, Fluid_Oxidant) ;
	Data_Array[5] = LPRES__cp(Fluid_Oxidant) ;
	Data_Array[3] = 0. ;
	Data_Array[3] = 0. ;

	}
	_vi7 += 1 ;
	}
	return  ;
}


double LPRES_EXAMPLES__prueba_design::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[28] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07,17.031,18 };
	int _vi10;
	int _vi9;
	double _vr2;

	_vr2 = 0. ;
	_vi9 = 1 ;
	while ( _vi9 <= setofSize(&typ[8]) ) {
	_vi10 = setofElem(&typ[8], _vi9) ;
	_vr2 += _div( fluid[_vi10-1] , Chem_M[_vi9-1],"Chem_M[_vi9]") ;
	_vi9 += 1 ;
	}
	return _div( 1 , (_vr2 + _div( fluid[28] , fluid[29],"fluid[Comb_prod_M]")),"_vr2 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double LPRES_EXAMPLES__prueba_design::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__prueba_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__prueba_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__prueba_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int LPRES_EXAMPLES__prueba_design::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi11;
	int _vi12;

	_vi11 = 1 ;
	while ( _vi11 <= setofSize(&typ[8]) ) {
	_vi12 = setofElem(&typ[8], _vi11) ;
	if( fluid[_vi12-1] != 0 ) {
	fluid_name = _vi12 ;
	}
	_vi11 += 1 ;
	}
	return fluid_name ;
}


int LPRES_EXAMPLES__prueba_design::LPRES__State(double fluid[])
{
	// Local variables:
	int fluid_state = 1;
	int fluid_name = 1;

	fluid_name = LPRES__Know_fluid(fluid) ;
	if( setofPos(&typ[7], fluid_name) != 0 ) {
	fluid_state = 1 ;
		}
	else if( setofPos(&typ[6], fluid_name) != 0) {
	fluid_state = 2 ;

	}
	return fluid_state ;
}


double LPRES_EXAMPLES__prueba_design::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi13;
	int _vi14;
	double _vr3;

	_vr3 = 0. ;
	_vi13 = 1 ;
	while ( _vi13 <= setofSize(&typ[7]) ) {
	_vi14 = setofElem(&typ[7], _vi13) ;
	_vr3 += Chem_rho[_vi13-1] * fluid[_vi14-1] ;
	_vi13 += 1 ;
	}
	return _vr3 ;
}


double LPRES_EXAMPLES__prueba_design::LPRES__visc(double fluid[])
{
	// Local variables:
	double Chem_visc[28] = { 0.00019,0.000423,0.00127,0.001,7.9e-05,0.00021,2e-05,2e-05,0.00097,0.000754,0.0004,0.0028,0.0045,0.0045,0.001,0.002,1.803e-05,2.23e-05,1.1e-05,1.74e-05,1.47e-05,8.8e-06,1.96e-05,1.76e-05,
3.37e-05,0,9.9e-06,2.8e-05 };
	int _vi15;
	int _vi16;
	double _vr4;

	_vr4 = 0. ;
	_vi15 = 1 ;
	while ( _vi15 <= setofSize(&typ[8]) ) {
	_vi16 = setofElem(&typ[8], _vi15) ;
	_vr4 += Chem_visc[_vi15-1] * fluid[_vi16-1] ;
	_vi15 += 1 ;
	}
	return _vr4 + fluid[34] * fluid[28] ;
}


/* Copy special unkR[] items to dyn[] vector */

void LPRES_EXAMPLES__prueba_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__prueba_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha_1.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",164,"CombCha_1.","CombCha_1.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(29, &unkR[270]) ;
	unkI[0] = 1 ;
	if( unkI[1] == 1 ) {
	unkR[7] = 0.001 ;
	}
	else {
	unkR[7] = 2.80123632766838 ;
	}
  // init(Inlet_F.Inlet,100)
	LPRES__Init_fluid(unkI[2], &unkR[30]) ;
  // init(Inlet_OXIDISER.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[71]) ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__prueba_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-176]  CombCha_1.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(CombCha_1.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.g.pt) ** (1 / LPRES.gamma(CombCha_1.g.fluid)) * sqrt(2 * LPRES.gamma(CombCha_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.g.pt) ** ((LPRES.gamma(CombCha_1.g.fluid) - 1) / LPRES.gamma(CombCha_1.g.fluid))) / (LPRES.gamma(CombCha_1.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,_div( unkR[2] , unkR[3],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[270]) , (_pow( (_div( dyn[0] , unkR[308],"CombCha_1.g.pt")) , (_div( 1 , LPRES__gamma(&unkR[270]),"LPRES.gamma(CombCha_1.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.g.pt)**(1 / LPRES.gamma(CombCha_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[270]) * (1. - _pow( (_div( dyn[0] , unkR[308],"CombCha_1.g.pt")) , (_div( (LPRES__gamma(&unkR[270]) - 1.) , LPRES__gamma(&unkR[270]),"LPRES.gamma(CombCha_1.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.g.pt)**((LPRES.gamma(CombCha_1.g.fluid) - 1) / LPRES.gamma(CombCha_1.g.fluid))" )) , (LPRES__gamma(&unkR[270]) - 1.),"LPRES.gamma(CombCha_1.g.fluid) - 1"),"2 * LPRES.gamma(CombCha_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.g.pt) ** ((LPRES.gamma(CombCha_1.g.fluid) - 1) / LPRES.gamma(CombCha_1.g.fluid))) / (LPRES.gamma(CombCha_1.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.g.pt) ** (1 / LPRES.gamma(CombCha_1.g.fluid)) * sqrt(2 * LPRES.gamma(CombCha_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.g.pt) ** ((LPRES.gamma(CombCha_1.g.fluid) - 1) / LPRES.gamma(CombCha_1.g.fluid))) / (LPRES.gamma(CombCha_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__prueba_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__prueba_design& m= *LPRES_EXAMPLES__prueba_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__prueba_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(1, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__prueba_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__prueba_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - Inlet_F.fluidV[Comb_prod])
unkR[17] = unkR[29] * (1. - unkR[58]) ;
//[E-2]  CombCha_1.W_O = CombCha_1.OF * CombCha_1.W_F
unkR[21] = unkR[8] * unkR[17] ;
//[E-3]  CombCha_1.f_O.W = CombCha_1.W_O / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[70] = _div( unkR[21] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-4]  CombCha_1.W_IO = CombCha_1.f_O.W - CombCha_1.W_O
unkR[20] = unkR[70] - unkR[21] ;
//[E-5]  CombCha_1.W_IF = CombCha_1.f_F.W - CombCha_1.W_F
unkR[19] = unkR[29] - unkR[17] ;
//[E-6]  CombCha_1.g.W = CombCha_1.W_IO + CombCha_1.W_O + CombCha_1.W_F + CombCha_1.W_IF
unkR[269] = unkR[20] + unkR[21] + unkR[17] + unkR[19] ;
//[E-7]  CombCha_1.fluid_O[LOX] = Inlet_OXIDISER.fluidV[LOX] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[148] = _div( unkR[71] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-8]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[313] = _div( unkR[9] , unkR[8],"CombCha_1.OF") ;
//[E-9]  CombCha_1.fluid_F[LOX] = Inlet_F.fluidV[LOX] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[110] = _div( unkR[30] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-10]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[18] = _div( unkR[17] , unkR[313],"CombCha_1.phi") ;
//[E-11]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[186] = _div( (unkR[148] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[110] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[186] = _div( (unkR[148] * unkR[21] + unkR[110] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-12]  CombCha_1.fluid_O[NTO] = Inlet_OXIDISER.fluidV[NTO] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[149] = _div( unkR[72] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-13]  CombCha_1.fluid_F[NTO] = Inlet_F.fluidV[NTO] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[111] = _div( unkR[31] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[187] = _div( (unkR[149] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[111] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[187] = _div( (unkR[149] * unkR[21] + unkR[111] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-15]  CombCha_1.fluid_O[H2O2] = Inlet_OXIDISER.fluidV[H2O2] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[150] = _div( unkR[73] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-16]  CombCha_1.fluid_F[H2O2] = Inlet_F.fluidV[H2O2] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[112] = _div( unkR[32] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-17]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[188] = _div( (unkR[150] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[112] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[188] = _div( (unkR[150] * unkR[21] + unkR[112] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-18]  CombCha_1.fluid_O[NH3] = Inlet_OXIDISER.fluidV[NH3] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[151] = _div( unkR[74] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_F[NH3] = Inlet_F.fluidV[NH3] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[113] = _div( unkR[33] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-20]  CombCha_1.fluid_P[NH3] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[NH3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NH3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NH3] * CombCha_1.W_O + CombCha_1.fluid_F[NH3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[189] = _div( (unkR[151] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[113] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[189] = _div( (unkR[151] * unkR[21] + unkR[113] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-21]  CombCha_1.fluid_O[HNO3] = Inlet_OXIDISER.fluidV[HNO3] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[152] = _div( unkR[75] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_F[HNO3] = Inlet_F.fluidV[HNO3] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[114] = _div( unkR[34] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[190] = _div( (unkR[152] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[114] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[190] = _div( (unkR[152] * unkR[21] + unkR[114] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-24]  CombCha_1.fluid_O[LF2] = Inlet_OXIDISER.fluidV[LF2] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[153] = _div( unkR[76] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-25]  CombCha_1.fluid_F[LF2] = Inlet_F.fluidV[LF2] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[115] = _div( unkR[35] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[191] = _div( (unkR[153] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[115] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[191] = _div( (unkR[153] * unkR[21] + unkR[115] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-27]  CombCha_1.fluid_O[RP_1] = Inlet_OXIDISER.fluidV[RP_1] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[154] = _div( unkR[77] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-28]  CombCha_1.fluid_F[RP_1] = Inlet_F.fluidV[RP_1] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[116] = _div( unkR[36] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-29]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[192] = _div( (unkR[154] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[116] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[192] = _div( (unkR[154] * unkR[21] + unkR[116] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-30]  CombCha_1.fluid_O[LCH4] = Inlet_OXIDISER.fluidV[LCH4] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[155] = _div( unkR[78] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_F[LCH4] = Inlet_F.fluidV[LCH4] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[117] = _div( unkR[37] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-32]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[193] = _div( (unkR[155] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[117] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[193] = _div( (unkR[155] * unkR[21] + unkR[117] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-33]  CombCha_1.fluid_O[LH2] = Inlet_OXIDISER.fluidV[LH2] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[156] = _div( unkR[79] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_F[LH2] = Inlet_F.fluidV[LH2] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[118] = _div( unkR[38] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[194] = _div( (unkR[156] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[118] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[194] = _div( (unkR[156] * unkR[21] + unkR[118] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-36]  CombCha_1.fluid_O[N2H4] = Inlet_OXIDISER.fluidV[N2H4] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[157] = _div( unkR[80] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-37]  CombCha_1.fluid_F[N2H4] = Inlet_F.fluidV[N2H4] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[119] = _div( unkR[39] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[195] = _div( (unkR[157] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[119] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[195] = _div( (unkR[157] * unkR[21] + unkR[119] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-39]  CombCha_1.fluid_O[UDMH] = Inlet_OXIDISER.fluidV[UDMH] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[158] = _div( unkR[81] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-40]  CombCha_1.fluid_F[UDMH] = Inlet_F.fluidV[UDMH] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[120] = _div( unkR[40] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-41]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[196] = _div( (unkR[158] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[120] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[196] = _div( (unkR[158] * unkR[21] + unkR[120] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-42]  CombCha_1.fluid_O[MMH] = Inlet_OXIDISER.fluidV[MMH] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[159] = _div( unkR[82] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_F[MMH] = Inlet_F.fluidV[MMH] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[121] = _div( unkR[41] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-44]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[197] = _div( (unkR[159] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[121] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[197] = _div( (unkR[159] * unkR[21] + unkR[121] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-45]  CombCha_1.fluid_O[JP_10] = Inlet_OXIDISER.fluidV[JP_10] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[160] = _div( unkR[83] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_F[JP_10] = Inlet_F.fluidV[JP_10] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[122] = _div( unkR[42] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[198] = _div( (unkR[160] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[122] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[198] = _div( (unkR[160] * unkR[21] + unkR[122] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-48]  CombCha_1.fluid_O[Kerox] = Inlet_OXIDISER.fluidV[Kerox] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[161] = _div( unkR[84] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-49]  CombCha_1.fluid_F[Kerox] = Inlet_F.fluidV[Kerox] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[123] = _div( unkR[43] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[199] = _div( (unkR[161] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[123] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[199] = _div( (unkR[161] * unkR[21] + unkR[123] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-51]  CombCha_1.fluid_O[Oil] = Inlet_OXIDISER.fluidV[Oil] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[162] = _div( unkR[85] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-52]  CombCha_1.fluid_F[Oil] = Inlet_F.fluidV[Oil] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[124] = _div( unkR[44] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-53]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[200] = _div( (unkR[162] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[124] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[200] = _div( (unkR[162] * unkR[21] + unkR[124] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-54]  CombCha_1.fluid_O[H2O] = Inlet_OXIDISER.fluidV[H2O] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[163] = _div( unkR[86] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_F[H2O] = Inlet_F.fluidV[H2O] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[125] = _div( unkR[45] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-56]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[201] = _div( (unkR[163] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[125] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[201] = _div( (unkR[163] * unkR[21] + unkR[125] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-57]  CombCha_1.fluid_O[IPA] = Inlet_OXIDISER.fluidV[IPA] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[164] = _div( unkR[87] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_F[IPA] = Inlet_F.fluidV[IPA] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[126] = _div( unkR[46] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-59]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[202] = _div( (unkR[164] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[126] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[202] = _div( (unkR[164] * unkR[21] + unkR[126] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-60]  CombCha_1.fluid_O[Air] = Inlet_OXIDISER.fluidV[Air] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[165] = _div( unkR[88] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-61]  CombCha_1.fluid_F[Air] = Inlet_F.fluidV[Air] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[127] = _div( unkR[47] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-62]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[203] = _div( (unkR[165] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[127] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[203] = _div( (unkR[165] * unkR[21] + unkR[127] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-63]  CombCha_1.fluid_O[Ar] = Inlet_OXIDISER.fluidV[Ar] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[166] = _div( unkR[89] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-64]  CombCha_1.fluid_F[Ar] = Inlet_F.fluidV[Ar] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[128] = _div( unkR[48] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-65]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[204] = _div( (unkR[166] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[128] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[204] = _div( (unkR[166] * unkR[21] + unkR[128] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-66]  CombCha_1.fluid_O[CH4] = Inlet_OXIDISER.fluidV[CH4] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[167] = _div( unkR[90] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-67]  CombCha_1.fluid_F[CH4] = Inlet_F.fluidV[CH4] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[129] = _div( unkR[49] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-68]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[205] = _div( (unkR[167] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[129] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[205] = _div( (unkR[167] * unkR[21] + unkR[129] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-69]  CombCha_1.fluid_O[CO] = Inlet_OXIDISER.fluidV[CO] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[168] = _div( unkR[91] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-70]  CombCha_1.fluid_F[CO] = Inlet_F.fluidV[CO] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[130] = _div( unkR[50] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-71]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[206] = _div( (unkR[168] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[130] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[206] = _div( (unkR[168] * unkR[21] + unkR[130] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-72]  CombCha_1.fluid_O[CO2] = Inlet_OXIDISER.fluidV[CO2] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[169] = _div( unkR[92] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-73]  CombCha_1.fluid_F[CO2] = Inlet_F.fluidV[CO2] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[131] = _div( unkR[51] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-74]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[207] = _div( (unkR[169] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[131] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[207] = _div( (unkR[169] * unkR[21] + unkR[131] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-75]  CombCha_1.fluid_O[H2] = Inlet_OXIDISER.fluidV[H2] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[170] = _div( unkR[93] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-76]  CombCha_1.fluid_F[H2] = Inlet_F.fluidV[H2] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[132] = _div( unkR[52] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-77]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[208] = _div( (unkR[170] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[132] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[208] = _div( (unkR[170] * unkR[21] + unkR[132] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-78]  CombCha_1.fluid_O[He] = Inlet_OXIDISER.fluidV[He] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[171] = _div( unkR[94] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-79]  CombCha_1.fluid_F[He] = Inlet_F.fluidV[He] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[133] = _div( unkR[53] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-80]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[209] = _div( (unkR[171] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[133] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[209] = _div( (unkR[171] * unkR[21] + unkR[133] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-81]  CombCha_1.fluid_O[N2] = Inlet_OXIDISER.fluidV[N2] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[172] = _div( unkR[95] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-82]  CombCha_1.fluid_F[N2] = Inlet_F.fluidV[N2] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[134] = _div( unkR[54] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-83]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[210] = _div( (unkR[172] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[134] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[210] = _div( (unkR[172] * unkR[21] + unkR[134] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-84]  CombCha_1.fluid_O[O2] = Inlet_OXIDISER.fluidV[O2] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[173] = _div( unkR[96] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-85]  CombCha_1.fluid_F[O2] = Inlet_F.fluidV[O2] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[135] = _div( unkR[55] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-86]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[211] = _div( (unkR[173] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[135] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[211] = _div( (unkR[173] * unkR[21] + unkR[135] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-87]  CombCha_1.fluid_O[MMH_vapour] = Inlet_OXIDISER.fluidV[MMH_vapour] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[174] = _div( unkR[97] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-88]  CombCha_1.fluid_F[MMH_vapour] = Inlet_F.fluidV[MMH_vapour] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[136] = _div( unkR[56] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-89]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[212] = _div( (unkR[174] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[136] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[212] = _div( (unkR[174] * unkR[21] + unkR[136] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-90]  CombCha_1.fluid_O[H2O_vapour] = Inlet_OXIDISER.fluidV[H2O_vapour] / (1 - Inlet_OXIDISER.fluidV[Comb_prod])
unkR[175] = _div( unkR[98] , (1. - unkR[99]),"1 - Inlet_OXIDISER.fluidV[Comb_prod]") ;
//[E-91]  CombCha_1.fluid_F[H2O_vapour] = Inlet_F.fluidV[H2O_vapour] / (1 - Inlet_F.fluidV[Comb_prod])
unkR[137] = _div( unkR[57] , (1. - unkR[58]),"1 - Inlet_F.fluidV[Comb_prod]") ;
//[E-92]  CombCha_1.fluid_P[H2O_vapour] =  IF[28] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[H2O_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[213] = _div( (unkR[175] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[137] * MATH__max(unkR[313] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[213] = _div( (unkR[175] * unkR[21] + unkR[137] * unkR[17]) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-93]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[176] = 0. ;
//[E-94]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[138] = 0. ;
//[E-95]  CombCha_1.fluid_P[Comb_prod] =  IF[29] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[214] = _div( (unkR[176] * MATH__max(1. - unkR[313], 0.) * unkR[21] + unkR[138] * MATH__max(unkR[313] - 1., 0.) * unkR[18] + (1. - MATH__max(1. - unkR[313], 0.)) * (unkR[21] + unkR[18])) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[214] = 0. ;
}
//[E-96]  CombCha_1.fluid_P[Comb_prod_M] =  IF[30] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[215] = unkR[6] ;
}
else 
{
unkR[215] = 0. ;
}
//[E-97]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[31] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[216] = unkR[25] ;
}
else 
{
unkR[216] = 0. ;
}
//[E-98]  CombCha_1.fluid_P[Comb_prod_c] =  IF[32] (CombCha_1.Combustion) CombCha_1.c_P	 ELSE 0
if( unkI[0] ) 
{
unkR[217] = unkR[22] ;
}
else 
{
unkR[217] = 0. ;
}
//[E-99]  CombCha_1.fluid_P[Comb_prod_cp_g] =  IF[33] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[218] = unkR[25] ;
}
else 
{
unkR[218] = 0. ;
}
//[E-100]  CombCha_1.fluid_P[Comb_prod_Lv] =  IF[34] (CombCha_1.Combustion) CombCha_1.Lv_P	 ELSE 0
if( unkI[0] ) 
{
unkR[219] = unkR[5] ;
}
else 
{
unkR[219] = 0. ;
}
//[E-101]  CombCha_1.fluid_P[Comb_prod_visc] =  IF[35] (CombCha_1.Combustion) CombCha_1.visc_P	 ELSE 0
if( unkI[0] ) 
{
unkR[220] = unkR[314] ;
}
else 
{
unkR[220] = 0. ;
}
//[E-102]  CombCha_1.fluid_P[Comb_prod_cond] =  IF[36] (CombCha_1.Combustion) CombCha_1.cond_P	 ELSE 0
if( unkI[0] ) 
{
unkR[221] = unkR[24] ;
}
else 
{
unkR[221] = 0. ;
}
//[E-103]  CombCha_1.fluid_P[Comb_prod_T_boil] =  IF[37] (CombCha_1.Combustion) CombCha_1.T_boil_P	 ELSE 0
if( unkI[0] ) 
{
unkR[222] = unkR[14] ;
}
else 
{
unkR[222] = 0. ;
}
//[E-104]  CombCha_1.fluid_P[Comb_prod_rho] = 0
unkR[223] = 0. ;
//[E-105]  LPRES.Vaporisation_mix(CombCha_1.fluid_P, CombCha_1.fluid_P_vap) %%% (OUT VAR)CombCha_1.fluid_P_vap 
LPRES__Vaporisation_mix(&unkR[186], &unkR[230]);
//[E-106]  CombCha_1.g.fluid[LOX] = CombCha_1.fluid_P_vap[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[270] = _div( unkR[230] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-107]  CombCha_1.g.fluid[NTO] = CombCha_1.fluid_P_vap[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[271] = _div( unkR[231] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-108]  CombCha_1.g.fluid[H2O2] = CombCha_1.fluid_P_vap[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[272] = _div( unkR[232] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-109]  CombCha_1.g.fluid[NH3] = CombCha_1.fluid_P_vap[NH3] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[273] = _div( unkR[233] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-110]  CombCha_1.g.fluid[HNO3] = CombCha_1.fluid_P_vap[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[274] = _div( unkR[234] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-111]  CombCha_1.g.fluid[LF2] = CombCha_1.fluid_P_vap[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[275] = _div( unkR[235] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-112]  CombCha_1.g.fluid[RP_1] = CombCha_1.fluid_P_vap[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[276] = _div( unkR[236] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-113]  CombCha_1.g.fluid[LCH4] = CombCha_1.fluid_P_vap[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[277] = _div( unkR[237] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-114]  CombCha_1.g.fluid[LH2] = CombCha_1.fluid_P_vap[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[278] = _div( unkR[238] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-115]  CombCha_1.g.fluid[N2H4] = CombCha_1.fluid_P_vap[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[279] = _div( unkR[239] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-116]  CombCha_1.g.fluid[UDMH] = CombCha_1.fluid_P_vap[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[280] = _div( unkR[240] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-117]  CombCha_1.g.fluid[MMH] = CombCha_1.fluid_P_vap[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[281] = _div( unkR[241] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-118]  CombCha_1.g.fluid[JP_10] = CombCha_1.fluid_P_vap[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[282] = _div( unkR[242] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-119]  CombCha_1.g.fluid[Kerox] = CombCha_1.fluid_P_vap[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[283] = _div( unkR[243] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-120]  CombCha_1.g.fluid[Oil] = CombCha_1.fluid_P_vap[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[284] = _div( unkR[244] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-121]  CombCha_1.g.fluid[H2O] = CombCha_1.fluid_P_vap[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[285] = _div( unkR[245] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-122]  CombCha_1.g.fluid[IPA] = CombCha_1.fluid_P_vap[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[286] = _div( unkR[246] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-123]  CombCha_1.g.fluid[Air] = CombCha_1.fluid_P_vap[Air] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[287] = _div( unkR[247] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-124]  CombCha_1.g.fluid[Ar] = CombCha_1.fluid_P_vap[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[288] = _div( unkR[248] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-125]  CombCha_1.g.fluid[CH4] = CombCha_1.fluid_P_vap[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[289] = _div( unkR[249] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-126]  CombCha_1.g.fluid[CO] = CombCha_1.fluid_P_vap[CO] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[290] = _div( unkR[250] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-127]  CombCha_1.g.fluid[CO2] = CombCha_1.fluid_P_vap[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[291] = _div( unkR[251] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-128]  CombCha_1.g.fluid[H2] = CombCha_1.fluid_P_vap[H2] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[292] = _div( unkR[252] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-129]  CombCha_1.g.fluid[He] = CombCha_1.fluid_P_vap[He] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[293] = _div( unkR[253] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-130]  CombCha_1.g.fluid[N2] = CombCha_1.fluid_P_vap[N2] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[294] = _div( unkR[254] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-131]  CombCha_1.g.fluid[O2] = CombCha_1.fluid_P_vap[O2] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[295] = _div( unkR[255] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-132]  CombCha_1.g.fluid[MMH_vapour] = CombCha_1.fluid_P_vap[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[296] = _div( unkR[256] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-133]  CombCha_1.g.fluid[H2O_vapour] = CombCha_1.fluid_P_vap[H2O_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / CombCha_1.g.W
unkR[297] = _div( unkR[257] * (unkR[21] + unkR[17]) , unkR[269],"CombCha_1.g.W") ;
//[E-134]  CombCha_1.g.fluid[Comb_prod] = (CombCha_1.fluid_P_vap[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / CombCha_1.g.W
unkR[298] = _div( (unkR[258] * (unkR[21] + unkR[17]) + unkR[20] + unkR[19]) , unkR[269],"CombCha_1.g.W") ;
//[E-135]  CombCha_1.g.fluid[Comb_prod_M] = CombCha_1.fluid_P_vap[Comb_prod_M]
unkR[299] = unkR[259] ;
//[E-136]  CombCha_1.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P_vap[Comb_prod_cp]
unkR[300] = unkR[260] ;
//[E-137]  CombCha_1.g.fluid[Comb_prod_c] = CombCha_1.fluid_P_vap[Comb_prod_c]
unkR[301] = unkR[261] ;
//[E-138]  CombCha_1.g.fluid[Comb_prod_cp_g] = CombCha_1.fluid_P_vap[Comb_prod_cp_g]
unkR[302] = unkR[262] ;
//[E-139]  CombCha_1.g.fluid[Comb_prod_Lv] = CombCha_1.fluid_P_vap[Comb_prod_Lv]
unkR[303] = unkR[263] ;
//[E-140]  CombCha_1.g.fluid[Comb_prod_visc] = CombCha_1.fluid_P_vap[Comb_prod_visc]
unkR[304] = unkR[264] ;
//[E-141]  CombCha_1.g.fluid[Comb_prod_cond] = CombCha_1.fluid_P_vap[Comb_prod_cond]
unkR[305] = unkR[265] ;
//[E-142]  CombCha_1.g.fluid[Comb_prod_T_boil] = CombCha_1.fluid_P_vap[Comb_prod_T_boil]
unkR[306] = unkR[266] ;
//[E-143]  CombCha_1.g.fluid[Comb_prod_rho] = CombCha_1.fluid_P_vap[Comb_prod_rho]
unkR[307] = unkR[267] ;
//[E-144]  LPRES.Decomposition_fun(CombCha_1.fluid_P_vap, CombCha_1.fluid_P_decomp) %%% (OUT VAR)CombCha_1.fluid_P_decomp 
LPRES__Decomposition_fun(&unkR[230], &unkR[224]);
//[E-145]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[12] = unkR[11] ;
else unkR[12] = 0. ;
//[E-146]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[177] = 0. ;
//[E-147]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[178] = 0. ;
//[E-148]  CombCha_1.fluid_O[Comb_prod_c] = 0
unkR[179] = 0. ;
//[E-149]  CombCha_1.fluid_O[Comb_prod_cp_g] = 0
unkR[180] = 0. ;
//[E-150]  CombCha_1.fluid_O[Comb_prod_Lv] = 0
unkR[181] = 0. ;
//[E-151]  CombCha_1.fluid_O[Comb_prod_visc] = 0
unkR[182] = 0. ;
//[E-152]  CombCha_1.fluid_O[Comb_prod_cond] = 0
unkR[183] = 0. ;
//[E-153]  CombCha_1.fluid_O[Comb_prod_T_boil] = 0
unkR[184] = 0. ;
//[E-154]  CombCha_1.fluid_O[Comb_prod_rho] = 0
unkR[185] = 0. ;
//[E-155]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[139] = 0. ;
//[E-156]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[140] = 0. ;
//[E-157]  CombCha_1.fluid_F[Comb_prod_c] = 0
unkR[141] = 0. ;
//[E-158]  CombCha_1.fluid_F[Comb_prod_cp_g] = 0
unkR[142] = 0. ;
//[E-159]  CombCha_1.fluid_F[Comb_prod_Lv] = 0
unkR[143] = 0. ;
//[E-160]  CombCha_1.fluid_F[Comb_prod_visc] = 0
unkR[144] = 0. ;
//[E-161]  CombCha_1.fluid_F[Comb_prod_cond] = 0
unkR[145] = 0. ;
//[E-162]  CombCha_1.fluid_F[Comb_prod_T_boil] = 0
unkR[146] = 0. ;
//[E-163]  CombCha_1.fluid_F[Comb_prod_rho] = 0
unkR[147] = 0. ;
//[E-164]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[26] = _div( (unkR[21] * LPRES__cp(&unkR[148]) + unkR[17] * LPRES__cp(&unkR[110])) , (unkR[21] + unkR[17]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-165]  Injector_O.PR = Inlet_OXIDISER.pt / CombCha_1.g.pt
unkR[329] = _div( unkR[337] , unkR[308],"CombCha_1.g.pt") ;
//[E-166]  Injector_O.M_out = MATH.min(sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(Inlet_OXIDISER.fluidV) - 1) / LPRES.gamma(Inlet_OXIDISER.fluidV)) - 1) / (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1)), 1)
unkR[328] = MATH__min(_sqrt(_div( 2. * (_pow( unkR[329] , (_div( (LPRES__gamma(&unkR[71]) - 1.) , LPRES__gamma(&unkR[71]),"LPRES.gamma(Inlet_OXIDISER.fluidV)")),"(Injector_O.PR)**((LPRES.gamma(Inlet_OXIDISER.fluidV) - 1) / LPRES.gamma(Inlet_OXIDISER.fluidV))" ) - 1.) , (LPRES__gamma(&unkR[71]) - 1.),"LPRES.gamma(Inlet_OXIDISER.fluidV) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(Inlet_OXIDISER.fluidV) - 1) / LPRES.gamma(Inlet_OXIDISER.fluidV)) - 1) / (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1)"), 1.) ;
//[E-167]  CombCha_1.f_O.T = Inlet_OXIDISER.Tt / (1 + (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1) / 2 * Injector_O.M_out ** 2)
unkR[69] = _div( unkR[336] , (1. + (LPRES__gamma(&unkR[71]) - 1.)/2. * _pow( unkR[328] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1) / 2 * Injector_O.M_out ** 2") ;
//[E-168]  Injector_F.PR = Inlet_F.pt / CombCha_1.g.pt
unkR[320] = _div( unkR[335] , unkR[308],"CombCha_1.g.pt") ;
//[E-169]  Injector_F.M_out = MATH.min(sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(Inlet_F.fluidV) - 1) / LPRES.gamma(Inlet_F.fluidV)) - 1) / (LPRES.gamma(Inlet_F.fluidV) - 1)), 1)
unkR[319] = MATH__min(_sqrt(_div( 2. * (_pow( unkR[320] , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(Inlet_F.fluidV)")),"(Injector_F.PR)**((LPRES.gamma(Inlet_F.fluidV) - 1) / LPRES.gamma(Inlet_F.fluidV))" ) - 1.) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(Inlet_F.fluidV) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(Inlet_F.fluidV) - 1) / LPRES.gamma(Inlet_F.fluidV)) - 1) / (LPRES.gamma(Inlet_F.fluidV) - 1)"), 1.) ;
//[E-170]  CombCha_1.f_F.T = Inlet_F.Tt / (1 + (LPRES.gamma(Inlet_F.fluidV) - 1) / 2 * Injector_F.M_out ** 2)
unkR[28] = _div( unkR[334] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( unkR[319] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(Inlet_F.fluidV) - 1) / 2 * Injector_F.M_out ** 2") ;
//[E-171]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[16] = _div( (LPRES__cp(&unkR[148]) * unkR[69] + _div( unkR[313] , unkR[9],"CombCha_1.OF_st") * LPRES__cp(&unkR[110]) * unkR[28]) , ((1. + _div( unkR[313] , unkR[9],"CombCha_1.OF_st")) * unkR[26]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-172]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P_vap) + 298.15
unkR[15] = _div( (_div( unkR[27] * unkR[12] , (_div( (1. + unkR[8]) , MATH__min(unkR[8], unkR[9]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[26] * (unkR[16] - 298.15)) , LPRES__cp(&unkR[230]),"LPRES.cp(CombCha_1.fluid_P_vap)") + 298.15 ;
//[E-173]  CombCha_1.g.Tt = (-((CombCha_1.W_O + CombCha_1.W_F) * CombCha_1.fluid_P_decomp[CombProd] / CombCha_1.g.W * CombCha_1.fluid_P_decomp[CombProd_cp] * -CombCha_1.T_c + CombCha_1.W_IO / CombCha_1.g.W * Inlet_OXIDISER.fluidV[Comb_prod_cp] * -CombCha_1.f_O.T) - CombCha_1.W_IF / CombCha_1.g.W * Inlet_F.fluidV[Comb_prod_cp] * -CombCha_1.f_F.T) / ((CombCha_1.W_O + CombCha_1.W_F) * CombCha_1.fluid_P_decomp[CombProd] / CombCha_1.g.W * CombCha_1.fluid_P_decomp[CombProd_cp] + CombCha_1.W_IO / CombCha_1.g.W * Inlet_OXIDISER.fluidV[Comb_prod_cp] + CombCha_1.W_IF / CombCha_1.g.W * Inlet_F.fluidV[Comb_prod_cp])
unkR[268] = _div( (-(_div( (unkR[21] + unkR[17]) * unkR[224] , unkR[269],"CombCha_1.g.W") * unkR[225] * -unkR[15] + _div( unkR[20] , unkR[269],"CombCha_1.g.W") * unkR[101] * -unkR[69]) - _div( unkR[19] , unkR[269],"CombCha_1.g.W") * unkR[60] * -unkR[28]) , (_div( (unkR[21] + unkR[17]) * unkR[224] , unkR[269],"CombCha_1.g.W") * unkR[225] + _div( unkR[20] , unkR[269],"CombCha_1.g.W") * unkR[101] + _div( unkR[19] , unkR[269],"CombCha_1.g.W") * unkR[60]),"(CombCha_1.W_O + CombCha_1.W_F) * CombCha_1.fluid_P_decomp[CombProd] / CombCha_1.g.W * CombCha_1.fluid_P_decomp[CombProd_cp] + CombCha_1.W_IO / CombCha_1.g.W * Inlet_OXIDISER.fluidV[Comb_prod_cp] + CombCha_1.W_IF / CombCha_1.g.W * Inlet_F.fluidV[Comb_prod_cp]") ;
//[E-174]  CombCha_1.A_th = CombCha_1.g.W * sqrt(LPRES.R(CombCha_1.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(CombCha_1.g.fluid) / CombCha_1.g.pt
unkR[3] = _div( _div( unkR[269] * _sqrt(LPRES__R(&unkR[270]) * unkR[268],"LPRES.R(CombCha_1.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[270]),"LPRES.FGAMMA(CombCha_1.g.fluid)") , unkR[308],"CombCha_1.g.pt") ;
//[E-175]  CombCha_1.g.A_out = CombCha_1.AR * CombCha_1.A_th
unkR[2] = unkR[0] * unkR[3] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-177]  CombCha_1.g.c_star = sqrt(LPRES.R(CombCha_1.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(CombCha_1.g.fluid)
unkR[23] = _div( _sqrt(LPRES__R(&unkR[270]) * unkR[268],"LPRES.R(CombCha_1.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[270]),"LPRES.FGAMMA(CombCha_1.g.fluid)") ;
//[E-178]  CombCha_1.i.Data[1] = CombCha_1.g.c_star
unkR[312] = unkR[23] ;
//[E-179]  CombCha_1.Pr_r = 4 * LPRES.gamma(CombCha_1.g.fluid) / (9 * LPRES.gamma(CombCha_1.g.fluid) - 5)
unkR[10] = _div( 4. * LPRES__gamma(&unkR[270]) , (9. * LPRES__gamma(&unkR[270]) - 5.),"9 * LPRES.gamma(CombCha_1.g.fluid) - 5") ;
//[E-180]  CombCha_1.M_r = 1
unkR[7] = 1. ;
//[E-181]  CombCha_1.h.T = CombCha_1.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(CombCha_1.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(CombCha_1.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[13] = unkR[268] * _div( (1. + _pow( unkR[10] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[270]) - 1.) * _pow( unkR[7] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[270]) - 1.) * _pow( unkR[7] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(CombCha_1.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-182]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(CombCha_1.g.fluid) ** 0.5 * CombCha_1.h.T ** 0.6
unkR[315] = 1.184e-07 * _pow( LPRES__M(&unkR[270]) , 0.5,"(LPRES.M(CombCha_1.g.fluid))**(0.5)" ) * _pow( unkR[13] , 0.6,"(CombCha_1.h.T)**(0.6)" ) ;
//[E-183]  CombCha_1.h.A = 0
unkR[309] = 0. ;
//[E-184]  CombCha_1.h_g = 0
unkR[311] = 0. ;
//[E-185]  CombCha_1.h.Q = 0
unkR[310] = 0. ;
//[E-186]  Injector_F.PR_ch = ((LPRES.gamma(Inlet_F.fluidV) + 1) / 2) ** (LPRES.gamma(Inlet_F.fluidV) / (LPRES.gamma(Inlet_F.fluidV) - 1))
unkR[321] = _pow( ((LPRES__gamma(&unkR[30]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[30]) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(Inlet_F.fluidV) - 1")),"((LPRES.gamma(Inlet_F.fluidV) + 1) / 2)**(LPRES.gamma(Inlet_F.fluidV) / (LPRES.gamma(Inlet_F.fluidV) - 1))" ) ;
//[E-187]  Injector_F.p_out_ch = Inlet_F.pt / Injector_F.PR_ch
unkR[323] = _div( unkR[335] , unkR[321],"Injector_F.PR_ch") ;
//[E-188]  Injector_F.A_ch = sqrt(Inlet_F.Tt * LPRES.R(Inlet_F.fluidV)) * CombCha_1.f_F.W / (LPRES.FGAMMA(Inlet_F.fluidV) * Inlet_F.pt)
unkR[317] = _div( _sqrt(unkR[334] * LPRES__R(&unkR[30]),"Inlet_F.Tt * LPRES.R(Inlet_F.fluidV)") * unkR[29] , (LPRES__FGAMMA(&unkR[30]) * unkR[335]),"LPRES.FGAMMA(Inlet_F.fluidV) * Inlet_F.pt") ;
//[E-189]  CombCha_1.f_F.p = MATH.max(CombCha_1.g.pt, Injector_F.p_out_ch)
unkR[68] = MATH__max(unkR[308], unkR[323]) ;
//[E-190]  Injector_F.A = CombCha_1.f_F.W * ((2 + (LPRES.gamma(Inlet_F.fluidV) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(Inlet_F.fluidV) + 1)) ** ((LPRES.gamma(Inlet_F.fluidV) + 1) / (2 * (LPRES.gamma(Inlet_F.fluidV) - 1))) / Injector_F.M_out * sqrt(Inlet_F.Tt * LPRES.R(Inlet_F.fluidV)) / Inlet_F.pt / LPRES.FGAMMA(Inlet_F.fluidV)
unkR[316] = _div( _div( unkR[29] * _div( _pow( (_div( (2. + (LPRES__gamma(&unkR[30]) - 1.) * _pow( unkR[319] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[30]) + 1.),"LPRES.gamma(Inlet_F.fluidV) + 1")) , (_div( (LPRES__gamma(&unkR[30]) + 1.) , (2. * (LPRES__gamma(&unkR[30]) - 1.)),"2 * (LPRES.gamma(Inlet_F.fluidV) - 1)")),"((2 + (LPRES.gamma(Inlet_F.fluidV) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(Inlet_F.fluidV) + 1))**((LPRES.gamma(Inlet_F.fluidV) + 1) / (2 * (LPRES.gamma(Inlet_F.fluidV) - 1)))" ) , unkR[319],"Injector_F.M_out") * _sqrt(unkR[334] * LPRES__R(&unkR[30]),"Inlet_F.Tt * LPRES.R(Inlet_F.fluidV)") , unkR[335],"Inlet_F.pt") , LPRES__FGAMMA(&unkR[30]),"LPRES.FGAMMA(Inlet_F.fluidV)") ;
//[E-191]  Injector_F.v_ideal = Injector_F.M_out * sqrt(LPRES.gamma(Inlet_F.fluidV) * LPRES.R(Inlet_F.fluidV) * CombCha_1.f_F.T)
unkR[324] = unkR[319] * _sqrt(LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[28],"LPRES.gamma(Inlet_F.fluidV) * LPRES.R(Inlet_F.fluidV) * CombCha_1.f_F.T") ;
//[E-192]  Injector_F.Re = 0
unkR[322] = 0. ;
//[E-193]  Injector_O.PR_ch = ((LPRES.gamma(Inlet_OXIDISER.fluidV) + 1) / 2) ** (LPRES.gamma(Inlet_OXIDISER.fluidV) / (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1))
unkR[330] = _pow( ((LPRES__gamma(&unkR[71]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[71]) , (LPRES__gamma(&unkR[71]) - 1.),"LPRES.gamma(Inlet_OXIDISER.fluidV) - 1")),"((LPRES.gamma(Inlet_OXIDISER.fluidV) + 1) / 2)**(LPRES.gamma(Inlet_OXIDISER.fluidV) / (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1))" ) ;
//[E-194]  Injector_O.p_out_ch = Inlet_OXIDISER.pt / Injector_O.PR_ch
unkR[332] = _div( unkR[337] , unkR[330],"Injector_O.PR_ch") ;
//[E-195]  Injector_O.A_ch = sqrt(Inlet_OXIDISER.Tt * LPRES.R(Inlet_OXIDISER.fluidV)) * CombCha_1.f_O.W / (LPRES.FGAMMA(Inlet_OXIDISER.fluidV) * Inlet_OXIDISER.pt)
unkR[326] = _div( _sqrt(unkR[336] * LPRES__R(&unkR[71]),"Inlet_OXIDISER.Tt * LPRES.R(Inlet_OXIDISER.fluidV)") * unkR[70] , (LPRES__FGAMMA(&unkR[71]) * unkR[337]),"LPRES.FGAMMA(Inlet_OXIDISER.fluidV) * Inlet_OXIDISER.pt") ;
//[E-196]  CombCha_1.f_O.p = MATH.max(CombCha_1.g.pt, Injector_O.p_out_ch)
unkR[109] = MATH__max(unkR[308], unkR[332]) ;
//[E-197]  Injector_O.A = CombCha_1.f_O.W * ((2 + (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(Inlet_OXIDISER.fluidV) + 1)) ** ((LPRES.gamma(Inlet_OXIDISER.fluidV) + 1) / (2 * (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1))) / Injector_O.M_out * sqrt(Inlet_OXIDISER.Tt * LPRES.R(Inlet_OXIDISER.fluidV)) / Inlet_OXIDISER.pt / LPRES.FGAMMA(Inlet_OXIDISER.fluidV)
unkR[325] = _div( _div( unkR[70] * _div( _pow( (_div( (2. + (LPRES__gamma(&unkR[71]) - 1.) * _pow( unkR[328] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[71]) + 1.),"LPRES.gamma(Inlet_OXIDISER.fluidV) + 1")) , (_div( (LPRES__gamma(&unkR[71]) + 1.) , (2. * (LPRES__gamma(&unkR[71]) - 1.)),"2 * (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1)")),"((2 + (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(Inlet_OXIDISER.fluidV) + 1))**((LPRES.gamma(Inlet_OXIDISER.fluidV) + 1) / (2 * (LPRES.gamma(Inlet_OXIDISER.fluidV) - 1)))" ) , unkR[328],"Injector_O.M_out") * _sqrt(unkR[336] * LPRES__R(&unkR[71]),"Inlet_OXIDISER.Tt * LPRES.R(Inlet_OXIDISER.fluidV)") , unkR[337],"Inlet_OXIDISER.pt") , LPRES__FGAMMA(&unkR[71]),"LPRES.FGAMMA(Inlet_OXIDISER.fluidV)") ;
//[E-198]  Injector_O.v_ideal = Injector_O.M_out * sqrt(LPRES.gamma(Inlet_OXIDISER.fluidV) * LPRES.R(Inlet_OXIDISER.fluidV) * CombCha_1.f_O.T)
unkR[333] = unkR[328] * _sqrt(LPRES__gamma(&unkR[71]) * LPRES__R(&unkR[71]) * unkR[69],"LPRES.gamma(Inlet_OXIDISER.fluidV) * LPRES.R(Inlet_OXIDISER.fluidV) * CombCha_1.f_O.T") ;
//[E-199]  Injector_O.Re = 0
unkR[331] = 0. ;

//save last residues
memcpy(this->res,res,1*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__prueba_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(unkR[316] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_F.","Injector_F.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(1 && LPRES__State(&unkR[30]) == 2 || 0 && LPRES__State(&unkR[30]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_F."," TRUE  AND LPRES.State(Inlet_F.fluidV) == Gas OR  FALSE  AND LPRES.State(Inlet_F.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
if(!(unkR[325] > 0))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",49,"Injector_O.","Injector_O.A > 0","%s","NEGATIVE INJECTOR AREA");
if(!(1 && LPRES__State(&unkR[71]) == 2 || 0 && LPRES__State(&unkR[71]) == 1))
		issueErrorAssert(213,7,24,98,"LPRES_CompCombCha.el",50,"Injector_O."," TRUE  AND LPRES.State(Inlet_OXIDISER.fluidV) == Gas OR  FALSE  AND LPRES.State(Inlet_OXIDISER.fluidV) == Liquid","%s","CHECK INJECTOR TYPE! SELECTED TYPE DOES NOT MATCH ACTUAL FLUID STATE THROUGH INJECTOR");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__prueba_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[148] * unkR[110] + unkR[149] * unkR[111] + unkR[150] * unkR[112] + unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[151] * unkR[113] + unkR[175] * unkR[137]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour] + CombCha_1.fluid_O[NH3] * CombCha_1.fluid_F[NH3] + CombCha_1.fluid_O[H2O_vapour] * CombCha_1.fluid_F[H2O_vapour]) != 0
    ev[1]= unkR[148] * unkR[110] + unkR[149] * unkR[111] + unkR[150] * unkR[112] + unkR[152] * unkR[114] + unkR[153] * unkR[115] + unkR[154] * unkR[116] + unkR[155] * unkR[117] + unkR[156] * unkR[118] + unkR[157] * unkR[119] + unkR[158] * unkR[120] + unkR[159] * unkR[121] + unkR[160] * unkR[122] + unkR[161] * unkR[123] + unkR[162] * unkR[124] + unkR[163] * unkR[125] + unkR[164] * unkR[126] + unkR[165] * unkR[127] + unkR[166] * unkR[128] + unkR[167] * unkR[129] + unkR[168] * unkR[130] + unkR[169] * unkR[131] + unkR[170] * unkR[132] + unkR[171] * unkR[133] + unkR[172] * unkR[134] + unkR[173] * unkR[135] + unkR[174] * unkR[136] + unkR[151] * unkR[113] + unkR[175] * unkR[137]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour] + CombCha_1.fluid_O[NH3] * CombCha_1.fluid_F[NH3] + CombCha_1.fluid_O[H2O_vapour] * CombCha_1.fluid_F[H2O_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__prueba_design::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour] + CombCha_1.fluid_O[NH3] * CombCha_1.fluid_F[NH3] + CombCha_1.fluid_O[H2O_vapour] * CombCha_1.fluid_F[H2O_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour] + CombCha_1.fluid_O[NH3] * CombCha_1.fluid_F[NH3] + CombCha_1.fluid_O[H2O_vapour] * CombCha_1.fluid_F[H2O_vapour]) == 0
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__prueba_design::executeWhen(double *_time,  int index )
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
void LPRES_EXAMPLES__prueba_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__prueba_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 3 ;
	nConstraints= 9;
	nWhen= 2;
	nZones= 1;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[2]= { "(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour] + CombCha_1.fluid_O[NH3] * CombCha_1.fluid_F[NH3] + CombCha_1.fluid_O[H2O_vapour] * CombCha_1.fluid_F[H2O_vapour]) != 0",
		"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour] + CombCha_1.fluid_O[NH3] * CombCha_1.fluid_F[NH3] + CombCha_1.fluid_O[H2O_vapour] * CombCha_1.fluid_F[H2O_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "CombCha_1.Combustion","OTHERS"};
	static int zoneTxtIndexTable[] = { 0 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[3]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour] + CombCha_1.fluid_O[NH3] * CombCha_1.fluid_F[NH3] + CombCha_1.fluid_O[H2O_vapour] * CombCha_1.fluid_F[H2O_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour] + CombCha_1.fluid_O[NH3] * CombCha_1.fluid_F[NH3] + CombCha_1.fluid_O[H2O_vapour] * CombCha_1.fluid_F[H2O_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"CombCha_1.Combustion"}};
	return evs;
};

/* Initialisation of delays */
void LPRES_EXAMPLES__prueba_design::initDelays()
{
}


bool LPRES_EXAMPLES__prueba_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__prueba_design = 36228;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__prueba_design = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__prueba_design[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__prueba_design;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__prueba_design;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__prueba_design;
return true;
}



bool LPRES_EXAMPLES__prueba_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__prueba_design = 32;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__prueba_design = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__prueba_design[] = 
{
"AQAAAAEAAAAAAAAAAQAAAAEAAAAAAAAA"
};
*size = s_gsi_size_LPRES_EXAMPLES__prueba_design;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__prueba_design;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__prueba_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__prueba_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__prueba_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__prueba_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__prueba_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__prueba_design(name,dirInstall);
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
	sprintf(componentName,"%s","prueba");
	sprintf(partitionName,"%s","design");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.prueba.design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


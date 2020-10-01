//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__Turbine_test_off_design_CPP
#define LPRES_EXAMPLES__Turbine_test_off_design_CPP

#include "LPRES_EXAMPLES.+turbine_test.off_design.h"

LPRES_EXAMPLES__Turbine_test_off_design* LPRES_EXAMPLES__Turbine_test_off_design::s_current= NULL;

LPRES_EXAMPLES__Turbine_test_off_design::LPRES_EXAMPLES__Turbine_test_off_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "Turbine_test";
m_infoPartitionName = "off_design";
m_infoModelName = "LPRES_EXAMPLES__Turbine_test_off_design";
m_infoModelFileName = "LPRES_EXAMPLES.+turbine_test.off_design";
m_infoModelFileNameExtra = "+turbine_test.off_design";
m_perfFlag = false;
m_infoComponentDate = "12/06/2020 13:47:41.611000";
m_infoPartitionDate = "09/07/2020 00:03:43.035000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "LPRES V2.0.1 LPRES_EXAMPLES V0.1 MATH V3.2.3 ";

m_solveInternalBox= new int[2]; 
int nbx;
for (nbx=0; nbx < 2 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[4];
int ib;
for (ib=0; ib < 4 ; ib++)
	m_boundaryBranch[ib]= 0;

m_branchZone= new int[2]; 
int nibr;
for (nibr=0; nibr < 2 ; nibr++)
	m_branchZone[nibr]= -1;

m_branchIf= new int[1]; 
int nif;
for (nif=0; nif < 1 ; nif++)
	m_branchIf[nif]= -1;

static const char * elmstr0[] = { "LOX", "NTO", "H2O2", "NH3", "HNO3", "LF2", "RP_1", "LCH4", "LH2", "N2H4", "UDMH", "MMH", "JP_10", "Kerox", "Oil", "H2O", 
		"IPA", "Air", "Ar", "CH4", "CO", "CO2", "H2", "He", "N2", "O2", "MMH_vapour", "H2O_vapour", "Comb_prod", "Comb_prod_M", "Comb_prod_cp", "Comb_prod_c", 
		"Comb_prod_cp_g", "Comb_prod_Lv", "Comb_prod_visc", "Comb_prod_cond", "Comb_prod_T_boil", "Comb_prod_rho", NULL } ;
static int elmind0[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
		33, 34, 35, 36, 37, 38 } ;
static const char * elmstr1[] = { "Liquid", "Gas", NULL } ;
static int elmind1[] = { 1, 2 } ;
static int elmind2[] = { 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 4, 28 } ;
static int elmind3[] = { 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 } ;
static int elmind4[] = { 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 
		18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 4, 28 } ;
n_typ=5;
static struct INTEG_enumType tmp_typ[] = { 
		{elmstr0,38,elmind0},
		{elmstr1,2,elmind1},
		{elmstr0,12,elmind2},
		{elmstr0,16,elmind3},
		{elmstr0,28,elmind4}
	} ;
typ= new struct INTEG_enumType[5];
etypecopy(5,typ,tmp_typ);
n_dyn=1;
dyn= new double[1] ;
static double tmp_dynInit[1]={ 0.1 } ;
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

n_unkR=75;
unkR= new double[75] ;
static double tmp_unkRInit[75]={ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02, 0, 0, 0, 0, 0, 
		0, 1, 1, 0, 0, 0, 0, 0, 0.01, 0, 500, 0, 0, 0, 0.4, 0.7, 
		1, 0, 0, 0.5, 0, 0, 1.8, 0.05, 0, 0, 0 } ;
unkRInit= new double[75];
dcopy(75,unkRInit,tmp_unkRInit);


n_cteR=7;
static double tmp_cteRInit[7]={ 8314, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=1;
unkI= new int[1] ;
static int tmp_unkIInit[1]={ 18 } ;
unkIInit= new int[1];
icopy(1,unkIInit,tmp_unkIInit);


n_cteI=1;
static int tmp_cteIInit[1]={ 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=16;
static std::string tmp_cteSInit[16]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "W", "g/mol", "kg/s", "m", "m^2", "m/s", "m/s^2", "rad/s", "rpm" } ;
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
void LPRES_EXAMPLES__Turbine_test_off_design::initInternalModels()
{
}

int LPRES_EXAMPLES__Turbine_test_off_design::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi1;
	int _vi2;

	_vi1 = 1 ;
	while ( _vi1 <= setofSize(&typ[4]) ) {
	_vi2 = setofElem(&typ[4], _vi1) ;
	if( fluid[_vi2-1] != 0 ) {
	fluid_name = _vi2 ;
	}
	_vi1 += 1 ;
	}
	return fluid_name ;
}


int LPRES_EXAMPLES__Turbine_test_off_design::LPRES__State(double fluid[])
{
	// Local variables:
	int fluid_state = 1;
	int fluid_name = 1;

	fluid_name = LPRES__Know_fluid(fluid) ;
	if( setofPos(&typ[3], fluid_name) != 0 ) {
	fluid_state = 1 ;
		}
	else if( setofPos(&typ[2], fluid_name) != 0) {
	fluid_state = 2 ;

	}
	return fluid_state ;
}


double LPRES_EXAMPLES__Turbine_test_off_design::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[28] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600,3133,2288 };
	int _vi3;
	int _vi4;
	double _vr1;

	_vr1 = 0. ;
	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[4]) ) {
	_vi4 = setofElem(&typ[4], _vi3) ;
	_vr1 += Chem_cp[_vi3-1] * fluid[_vi4-1] ;
	_vi3 += 1 ;
	}
	return _vr1 + fluid[30] * fluid[28] ;
}


double LPRES_EXAMPLES__Turbine_test_off_design::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[28] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07,17.031,18 };
	int _vi5;
	int _vi6;
	double _vr2;

	_vr2 = 0. ;
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[4]) ) {
	_vi6 = setofElem(&typ[4], _vi5) ;
	_vr2 += _div( fluid[_vi6-1] , Chem_M[_vi5-1],"Chem_M[_vi5]") ;
	_vi5 += 1 ;
	}
	return _div( 1 , (_vr2 + _div( fluid[28] , fluid[29],"fluid[Comb_prod_M]")),"_vr2 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double LPRES_EXAMPLES__Turbine_test_off_design::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__Turbine_test_off_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__Turbine_test_off_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__Turbine_test_off_design::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__Turbine_test_off_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__Turbine_test_off_design::LPRES__ISA_Pressure(const double & z)
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
	int _vi7;

	h = LPRES__Geopotential_Altitude(z) ;
	_vi7 = 1 ;
	while ( _vi7 <= 7 ) {
	if( h > h_max[_vi7-1] ) {
	if( b[_vi7-1] ) {
	p_0 = p_0 * exp(_div( -9.80665 * (h_max[_vi7-1] - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_0 = p_0 * _pow( (_div( (T_0 + a[_vi7-1] * (h_max[_vi7-1] - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[_vi7-1] * 287./1000.),"a[_vi7] * 287 / 1000")),"((T_0 + a[_vi7] * (h_max[_vi7] - h_0) / 1000) / T_0)**(-9.80665 / (a[_vi7] * 287 / 1000))" ) ;
	}
	T_0 = T_0 + a[_vi7-1] * (h_max[_vi7-1] - h_0)/1000. ;
	h_0 = h_max[_vi7-1] ;
	j = _vi7 + 1 ;
	}
	_vi7 += 1 ;
	}
	if( b[j-1] ) {
	p_amb = p_0 * exp(_div( -9.80665 * (h - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_amb = p_0 * _pow( (_div( (T_0 + a[j-1] * (h - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[j-1] * 287./1000.),"a[j] * 287 / 1000")),"((T_0 + a[j] * (h - h_0) / 1000) / T_0)**(-9.80665 / (a[j] * 287 / 1000))" ) ;
	}
	return p_amb ;
}


double LPRES_EXAMPLES__Turbine_test_off_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__Turbine_test_off_design::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__Turbine_test_off_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
{
	int _vi8;
	int _vi9;

	_vi8 = 1 ;
	while ( _vi8 <= setofSize(&typ[0]) ) {
	_vi9 = setofElem(&typ[0], _vi8) ;
	fluid[_vi8-1] = 0. ;
	_vi8 += 1 ;
	}
	fluid[fluid_name-1] = 1. ;
	return  ;
}


/* Copy special unkR[] items to dyn[] vector */

void LPRES_EXAMPLES__Turbine_test_off_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__Turbine_test_off_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet.Inlet,100)
	LPRES__Init_fluid(unkI[0], &unkR[2]) ;
  // init(Nozzle.Nozzle,0)
	unkR[50] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__Turbine_test_off_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-4]  Turbine.MFP = Turbine.A_in / sqrt(LPRES.R(Inlet.fluidV)) * sqrt(LPRES.gamma(Inlet.fluidV)) * MATH.min(Turbine.M_2, 1) * (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1))
unkR[57] = _div( unkR[56] , _sqrt(LPRES__R(&unkR[2]),"LPRES.R(Inlet.fluidV)"),"sqrt(LPRES.R(Inlet.fluidV))") * _sqrt(LPRES__gamma(&unkR[2]),"LPRES.gamma(Inlet.fluidV)") * MATH__min(dyn[0], 1.) * _pow( (1. + (LPRES__gamma(&unkR[2]) - 1.)/2. * _pow( MATH__min(dyn[0], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[2]) + 1.)/2. , (LPRES__gamma(&unkR[2]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1")),"(1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1))" ) ;
//[E-5]  Nozzle.g.W = Turbine.MFP * Inlet.pt / sqrt(Inlet.Tt)
unkR[1] = _div( unkR[57] * unkR[40] , _sqrt(unkR[0],"Inlet.Tt"),"sqrt(Inlet.Tt)") ;
//[E-6]  Turbine.V_z2 = Turbine.cos_2 * Turbine.M_2 * sqrt(LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Inlet.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2))
unkR[59] = unkR[62] * dyn[0] * _sqrt(_div( LPRES__gamma(&unkR[2]) * LPRES__R(&unkR[2]) * unkR[0] , (1. + (LPRES__gamma(&unkR[2]) - 1.)/2. * _pow( dyn[0] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Inlet.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-7]  Turbine.phi = Turbine.V_z2 / Turbine.U
unkR[66] = _div( unkR[59] , unkR[58],"Turbine.U") ;
//[E-8]  Turbine.psi = (Turbine.psi_d + 1) / Turbine.phi_d * Turbine.phi - 1
unkR[69] = _div( (unkR[70] + 1.) , unkR[67],"Turbine.phi_d") * unkR[66] - 1. ;
//[E-9]  Turbine.tau = Turbine.psi * Turbine.U ** 2
unkR[73] = unkR[69] * _pow( unkR[58] , 2.,"(Turbine.U)**(2)" ) ;
//[E-10]  Nozzle.g.Tt = Inlet.Tt - Turbine.tau / LPRES.cp(Inlet.fluidV)
unkR[49] = unkR[0] - _div( unkR[73] , LPRES__cp(&unkR[2]),"LPRES.cp(Inlet.fluidV)") ;
//[E-11]  Turbine.alpha = Nozzle.g.Tt / Inlet.Tt
unkR[60] = _div( unkR[49] , unkR[0],"Inlet.Tt") ;
//[E-12]  Turbine.beta = (1 - (1 - Turbine.alpha) / Turbine.eta_d) ** (1 / ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)))
unkR[61] = _pow( (1. - _div( (1. - unkR[60]) , unkR[63],"Turbine.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[2]) - 1.) , LPRES__gamma(&unkR[2]),"LPRES.gamma(Inlet.fluidV)")),"(LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)")),"(1 - (1 - Turbine.alpha) / Turbine.eta_d)**(1 / ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)))" ) ;
//[E-13]  Nozzle.g.pt = Turbine.beta * Inlet.pt
unkR[50] = unkR[61] * unkR[40] ;
//[E-14]  Nozzle.PR = Nozzle.g.pt / Nozzle.p_amb
unkR[45] = _div( unkR[50] , unkR[52],"Nozzle.p_amb") ;
//[E-15]  Nozzle.M_out =  ZONE[2] (Nozzle.PR < Nozzle.PR_sl) sqrt(2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1))	  OTHERS 1
 if(m_branchZone[1]==0)
	unkR[44] = _sqrt(_div( 2. * (_pow( unkR[45] , (_div( (LPRES__gamma(&unkR[2]) - 1.) , LPRES__gamma(&unkR[2]),"LPRES.gamma(Inlet.fluidV)")),"(Nozzle.PR)**((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV))" ) - 1.) , (LPRES__gamma(&unkR[2]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1"),"2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1)") ;
else unkR[44] = 1. ;
//[E-16]  Nozzle.A_sl =  ZONE[1] (Nozzle.M_out > 0) Nozzle.A * Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))	  OTHERS Nozzle.A * -Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))
 if(m_branchZone[0]==0)
	unkR[43] = _div( unkR[42] * unkR[44] , _pow( (_div( (2. + (LPRES__gamma(&unkR[2]) - 1.) * _pow( unkR[44] , 2.,"(Nozzle.M_out)**(2)" )) , (LPRES__gamma(&unkR[2]) + 1.),"LPRES.gamma(Inlet.fluidV) + 1")) , (_div( (LPRES__gamma(&unkR[2]) + 1.) , (2. * (LPRES__gamma(&unkR[2]) - 1.)),"2 * (LPRES.gamma(Inlet.fluidV) - 1)")),"((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1))**((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))" ),"((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))") ;
else unkR[43] = _div( unkR[42] * -unkR[44] , _pow( (_div( (2. + (LPRES__gamma(&unkR[2]) - 1.) * _pow( unkR[44] , 2.,"(Nozzle.M_out)**(2)" )) , (LPRES__gamma(&unkR[2]) + 1.),"LPRES.gamma(Inlet.fluidV) + 1")) , (_div( (LPRES__gamma(&unkR[2]) + 1.) , (2. * (LPRES__gamma(&unkR[2]) - 1.)),"2 * (LPRES.gamma(Inlet.fluidV) - 1)")),"((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1))**((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))" ),"((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))") ;
//[E-17]  Nozzle.g.W = Nozzle.A_sl * LPRES.FGAMMA(Inlet.fluidV) * Nozzle.g.pt / sqrt(Nozzle.g.Tt * LPRES.R(Inlet.fluidV))
res[0] = evalNormResidueInternal(0,unkR[1],_div( unkR[43] * LPRES__FGAMMA(&unkR[2]) * unkR[50] , _sqrt(unkR[49] * LPRES__R(&unkR[2]),"Nozzle.g.Tt * LPRES.R(Inlet.fluidV)"),"sqrt(Nozzle.g.Tt * LPRES.R(Inlet.fluidV))"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__Turbine_test_off_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__Turbine_test_off_design& m= *LPRES_EXAMPLES__Turbine_test_off_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__Turbine_test_off_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(1, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__Turbine_test_off_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__Turbine_test_off_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Turbine.m.N = 0.10471975511966 * Turbine.rpm
unkR[64] = 0.10471975511966 * unkR[72] ;
//[E-2]  Turbine.U = Turbine.m.N * Turbine.r_m
unkR[58] = unkR[64] * unkR[71] ;
//[E-3]  Nozzle.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[52] = LPRES__ISA_Pressure(unkR[41]) ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-18]  Turbine.m.Power = Nozzle.g.W * Turbine.tau
unkR[65] = unkR[1] * unkR[73] ;
//[E-19]  Turbine.theta = 1 / Turbine.alpha
unkR[74] = _div( 1. , unkR[60],"Turbine.alpha") ;
//[E-20]  Turbine.pi = 1 / Turbine.beta
unkR[68] = _div( 1. , unkR[61],"Turbine.beta") ;
//[E-21]  Nozzle.PR_sl = ((LPRES.gamma(Inlet.fluidV) + 1) / 2) ** (LPRES.gamma(Inlet.fluidV) / (LPRES.gamma(Inlet.fluidV) - 1))
unkR[46] = _pow( ((LPRES__gamma(&unkR[2]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[2]) , (LPRES__gamma(&unkR[2]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1")),"((LPRES.gamma(Inlet.fluidV) + 1) / 2)**(LPRES.gamma(Inlet.fluidV) / (LPRES.gamma(Inlet.fluidV) - 1))" ) ;
//[E-22]  Nozzle.p_out_ch = Nozzle.g.pt / Nozzle.PR_sl
unkR[54] = _div( unkR[50] , unkR[46],"Nozzle.PR_sl") ;
//[E-23]  Nozzle.p_out = MATH.max(Nozzle.p_amb, Nozzle.p_out_ch)
unkR[53] = MATH__max(unkR[52], unkR[54]) ;
//[E-24]  Nozzle.T_out = Nozzle.g.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Nozzle.M_out ** 2)
unkR[47] = _div( unkR[49] , (1. + (LPRES__gamma(&unkR[2]) - 1.)/2. * _pow( unkR[44] , 2.,"(Nozzle.M_out)**(2)" )),"1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Nozzle.M_out ** 2") ;
//[E-25]  Nozzle.v_out = Nozzle.M_out * sqrt(LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Nozzle.T_out)
unkR[55] = unkR[44] * _sqrt(LPRES__gamma(&unkR[2]) * LPRES__R(&unkR[2]) * unkR[47],"LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Nozzle.T_out") ;
//[E-26]  Nozzle.Thrust = Nozzle.g.W * Nozzle.v_out + Nozzle.A * (Nozzle.p_out - Nozzle.p_amb)
unkR[48] = unkR[1] * unkR[55] + unkR[42] * (unkR[53] - unkR[52]) ;
//[E-27]  Nozzle.i.Data[1] = Nozzle.Thrust
unkR[51] = unkR[48] ;

//save last residues
memcpy(this->res,res,1*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__Turbine_test_off_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[2])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",162,"Turbine.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
if(!(2 == LPRES__State(&unkR[2])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__Turbine_test_off_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[44]; //Nozzle.M_out > 0
    ev[1]= unkR[45] - unkR[46]; //Nozzle.PR < Nozzle.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__Turbine_test_off_design::evalWhen(double *_time, bool w[],bool cont[] )
{
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__Turbine_test_off_design::executeWhen(double *_time,  int index )
{
}

/* Evaluation of ZONE conditions*/
void LPRES_EXAMPLES__Turbine_test_off_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Nozzle.A_sl =  ZONE (Nozzle.M_out > 0) Nozzle.A * Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) OTHERS Nozzle.A * -Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))
     branchZone[0] = (cont[0] ) ? 0 : 1;
     // Nozzle.M_out =  ZONE (Nozzle.PR < Nozzle.PR_sl) sqrt(2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1)) OTHERS 1
     branchZone[1] = (cont[1] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__Turbine_test_off_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 2 ;
	nConstraints= 4;
	nWhen= 0;
	nZones= 2;

/* WHEN info for debugging purposes */
whenTxt= NULL;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "Nozzle.M_out > 0","OTHERS",
	"Nozzle.PR < Nozzle.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[2]= { { ZONE,GT_OP,0,0,"Nozzle.M_out > 0"},{ ZONE,LT_OP,0,0,"Nozzle.PR < Nozzle.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void LPRES_EXAMPLES__Turbine_test_off_design::initDelays()
{
}


bool LPRES_EXAMPLES__Turbine_test_off_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__Turbine_test_off_design = 14116;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__Turbine_test_off_design = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__Turbine_test_off_design[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__Turbine_test_off_design;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__Turbine_test_off_design;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__Turbine_test_off_design;
return true;
}



bool LPRES_EXAMPLES__Turbine_test_off_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__Turbine_test_off_design = 32;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__Turbine_test_off_design = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__Turbine_test_off_design[] = 
{
"AQAAAAEAAAAAAAAAAQAAAAEAAAAAAAAA"
};
*size = s_gsi_size_LPRES_EXAMPLES__Turbine_test_off_design;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__Turbine_test_off_design;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__Turbine_test_off_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__Turbine_test_off_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__Turbine_test_off_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__Turbine_test_off_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__Turbine_test_off_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__Turbine_test_off_design(name,dirInstall);
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
	sprintf(componentName,"%s","Turbine_test");
	sprintf(partitionName,"%s","off_design");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+turbine_test.off_design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


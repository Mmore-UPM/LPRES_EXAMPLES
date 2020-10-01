//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__Turbine_test_partition1_CPP
#define LPRES_EXAMPLES__Turbine_test_partition1_CPP

#include "LPRES_EXAMPLES.+turbine_test.partition1.h"

LPRES_EXAMPLES__Turbine_test_partition1* LPRES_EXAMPLES__Turbine_test_partition1::s_current= NULL;

LPRES_EXAMPLES__Turbine_test_partition1::LPRES_EXAMPLES__Turbine_test_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "Turbine_test";
m_infoPartitionName = "partition1";
m_infoModelName = "LPRES_EXAMPLES__Turbine_test_partition1";
m_infoModelFileName = "LPRES_EXAMPLES.+turbine_test.partition1";
m_infoModelFileNameExtra = "+turbine_test.partition1";
m_perfFlag = false;
m_infoComponentDate = "12/06/2020 13:47:41.611000";
m_infoPartitionDate = "25/06/2020 19:54:31.230000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "LPRES V2.0.1 LPRES_EXAMPLES V0.1 MATH V3.2.3 ";

m_solveInternalBox= new int[1]; 


m_boundaryBranch= new int[8];
int ib;
for (ib=0; ib < 8 ; ib++)
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
n_dyn=0;

n_der=0;

n_unkR=76;
unkR= new double[76] ;
static double tmp_unkRInit[76]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02, 0, 0, 0, 0, 0, 0, 
		1, 1, 1, 0, 0, 0, 0, 0, 0.01, 0, 0.1, 500, 0, 0, 0, 0.4, 
		0.7, 1, 0, 0, 0.5, 0, 0, 1.8, 0.05, 0, 0, 0 } ;
unkRInit= new double[76];
dcopy(76,unkRInit,tmp_unkRInit);


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
n_nelg= 0;
n_neld= 0;
m_numBoxes= 0;
m_nNonLinearBoxes= 0;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__Turbine_test_partition1::initInternalModels()
{
}

int LPRES_EXAMPLES__Turbine_test_partition1::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__Turbine_test_partition1::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__Turbine_test_partition1::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__Turbine_test_partition1::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__Turbine_test_partition1::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__Turbine_test_partition1::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__Turbine_test_partition1::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__Turbine_test_partition1::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double LPRES_EXAMPLES__Turbine_test_partition1::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__Turbine_test_partition1::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__Turbine_test_partition1::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__Turbine_test_partition1::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__Turbine_test_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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

void LPRES_EXAMPLES__Turbine_test_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__Turbine_test_partition1::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet.Inlet,100)
	LPRES__Init_fluid(unkI[0], &unkR[1]) ;
  // init(Nozzle.Nozzle,0)
	unkR[50] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__Turbine_test_partition1::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Turbine.tau = Turbine.m.Power / Nozzle.g.W
unkR[74] = _div( unkR[66] , unkR[49],"Nozzle.g.W") ;
//[E-2]  Turbine.m.N = 0.10471975511966 * Turbine.rpm
unkR[65] = 0.10471975511966 * unkR[73] ;
//[E-3]  Nozzle.g.Tt = Inlet.Tt - Turbine.tau / LPRES.cp(Inlet.fluidV)
unkR[48] = unkR[0] - _div( unkR[74] , LPRES__cp(&unkR[1]),"LPRES.cp(Inlet.fluidV)") ;
//[E-4]  Turbine.MFP = Nozzle.g.W * sqrt(Inlet.Tt) / Inlet.pt
unkR[57] = _div( unkR[49] * _sqrt(unkR[0],"Inlet.Tt") , unkR[39],"Inlet.pt") ;
//[E-5]  Turbine.alpha = Nozzle.g.Tt / Inlet.Tt
unkR[61] = _div( unkR[48] , unkR[0],"Inlet.Tt") ;
//[E-6]  Turbine.theta = 1 / Turbine.alpha
unkR[75] = _div( 1. , unkR[61],"Turbine.alpha") ;
//[E-7]  Turbine.beta = (1 - (1 - Turbine.alpha) / Turbine.eta_d) ** (1 / ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)))
unkR[62] = _pow( (1. - _div( (1. - unkR[61]) , unkR[64],"Turbine.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[1]) - 1.) , LPRES__gamma(&unkR[1]),"LPRES.gamma(Inlet.fluidV)")),"(LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)")),"(1 - (1 - Turbine.alpha) / Turbine.eta_d)**(1 / ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)))" ) ;
//[E-8]  Nozzle.g.pt = Turbine.beta * Inlet.pt
unkR[50] = unkR[62] * unkR[39] ;
//[E-9]  Turbine.pi = 1 / Turbine.beta
unkR[69] = _div( 1. , unkR[62],"Turbine.beta") ;
//[E-10]  Turbine.A_in = Turbine.MFP / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1)) / MATH.min(Turbine.M_2, 1) / sqrt(LPRES.gamma(Inlet.fluidV)) * sqrt(LPRES.R(Inlet.fluidV))
unkR[56] = _div( _div( _div( unkR[57] , _pow( (1. + (LPRES__gamma(&unkR[1]) - 1.)/2. * _pow( MATH__min(unkR[58], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[1]) + 1.)/2. , (LPRES__gamma(&unkR[1]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1")),"(1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1))" ),"(1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1))") , MATH__min(unkR[58], 1.),"MATH.min(Turbine.M_2, 1)") , _sqrt(LPRES__gamma(&unkR[1]),"LPRES.gamma(Inlet.fluidV)"),"sqrt(LPRES.gamma(Inlet.fluidV))") * _sqrt(LPRES__R(&unkR[1]),"LPRES.R(Inlet.fluidV)") ;
//[E-11]  Turbine.V_z2 = Turbine.cos_2 * Turbine.M_2 * sqrt(LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Inlet.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2))
unkR[60] = unkR[63] * unkR[58] * _sqrt(_div( LPRES__gamma(&unkR[1]) * LPRES__R(&unkR[1]) * unkR[0] , (1. + (LPRES__gamma(&unkR[1]) - 1.)/2. * _pow( unkR[58] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Inlet.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-12]  Turbine.U = Turbine.V_z2 / Turbine.phi
unkR[59] = _div( unkR[60] , unkR[67],"Turbine.phi") ;
//[E-13]  Turbine.r_m = Turbine.U / Turbine.m.N
unkR[72] = _div( unkR[59] , unkR[65],"Turbine.m.N") ;
//[E-14]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[70] = _div( unkR[74] , _pow( unkR[59] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-15]  Turbine.phi_d = (Turbine.psi_d + 1) / ((Turbine.psi + 1) / Turbine.phi)
unkR[68] = _div( (unkR[71] + 1.) , (_div( (unkR[70] + 1.) , unkR[67],"Turbine.phi")),"(Turbine.psi + 1) / Turbine.phi") ;
//[E-16]  Nozzle.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[52] = LPRES__ISA_Pressure(unkR[40]) ;
//[E-17]  Nozzle.PR = Nozzle.g.pt / Nozzle.p_amb
unkR[44] = _div( unkR[50] , unkR[52],"Nozzle.p_amb") ;
//[E-18]  Nozzle.PR_sl = ((LPRES.gamma(Inlet.fluidV) + 1) / 2) ** (LPRES.gamma(Inlet.fluidV) / (LPRES.gamma(Inlet.fluidV) - 1))
unkR[45] = _pow( ((LPRES__gamma(&unkR[1]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[1]) , (LPRES__gamma(&unkR[1]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1")),"((LPRES.gamma(Inlet.fluidV) + 1) / 2)**(LPRES.gamma(Inlet.fluidV) / (LPRES.gamma(Inlet.fluidV) - 1))" ) ;
//[E-19]  Nozzle.p_out_ch = Nozzle.g.pt / Nozzle.PR_sl
unkR[54] = _div( unkR[50] , unkR[45],"Nozzle.PR_sl") ;
//[E-20]  Nozzle.A_sl = Nozzle.g.W * sqrt(Nozzle.g.Tt * LPRES.R(Inlet.fluidV)) / Nozzle.g.pt / LPRES.FGAMMA(Inlet.fluidV)
unkR[42] = _div( _div( unkR[49] * _sqrt(unkR[48] * LPRES__R(&unkR[1]),"Nozzle.g.Tt * LPRES.R(Inlet.fluidV)") , unkR[50],"Nozzle.g.pt") , LPRES__FGAMMA(&unkR[1]),"LPRES.FGAMMA(Inlet.fluidV)") ;
//[E-21]  Nozzle.M_out =  ZONE[2] (Nozzle.PR < Nozzle.PR_sl) sqrt(2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1))	  OTHERS 1
 if(m_branchZone[1]==0)
	unkR[43] = _sqrt(_div( 2. * (_pow( unkR[44] , (_div( (LPRES__gamma(&unkR[1]) - 1.) , LPRES__gamma(&unkR[1]),"LPRES.gamma(Inlet.fluidV)")),"(Nozzle.PR)**((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV))" ) - 1.) , (LPRES__gamma(&unkR[1]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1"),"2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1)") ;
else unkR[43] = 1. ;
//[E-22]  Nozzle.A =  ZONE[1] (Nozzle.M_out > 0) Nozzle.A_sl * ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) / Nozzle.M_out	  OTHERS Nozzle.A_sl * ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) / -Nozzle.M_out
 if(m_branchZone[0]==0)
	unkR[41] = _div( unkR[42] * _pow( (_div( (2. + (LPRES__gamma(&unkR[1]) - 1.) * _pow( unkR[43] , 2.,"(Nozzle.M_out)**(2)" )) , (LPRES__gamma(&unkR[1]) + 1.),"LPRES.gamma(Inlet.fluidV) + 1")) , (_div( (LPRES__gamma(&unkR[1]) + 1.) , (2. * (LPRES__gamma(&unkR[1]) - 1.)),"2 * (LPRES.gamma(Inlet.fluidV) - 1)")),"((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1))**((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))" ) , unkR[43],"Nozzle.M_out") ;
else unkR[41] = _div( unkR[42] * _pow( (_div( (2. + (LPRES__gamma(&unkR[1]) - 1.) * _pow( unkR[43] , 2.,"(Nozzle.M_out)**(2)" )) , (LPRES__gamma(&unkR[1]) + 1.),"LPRES.gamma(Inlet.fluidV) + 1")) , (_div( (LPRES__gamma(&unkR[1]) + 1.) , (2. * (LPRES__gamma(&unkR[1]) - 1.)),"2 * (LPRES.gamma(Inlet.fluidV) - 1)")),"((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1))**((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))" ) , -unkR[43],"-Nozzle.M_out") ;
//[E-23]  Nozzle.p_out = MATH.max(Nozzle.p_amb, Nozzle.p_out_ch)
unkR[53] = MATH__max(unkR[52], unkR[54]) ;
//[E-24]  Nozzle.T_out = Nozzle.g.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Nozzle.M_out ** 2)
unkR[46] = _div( unkR[48] , (1. + (LPRES__gamma(&unkR[1]) - 1.)/2. * _pow( unkR[43] , 2.,"(Nozzle.M_out)**(2)" )),"1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Nozzle.M_out ** 2") ;
//[E-25]  Nozzle.v_out = Nozzle.M_out * sqrt(LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Nozzle.T_out)
unkR[55] = unkR[43] * _sqrt(LPRES__gamma(&unkR[1]) * LPRES__R(&unkR[1]) * unkR[46],"LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Nozzle.T_out") ;
//[E-26]  Nozzle.Thrust = Nozzle.g.W * Nozzle.v_out + Nozzle.A * (Nozzle.p_out - Nozzle.p_amb)
unkR[47] = unkR[49] * unkR[55] + unkR[41] * (unkR[53] - unkR[52]) ;
//[E-27]  Nozzle.i.Data[1] = Nozzle.Thrust
unkR[51] = unkR[47] ;
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__Turbine_test_partition1::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[1])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",162,"Turbine.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
if(!(2 == LPRES__State(&unkR[1])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__Turbine_test_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[43]; //Nozzle.M_out > 0
    ev[1]= unkR[44] - unkR[45]; //Nozzle.PR < Nozzle.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__Turbine_test_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__Turbine_test_partition1::executeWhen(double *_time,  int index )
{
}

/* Evaluation of ZONE conditions*/
void LPRES_EXAMPLES__Turbine_test_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Nozzle.A_sl =  ZONE (Nozzle.M_out > 0) Nozzle.A * Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) OTHERS Nozzle.A * -Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))
     branchZone[0] = (cont[0] ) ? 0 : 1;
     // Nozzle.M_out =  ZONE (Nozzle.PR < Nozzle.PR_sl) sqrt(2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1)) OTHERS 1
     branchZone[1] = (cont[1] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__Turbine_test_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__Turbine_test_partition1::initDelays()
{
}


bool LPRES_EXAMPLES__Turbine_test_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__Turbine_test_partition1 = 13592;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__Turbine_test_partition1 = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__Turbine_test_partition1[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__Turbine_test_partition1;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__Turbine_test_partition1;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__Turbine_test_partition1;
return true;
}



bool LPRES_EXAMPLES__Turbine_test_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
return false;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__Turbine_test_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__Turbine_test_partition1(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__Turbine_test_partition1(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__Turbine_test_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__Turbine_test_partition1(name,dirInstall);
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
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.+turbine_test.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__turbine_design_CPP
#define LPRES_EXAMPLES__turbine_design_CPP

#include "LPRES_EXAMPLES.turbine.design.h"

LPRES_EXAMPLES__turbine_design* LPRES_EXAMPLES__turbine_design::s_current= NULL;

LPRES_EXAMPLES__turbine_design::LPRES_EXAMPLES__turbine_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "turbine";
m_infoPartitionName = "design";
m_infoModelName = "LPRES_EXAMPLES__turbine_design";
m_infoModelFileName = "LPRES_EXAMPLES.turbine.design";
m_infoModelFileNameExtra = "turbine.design";
m_perfFlag = false;
m_infoComponentDate = "12/06/2020 13:51:36.416000";
m_infoPartitionDate = "12/06/2020 14:49:44.808000";
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
		0.9, 1, 0, 0, 0.5, 0, 0, 1.8, 0.05, 0, 0, 0 } ;
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
void LPRES_EXAMPLES__turbine_design::initInternalModels()
{
}

int LPRES_EXAMPLES__turbine_design::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__turbine_design::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__turbine_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__turbine_design::LPRES__ISA_Pressure(const double & z)
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
	int _vi3;

	h = LPRES__Geopotential_Altitude(z) ;
	_vi3 = 1 ;
	while ( _vi3 <= 7 ) {
	if( h > h_max[_vi3-1] ) {
	if( b[_vi3-1] ) {
	p_0 = p_0 * exp(_div( -9.80665 * (h_max[_vi3-1] - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_0 = p_0 * _pow( (_div( (T_0 + a[_vi3-1] * (h_max[_vi3-1] - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[_vi3-1] * 287./1000.),"a[_vi3] * 287 / 1000")),"((T_0 + a[_vi3] * (h_max[_vi3] - h_0) / 1000) / T_0)**(-9.80665 / (a[_vi3] * 287 / 1000))" ) ;
	}
	T_0 = T_0 + a[_vi3-1] * (h_max[_vi3-1] - h_0)/1000. ;
	h_0 = h_max[_vi3-1] ;
	j = _vi3 + 1 ;
	}
	_vi3 += 1 ;
	}
	if( b[j-1] ) {
	p_amb = p_0 * exp(_div( -9.80665 * (h - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_amb = p_0 * _pow( (_div( (T_0 + a[j-1] * (h - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[j-1] * 287./1000.),"a[j] * 287 / 1000")),"((T_0 + a[j] * (h - h_0) / 1000) / T_0)**(-9.80665 / (a[j] * 287 / 1000))" ) ;
	}
	return p_amb ;
}


double LPRES_EXAMPLES__turbine_design::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[28] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600,3133,2288 };
	int _vi4;
	int _vi5;
	double _vr1;

	_vr1 = 0. ;
	_vi4 = 1 ;
	while ( _vi4 <= setofSize(&typ[4]) ) {
	_vi5 = setofElem(&typ[4], _vi4) ;
	_vr1 += Chem_cp[_vi4-1] * fluid[_vi5-1] ;
	_vi4 += 1 ;
	}
	return _vr1 + fluid[30] * fluid[28] ;
}


double LPRES_EXAMPLES__turbine_design::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[28] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07,17.031,18 };
	int _vi6;
	int _vi7;
	double _vr2;

	_vr2 = 0. ;
	_vi6 = 1 ;
	while ( _vi6 <= setofSize(&typ[4]) ) {
	_vi7 = setofElem(&typ[4], _vi6) ;
	_vr2 += _div( fluid[_vi7-1] , Chem_M[_vi6-1],"Chem_M[_vi6]") ;
	_vi6 += 1 ;
	}
	return _div( 1 , (_vr2 + _div( fluid[28] , fluid[29],"fluid[Comb_prod_M]")),"_vr2 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double LPRES_EXAMPLES__turbine_design::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__turbine_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__turbine_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__turbine_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__turbine_design::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__turbine_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double LPRES_EXAMPLES__turbine_design::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


/* Copy special unkR[] items to dyn[] vector */

void LPRES_EXAMPLES__turbine_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__turbine_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet.Inlet,100)
	LPRES__Init_fluid(unkI[0], &unkR[1]) ;
  // init(Nozzle.Nozzle,0)
	unkR[50] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__turbine_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Nozzle.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[52] = LPRES__ISA_Pressure(unkR[40]) ;
//[E-2]  Turbine.tau = Turbine.m.Power / Nozzle.g.W
unkR[74] = _div( unkR[66] , unkR[49],"Nozzle.g.W") ;
//[E-3]  Nozzle.g.Tt = Inlet.Tt - Turbine.tau / LPRES.cp(Inlet.fluidV)
unkR[48] = unkR[0] - _div( unkR[74] , LPRES__cp(&unkR[1]),"LPRES.cp(Inlet.fluidV)") ;
//[E-4]  Turbine.alpha = Nozzle.g.Tt / Inlet.Tt
unkR[61] = _div( unkR[48] , unkR[0],"Inlet.Tt") ;
//[E-5]  Turbine.beta = (1 - (1 - Turbine.alpha) / Turbine.eta_d) ** (1 / ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)))
unkR[62] = _pow( (1. - _div( (1. - unkR[61]) , unkR[64],"Turbine.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[1]) - 1.) , LPRES__gamma(&unkR[1]),"LPRES.gamma(Inlet.fluidV)")),"(LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)")),"(1 - (1 - Turbine.alpha) / Turbine.eta_d)**(1 / ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)))" ) ;
//[E-6]  Nozzle.g.pt = Turbine.beta * Inlet.pt
unkR[50] = unkR[62] * unkR[39] ;
//[E-7]  Nozzle.PR = Nozzle.g.pt / Nozzle.p_amb
unkR[44] = _div( unkR[50] , unkR[52],"Nozzle.p_amb") ;
//[E-8]  Nozzle.PR_sl = ((LPRES.gamma(Inlet.fluidV) + 1) / 2) ** (LPRES.gamma(Inlet.fluidV) / (LPRES.gamma(Inlet.fluidV) - 1))
unkR[45] = _pow( ((LPRES__gamma(&unkR[1]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[1]) , (LPRES__gamma(&unkR[1]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1")),"((LPRES.gamma(Inlet.fluidV) + 1) / 2)**(LPRES.gamma(Inlet.fluidV) / (LPRES.gamma(Inlet.fluidV) - 1))" ) ;
//[E-9]  Nozzle.p_out_ch = Nozzle.g.pt / Nozzle.PR_sl
unkR[54] = _div( unkR[50] , unkR[45],"Nozzle.PR_sl") ;
//[E-10]  Nozzle.A_sl = Nozzle.g.W * sqrt(Nozzle.g.Tt * LPRES.R(Inlet.fluidV)) / Nozzle.g.pt / LPRES.FGAMMA(Inlet.fluidV)
unkR[42] = _div( _div( unkR[49] * _sqrt(unkR[48] * LPRES__R(&unkR[1]),"Nozzle.g.Tt * LPRES.R(Inlet.fluidV)") , unkR[50],"Nozzle.g.pt") , LPRES__FGAMMA(&unkR[1]),"LPRES.FGAMMA(Inlet.fluidV)") ;
//[E-11]  Nozzle.M_out =  ZONE[2] (Nozzle.PR < Nozzle.PR_sl) sqrt(2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1))	  OTHERS 1
 if(m_branchZone[1]==0)
	unkR[43] = _sqrt(_div( 2. * (_pow( unkR[44] , (_div( (LPRES__gamma(&unkR[1]) - 1.) , LPRES__gamma(&unkR[1]),"LPRES.gamma(Inlet.fluidV)")),"(Nozzle.PR)**((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV))" ) - 1.) , (LPRES__gamma(&unkR[1]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1"),"2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1)") ;
else unkR[43] = 1. ;
//[E-12]  Nozzle.A =  ZONE[1] (Nozzle.M_out > 0) Nozzle.A_sl * ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) / Nozzle.M_out	  OTHERS Nozzle.A_sl * ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) / -Nozzle.M_out
 if(m_branchZone[0]==0)
	unkR[41] = _div( unkR[42] * _pow( (_div( (2. + (LPRES__gamma(&unkR[1]) - 1.) * _pow( unkR[43] , 2.,"(Nozzle.M_out)**(2)" )) , (LPRES__gamma(&unkR[1]) + 1.),"LPRES.gamma(Inlet.fluidV) + 1")) , (_div( (LPRES__gamma(&unkR[1]) + 1.) , (2. * (LPRES__gamma(&unkR[1]) - 1.)),"2 * (LPRES.gamma(Inlet.fluidV) - 1)")),"((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1))**((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))" ) , unkR[43],"Nozzle.M_out") ;
else unkR[41] = _div( unkR[42] * _pow( (_div( (2. + (LPRES__gamma(&unkR[1]) - 1.) * _pow( unkR[43] , 2.,"(Nozzle.M_out)**(2)" )) , (LPRES__gamma(&unkR[1]) + 1.),"LPRES.gamma(Inlet.fluidV) + 1")) , (_div( (LPRES__gamma(&unkR[1]) + 1.) , (2. * (LPRES__gamma(&unkR[1]) - 1.)),"2 * (LPRES.gamma(Inlet.fluidV) - 1)")),"((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1))**((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))" ) , -unkR[43],"-Nozzle.M_out") ;
//[E-13]  Nozzle.p_out = MATH.max(Nozzle.p_amb, Nozzle.p_out_ch)
unkR[53] = MATH__max(unkR[52], unkR[54]) ;
//[E-14]  Nozzle.T_out = Nozzle.g.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Nozzle.M_out ** 2)
unkR[46] = _div( unkR[48] , (1. + (LPRES__gamma(&unkR[1]) - 1.)/2. * _pow( unkR[43] , 2.,"(Nozzle.M_out)**(2)" )),"1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Nozzle.M_out ** 2") ;
//[E-15]  Nozzle.v_out = Nozzle.M_out * sqrt(LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Nozzle.T_out)
unkR[55] = unkR[43] * _sqrt(LPRES__gamma(&unkR[1]) * LPRES__R(&unkR[1]) * unkR[46],"LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Nozzle.T_out") ;
//[E-16]  Nozzle.Thrust = Nozzle.g.W * Nozzle.v_out + Nozzle.A * (Nozzle.p_out - Nozzle.p_amb)
unkR[47] = unkR[49] * unkR[55] + unkR[41] * (unkR[53] - unkR[52]) ;
//[E-17]  Nozzle.i.Data[1] = Nozzle.Thrust
unkR[51] = unkR[47] ;
//[E-18]  Turbine.m.N = 0.10471975511966 * Turbine.rpm
unkR[65] = 0.10471975511966 * unkR[73] ;
//[E-19]  Turbine.MFP = Nozzle.g.W * sqrt(Inlet.Tt) / Inlet.pt
unkR[57] = _div( unkR[49] * _sqrt(unkR[0],"Inlet.Tt") , unkR[39],"Inlet.pt") ;
//[E-20]  Turbine.theta = 1 / Turbine.alpha
unkR[75] = _div( 1. , unkR[61],"Turbine.alpha") ;
//[E-21]  Turbine.pi = 1 / Turbine.beta
unkR[69] = _div( 1. , unkR[62],"Turbine.beta") ;
//[E-22]  Turbine.A_in = Turbine.MFP / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1)) / MATH.min(Turbine.M_2, 1) / sqrt(LPRES.gamma(Inlet.fluidV)) * sqrt(LPRES.R(Inlet.fluidV))
unkR[56] = _div( _div( _div( unkR[57] , _pow( (1. + (LPRES__gamma(&unkR[1]) - 1.)/2. * _pow( MATH__min(unkR[58], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[1]) + 1.)/2. , (LPRES__gamma(&unkR[1]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1")),"(1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1))" ),"(1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1))") , MATH__min(unkR[58], 1.),"MATH.min(Turbine.M_2, 1)") , _sqrt(LPRES__gamma(&unkR[1]),"LPRES.gamma(Inlet.fluidV)"),"sqrt(LPRES.gamma(Inlet.fluidV))") * _sqrt(LPRES__R(&unkR[1]),"LPRES.R(Inlet.fluidV)") ;
//[E-23]  Turbine.V_z2 = Turbine.cos_2 * Turbine.M_2 * sqrt(LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Inlet.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2))
unkR[60] = unkR[63] * unkR[58] * _sqrt(_div( LPRES__gamma(&unkR[1]) * LPRES__R(&unkR[1]) * unkR[0] , (1. + (LPRES__gamma(&unkR[1]) - 1.)/2. * _pow( unkR[58] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Inlet.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-24]  Turbine.U = Turbine.V_z2 / Turbine.phi
unkR[59] = _div( unkR[60] , unkR[67],"Turbine.phi") ;
//[E-25]  Turbine.r_m = Turbine.U / Turbine.m.N
unkR[72] = _div( unkR[59] , unkR[65],"Turbine.m.N") ;
//[E-26]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[70] = _div( unkR[74] , _pow( unkR[59] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-27]  Turbine.phi_d = (Turbine.psi_d + 1) / ((Turbine.psi + 1) / Turbine.phi)
unkR[68] = _div( (unkR[71] + 1.) , (_div( (unkR[70] + 1.) , unkR[67],"Turbine.phi")),"(Turbine.psi + 1) / Turbine.phi") ;
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__turbine_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[1])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[1])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",162,"Turbine.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__turbine_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[43]; //Nozzle.M_out > 0
    ev[1]= unkR[44] - unkR[45]; //Nozzle.PR < Nozzle.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__turbine_design::evalWhen(double *_time, bool w[],bool cont[] )
{
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__turbine_design::executeWhen(double *_time,  int index )
{
}

/* Evaluation of ZONE conditions*/
void LPRES_EXAMPLES__turbine_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Nozzle.A_sl =  ZONE (Nozzle.M_out > 0) Nozzle.A * Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) OTHERS Nozzle.A * -Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))
     branchZone[0] = (cont[0] ) ? 0 : 1;
     // Nozzle.M_out =  ZONE (Nozzle.PR < Nozzle.PR_sl) sqrt(2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1)) OTHERS 1
     branchZone[1] = (cont[1] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__turbine_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__turbine_design::initDelays()
{
}


bool LPRES_EXAMPLES__turbine_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__turbine_design = 13592;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__turbine_design = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__turbine_design[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__turbine_design;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__turbine_design;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__turbine_design;
return true;
}



bool LPRES_EXAMPLES__turbine_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
return false;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__turbine_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__turbine_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__turbine_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__turbine_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__turbine_design(name,dirInstall);
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
	sprintf(componentName,"%s","turbine");
	sprintf(partitionName,"%s","design");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.turbine.design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


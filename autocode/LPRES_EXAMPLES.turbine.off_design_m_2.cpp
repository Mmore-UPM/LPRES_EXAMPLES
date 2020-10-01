//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__turbine_off_design_m_2_CPP
#define LPRES_EXAMPLES__turbine_off_design_m_2_CPP

#include "LPRES_EXAMPLES.turbine.off_design_m_2.h"

LPRES_EXAMPLES__turbine_off_design_m_2* LPRES_EXAMPLES__turbine_off_design_m_2::s_current= NULL;

LPRES_EXAMPLES__turbine_off_design_m_2::LPRES_EXAMPLES__turbine_off_design_m_2(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "turbine";
m_infoPartitionName = "off_design_m_2";
m_infoModelName = "LPRES_EXAMPLES__turbine_off_design_m_2";
m_infoModelFileName = "LPRES_EXAMPLES.turbine.off_design_m_2";
m_infoModelFileNameExtra = "turbine.off_design_m_2";
m_perfFlag = false;
m_infoComponentDate = "12/06/2020 13:51:36.416000";
m_infoPartitionDate = "18/06/2020 19:24:38.634000";
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
		0, 1, 1, 0, 0, 0, 0, 0, 0.01, 0, 500, 0, 0, 0, 0.4, 0.9, 
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
void LPRES_EXAMPLES__turbine_off_design_m_2::initInternalModels()
{
}

int LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__turbine_off_design_m_2::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__turbine_off_design_m_2::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double LPRES_EXAMPLES__turbine_off_design_m_2::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


/* Copy special unkR[] items to dyn[] vector */

void LPRES_EXAMPLES__turbine_off_design_m_2::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__turbine_off_design_m_2::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet.Inlet,100)
	LPRES__Init_fluid(unkI[0], &unkR[2]) ;
  // init(Nozzle.Nozzle,0)
	unkR[50] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__turbine_off_design_m_2::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
void LPRES_EXAMPLES__turbine_off_design_m_2::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__turbine_off_design_m_2& m= *LPRES_EXAMPLES__turbine_off_design_m_2::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__turbine_off_design_m_2::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(1, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__turbine_off_design_m_2::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__turbine_off_design_m_2::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Nozzle.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[52] = LPRES__ISA_Pressure(unkR[41]) ;
//[E-2]  Turbine.m.N = 0.10471975511966 * Turbine.rpm
unkR[64] = 0.10471975511966 * unkR[72] ;
//[E-3]  Turbine.U = Turbine.m.N * Turbine.r_m
unkR[58] = unkR[64] * unkR[71] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-18]  Nozzle.PR_sl = ((LPRES.gamma(Inlet.fluidV) + 1) / 2) ** (LPRES.gamma(Inlet.fluidV) / (LPRES.gamma(Inlet.fluidV) - 1))
unkR[46] = _pow( ((LPRES__gamma(&unkR[2]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[2]) , (LPRES__gamma(&unkR[2]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1")),"((LPRES.gamma(Inlet.fluidV) + 1) / 2)**(LPRES.gamma(Inlet.fluidV) / (LPRES.gamma(Inlet.fluidV) - 1))" ) ;
//[E-19]  Nozzle.p_out_ch = Nozzle.g.pt / Nozzle.PR_sl
unkR[54] = _div( unkR[50] , unkR[46],"Nozzle.PR_sl") ;
//[E-20]  Nozzle.p_out = MATH.max(Nozzle.p_amb, Nozzle.p_out_ch)
unkR[53] = MATH__max(unkR[52], unkR[54]) ;
//[E-21]  Nozzle.T_out = Nozzle.g.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Nozzle.M_out ** 2)
unkR[47] = _div( unkR[49] , (1. + (LPRES__gamma(&unkR[2]) - 1.)/2. * _pow( unkR[44] , 2.,"(Nozzle.M_out)**(2)" )),"1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Nozzle.M_out ** 2") ;
//[E-22]  Nozzle.v_out = Nozzle.M_out * sqrt(LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Nozzle.T_out)
unkR[55] = unkR[44] * _sqrt(LPRES__gamma(&unkR[2]) * LPRES__R(&unkR[2]) * unkR[47],"LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Nozzle.T_out") ;
//[E-23]  Nozzle.Thrust = Nozzle.g.W * Nozzle.v_out + Nozzle.A * (Nozzle.p_out - Nozzle.p_amb)
unkR[48] = unkR[1] * unkR[55] + unkR[42] * (unkR[53] - unkR[52]) ;
//[E-24]  Nozzle.i.Data[1] = Nozzle.Thrust
unkR[51] = unkR[48] ;
//[E-25]  Turbine.m.Power = Nozzle.g.W * Turbine.tau
unkR[65] = unkR[1] * unkR[73] ;
//[E-26]  Turbine.theta = 1 / Turbine.alpha
unkR[74] = _div( 1. , unkR[60],"Turbine.alpha") ;
//[E-27]  Turbine.pi = 1 / Turbine.beta
unkR[68] = _div( 1. , unkR[61],"Turbine.beta") ;

//save last residues
memcpy(this->res,res,1*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__turbine_off_design_m_2::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[2])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[2])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",162,"Turbine.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__turbine_off_design_m_2::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[44]; //Nozzle.M_out > 0
    ev[1]= unkR[45] - unkR[46]; //Nozzle.PR < Nozzle.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__turbine_off_design_m_2::evalWhen(double *_time, bool w[],bool cont[] )
{
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__turbine_off_design_m_2::executeWhen(double *_time,  int index )
{
}

/* Evaluation of ZONE conditions*/
void LPRES_EXAMPLES__turbine_off_design_m_2::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Nozzle.A_sl =  ZONE (Nozzle.M_out > 0) Nozzle.A * Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) OTHERS Nozzle.A * -Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))
     branchZone[0] = (cont[0] ) ? 0 : 1;
     // Nozzle.M_out =  ZONE (Nozzle.PR < Nozzle.PR_sl) sqrt(2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1)) OTHERS 1
     branchZone[1] = (cont[1] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__turbine_off_design_m_2::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__turbine_off_design_m_2::initDelays()
{
}


bool LPRES_EXAMPLES__turbine_off_design_m_2::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__turbine_off_design_m_2 = 14116;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__turbine_off_design_m_2 = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__turbine_off_design_m_2[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__turbine_off_design_m_2;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__turbine_off_design_m_2;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__turbine_off_design_m_2;
return true;
}



bool LPRES_EXAMPLES__turbine_off_design_m_2::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__turbine_off_design_m_2 = 32;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__turbine_off_design_m_2 = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__turbine_off_design_m_2[] = 
{
"AQAAAAEAAAAAAAAAAQAAAAEAAAAAAAAA"
};
*size = s_gsi_size_LPRES_EXAMPLES__turbine_off_design_m_2;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__turbine_off_design_m_2;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__turbine_off_design_m_2;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__turbine_off_design_m_2(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__turbine_off_design_m_2(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__turbine_off_design_m_2(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__turbine_off_design_m_2(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__turbine_off_design_m_2(name,dirInstall);
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
	sprintf(partitionName,"%s","off_design_m_2");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.turbine.off_design_m_2");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


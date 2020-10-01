//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__turbine_off_design_CPP
#define LPRES_EXAMPLES__turbine_off_design_CPP

#include "LPRES_EXAMPLES.turbine.off_design.h"

LPRES_EXAMPLES__turbine_off_design* LPRES_EXAMPLES__turbine_off_design::s_current= NULL;

LPRES_EXAMPLES__turbine_off_design::LPRES_EXAMPLES__turbine_off_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "turbine";
m_infoPartitionName = "off_design";
m_infoModelName = "LPRES_EXAMPLES__turbine_off_design";
m_infoModelFileName = "LPRES_EXAMPLES.turbine.off_design";
m_infoModelFileNameExtra = "turbine.off_design";
m_perfFlag = false;
m_infoComponentDate = "12/06/2020 13:51:36.416000";
m_infoPartitionDate = "22/06/2020 12:33:07.670000";
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
void LPRES_EXAMPLES__turbine_off_design::initInternalModels()
{
}

int LPRES_EXAMPLES__turbine_off_design::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__turbine_off_design::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__turbine_off_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__turbine_off_design::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__turbine_off_design::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__turbine_off_design::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__turbine_off_design::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__turbine_off_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__turbine_off_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__turbine_off_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__turbine_off_design::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__turbine_off_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double LPRES_EXAMPLES__turbine_off_design::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


/* Copy special unkR[] items to dyn[] vector */

void LPRES_EXAMPLES__turbine_off_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__turbine_off_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet.Inlet,100)
	LPRES__Init_fluid(unkI[0], &unkR[2]) ;
  // init(Nozzle.Nozzle,0)
	unkR[50] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__turbine_off_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
void LPRES_EXAMPLES__turbine_off_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__turbine_off_design& m= *LPRES_EXAMPLES__turbine_off_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__turbine_off_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(1, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__turbine_off_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__turbine_off_design::fres( double *_time, double dyn[], double der[], double res[] )
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
void LPRES_EXAMPLES__turbine_off_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[2])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[2])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",162,"Turbine.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__turbine_off_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[44]; //Nozzle.M_out > 0
    ev[1]= unkR[45] - unkR[46]; //Nozzle.PR < Nozzle.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__turbine_off_design::evalWhen(double *_time, bool w[],bool cont[] )
{
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__turbine_off_design::executeWhen(double *_time,  int index )
{
}

/* Evaluation of ZONE conditions*/
void LPRES_EXAMPLES__turbine_off_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Nozzle.A_sl =  ZONE (Nozzle.M_out > 0) Nozzle.A * Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) OTHERS Nozzle.A * -Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))
     branchZone[0] = (cont[0] ) ? 0 : 1;
     // Nozzle.M_out =  ZONE (Nozzle.PR < Nozzle.PR_sl) sqrt(2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1)) OTHERS 1
     branchZone[1] = (cont[1] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__turbine_off_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__turbine_off_design::initDelays()
{
}


bool LPRES_EXAMPLES__turbine_off_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__turbine_off_design = 14116;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__turbine_off_design = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__turbine_off_design[] = 
{
"AABxZQAAXoEAAMcoAACZ8t0H3fAVCLilDenSvoaTDfY3OBzq6f0/2Z3JXSaZ7UGaFXZlMOBDp39lifSVi2oztDy9xeCgxe6SEhPFyMZtMo1c8eD1idSxyT4yn5l2w9C6SrJLUgPtVnV5Bor/okgvVpLyCKt9WJBmYAROGJicmWVxYi/IfcGoD14aAeSRzPilhueUHwv5QFYiSwzNeHBW03wq+tBo5U2pj6VWQDFUaFJZwaALzchGhyC1Sz0ht/fh36okkcECbljOTI6QLxvabzUlh2Y2k0mTqvqVuJ0NmX4uUM2oLLz94VjrwOiHLclkNiuQo9thJfG5KoEu/TxioIO+tyqWi8Pif+Ls02m5c/OzdUOP12ceCFtPtStlR39M3mSkM699Kd6BvmugeZgfZ+NYZBe+2wcungE8yn/oD4tpynHz/gE21ODN6+hlrb7s4XKcDvQsAyKh5gwdNx96GT+qPTgy1bTmdQ7zYf6fHC12jDT5M/j8+e10EhEL2isV2wXV6ZOZYu3DAS5XHuCl7tai99oZ1yT0Zy+I8R5kOrF1PtzBYXbOZynjSIgRCxJPRndfL8WcO7CF86wy8vQiPr53vxZdUWz5N9nzi3rGFtQcijEkTpqf93d/AbRq3s6QrEj7lrNYLFv8k/cptp1TGTccnjzZ8zdGVADPslHEA0hXV1a926XKXoN3HxlcW27IZ9ieOD5Fup84K4EnEindSVqC2GkAhTyDfHwnpH4IFeTJaTd+U7QoUvspekmFINdEQTBN7aujVL0BWIcDjc57ixBmoTazeFDvGH9J8tXPC8hMPuO8ket4WO7eTPIN8WJ+7z6hMKVEXM0gRX/TOza0+SJJsJ2XQEAn7YpdNsfL+hhdyqCk7VpoLl6Jpxv1Zpi4rHPdUpunxa6RU0e5oERJTVAzrGiNHigH5VObsqxhLPQfyZsImx6WMMX0VN800852yFOosry049NHZ0KQWaJxkq5Y6SHomKAYIVA/YcvS+Bp51ElVv2rKoJGmPjwTqltrSOS3OWNZ6lg+stE4MmBniCza3+T947RLRZlO5ZSibVjPgr4ff6sChslgdW074HBmv5NSOMBxMrsatE7QlAdO94pnP7FjlTijXT8nueID0rGMwsNbENF/o0Nag8ruLJKSzCc0d7I6WgSwqbrdkSsW+HBW9u3wEzS//8y0CtRL4B2U2wRBIpmaT0TMLttpad6XfqAuZW4kjdfcEwfq/4L2GLgJGkrlIyZVA+t1nIshcnuyEWLTUsQQiGnaaKKVyDUXEMLQGI9dtIarPQ3mN2TWqibqIZmpQTQ2iNwrbC39qTOQzehmOE26kIuMgvtb505nOpMaAT9Osu8qEWNz1EWi0xNYYqTjmyaifNarBJflKb+bzD/W1q7yauz9XvEUDOmYnOZr8QikbTIHcDgu1HKtgnA3TqUx9WrY2hhDaWjyhCbV7eA9KN+jW3tzY8mly/iDUQ6t6/G8/6gCTCbel1xN+3DT4q6IiSnC1SSZJo2YRHmPcjHeHMfWhQmwpL1aNZB/PdlRcSIabYBJKzBX/Q9H7ENlJE8W+Hqd0eFTkwgcCDNM1w6PxqrWN2+VPdr3UxTwasPPXjq7mFNQ0oNmTT97BcEG3WoUBgvOSAPqtIGyBQarVP7rMgwgHis/OL4In0elU/eqwMza9cp4Jhb6VU1d29kf45oKcWGiXtNJFK2+4KIaP+xlBUKv+iIfDdVRbryXJ/zB0S0e8VPvBvjEzN6elXPVSvJm/djA0tN0Ocbh85TZMuxQ2EZ2L+Cds9Ki3qhwtEIiiRIal64JAvX0bqgz3zVejouJUEIE0UhsSN6CvqTBb+OnICbCBukRROqpz8o7tscrjuOBGYLmf2C2V5k7KLEVh2e4531JEo0Vf393deHb4TsV8BGdSkPMNyR243QOBgITxVo1Ip9OdZQ4kseHBdutUhJL6EUj+fAgu0U0dCCys6ydQ28UzwNIi2o2CQCwYDhiskLOMMWEXFEs",
"INvb8BNnBoLmh2uznvaufdNaJSR7LihfnbwGqqNB26pcK2RnV5bxr5XcKWSoM1DvszoigS5GEGk6CptKG8mJssORHNnrvpguUT53dcI/pA+kHt85DW4if35VGI32ejwbFR1FPlmNQ0ALvT0KukBdNx0+GriGn7M3+9gZd30SoQgxYasqIVLm3mGUgIKesjmvAjK2zk0vr5JhzJHXuJDu/429qlOaYwAYZNOTi1Zq5gYqanpZqXCuCGIysXu14X+0eyrEYePkFUPckNnCzjuQo7kp/Ub7t+YJDgOkAUQd6uH3kOu9mRRj2zn+OziBtED+7lfx3VeXViy5DZ/SL53xrEsGJE7UwKvPRbJpBjJsDd0++rOCunqqtuQZ3au3k/t1etvF0dcjgG1zjO76Chsn5Ej15FN6fVMU3BKChdoKrXuxF/vYZdzEPtkiRzNK0ctOQ8gSAdmasdVHLnpyXbNSuPICzhLpdLQ0G1LpnJTjlDkTyEk7hWKkovCs2mb5eWu+Ee7JMx6bDgoacV307uPC1AbXFNtsUQBky0MIGg/gtMz9605cjWOM/cpiTRcuOygM02HEc0hHDjgeIcbQsqlNwW5bVfYpxCMcEFFE8H1IqgjeFB0uvS0ZADfG3DRCnBshfTm8mS2JT46SJ6bap6E7KddrjefFV+244mXaVLWp0DL0O8JlDS5O6dsx86rrypq4TxYSqnmwelyljf7qiJI+WIV1AouGc1iQIWUuRZtvRlxWAU5GI2SDaKACQZsnTkInxZHhlfBirQDan4QIH8KEtq1gWgXxOaJFtkY4UWzZgIx/Gm/YE8WAPiUZZoVeftubUXnQEXW/wMqzKFrMBGx/Md3y/F9Fk5dB39+313ewSwUGXRC8wg4nE/ub9jE0Iqr51ugqmSSm25RaHPr+v94Se7RqUnMS2a6lXIfKtX9navoGazrAiqHL8dnBD6CVQfJyDIqbYWkOOWhBf9dI6UcpgAWUJXKrXz2eE+NChwcdI4MUGYOGlGWs1ls+a1jprMmt5udHOXgUwe/I0bCvHIn4AYgkSjUu5X4l/MDyeKTod0829iZDoPm+c8SssJhYlj1ayaFKfzvc/F4suazqxECia5fybIdAXRXoksIjg6JeqM/UteJAg/+FoBq9xVuzR3jgIsRl37cx9q/JDkCK8lnsnxn3qJ7nj/CWq4x+uclFp9ei951NmgPOkgy35gxA501GB3Sy2uQbyj9AjR4UR1a1ZkYjWr4vuRmDSGb3GzcAD+/bvgigaYRzhRwI2ABFUg0f1YU9XNlvZtsxWVrANT6EMLk8sKS0opAoWX/Sx+IMrCnyzBKe3gufoGWJ8AW4W97JPqqdGR3gt8RXAIUKMXuknxsVnXM4WuXX54zRm9L3Av8d6YQhNs6YDPXEkjO9sem2oAei0Ia4ungO9BQMmttcRPe2FWcKoc4rnjexV6lwY/np6X3IAEyOvKiI1S0IeThwrxudidoJML2mvQcw+me9/kvdEsy5++ClTLnP/D6d7aT2xglg2peRoFAsZL1famXmbbVPxRPSFf/GD21gaiBuH/7sxJzl8dQ0onOvB2W3i3W2upkrNCEyy4/eRr/ChoIBOzzyjk6HtUD0cwHCzLpKEqZZzH6MIHmraMvWQC9SQG1dG0RxA/TYAreCk0gQAKZNJqf+AjUaFEIcD9t/4sf4XYCQIjRo00UQI0uREDvx4Hg2FFInOqopOqXhtz9iN0oLcjQhyoQ+g2Unosly3EIaofhTG4LXPhiFeckybBQGZ4L7YMBnTIEkdm9Mv7X3sdWZkOXxS/6y5RydS7aTqzc8QQ/DZLwVkoaw2JPEHGn94vbfzPNbre4qBgsvgK3vKeuzeA3yDmtjcCdbHyOanoJXkprPmdK4kysEaBbZXZhhnVgz29dWub3Ah0ffwRUjjI1YaUqRt2lIEqkb/GOPv82rBHNYh1kNC6GRqDp5B/k6637CY/t7vSoAyO2A/TG4riiCHGFt9XM4z2jXo+NZ",
"15MbnWJls6bJPkZWXmy6MiBy/d40L41Mv3XCP5+yAgfxMOuPVdHcaeXsWiuTaVkizlG7mLtzra5+digZv3ZYCKXlY+UQUIgnri04Ui1BVfINYuka7hajbA+LPIh95FSbI9jM52ViGfktZekuScj3pGgraAwqkjZJ0cEFhoEYSpBl5wVp+7dXE3AbmuCOJ/rnkaVd8gTE4YDkE6WpkSM+gTh/NYycHHrVRutP42B3+EtNOuwjGUNdWI1/ELzTPz4XKpDHyHX5G775/hJ3bnWt0YfYtqrCFn7g5mvk4D7k7N1Bbiee2PNBX6FZjBUgGlwNP5vawMluY+6D3/EpzbaoTTqeVCkPppNLo+3l2kCx5A3m9AZbFdEUEEym7QGtzEUPGgT4IzOszzKhAaJ0d3kOX7RW23i4hLOtFJ/Rn2HBF08Qagacx8O8p4XHXUvSlfhYzAbx+Qw+/VcBlVzIYHUbuQGyb0BBdAOOpVMsKBLYRba07U8KZGOHUvf4hOTmdSiu+murUjQ6onmhMl4PaJQWqfbijtWHfjb1eZXyM6e/dH5zk2FC3ZGna+2r+xs93CS/MfZIzizknXmYvyiwchorxRSnDEClftp69pd09w3K8wHrGaJe03AW1hGI5pW2ix4bZbSnLlDj6ynWhAX20WRl9A24yC29uyn6mpVNnaGffyXPXTdUCrTics0ckfxpYm5ePsgNxsAAFOxt99JARC/dT0RX7r2GZrXT6ELeJ7nstr2qSGP1Ff40CP9OHdMw4EPzfFlFjLtqxv+TbLjAEUxw60j92QcUAGiqbDJpmjZQJhtjtHtUIgAxBgbu1VFNVTLVIsAxRsKGD853DoLH0m1iqjHaeUoPtX3MbwRsd0CH+PiKrXaR1cLHU0yYXhBHPjeE8RnxP0ZwRKPa4tfprfXzY83k9khN27PyEGRa3/36srnuPFQgLBEtktaivkcUf+ss3rs6laQGXyZrzRueTMunTCwtsVnw/3v/8g52gs59SUFx7y8GrfGq6JM2IjGWSI+ChzP/wnf3tuUndkgovx/4kIqyXTdqu/dkoaEihYs6KiyvBXBWfRBO/hZwvYheWtt0hNOn2MuIW+2g5yYqcfj+4kANSeAhEja1g4bO0Aqs3ThKbIZFMxdaFkCUcCAgnU/PLe1eBfk+SP3mEeplo6zpNF8Kn2O62aCnjciw8H0NV9HCCw2GtBJv2XxEaR6UwjfTQazAXh+FeGcZmDYNxH5/Nelnsh7GtRZfPLQF/65TEqA60PlMzpP/TYRCChmb8xnppWgdlJyNelcdBJ/FtBhfdxGlQQs8avRjQEB42ZiK2STSzKFGC2lzYoYCGOvtCZFMAdJOv1Towoh3awrCH4Fx3ZCg12xERPoA8BrKQHklIy3GA5xULqHv8Ci5IvvC+cQmi/aEFbLCrN+VVa9nrdUxRt5gip8ajTC1y2hd/rZq1F5suhH6x0ME69tJSIM5vMhhc6MwVzptuXoF9373Hgk4yEmv+hwsNsSHaRJcHwvstnUpSfuD5LlaU9ToWOdgnqzJ7W12wXEObOPIAcK++9QKTWtrOmQK4kbFbCp2KZci/nDlQwVkEHL+AO1HAmm+drOjf9J/XYuDEXvqQI33CUfv8foGXIqkualUf/iuA99C/tlXOX04eLQsQrzlTBThM8HUnA1aI65Go4IIQh7IYl3tLWg4qiI5pK/jBIpIt08Pf5f6EHAiPzuwJ7tVOVdu6E4BSv9X4ZCGTf/owgKnuNQJJ/8NHzzcKB+7TQPPIF2BdIoy0OJoqBlfJzRQN4k0hD+i1541LDXj7dfzVBMfWAYyIWrAH0NaTLJCPnatuPc7B3AM1lpWwl0yEcbwwgzOCrLaG5UbT6Gekh03sYr5MD8DzDyrDOwTlaaoPRCbcfuyxa3o+lMaqzc2hU1T3chn01XWfDQNVa/zvWRwTxK3i0j0rgae0hnKOfYDLh15VwJCV5Pcrf1b6TJqB2AUg2ju8xWgths0h+wUtcLu8/PZ",
"OZwMOGKM+znaFwAZFOojRCu2GoXKLIyyKjm1GgoH3+q6s0Oh3dSLT2X3Yv3pYr9uhsSuND4tSxk94VvDmBgDGTORED/QxYo5aC45+4/BEP85zVtCr6PruICHxtIUlaso5WsaekOGhp+br7mnpmBiIAkHU5dYuQgG42bMi1WaE+lwlwwSjpy76HQeOvDsPTsWhAGXeu/iXqtxRUHeWWKcyw0xcumZfZSDmeArfR8KUhHgnpTfDPOBp+tWr/RzAAxVpeRn+GWM9s5GbzLU0h1OTpl0hdbatrbkCUSshCjL6KYSApDcbldG1OIxw0TVnGIfAyi+LCG7mB6ZRyW4J1p1uONT0ZpMw2rYJu/TEP8dJK3rpUdEU/DObmAbi3KkGoc2UXwt+piFBi3HqxIRRJ6q26XXBZRjf4a+944Z3rICOI5R4Gmtu8NRbsRx4gBaVauSxuOhPyoSnuHqCesAQCvMc/ndtzin2PQWgjpGGpQoSDDFN2g3mgVpXdaX12pUP8kCZMNRr/jYAuF0g2TTLJlb3nL6U7d5KoHGRHRk/o94o7zpPv/F0VJl1/V9aTi3/gOa2LCiwKUfhL6dSF9mAhlraQEgcE0VqIoJHxjHVlK5PX+xt4VYbOn+7vxVMJSLGWFYEsONt/Nq8U1EN+WDTIjaGApTDaBNvqD9pcsg/FK8tw+FbJGPFgyghQgiPAavJKc5b8YogJZVj6DIg0kjYeM4gxGG2nfEy9ufj/OjpNBJD173j3ghELYBtJ8vQu17U1Pczua0JgROmpJVCL7z/8+tWdWa4D2G0mVBuu0533jHA1g1vc1JQepxJS9mzekMG39zhmyxwwPbqzIxf8svn8uz4SCnuX6It28IE6pZlpBpI1w7Zw12Zvtcr9rhCFnnIPlYt4wdNEGg4kDG3w2yDpExRU0hE8+oW25xQ29pN8kr1feJ0UV0Q4aFzM4OemYMo7GpsjPgCz3n5aM3sSLdAEjKzbWtPfQ5Z5/cOnQt0n7UrDKUlaf0yDrzW2UcJzDIEJeXSIz+V8nqa7Qa9g1PMpgb3nGjt9+PUKn5IROdaHCK4WSl0UNEwlV5sHHzY5yDxw49WdoxGrnmKdXg5z3QYwed2xq9oQ8BQdTQQDDCBa2IIr0ty+fOrh3yOKfM/r1WP7uhb7Cp9jD5WwpIaPwuQQWc+dsgE3P1/BZKEwkXKYHoNlZdh5wDJqWCJblvJS6zAC6kcbyQpBzvI3748lcOTPL2hiJ4t8tTuRIjMXtYs+10ILnfdJLXQaJgME3cmEg2Mg7ay5oE3O50C/8RmrJldOTXcjvd0nSp968j5NtPlMavPdTBgrQdKI5lBkv/dEiv+TQpB2qKtSCoVDWoCUvg8hZgWChSqxJiyN+Z0P/7uwngLHxesiNRr73iXYoUvQrSE0W6HYPkf79NDHseSiapUxuxkp+jYVrcgkVWFVyGYUlKPahWhbEEUj7L1RndpJQa+3iheCIm3qhuYIW320f/qZf565EfafCZmVD+YGp7e7hRwr0OvL7blsv/XbdxZr5DK9jdwprcgQ9wnWkXbyHwH6F0eVCzblT1BzQZdFXBgkO6dx2H891wSDl3BDWe4PSaZ7rHwRYaiI5ZVUiVenOD2P9DhcIqjhaFXyRaj3tT5L+AGlN3It/lYna+bo4NoW9OjoKmoQCg9QwAW5QB9iWzW49ep90E7D30eoMBHTL8IMJe84lkNybemqjdSiZsyJo1mPL5GM5FdiWPhmF76SQdqn1pVZgIyETnjFAWOnPkGbIOpX1oe0qOeRvvRBvSqN7Vipyv24cWMFCRJBS/IxhXAh0wgwTKA4fT5Ch0sZXUOUbPP9M8vZg/kSXQcZu6cN2RV00UtUYGwjOevEEkQpfKNOknAAZprtolKx0306Rqus+c40aUlvfZ+wosQ5bHXLxW5JtxXBNx+f/6ubDC5xreC/bQoB0NaBHGeQZX2E4E7xp6Ibl8FwU8pyWN0UrVWROs8HwxNdtOLCLgVTbqnbtt",
"wpKEYZTTPOkvURGDsp6bxKDibeZ62UXFzjCn7CChz5FhAj/wNpxZ8GABifN9FeWlg7lyK6MRz+kPMRiDLuzzId+bQm5RZK+XueNt/7zLMUqmetCAtJpXkZCRYx+H+4OF0CqLjSRVbTN2MvFSVWpIX1hhEGk07MGaBptqvc9Wyh0lFNOMCbldGEwq5r03EDEYBniVtfoXKF0gsc/9Qr39cDJAA7wqpRwMHN0zo18kXoIchjBg+vQuTJwP5+ogHVuUtUWRBZ1kYO654PcX4WjjKP7MbMR6YdH98Y/0P+xn+RPab+GAX49ePC4zOwIIwKQboRKW+6YEMIPpupoMEKsGJAjDSW7jUAtNLsODOkXpjxgQDgM1dRPfOqkuIW07/bdw3YAUBT53s+MY8khRWSUzoO5aKv0YCrHsuFlS9xor34jUs2u2R2xga7z/TOUmo4Sqs5xvUYCvDj+Id2/cELVy6Dl8XD+YgDzVq0mxMDIaZX8YJsh4/z3oDT+yWZgkMdtpT7koVscWuuEyPvjbaz58jWOqdIAIscfjhzvxg6wkEHSaX3Y6IOwXKrzkTJRjrp2PhG1fM4xEIwKOIVRdBJSDwwyZ3SPQZgFFkh9jwvF7JPReVDuTg+BGGw+xXDbCGdpe9TI+4nHnTM4rOGiA5hBjxMvXvlN8QqYKVDBCvggX9nmbcCMvLolQ7kwvwqKVt4i6xTvEGflx/WqnWgxK2Wo6IR8LcbnCxrVKuBfOuHW+6IPa8YAold7TCjPFmuy6OltIOA9tbupal1IVYfdc6zLKe2CJmnFTjpc/f0pFX72d5zozZyUU76AIPs05Vg6D1EXXLUo2XkUcBWK1B4MzjtFByY+71b9qZtq+aEZvRWSGGVUid4H29MR+1J/hAZJR62BbrKVZ5fsVhNv/AbbwKAy+/mmeclSaxNJSWr+XNl5PRii/poMORdi2VSSmBZ+8h96F1Iie6c+q9nRzQ/MCv0upLs4iRhp10SE+HOJDKOu53G0jW/68oVgLqe26VOvzI1BBDlhDkoh7ROFzUvSsB11BZZ2xtA3XszkyfwcbZZxgmkO1ojsuZN4TNUCVQojeT1e6CNj6E4i7lsRAf7zXVJQhghrhoiZ/NyoD8diq4yGAc1RPrluDGSqmqWmZYSdxMfWRXBhiRQD4jfqIKE+Xfxa0pttZuVsKGXRa8St2aX8fwZAxDKDDqo15Lgb6co9stJ9hRcvQepmZ2w8wbm0ONRfrAKVnhqJ5aYmjWYOGCeQGTbY37a0FVBKPLbp2PeVuTis9czQa+I+kgAQjPzSomH0fhzXseaCiY2uXy0+Y6Qq0VXnbYXWQ+UY9HmY8mXqp5zSyNNZL0IwGqiqLQ7V9pGrnFIiCfYA7SmcjBDzlSQ1wg6UhdS6RKJ9onTVweZACAlRJnSxLgZbYVATTbMQTS5pgyrpz46vAzB86FVFDbE9Z5Rm77i1/nDVIMBmbtQC9vfWR9vWjgNP/vsufzep83eVSTZYt8qoqaIg1wGqJZyRzk5IberrWStE6zP0gkjfa1Akk9Ll9zMTDCsZ8ZrzdPIW0OzWyMfYq7VKYN4G53D14HdaqmI8RzAlgsmTtCNQ/O7Ik2Uh9TTjpT8wikwovCe0UMLSDIDsFlixmeSspghnTYLRtqC5cWdIDC3I3AD+N9GvcdJm+0sHG0clTU7C0OJPYIzZCi7PjO0Zs8opMu9YY4M/Yt9rNeOVZd5f1aOtzPzNiOGGjO1B4J98ngzbATOUEzpO/uwiRxF0OTfLHOYsTD2FVtEkdWW/N77p3TMBixYBt7EiQAEeilnt0O/q4WKCLpbXPPjoQpzMGm8Ems6Oxjv7XQtQgd/cgQqqxXmC7pL3wSUQfU1V5cvzeuJfbZihQDLV6zGmNvZh+jdIUcbUvv+sbYCxu+kGCJeQz78OX9HZkgfqsEcZtz5CVgd9ICcS7YVoCE9vdQ78HZx70+QBNJZPOmbEutIiQw3gxj9KsQJAM+cI8tlbJ18/kI29L",
"bfmI1z2lTkwTGo2JlW8LaiL6Z9+3NYQpiZNFmM5xbmw/k3hDiwiSviUZrCdoSvePpHuTJqKpDw4f34+idepHAiBHagVddJVaxl85iI7JdMyqrQWnSEu86MWr0F6i3rmWn00MLdaQmrl2XkUru8YmirLLNzPqt9PW+1w8WnDzQThowfJqI7Ru+ElVbgNoeu9w84U2Xm6dzOjzcsbc+c0TSMlzV2XmEtEZbDyJcw8f93P6MGm8co17OKU1GTAaJKSew47Kb171wrmD2ltQr7fLYzhvz4p5y0SUh1IPIBX90UAVOY6NFaonaXso648iabjcKJ/BbYEPw3Ku4+8s4jPH6M9EdQaFYTE7yYcZmxQokUeKymLDVblRO8F5rmXHHbC+hErKhDjOX++H50uquiHAXcyBRXlBVtdQzMBBaRsWdyNv0EcZa2R1ZY1ghqrEYN/9vuu/K+cEq15DY8vVHCxvGL1D9/1+wVlUqXq61XeYnbISCtf33SuE5vlKvQat0fWxwQKzrmTqsRc0HG98ZoIrVQ3OBnWT15q0xwBJqji7/Mbz2fFZKahKoHPJt/uvVLzaNb8wAzZX2+Aawerl+2P8O9jQsWLl9lblAPDzwgNWftmqvbUhualnrDwcgRgumikw/90MBM6fMoUJFdCLx+YSW3a/KjBbkcEPTotZipDXGGsbESwGfhIVH9G9TzOQZUw+uX08balN2XLwnnE7VmhgIHgXw55YxXZo1DxwG3y7TmlVhJajANdWH5u4jhojOm6VwHcTonuijdkuTjFQS1hsUdOFNaaGrzqJwSFW/2ookY4OvFFUPpcf8s11gUNlaOzwWwVksPxaBSC5WHJAAJnd0A9xRkTwr9cc1ERU1e4DnQ9eSzlh4IPkt/lJG+ot24l9zdgXBYiHCZ7oBkWtCc7omJi4Ucb3xW072FX4BEM//aMxOhd7awODBUvMo+ZakrvT3qwvKqlgU9ZpTkMUsHRBHFH2/3hrczJtwetJCIrJFORoO7QLnUe+0CNr7E6cF/Djhqd5ebbl16pfKFTk5IAr63m0p882xgyNdi11cH5II9mz+YcKbWBXn23MrTTDXJ+h6blUmavoscDfcml8t5irU79+znEon8oOIwdXRV5q+8sF+RhYw7PgfYj2FkHzV6WzUuKtVAf2TBfWw77Bf6C0CqjFZJki9F7vW1QP07GJIyFa9h5WUJAJmtcHgYEefBDGu38jvh1R3utIhpBeY7G9k930TFpOn6ZftruQ1uIAUlcyByyOKDb5kVFs76irvQuGB/mhK4oLa7jZlaapCobre0CrQz3tAAWsdyN4salYA38XwFuRonV4TMCka8ka4Kr1lbcZTtCml+jr8kO0xyC6riX0WtUumHyT9eWHNacGfBK/1NbiE8Ce3mcGTlmizHTEdMkUObpMELiQgcybGhkWXKcZVYfjpFeGnCktdMnRcpg0WX5C+XOwXQ48FOo+yqTNJvqFEGL2w0AFmIalCDu1GScmOpGCOaZtWNmeCLhvEe513A7ii4sTTe8QEW6V+o/1b1WeNH6UrKDrmNDrRUPVDWeL637q37lw27vCR1dt1P30YG/pjSwpX+/O+nyp5mvSP/se1dyKHSo1SS/Eas8JRq0h2fOdz1564tH5h81ouAEXR1e3+aWVcoz7LdgN+8OYQgNt5u6sffP4cHfZLxhR1YfhlVkbaJzOmf7a2RXVQ1evQr+QXwQbH50yZ5ydhmch7OVE6dbkfPYDU0g0Lpl975z+gsQ6Slm47EtMgY6PLxuqhpaHK9h71DzOTKbXYwpNSKBwVi2LXIlLeqdf5cwmwZHv+XruM2k+NDvH4EiKxxLG2tizCT/kVp2lsi6CE22FWEzpvqc2gVWKcRYsSKlpMZbP/LzXdg6bQeHPP8vf5+2T5BeZqeeR82GzOWTvd66plFNMMtpLJND2RvpjSPPmRbwmVk6pVH148HLZyEDYaCTFozlppkdNKzfzUY9ixy+IZqFIAZ6PEdTuZo6j",
"PJ72FSq2jw1G+7/QG5Et+K50OFJ6g4tMgbi/QPbN98Ob5OeMjACQX1+LirVFAr0QzivRwxhoXkNMdM+Gj76HEJwOdJqTlnykQgbXTn6o7I+ZO0fjxQm9YW3hfFlW+S01iUl3zmnRN4GboNfRS9fXa6mgmFFgjp/VMG9TAKZD5hbKO1qdFZvRHx5yGkwZUhTRMa5d5HJHqGXu9De8pz2iB6usccky4V1MvCF2bjWL3a+tZ/DVZGt4wWlho8yXIkVWAB4EhtPPlKhREWAPHTP5LTmAjZ4s0Bhwi0I0uOSFqZAlFSxqZTonuKvbXor08TVkX5VtGUJFAhUegsw19fWnzm6aOaHll8TmnHvmZvazK4V05TX+HL5rqswG/LYIfkBu6j3rRxqYZbspGYU14VtIWDntS+mRdT7NBnQwMcaA8Oy73/qokE3Pi8QJ+XDCv+Qad8Rc2nMJtpx/TYavEYc5Nvh1Be3BO8iQYxcSRLvuScAjLA38JjpnJUN31a9Exo3jqDeRDijawBU98LTXJ6gOaioSq7kf83d3Wq0Y3t7AojGuKfKgdqTYHuBxO2vcUd1XYWrMJcQe/vWBhBe3CKSwjwoXE000IKEov3Co5XfWbwg/PkNdAR87H2//frv8Eqe/3Fesal7fwQZ24re8fweCy8KK0lPwTw8QBm12bBCT8Ls658wJnHbYgCWbZ49ryutJsdT6p2Crzr1zRzTBqgc+iLZkxu6oxGYhQrWymIZP0Hbp3aQfa3SfEPdxaybId/pBSYrRwz0a/xJYlO4nrZfNNN2mgRSz91UMKRHoA/zgrR5ynRn4p3tVKa9YXmVctA6nMtFGqv+/L/KvVLulcWd4nCTueWb8L4S7mhDb1t3mUPeZwybYPhfffR/z1qDm9SyhDw24DhvI6Mevnvcqwer8MRtfH+t4ydtvLGVmur7twyn+9SfX5ClkpKEiGHO7gZvsyPQMi4uA8hySFiciW6fkVLxntgvHJJ4kAi2tM6RAxb4WnkKxWCJUBW75K5XXw+HMkOS6WTbY4BIhI/kFgt7lP76TiSkAiBjpBR9/4803hc7e+Y8gebpka6eQ1AWRhriVorgbssd6jPp6BHm+DUBcFVibX1LpmaBnRgQA/bX4/rbatzAbqTt4QImZMYIpg9LnbRtCE9WYC06wx2tw+pZu06HRU3gAoPmETxr1Fex68zHcsY2YM8CShrZ1vAn2lkMriuYYhpcNTAu/wRZOb14vba6PtRfxL3pmZyCy1D6BTJ+wSeFn+b5morUE1YONIKulPo/vuD51wz6WkRrcOlocn12Da5f8x/CiT/SSWYFkkeQkbokT7f8p3BFzIafxo0G3UApPGI33B7S+bK0112LS6Hz3wqHLcoeZoanwmW2rX5PFs+v4dTtNK20OLmt2GhP8EbR1B9TdBvwMxEuvF6RASIPJc5SD/9W+QH/rW872Ndnmf3VorJHFotRAVxIe7nm5IKo2X3uNILTgW7k3mkF1JPSJqdFCafiJTpUx1gzjcze3WOFNiyC4ndxlWYSBkNiWNntkm5oEUjgJfZbv9YdK6zdNgck2z+ijYBTXsxYitKcd608gpY1CziSLX/60M24063Schd1F4FUBzQcSDeqijJFRENjWuv6SycsMBgVgVaaaLfts8Sz340IKcWJeVy22GN+WEJhip8qXwIbJuOqThkKJ50aGuFLwwf6/2oGGO898rXyus+RsOx2oEA8Ewk/efE9JEkWKq9ZqI5LaUs83BWhJlTT5+YEhqaGGuxJgMBq6vMPBLCnoSibD9xTbY0rB80ovfn7OrmISBNkMc8eLISqQ3nAUr95AWPA4JlqSCv8Jjm07V4KXWc7U+T8sicU+t+YttNK66Qlcdvqj/oRF3cDj4mT/QBZ4h3bHgqftOKb2H7yXeNbFkp3cUVLEwsc41oaqEW8asOslpUELBjz/lXtX/qykQE260fh2GiPubIV+XBShxlmEhIGl1gr7KgdacmRimJ2WMWWJvwgy",
"3T/MKeTe/83VvlQDMx4AymgbxpvcuSKGAEzyf2l3O3SPGwNon7wNdLMYw9C2NkcemNMsJfklIe0vCPhDxrYgEiwul18k9GJDfaC3I9VQvXkLm4hOkbzj"
};
*size = s_gst_size_LPRES_EXAMPLES__turbine_off_design;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__turbine_off_design;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__turbine_off_design;
return true;
}



bool LPRES_EXAMPLES__turbine_off_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__turbine_off_design = 32;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__turbine_off_design = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__turbine_off_design[] = 
{
"AQAAAAEAAAAAAAAAAQAAAAEAAAAAAAAA"
};
*size = s_gsi_size_LPRES_EXAMPLES__turbine_off_design;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__turbine_off_design;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__turbine_off_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__turbine_off_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__turbine_off_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__turbine_off_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__turbine_off_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__turbine_off_design(name,dirInstall);
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
	sprintf(partitionName,"%s","off_design");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.turbine.off_design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


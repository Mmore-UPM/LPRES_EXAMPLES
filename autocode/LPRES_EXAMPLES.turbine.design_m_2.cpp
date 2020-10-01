//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__turbine_design_m_2_CPP
#define LPRES_EXAMPLES__turbine_design_m_2_CPP

#include "LPRES_EXAMPLES.turbine.design_m_2.h"

LPRES_EXAMPLES__turbine_design_m_2* LPRES_EXAMPLES__turbine_design_m_2::s_current= NULL;

LPRES_EXAMPLES__turbine_design_m_2::LPRES_EXAMPLES__turbine_design_m_2(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "turbine";
m_infoPartitionName = "design_m_2";
m_infoModelName = "LPRES_EXAMPLES__turbine_design_m_2";
m_infoModelFileName = "LPRES_EXAMPLES.turbine.design_m_2";
m_infoModelFileNameExtra = "turbine.design_m_2";
m_perfFlag = false;
m_infoComponentDate = "12/06/2020 13:51:36.416000";
m_infoPartitionDate = "22/06/2020 13:39:44.336000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "LPRES V2.0.1 LPRES_EXAMPLES V0.1 MATH V3.2.3 ";

m_solveInternalBox= new int[3]; 
int nbx;
for (nbx=0; nbx < 3 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[7];
int ib;
for (ib=0; ib < 7 ; ib++)
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
n_dyn=2;
dyn= new double[2] ;
static double tmp_dynInit[2]={ 500, 0.1 } ;
dynInit= new double[2];
dcopy(2,dynInit,tmp_dynInit);


n_der=0;
der= new double[2] ;
static double tmp_derInit[2]={ 0, 0 } ;
derInit= new double[2];
dcopy(2,derInit,tmp_derInit);


res= new double[2] ;
ldr= new double[2] ;
boxDyn= new double[2] ;
boxDer= new double[2] ;

n_unkR=74;
unkR= new double[74] ;
static double tmp_unkRInit[74]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02, 0, 0, 0, 0, 0, 0, 
		1, 1, 1, 0, 0, 0, 0, 0, 0.01, 0, 0, 0, 0, 0.4, 0.9, 1, 
		0, 0, 0.5, 0, 0, 1.8, 0.05, 0, 0, 0 } ;
unkRInit= new double[74];
dcopy(74,unkRInit,tmp_unkRInit);


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
n_nelg= 3;
n_neld= 0;
m_numBoxes= 2;
m_nNonLinearBoxes= 2;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void LPRES_EXAMPLES__turbine_design_m_2::initInternalModels()
{
}

int LPRES_EXAMPLES__turbine_design_m_2::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__turbine_design_m_2::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__turbine_design_m_2::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__turbine_design_m_2::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__turbine_design_m_2::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__turbine_design_m_2::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__turbine_design_m_2::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__turbine_design_m_2::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__turbine_design_m_2::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__turbine_design_m_2::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__turbine_design_m_2::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__turbine_design_m_2::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double LPRES_EXAMPLES__turbine_design_m_2::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


/* Copy special unkR[] items to dyn[] vector */

void LPRES_EXAMPLES__turbine_design_m_2::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__turbine_design_m_2::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet.Inlet,100)
	LPRES__Init_fluid(unkI[0], &unkR[1]) ;
  // init(Nozzle.Nozzle,0)
	unkR[50] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__turbine_design_m_2::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-23]  Turbine.psi = Turbine.tau / Turbine.U ** 2
res[0] = evalNormResidueInternal(0,unkR[68],_div( unkR[72] , _pow( dyn[0] , 2,"(Turbine.U)**(2)" ),"Turbine.U ** 2"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__turbine_design_m_2::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__turbine_design_m_2& m= *LPRES_EXAMPLES__turbine_design_m_2::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__turbine_design_m_2::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(2, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__turbine_design_m_2::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void LPRES_EXAMPLES__turbine_design_m_2::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-25]  Turbine.V_z2 = Turbine.cos_2 * Turbine.M_2 * sqrt(LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Inlet.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2))
res[1] = evalNormResidueInternal(1,unkR[58],unkR[61] * dyn[1] * _sqrt(_div( LPRES__gamma(&unkR[1]) * LPRES__R(&unkR[1]) * unkR[0] , (1. + (LPRES__gamma(&unkR[1]) - 1.)/2. * _pow( dyn[1] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Inlet.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2)"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void LPRES_EXAMPLES__turbine_design_m_2::fcn2(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__turbine_design_m_2& m= *LPRES_EXAMPLES__turbine_design_m_2::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void LPRES_EXAMPLES__turbine_design_m_2::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(2, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__turbine_design_m_2::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__turbine_design_m_2::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Nozzle.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[52] = LPRES__ISA_Pressure(unkR[40]) ;
//[E-2]  Turbine.tau = Turbine.m.Power / Nozzle.g.W
unkR[72] = _div( unkR[64] , unkR[49],"Nozzle.g.W") ;
//[E-3]  Nozzle.g.Tt = Inlet.Tt - Turbine.tau / LPRES.cp(Inlet.fluidV)
unkR[48] = unkR[0] - _div( unkR[72] , LPRES__cp(&unkR[1]),"LPRES.cp(Inlet.fluidV)") ;
//[E-4]  Turbine.alpha = Nozzle.g.Tt / Inlet.Tt
unkR[59] = _div( unkR[48] , unkR[0],"Inlet.Tt") ;
//[E-5]  Turbine.beta = (1 - (1 - Turbine.alpha) / Turbine.eta_d) ** (1 / ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)))
unkR[60] = _pow( (1. - _div( (1. - unkR[59]) , unkR[62],"Turbine.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[1]) - 1.) , LPRES__gamma(&unkR[1]),"LPRES.gamma(Inlet.fluidV)")),"(LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)")),"(1 - (1 - Turbine.alpha) / Turbine.eta_d)**(1 / ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)))" ) ;
//[E-6]  Nozzle.g.pt = Turbine.beta * Inlet.pt
unkR[50] = unkR[60] * unkR[39] ;
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
unkR[63] = 0.10471975511966 * unkR[71] ;
//[E-19]  Turbine.MFP = Nozzle.g.W * sqrt(Inlet.Tt) / Inlet.pt
unkR[57] = _div( unkR[49] * _sqrt(unkR[0],"Inlet.Tt") , unkR[39],"Inlet.pt") ;
//[E-20]  Turbine.theta = 1 / Turbine.alpha
unkR[73] = _div( 1. , unkR[59],"Turbine.alpha") ;
//[E-21]  Turbine.pi = 1 / Turbine.beta
unkR[67] = _div( 1. , unkR[60],"Turbine.beta") ;
//[E-22]  Turbine.psi = (Turbine.psi_d + 1) / Turbine.phi_d * Turbine.phi - 1
unkR[68] = _div( (unkR[69] + 1.) , unkR[66],"Turbine.phi_d") * unkR[65] - 1. ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-24]  Turbine.V_z2 = Turbine.phi * Turbine.U
unkR[58] = unkR[65] * dyn[0] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-26]  Turbine.A_in = Turbine.MFP / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1)) / MATH.min(Turbine.M_2, 1) / sqrt(LPRES.gamma(Inlet.fluidV)) * sqrt(LPRES.R(Inlet.fluidV))
unkR[56] = _div( _div( _div( unkR[57] , _pow( (1. + (LPRES__gamma(&unkR[1]) - 1.)/2. * _pow( MATH__min(dyn[1], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[1]) + 1.)/2. , (LPRES__gamma(&unkR[1]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1")),"(1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1))" ),"(1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1))") , MATH__min(dyn[1], 1.),"MATH.min(Turbine.M_2, 1)") , _sqrt(LPRES__gamma(&unkR[1]),"LPRES.gamma(Inlet.fluidV)"),"sqrt(LPRES.gamma(Inlet.fluidV))") * _sqrt(LPRES__R(&unkR[1]),"LPRES.R(Inlet.fluidV)") ;
//[E-27]  Turbine.r_m = Turbine.U / Turbine.m.N
unkR[70] = _div( dyn[0] , unkR[63],"Turbine.m.N") ;

//save last residues
memcpy(this->res,res,2*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__turbine_design_m_2::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[1])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[1])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",162,"Turbine.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__turbine_design_m_2::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[43]; //Nozzle.M_out > 0
    ev[1]= unkR[44] - unkR[45]; //Nozzle.PR < Nozzle.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__turbine_design_m_2::evalWhen(double *_time, bool w[],bool cont[] )
{
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__turbine_design_m_2::executeWhen(double *_time,  int index )
{
}

/* Evaluation of ZONE conditions*/
void LPRES_EXAMPLES__turbine_design_m_2::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Nozzle.A_sl =  ZONE (Nozzle.M_out > 0) Nozzle.A * Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) OTHERS Nozzle.A * -Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))
     branchZone[0] = (cont[0] ) ? 0 : 1;
     // Nozzle.M_out =  ZONE (Nozzle.PR < Nozzle.PR_sl) sqrt(2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1)) OTHERS 1
     branchZone[1] = (cont[1] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__turbine_design_m_2::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__turbine_design_m_2::initDelays()
{
}


bool LPRES_EXAMPLES__turbine_design_m_2::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__turbine_design_m_2 = 14112;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__turbine_design_m_2 = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__turbine_design_m_2[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__turbine_design_m_2;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__turbine_design_m_2;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__turbine_design_m_2;
return true;
}



bool LPRES_EXAMPLES__turbine_design_m_2::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__turbine_design_m_2 = 56;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__turbine_design_m_2 = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__turbine_design_m_2[] = 
{
"AgAAAAMAAAAAAAAAAQAAAAIAAAABAAAAAQAAAAIAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_LPRES_EXAMPLES__turbine_design_m_2;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__turbine_design_m_2;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__turbine_design_m_2;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__turbine_design_m_2(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__turbine_design_m_2(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__turbine_design_m_2(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__turbine_design_m_2(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__turbine_design_m_2(name,dirInstall);
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
	sprintf(partitionName,"%s","design_m_2");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.turbine.design_m_2");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef LPRES_EXAMPLES__turbine_diseno_CPP
#define LPRES_EXAMPLES__turbine_diseno_CPP

#include "LPRES_EXAMPLES.turbine.diseno.h"

LPRES_EXAMPLES__turbine_diseno* LPRES_EXAMPLES__turbine_diseno::s_current= NULL;

LPRES_EXAMPLES__turbine_diseno::LPRES_EXAMPLES__turbine_diseno(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "LPRES_EXAMPLES";
m_infoComponentName = "turbine";
m_infoPartitionName = "diseno";
m_infoModelName = "LPRES_EXAMPLES__turbine_diseno";
m_infoModelFileName = "LPRES_EXAMPLES.turbine.diseno";
m_infoModelFileNameExtra = "turbine.diseno";
m_perfFlag = false;
m_infoComponentDate = "12/06/2020 13:51:36.416000";
m_infoPartitionDate = "25/06/2020 19:54:35.572000";
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
static double tmp_dynInit[1]={ 500 } ;
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
static double tmp_unkRInit[75]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02, 0, 0, 0, 0, 0, 0, 
		1, 1, 1, 0, 0, 0, 0, 0, 0.01, 0, 0.1, 0, 0, 0, 0.4, 0.9, 
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
void LPRES_EXAMPLES__turbine_diseno::initInternalModels()
{
}

int LPRES_EXAMPLES__turbine_diseno::LPRES__Know_fluid(double fluid[])
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


int LPRES_EXAMPLES__turbine_diseno::LPRES__State(double fluid[])
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


double LPRES_EXAMPLES__turbine_diseno::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double LPRES_EXAMPLES__turbine_diseno::LPRES__ISA_Pressure(const double & z)
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


double LPRES_EXAMPLES__turbine_diseno::LPRES__cp(double fluid[])
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


double LPRES_EXAMPLES__turbine_diseno::LPRES__M(double fluid[])
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


double LPRES_EXAMPLES__turbine_diseno::LPRES__R(double fluid[])
{

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double LPRES_EXAMPLES__turbine_diseno::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double LPRES_EXAMPLES__turbine_diseno::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double LPRES_EXAMPLES__turbine_diseno::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double LPRES_EXAMPLES__turbine_diseno::MATH__max(const double & x,const double & y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


void LPRES_EXAMPLES__turbine_diseno::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double LPRES_EXAMPLES__turbine_diseno::MATH__min(const double & x,const double & y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


/* Copy special unkR[] items to dyn[] vector */

void LPRES_EXAMPLES__turbine_diseno::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void LPRES_EXAMPLES__turbine_diseno::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet.Inlet,100)
	LPRES__Init_fluid(unkI[0], &unkR[1]) ;
  // init(Nozzle.Nozzle,0)
	unkR[50] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void LPRES_EXAMPLES__turbine_diseno::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-24]  Turbine.phi = Turbine.V_z2 / Turbine.U
unkR[66] = _div( unkR[59] , dyn[0],"Turbine.U") ;
//[E-25]  Turbine.psi = (Turbine.psi_d + 1) / Turbine.phi_d * Turbine.phi - 1
unkR[69] = _div( (unkR[70] + 1.) , unkR[67],"Turbine.phi_d") * unkR[66] - 1. ;
//[E-26]  Turbine.psi = Turbine.tau / Turbine.U ** 2
res[0] = evalNormResidueInternal(0,unkR[69],_div( unkR[73] , _pow( dyn[0] , 2,"(Turbine.U)**(2)" ),"Turbine.U ** 2"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void LPRES_EXAMPLES__turbine_diseno::fcn1(int *n, double x[], double residues[], int *iflag)
{
	LPRES_EXAMPLES__turbine_diseno& m= *LPRES_EXAMPLES__turbine_diseno::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void LPRES_EXAMPLES__turbine_diseno::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(1, boxDyn, dyn) ;
	isOk= solveSteady(LPRES_EXAMPLES__turbine_diseno::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Main residues function for this model */
void LPRES_EXAMPLES__turbine_diseno::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Nozzle.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[52] = LPRES__ISA_Pressure(unkR[40]) ;
//[E-2]  Turbine.tau = Turbine.m.Power / Nozzle.g.W
unkR[73] = _div( unkR[65] , unkR[49],"Nozzle.g.W") ;
//[E-3]  Nozzle.g.Tt = Inlet.Tt - Turbine.tau / LPRES.cp(Inlet.fluidV)
unkR[48] = unkR[0] - _div( unkR[73] , LPRES__cp(&unkR[1]),"LPRES.cp(Inlet.fluidV)") ;
//[E-4]  Turbine.alpha = Nozzle.g.Tt / Inlet.Tt
unkR[60] = _div( unkR[48] , unkR[0],"Inlet.Tt") ;
//[E-5]  Turbine.beta = (1 - (1 - Turbine.alpha) / Turbine.eta_d) ** (1 / ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)))
unkR[61] = _pow( (1. - _div( (1. - unkR[60]) , unkR[63],"Turbine.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[1]) - 1.) , LPRES__gamma(&unkR[1]),"LPRES.gamma(Inlet.fluidV)")),"(LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)")),"(1 - (1 - Turbine.alpha) / Turbine.eta_d)**(1 / ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)))" ) ;
//[E-6]  Nozzle.g.pt = Turbine.beta * Inlet.pt
unkR[50] = unkR[61] * unkR[39] ;
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
unkR[64] = 0.10471975511966 * unkR[72] ;
//[E-19]  Turbine.MFP = Nozzle.g.W * sqrt(Inlet.Tt) / Inlet.pt
unkR[57] = _div( unkR[49] * _sqrt(unkR[0],"Inlet.Tt") , unkR[39],"Inlet.pt") ;
//[E-20]  Turbine.theta = 1 / Turbine.alpha
unkR[74] = _div( 1. , unkR[60],"Turbine.alpha") ;
//[E-21]  Turbine.pi = 1 / Turbine.beta
unkR[68] = _div( 1. , unkR[61],"Turbine.beta") ;
//[E-22]  Turbine.A_in = Turbine.MFP / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1)) / MATH.min(Turbine.M_2, 1) / sqrt(LPRES.gamma(Inlet.fluidV)) * sqrt(LPRES.R(Inlet.fluidV))
unkR[56] = _div( _div( _div( unkR[57] , _pow( (1. + (LPRES__gamma(&unkR[1]) - 1.)/2. * _pow( MATH__min(unkR[58], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[1]) + 1.)/2. , (LPRES__gamma(&unkR[1]) - 1.),"LPRES.gamma(Inlet.fluidV) - 1")),"(1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1))" ),"(1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(Inlet.fluidV) + 1) / 2 / (LPRES.gamma(Inlet.fluidV) - 1))") , MATH__min(unkR[58], 1.),"MATH.min(Turbine.M_2, 1)") , _sqrt(LPRES__gamma(&unkR[1]),"LPRES.gamma(Inlet.fluidV)"),"sqrt(LPRES.gamma(Inlet.fluidV))") * _sqrt(LPRES__R(&unkR[1]),"LPRES.R(Inlet.fluidV)") ;
//[E-23]  Turbine.V_z2 = Turbine.cos_2 * Turbine.M_2 * sqrt(LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Inlet.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2))
unkR[59] = unkR[62] * unkR[58] * _sqrt(_div( LPRES__gamma(&unkR[1]) * LPRES__R(&unkR[1]) * unkR[0] , (1. + (LPRES__gamma(&unkR[1]) - 1.)/2. * _pow( unkR[58] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(Inlet.fluidV) * LPRES.R(Inlet.fluidV) * Inlet.Tt / (1 + (LPRES.gamma(Inlet.fluidV) - 1) / 2 * Turbine.M_2 ** 2)") ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-27]  Turbine.r_m = Turbine.U / Turbine.m.N
unkR[71] = _div( dyn[0] , unkR[64],"Turbine.m.N") ;

//save last residues
memcpy(this->res,res,1*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void LPRES_EXAMPLES__turbine_diseno::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[1])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",637,"Nozzle.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[1])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",162,"Turbine.","Gas == LPRES.State(Inlet.fluidV)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void LPRES_EXAMPLES__turbine_diseno::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[43]; //Nozzle.M_out > 0
    ev[1]= unkR[44] - unkR[45]; //Nozzle.PR < Nozzle.PR_sl
}

/* Evaluation of when conditions*/
void LPRES_EXAMPLES__turbine_diseno::evalWhen(double *_time, bool w[],bool cont[] )
{
}

/* Generation WHEN conditions*/
void LPRES_EXAMPLES__turbine_diseno::executeWhen(double *_time,  int index )
{
}

/* Evaluation of ZONE conditions*/
void LPRES_EXAMPLES__turbine_diseno::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Nozzle.A_sl =  ZONE (Nozzle.M_out > 0) Nozzle.A * Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1))) OTHERS Nozzle.A * -Nozzle.M_out / ((2 + (LPRES.gamma(Inlet.fluidV) - 1) * Nozzle.M_out ** 2) / (LPRES.gamma(Inlet.fluidV) + 1)) ** ((LPRES.gamma(Inlet.fluidV) + 1) / (2 * (LPRES.gamma(Inlet.fluidV) - 1)))
     branchZone[0] = (cont[0] ) ? 0 : 1;
     // Nozzle.M_out =  ZONE (Nozzle.PR < Nozzle.PR_sl) sqrt(2 * (Nozzle.PR ** ((LPRES.gamma(Inlet.fluidV) - 1) / LPRES.gamma(Inlet.fluidV)) - 1) / (LPRES.gamma(Inlet.fluidV) - 1)) OTHERS 1
     branchZone[1] = (cont[1] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* LPRES_EXAMPLES__turbine_diseno::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void LPRES_EXAMPLES__turbine_diseno::initDelays()
{
}


bool LPRES_EXAMPLES__turbine_diseno::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_LPRES_EXAMPLES__turbine_diseno = 13800;
static const unsigned int s_gst_chunkSize_LPRES_EXAMPLES__turbine_diseno = 2000;
static const char *s_gst_chunkedStr_LPRES_EXAMPLES__turbine_diseno[] = 
{
"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"
};
*size = s_gst_size_LPRES_EXAMPLES__turbine_diseno;
*chunkSize = s_gst_chunkSize_LPRES_EXAMPLES__turbine_diseno;
*chunkedStr = s_gst_chunkedStr_LPRES_EXAMPLES__turbine_diseno;
return true;
}



bool LPRES_EXAMPLES__turbine_diseno::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_LPRES_EXAMPLES__turbine_diseno = 32;
static const unsigned int s_gsi_chunkSize_LPRES_EXAMPLES__turbine_diseno = 2000;
static const char *s_gsi_chunkedStr_LPRES_EXAMPLES__turbine_diseno[] = 
{
"AQAAAAEAAAAAAAAAAQAAAAEAAAAAAAAA"
};
*size = s_gsi_size_LPRES_EXAMPLES__turbine_diseno;
*chunkSize = s_gsi_chunkSize_LPRES_EXAMPLES__turbine_diseno;
*chunkedStr = s_gsi_chunkedStr_LPRES_EXAMPLES__turbine_diseno;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_LPRES_EXAMPLES__turbine_diseno(const char *name=NULL,const char *dirInstall=NULL)
{
	return new LPRES_EXAMPLES__turbine_diseno(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_LPRES_EXAMPLES__turbine_diseno(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_LPRES_EXAMPLES__turbine_diseno(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new LPRES_EXAMPLES__turbine_diseno(name,dirInstall);
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
	sprintf(partitionName,"%s","diseno");
	sprintf(symbolTableFilename,"%s","LPRES_EXAMPLES.turbine.diseno");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 


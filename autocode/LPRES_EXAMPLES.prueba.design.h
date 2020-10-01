//==================================================================
// Code generated automatically
// Description: Partition class header
//==================================================================
#ifndef LPRES_EXAMPLES__prueba_design_H
#define LPRES_EXAMPLES__prueba_design_H

#include <INTEG_simula.h>

class LPRES_EXAMPLES__prueba_design: public INTEG_simula
{
public:
	// methods to cope with the continuous part
	LPRES_EXAMPLES__prueba_design(const char *mgr=NULL,const char *dirInstall=NULL,bool dmode=false);
	virtual void copyBack( double dyn[], double ldr[] );
	virtual void initBlocks( double dyn[], double ldr[], double *_time );
	virtual void fres( double *_time, double dyn[], double der[], double res[] );

	// methods to cope with the discrete part
	virtual void checkAsserts( double *_time);
	virtual void constraints( double *_time, double ev[],double dyn[],double ldr[]);
	virtual void evalWhen(double *_time, bool w[],bool cont[] );
	virtual void executeWhen(double *_time,  int index );
	virtual void evalZones( double *_time,  int branchZone[],bool cont[] );
	virtual INTEG_simula::t_initEvent* initEvents(int& nEvents,int& nWhen,int& nZones,int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex);
	virtual void initDelays();
	virtual void initInternalModels();

	// Pointer use for numerical wrapper
	static LPRES_EXAMPLES__prueba_design* s_current;
public: 
	//EL functions declaration
	void LPRES__Init_fluid(const int & fluid_name,double fluid[]);
	double MATH__min(const double & x,const double & y);
	double LPRES__cp(double fluid[]);
	double MATH__max(const double & x,const double & y);
	void LPRES__Vaporisation_mix(double fluid_in[],double fluid_out[]);
	void LPRES__Decomposition_fun(double fluid_in[],double Data_Array[]);
	double LPRES__M(double fluid[]);
	double LPRES__R(double fluid[]);
	double LPRES__cv(double fluid[]);
	double LPRES__gamma(double fluid[]);
	double LPRES__FGAMMA(double fluid[]);
	int LPRES__Know_fluid(double fluid[]);
	int LPRES__State(double fluid[]);
	double LPRES__rho(double fluid[]);
	double LPRES__visc(double fluid[]);

void fbox1(double *_time,double dyn[],double ldr[],double res[]);
static void fcn1(int *n, double x[], double residues[], int *iflag);
void fhyb1(double dyn[], double ldr[], double tol, int n, int itmax);

bool gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr);

bool gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr);
};
#endif

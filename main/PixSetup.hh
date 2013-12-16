#ifndef PIXSETUP_H
#define PIXSETUP_H

#include <string>
#include <map>

#include <TObject.h> 

#include "TBInterface.hh"
#include "PixTestParameters.hh"
#include "ConfigParameters.hh"
#include "PixModule.hh"
#include "SysCommand.hh"

class PixSetup: public TObject {
public:
  PixSetup(TBInterface *, PixTestParameters *, ConfigParameters *, SysCommand *);
  PixSetup();
  ~PixSetup();
  void init(); 

  TBInterface*       getTBInterface() {return fTBInterface;}
  PixTestParameters* getPixTestParameters() {return fPixTestParameters;}
  ConfigParameters * getConfigParameters()  {return fConfigParameters;}
  PixModule*         getModule()  {return fModule;}
  SysCommand*        getSysCommand()  {return fSysCommand;}

private: 
  bool              fDebug; 
  SysCommand        *fSysCommand;
  TBInterface       *fTBInterface; 
  PixTestParameters *fPixTestParameters; 
  ConfigParameters  *fConfigParameters;   
  PixModule         *fModule; 

  ClassDef(PixSetup, 1); 
};

#endif


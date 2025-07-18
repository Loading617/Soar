#ifndef _Soar_Soar_h
#define _Soar_Soar_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <Soar/Soar.lay>
#include <CtrlCore/lay.h>

class Soar : public WithSoarLayout<TopWindow> {
public:
	Soar();
};

#endif

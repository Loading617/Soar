#include "Soar.h"

Soar::Soar()
{
	CtrlLayout(*this, "Soar");
	Sizeable().MinimizeBox().MaximizeBox();
}

GUI_APP_MAIN
{
	Soar().Run();
}

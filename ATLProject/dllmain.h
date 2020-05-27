// dllmain.h : Declaration of module class.

class CATLProjectModule : public ATL::CAtlDllModuleT< CATLProjectModule >
{
public :
	DECLARE_LIBID(LIBID_ATLProjectLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT, "{57dee4ee-b036-470a-805d-32ca2c786bf1}")
};

extern class CATLProjectModule _AtlModule;

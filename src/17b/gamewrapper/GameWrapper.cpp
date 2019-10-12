/// @file

#ifdef INSIDE_MANAGED_CODE
#    define DECLSPECIFIER __declspec(dllexport)
#    define EXPIMP_TEMPLATE
#else
#    define DECLSPECIFIER __declspec(dllimport)
#    define EXPIMP_TEMPLATE extern
#endif

class CGameWrapperPrivate;

// NOTE: we can use namespaces
EXPORT class CGameWrapper
{
public:
	CGameWrapper();
	~CGameWrapper();
	
	bool Init();
	void Shutdown();
	
	void Frame();
private:
	CGameWrapperPrivate *pPrivate; // NOTE: this can even be void ptr
};

#using "Game.dll"

#include <msclr/auto_gcroot.h>

using namespace System::Runtime::InteropServices;

class CGameWrapperPrivate
{
public:
	msclr::auto_gcroot<GameAPI^> gameAPI;
};

CGameWrapper::CGameWrapper()
{
	pPrivate = new CGameWrapperPrivate();
	pPrivate->gameAPI = gcnew CGame();
	
	// alt
	//GameAPI ^gameAPI = gcnew CGame();
	//void *pimpl = GCHandle::ToIntPtr(GCHandle::Alloc(gameAPI)).ToPointer();
};

CGameWrapper::~CGameWrapper()
{
	delete pPrivate;
	
	// alt
	//GCHandle handle = GCHandle::FromIntPtr(IntPtr(pimpl));
	//handle.Free();
};

bool CGameWrapper::Init()
{
	return pPrivate->gameAPI->Init();
	
	// alt
	//GCHandle handle = GCHandle::FromIntPtr(IntPtr(pimpl));
	//GameAPI ^gameAPI = safe_cast<GameAPI^>(handle.Target);
	//return gameAPI->Init();
};

void CGameWrapper::Shutdown()
{
	pPrivate->gameAPI->Shutdown();
};

void CGameWrapper::Frame()
{
	pPrivate->gameAPI->Frame();
};
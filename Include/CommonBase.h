#ifdef EASYRENDER_COMMONBASE_EXPORTS
#define EASYRENDER_COMMONBASE_API __declspec(dllexport)
#else
#define EASYRENDER_COMMONBASE_API __declspec(dllimport)
#ifdef EASYRENDER_AUTO_LOAD
#ifdef _DEBUG
#	pragma comment(lib, "EasyRender_CommonBaseD.lib")
#else
#	pragma comment(lib, "EasyRender_CommonBase.lib")
#endif
#endif // EASYRENDER_AUTO_LOAD
#endif // EASYRENDER_COMMONBASE_EXPORTS
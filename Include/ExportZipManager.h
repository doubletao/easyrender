#ifdef EASYRENDER_ZIPMANAGER_EXPORTS
#define EASYRENDER_ZIPMANAGER_API __declspec(dllexport)
#else
#define EASYRENDER_ZIPMANAGER_API __declspec(dllimport)
#ifdef EASYRENDER_AUTO_LOAD
#ifdef _DEBUG
#	pragma comment(lib, "EasyRender_ZipManagerD.lib")
#else
#	pragma comment(lib, "EasyRender_ZipManager.lib")
#endif
#endif // EASYRENDER_AUTO_LOAD
#endif // EASYRENDER_ZIPMANAGER_EXPORTS
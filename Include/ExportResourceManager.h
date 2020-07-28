#ifdef EASYRENDER_RESOURCEMANAGER_EXPORTS
#define EASYRENDER_RESOURCEMANAGER_API __declspec(dllexport)
#else
#define EASYRENDER_RESOURCEMANAGER_API __declspec(dllimport)
#ifdef EASYRENDER_AUTO_LOAD
#ifdef _DEBUG
#	pragma comment(lib, "EasyRender_ResourceManagerD.lib")
#else
#	pragma comment(lib, "EasyRender_ResourceManager.lib")
#endif
#endif // EASYRENDER_AUTO_LOAD
#endif // EASYRENDER_RESOURCEMANAGER_EXPORTS
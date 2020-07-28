#ifdef EASYRENDER_DATABASEDEFINE_EXPORTS
#define EASYRENDER_DATABASEDEFINE_API __declspec(dllexport)
#else
#define EASYRENDER_DATABASEDEFINE_API __declspec(dllimport)
#ifdef EASYRENDER_AUTO_LOAD
#ifdef _DEBUG
#	pragma comment(lib, "EasyRender_DataBaseDefineD.lib")
#else
#	pragma comment(lib, "EasyRender_DataBaseDefine.lib")
#endif
#endif // EASYRENDER_AUTO_LOAD
#endif // EASYRENDER_DATABASEDEFINE_EXPORTS
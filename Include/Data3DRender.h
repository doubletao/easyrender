#ifdef EASYRENDER_DATA3DRENDER_EXPORTS
#define EASYRENDER_DATA3DRENDER_API __declspec(dllexport)
#else
#define EASYRENDER_DATA3DRENDER_API __declspec(dllimport)
#ifdef EASYRENDER_AUTO_LOAD
#ifdef _DEBUG
#	pragma comment(lib, "EasyRender_Data3DRenderD.lib")
#else
#	pragma comment(lib, "EasyRender_Data3DRender.lib")
#endif
#endif // EASYRENDER_AUTO_LOAD
#endif // EASYRENDER_DATA3DRENDER_EXPORTS
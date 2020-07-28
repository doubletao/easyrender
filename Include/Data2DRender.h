#ifdef EASYRENDER_DATA2DRENDER_EXPORTS
#define EASYRENDER_DATA2DRENDER_API __declspec(dllexport)
#else
#define EASYRENDER_DATA2DRENDER_API __declspec(dllimport)
#ifdef EASYRENDER_AUTO_LOAD
#ifdef _DEBUG
#	pragma comment(lib, "EasyRender_Data2DRenderD.lib")
#else
#	pragma comment(lib, "EasyRender_Data2DRender.lib")
#endif
#endif // EASYRENDER_AUTO_LOAD
#endif // EASYRENDER_DATA2DRENDER_EXPORTS
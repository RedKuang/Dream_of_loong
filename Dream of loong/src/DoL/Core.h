#pragma once

#ifdef DoL_PLAFTORM_WINDOWS
	#ifdef DoL_BUILD_DLL
		#define DoL_API __declspec(dllexport)
	#else
		#define DoL_API __declspec(dllexport)
	#endif // DoL_BUILD_DLL
#else 
	#error DoL only support Windows!
#endif // DoL_PLAFTORM_WINDOWS

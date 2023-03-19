#pragma once

#ifdef LEAVER_EXPORTS
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // LEAVER_EXPORTS


class Leaver
{
public:
	LEAVERLIBRARY_API void leave();
private:

};
#pragma once

#ifdef HOMEWORK1102_EXPORTS
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // HOMEWORK1102_EXPORTS


class Leaver
{
public:
	LEAVERLIBRARY_API void leave();
private:

};
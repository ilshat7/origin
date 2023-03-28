#pragma once

#ifdef LeaverLibrary_EXPORTS
#define LeaverLibrary_API __declspec(dllexport)
#else
#define LeaverLibrary_API __declspec(dllimport)
#endif // LEAVER_EXPORTS


class Leaver
{
public:
	LeaverLibrary_API void leave();
private:

};
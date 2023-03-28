#pragma once

#ifdef HOMEWORK1102_EXPORTS
#define HOMEWORK1102_API __declspec(dllexport)
#else
#define HOMEWORK1102_API __declspec(dllimport)
#endif // HOMEWORK1102_EXPORTS


class Leaver
{
public:
	HOMEWORK1102_API void leave();
private:

};
#include <stdint.h>

/* Totally unimplemented right now! */
#ifndef UNREFERENCED_PARAMETER
/* This is a C module; can't just comment names out */
#define UNREFERENCED_PARAMETER(x) x = x;
#endif

int32_t GOG_init()
{
	return 0;
}

void GOG_shutdown()
{
}

void GOG_update()
{
}

void GOG_unlockAchievement(const char *name)
{
	UNREFERENCED_PARAMETER(name);
}

int32_t GOG_getAchievementProgress(const char *name)
{
	UNREFERENCED_PARAMETER(name);
	return 0;
}

void GOG_setAchievementProgress(const char *name, int32_t stat)
{
	UNREFERENCED_PARAMETER(name);
	UNREFERENCED_PARAMETER(stat);
}

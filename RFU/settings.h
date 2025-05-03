#pragma once

#pragma pack(push, 1)
struct SettingsIPC
{
	bool vsync_enabled;
	double fps_cap;

	struct
	{
		int scan_result;
		void *scheduler;
		int sfd_offset;
		int present_count;
	} debug;
};
#pragma pack(pop)

namespace Settings
{
	extern bool VSyncEnabled;
	extern unsigned char FPSCapSelection;
	extern double FPSCap;
	extern bool UnlockClient;
	extern bool UnlockStudio;
	extern bool CheckForUpdates;
	extern bool NonBlockingErrors;
	extern bool SilentErrors;

	bool Init();
	bool Load();
	bool Save();

	bool Update();

#ifndef RFU_NO_DLL
	SettingsIPC* GetIPC();
#endif
}
#pragma once

// ReSharper disable CppClangTidyCppcoreguidelinesMacroUsage
#define RFU_VERSION "1.0.0"
#define RFU_GITHUB_REPO "copyrighttxt/subter-sfu"
#define RFU_REGKEY "RFU"
// ReSharper enable CppClangTidyCppcoreguidelinesMacroUsage

bool CheckForUpdates();
bool RunsOnStartup();
void SetRunOnStartup(bool shouldRun);
void SetFPSCapExternal(double value);
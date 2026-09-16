#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.UserProfile.DiagnosticsSettings.dll by Windissect. 1 member(s).
namespace Utils {
class Registry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDword@Registry@Utils@@SAJPEAUHKEY__@@PEBG1AEAK@Z
    static long GetDword(HKEY__*, unsigned short const *, unsigned short const *, unsigned long &);
};
} // namespace Utils

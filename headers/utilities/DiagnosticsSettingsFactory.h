#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.UserProfile.DiagnosticsSettings.dll by Windissect. 20 member(s).
namespace Windows::System::UserProfile {
class DiagnosticsSettingsFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DiagnosticsSettingsFactory@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DiagnosticsSettingsFactory@UserProfile@System@Windows@@QEAA@XZ
    DiagnosticsSettingsFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@DiagnosticsSettingsFactory@UserProfile@System@Windows@@UEAAJPEAPEAUIDiagnosticsSettings@234@@Z
    virtual long GetDefault(::Windows::System::UserProfile::IDiagnosticsSettings * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@DiagnosticsSettingsFactory@UserProfile@System@Windows@@UEAAJPEAUIUser@34@PEAPEAUIDiagnosticsSettings@234@@Z
    virtual long GetForUser(::Windows::System::IUser *, ::Windows::System::UserProfile::IDiagnosticsSettings * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DiagnosticsSettingsFactory@UserProfile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DiagnosticsSettingsFactory@UserProfile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DiagnosticsSettingsFactory@UserProfile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DiagnosticsSettingsFactory@UserProfile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DiagnosticsSettingsFactory@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::System::UserProfile

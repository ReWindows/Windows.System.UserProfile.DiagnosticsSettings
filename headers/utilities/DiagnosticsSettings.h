#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.UserProfile.DiagnosticsSettings.dll by Windissect. 17 member(s).
namespace Windows::System::UserProfile {
class DiagnosticsSettings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DiagnosticsSettings@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DiagnosticsSettings@UserProfile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DiagnosticsSettings@UserProfile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DiagnosticsSettings@UserProfile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DiagnosticsSettings@UserProfile@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DiagnosticsSettings@UserProfile@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DiagnosticsSettings@UserProfile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DiagnosticsSettings@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DiagnosticsSettings@UserProfile@System@Windows@@QEAAJPEAUIUser@34@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanUseDiagnosticsToTailorExperiences@DiagnosticsSettings@UserProfile@System@Windows@@UEAAJPEAE@Z
    virtual long get_CanUseDiagnosticsToTailorExperiences(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@DiagnosticsSettings@UserProfile@System@Windows@@UEAAJPEAPEAUIUser@34@@Z
    virtual long get_User(::Windows::System::IUser * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserSid@DiagnosticsSettings@UserProfile@System@Windows@@AEAAJPEAUIUser@34@AEAVHString@Wrappers@WRL@Microsoft@@@Z
    long GetUserSid(::Windows::System::IUser *, ::Microsoft::WRL::Wrappers::HString &);
};
} // namespace Windows::System::UserProfile

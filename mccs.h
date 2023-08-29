#ifndef _ACER_MCCS_H_
#define _ACER_MCCS_H_

#include <cstdint>
#include <windows.h>

enum SettingsOP
{
    KEYLOCK,
    POWERKEY,
    POWERINDICATOR,
    USBPORTSELECT,
    OD,
    REFRESHRATE,
    AIMTYPE,
    LIGHTNINGSELECTION,
    COLORSENSE,
    LIGHTSENSE,
    PROXISENSE,
}

enum ColorSettingsOP
{
    BLUELIGHT,
    GAMMA,
    COLORTEMP,
}

enum FeaturesOP
{
    FREESYNC,
    VRB,
    ULTRALOWLATENCY,
    ADVANCEDBLACKBOOST,
    AIMPOINTCOLOR,
    SNIPERRATIO,
    SNIPERSIZE,
    SNIPERNIGHTVISION,
}

enum SerialNumOP
{
    SN_NUMBER = 3,
}

enum VCPCode
{
    FACTORY_RESET = 0x4,
    SPK_VOLUME = 0x87,
    COLORSETTINGS_TYPE = 0xE7,
    COLORSETTING_REGISTER = 0xE8,
    BLACKBOOST = 0xE5,
    DISPLAYMODE = 0xE2,
    CALIBRATIONMODE = 0xE9,
    SETTINGS_TYPE = 0xE0,
    SETTINGS_REGISTER = 0xE1,
    POWER_CONTROL_MODE = 0xD6,
    COLORSPACE = 0xEA,
    FEATURE_TYPE = 0xEB,
    FEATURE_REGISTER = 0xEC,
    SUPPORTDISPLAYMODE = 0xE3,
    MODELCATEGORY = 0xE4,
    SPKVOLUME = 0x62,
    SATURATION = 0x8A,
}

#ifdef __cplusplus
extern "C"
{
#endif

    BOOL WINAPI Acer_Get_Screen_Position(const WCHAR *deviceId, LONG ldPosX, LONG ldPosY);
    BOOL WINAPI Acer_Get_Windows_Gamma(const WCHAR *deviceId);
    BOOL WINAPI Acer_Set_Screen_Position(const WCHAR *deviceId, __int64 li64Orientation);
    BOOL WINAPI Acer_Set_Screen_Rotation(const WCHAR *deviceId);
    BOOL WINAPI Acer_Set_Windows_Gamma(const WCHAR *deviceId, int ramp1, int ramp2, int ramp3);
    int WINAPI Acer_get_Monitor_index();

    void WINAPI FreePhysicalMonitor();
    BOOL WINAPI GetCurrentDisplayConfig();
    DWORD WINAPI GetCurrentProfile();
    DWORD WINAPI GetSupportProfile();

    BOOL WINAPI Monitor_Decode_VCP_String(LPDWORD out1, char *out2, WORD *out3);
    BOOL WINAPI Monitor_GET_AimType(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_Bgain(LPDWORD pdwMinimumGain, LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_BlackBoost(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_BlueLight(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_Brightness(LPDWORD pdwMinimumGain, LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_Calibration_Mode(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_ColorSpace(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_ColorTemp(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_Contrast(LPDWORD pdwMinimumGain, LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_DisplayMode(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_Gamma(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_Ggain(LPDWORD pdwMinimumGain, LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_KeyLock(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_OD(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_PowerIndicator(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_PowerKey(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_RefreshRate(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_Rgain(LPDWORD pdwMinimumGain, LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_SN_number(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_SPK_Volume(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_Saturation(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_GET_AdvancedBlackBoost(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_AimPointColor(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_ColorSense(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_FW_Version(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_FreeSync(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_LightSense(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_LightingSelection(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_ProxiSense(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_SN(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_SniperNightVision(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_SniperRatio(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_SniperSize(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_USBPortSelect(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_UltraLowLatency(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    bool WINAPI Monitor_Get_VCP_Support_List();
    int WINAPI Monitor_Get_VCP_code(BYTE bVCPCode, LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    int WINAPI Monitor_Get_VCP_code_BCB(BYTE bVCPCode, LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Get_VRB(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);

    BOOL WINAPI Monitor_Query_ModelCategory(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
    BOOL WINAPI Monitor_Query_SupportDisplayMode(LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);

    BOOL WINAPI Monitor_SET_Bgain(DWORD dwNewGain);
    BOOL WINAPI Monitor_SET_Brightness(DWORD dwNewBrightness);
    BOOL WINAPI Monitor_SET_Contrast(DWORD dwNewContrast);
    BOOL WINAPI Monitor_SET_Ggain(DWORD dwNewGain);
    BOOL WINAPI Monitor_SET_Rgain(DWORD dwNewGain);
    BOOL WINAPI Monitor_SET_SPK_Volume(DWORD dwNewValue);
    BOOL WINAPI Monitor_SET_SPK_Volume(DWORD dwNewValue);
    BOOL WINAPI Monitor_SET_VCP_code(BYTE bVCPCode, DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_AdvancedBlackBoost(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_AimPointColor(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_AimType(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_BlackBoost(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_BlueLight(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_Calibration_Mode(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_ColorSense(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_ColorSpace(DWORD dwNewValue)
    BOOL WINAPI Monitor_Set_ColorTemp(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_DisplayMode(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_FactoryReset();
    BOOL WINAPI Monitor_Set_FreeSync(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_Gamma(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_KeyLock(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_LightSense(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_LightningSelection(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_OD(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_PowerIndicator(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_PowerKey(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_PowerModeControl(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_ProxiSense(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_RefreshRate(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_SniperNightVision(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_SniperRatio(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_SniperSize(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_USBPortSelect(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_UltraLowLatency(DWORD dwNewValue);
    BOOL WINAPI Monitor_Set_VRB(DWORD dwNewValue);

    BOOL WINAPI acer_delete_AppfromList(const WCHAR *lpwcString);
    BOOL WINAPI acer_init_windows_evenet_hook(DWORD dwNewValue); //intentional typo
    BOOL acer_query_monitor_model_name();
    BOOL WINAPI acer_set_app_string(wchar_t* String1, int a2, int a3);
    BOOL acer_unhook_windows_event();

#ifdef __cplusplus
}
#endif
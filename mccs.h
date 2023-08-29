#ifndef _ACER_MCCS_H_
#define _ACER_MCCS_H_

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
}

#ifdef __cplusplus
extern "C"
{
#endif

    // calls

#ifdef __cplusplus
}
#endif
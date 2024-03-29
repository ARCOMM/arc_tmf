//#define pixelW  (1 / (getResolution select 2))
//#define pixelH  (1 / (getResolution select 3))
#define pixelScale	0.50

#define GRID_W (pixelW * pixelGrid * pixelScale)
#define GRID_H (pixelH * pixelGrid * pixelScale)

#define CENTER_X	((getResolution select 2) * 0.5 * pixelW)
#define CENTER_Y	((getResolution select 3) * 0.5 * pixelH)

// 720px
#define WINDOW_W	120
#define WINDOW_H	180
#define WINDOW_HAbs (safezoneH min (WINDOW_H * GRID_H))

#define WINDOW_PREVIEW_W	WINDOW_W
#define WINDOW_PREVIEW_H	65
#define WINDOW_PREVIEW_HAbs	(safezoneH min (WINDOW_PREVIEW_H * GRID_H))

#define ATTRIBUTE_TITLE_W	48
#define ATTRIBUTE_CONTENT_W	82
#define ATTRIBUTE_CONTENT_H	5


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Fonts
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define FONT_NORMAL			"RobotoCondensedLight"
#define FONT_SEMIBOLD			"RobotoCondensed"
#define FONT_BOLD			"RobotoCondensedBold"
#define FONT_THIN			"RobotoCondensedLight"
#define FONT2_NORMAL			"PuristaMedium"
#define FONT2_BOLD			"PuristaSemiBold"
#define FONT2_THIN			"PuristaLight"
#define FONT_MONO			"EtelkaMonospacePro"
#define FONT_NARROW			"EtelkaNarrowMediumPro"
#define FONT_CODE			"LucidaConsoleB"
#define FONT_SYSTEM			"TahomaB"

// HEMTT doesn't support __EXEC __EVAL
#ifdef ALLOW_EXECEVAL
    #define SIZEEX_PURISTA(SIZEPX)      __EVAL([SIZEPX,1.8,[6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,34,35,37,46]] call _fnc_sizeEx)
    #define SIZEEX_ETELKA(SIZEPX)       __EVAL([SIZEPX,1.55,[6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,34,35,37,46]] call _fnc_sizeEx)
    #define SIZEEX_TAHOMA(SIZEPX)       __EVAL([SIZEPX,1.6,[16]] call _fnc_sizeEx)
    #define SIZEEX_LUCIDA(SIZEPX)       __EVAL([SIZEPX,1.6,[8,11]] call _fnc_sizeEx)

    #define SIZEEX_PURISTA_XS SIZEEX_PURISTA(SIZEEX_XS)
    #define SIZEEX_PURISTA_S  SIZEEX_PURISTA(SIZEEX_S)
    #define SIZEEX_PURISTA_M  SIZEEX_PURISTA(SIZEEX_M)
    #define SIZEEX_PURISTA_L  SIZEEX_PURISTA(SIZEEX_L)
    #define SIZEEX_PURISTA_XL SIZEEX_PURISTA(SIZEEX_XL)

    #define SIZEEX_ETELKA_XS  SIZEEX_ETELKA(SIZEEX_XS)
    #define SIZEEX_ETELKA_S   SIZEEX_ETELKA(SIZEEX_S)
    #define SIZEEX_ETELKA_M   SIZEEX_ETELKA(SIZEEX_M)
    #define SIZEEX_ETELKA_L   SIZEEX_ETELKA(SIZEEX_L)
    #define SIZEEX_ETELKA_XL  SIZEEX_ETELKA(SIZEEX_XL)

    #define SIZEEX_TAHOMA_XS  SIZEEX_TAHOMA(SIZEEX_XS)
    #define SIZEEX_TAHOMA_S   SIZEEX_TAHOMA(SIZEEX_S)
    #define SIZEEX_TAHOMA_M   SIZEEX_TAHOMA(SIZEEX_M)
    #define SIZEEX_TAHOMA_L   SIZEEX_TAHOMA(SIZEEX_L)
    #define SIZEEX_TAHOMA_XL  SIZEEX_TAHOMA(SIZEEX_XL)

    #define SIZEEX_LUCIDA_XS  SIZEEX_LUCIDA(SIZEEX_XS)
    #define SIZEEX_LUCIDA_S   SIZEEX_LUCIDA(SIZEEX_S)
    #define SIZEEX_LUCIDA_M   SIZEEX_LUCIDA(SIZEEX_M)
    #define SIZEEX_LUCIDA_L   SIZEEX_LUCIDA(SIZEEX_L)
    #define SIZEEX_LUCIDA_XL  SIZEEX_LUCIDA(SIZEEX_XL)
#else
    #define SIZEEX_PURISTA_XS 2.88 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_PURISTA_S  3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_PURISTA_M  4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_PURISTA_L  4.86 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_PURISTA_XL 5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5

    #define SIZEEX_ETELKA_XS  2.945 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_ETELKA_S   3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_ETELKA_M   4.495 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_ETELKA_L   4.805 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_ETELKA_XL  5.735 * (1 / (getResolution select 3)) * pixelGrid * 0.5

    #define SIZEEX_TAHOMA_XS  2.56 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_TAHOMA_S   2.56 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_TAHOMA_M   2.56 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_TAHOMA_L   2.56 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_TAHOMA_XL  2.56 * (1 / (getResolution select 3)) * pixelGrid * 0.5

    #define SIZEEX_LUCIDA_XS  1.76 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_LUCIDA_S   1.76 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_LUCIDA_M   1.76 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_LUCIDA_L   1.76 * (1 / (getResolution select 3)) * pixelGrid * 0.5
    #define SIZEEX_LUCIDA_XL  1.76 * (1 / (getResolution select 3)) * pixelGrid * 0.5
#endif

#define SIZEEX_XS	3.0
#define SIZEEX_S	4.0
#define SIZEEX_M	4.5
#define SIZEEX_L	5.0
#define SIZEEX_XL	6.0

#define SIZE_XS	3.5
#define SIZE_S	4
#define SIZE_M	5
#define SIZE_L	5
#define SIZE_XL	6

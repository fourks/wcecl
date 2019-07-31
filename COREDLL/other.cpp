// other.cpp : contains unknown and weird functions
#include "stdafx.h"

// Functions
Stub(delete_WCECL);
Stub(new_WCECL);

LCID WINAPI ConvertDefaultLocale_WCECL(LCID Locale)
{
	auto result = ConvertDefaultLocale(Locale);
	return result;
}

int _snwprintf_WCECL(wchar_t * buf, size_t bufCount, const wchar_t * fmt, ...)
{
#pragma warning( push )
#pragma warning( disable: 4995 )
	va_list args;
	va_start(args, fmt);

	auto result = _snwprintf(buf, bufCount, fmt, args);

	va_end(args);

#pragma warning( pop )

	return result;
}

int __cdecl swscanf_WCECL(const wchar_t * buf, const wchar_t * fmt, ...)
{
#pragma warning( push )
#pragma warning( disable: 4995 )
	va_list args;
	va_start(args, fmt);

	auto result = swscanf(buf, fmt, args);

	va_end(args);
#pragma warning( pop )

	return result;
}

int swprintf_WCECL(wchar_t * buf, const wchar_t * _format, ...)
{
#pragma warning( push )
#pragma warning( disable: 4995 )
	va_list args;
	va_start(args, _format);

	auto result = swprintf(buf, _format, args);

	va_end(args);
#pragma warning( pop )

	return result;
}

int _wcsicmp_WCECL(
	const wchar_t *string1,
	const wchar_t *string2)
{
	auto result = _wcsicmp(string1, string2);
	return result;
}

DWORD WINAPI RasDial_WCECL(LPRASDIALEXTENSIONS Arg1, LPCWSTR Arg2, LPRASDIALPARAMSW Arg3, DWORD Arg4, LPVOID Arg5, LPHRASCONN Arg6)
{
	// review me
	auto result = ::RasDialW(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
	return result;
}


DWORD WINAPI RasHangup_WCECL(HRASCONN Arg1) // @344
{
	auto result = ::RasHangUpW(Arg1);
	return result;
}

DWORD WINAPI RasHangUp_WCECL(HRASCONN Arg1) // @343
{
	auto result = ::RasHangUpW(Arg1);
	return result;
}

/*int fwprintf(FILE* const _Stream, wchar_t const* const _Format, ...)
{
	va_list args;
	va_start(args, _Format);

	int result = ::fwprintf(_Stream, _Format, args);

	va_end(args);
	return result;
}*/

void terminate_WCECL()
{
	exit(0); // std::terminate should be used here
}

void CeLogSetZones(DWORD dwZoneUser,        // User-defined zones
	DWORD dwZoneCE,          // Predefined zones
	DWORD dwZoneProcess)
{
	// wtf!?
}

// Stubs
Stub(_setjmp3_WCECL);
Stub(_allmul_WCECL);
Stub(_alldiv_WCECL);
Stub(_SEH_epilog_WCECL);
Stub(_SEH_prolog_WCECL);
Stub(__security_gen_cookie_WCECL);
Stub(GetProcessIndexFromID);
Stub(type_info);
Stub(CeLogReSync);
Stub(TlsCall_WCECL) // DWORD WINAPI TlsCall(DWORD p1, DWORD p2);
Stub(EventModify_WCECL); // HANDLE hEvent, DWORD func
Stub(_ftol_WCECL);
Stub(THCreateSnapshot);
Stub(GetHeapSnapshot);
Stub(CloseGestureInfoHandle);
Stub(Gesture);
Stub(GetGestureExtraArguments);
Stub(SetWindowPosOnRotate);
Stub(SetAssociatedMenu);
Stub(GetAssociatedMenu);
Stub(GetOwnerProcess);
Stub(__dtou);
Stub(__rt_ursh);
Stub(SetDialogAutoScrollBar);
Stub(GetAnimateMessageInfo);
Stub(GetWindowAutoGesture);
Stub(SetWindowAutoGesture);
Stub(GetMessageSource);
Stub(__GetUserKData);
Stub(GetAPIAddress);
Stub(GetGweApiSetTables);
Stub(RegisterDefaultGestureHandler);
Stub(lineAddProvider);
Stub(DSA_Clone_WCECL)
Stub(DSA_Search);
Stub(WeirdThing1865);
Stub(WeirdThing1866);
Stub(WeirdThing1846);
Stub(WeirdThing1849);
Stub(WeirdThing1841);
Stub(WeirdThing1840);
Stub(_ftol2_WCECL);
Stub(_ftol2_sse_WCECL);
Stub(_CIsqrt_WCECL);
Stub(_aulldiv_WCECL);

/*
 * OpenKore - Padded Packet Emulator.
 * Copyright (c) 2007 kLabMouse, Japplegame, and many other contributors
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl.html for the full license.
 */

/**
 * Functions for accessing the padded packets engine.
 * These functions are also exported as DLL functions.
 */

#ifndef _ROPP_DLL_INTERFACE_H_
#define _ROPP_DLL_INTERFACE_H_

#include "typedefs.h"

DLL_CEXPORT dword STDCALL CreateSitStand(byte *packet, dword sit);
DLL_CEXPORT dword STDCALL CreateAtk(byte *packet, dword targetId, dword ctrl);
DLL_CEXPORT dword STDCALL CreateSkillUse(byte *packet, dword skillId, dword skillLv, dword targetId);
DLL_CEXPORT void  STDCALL SetMapSync(dword mapSync);
DLL_CEXPORT void  STDCALL SetSync(dword sync);
DLL_CEXPORT void  STDCALL SetAccountId(dword accountId);

DLL_CEXPORT void  STDCALL DecodePacket(byte *packet, dword keyCount);
DLL_CEXPORT dword STDCALL GetKey(dword keyIndex);
DLL_CEXPORT void  STDCALL SetPacket(byte *packet, dword packetLength, dword targetId);

DLL_CEXPORT void  STDCALL SetPacketIDs(word sit, word skill);

#endif /* _ROPP_DLL_INTERFACE_H_ */

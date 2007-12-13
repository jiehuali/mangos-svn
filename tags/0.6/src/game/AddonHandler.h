/* 
 * Copyright (C) 2005,2006,2007 MaNGOS <http://www.mangosproject.org/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __ADDONHANDLER_H
#define __ADDONHANDLER_H

#include "Common.h"
#include "Policies/Singleton.h"
#include "WorldPacket.h"
#include "Config/ConfigEnv.h"

class AddonHandler
{
    public:
        /* Construction */
        AddonHandler();
        ~AddonHandler();
                                                            //built addon packet
        void BuildAddonPacket(WorldPacket* Source, WorldPacket* Target, uint32 Packetoffset);
};
#define sAddOnHandler MaNGOS::Singleton<AddonHandler>::Instance()
#endif
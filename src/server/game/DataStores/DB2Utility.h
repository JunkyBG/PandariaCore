/*
 * Copyright (C) 2011-2014 Project SkyFire <http://www.projectskyfire.org/>
 * Copyright (C) 2008-2014 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2014 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DB2PACKETWRITER_H
#define DB2PACKETWRITER_H

#include "Define.h"

template<class T>
class DB2Storage;
class ByteBuffer;
struct BroadcastTextEntry;
struct ItemEntry;
struct ItemSparseEntry;

namespace DB2Utilities
{
    //
    bool HasBroadcastTextEntry(DB2Storage<BroadcastTextEntry> const& store, uint32 id);
    bool HasItemEntry(DB2Storage<ItemEntry> const& store, uint32 id);
    bool HasItemSparseEntry(DB2Storage<ItemSparseEntry> const& store, uint32 id);

    //
    void WriteBroadcastTextDbReply(DB2Storage<BroadcastTextEntry> const& store, uint32 id, uint32 locale, ByteBuffer& buffer);
    void WriteItemDbReply(DB2Storage<ItemEntry> const& store, uint32 id, uint32 locale, ByteBuffer& buffer);
    void WriteItemSparseDbReply(DB2Storage<ItemSparseEntry> const& store, uint32 id, uint32 locale, ByteBuffer& buffer);
}

#endif // DB2PACKETWRITER_H

/*
 -------------------------------------------------------------------------------
    This file is part of libuhs.
    Copyright (C) 2015  Thoronador

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 -------------------------------------------------------------------------------
*/

#include "LinkChunk.hpp"

namespace libuhs
{

LinkChunk::LinkChunk(const uint32_t start, const std::string& lbl, const uint32_t dest)
: BasicChunk(),
  startingLine(start),
  label(lbl),
  destinationLine(dest)
{
}

ChunkType LinkChunk::getType() const
{
  return ChunkType::link;
}

} //namespace
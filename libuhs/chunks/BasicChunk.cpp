/*
 -------------------------------------------------------------------------------
    This file is part of libuhs.
    Copyright (C) 2015  Dirk Stolle

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

#include "BasicChunk.hpp"

namespace libuhs
{

BasicChunk::BasicChunk(const std::string& label)
: m_Label(label)
{
}

const std::string& BasicChunk::getLabel() const
{
  return m_Label;
}

void BasicChunk::setLabel(const std::string& newLabel)
{
  m_Label = newLabel;
}

} //namespace

/* Copyright 2018 Alexander Matthes
 *
 * This file is part of LLAMA.
 *
 * LLAMA is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * LLAMA is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with LLAMA.  If not, see <www.gnu.org/licenses/>.
 */

#pragma once

#define LLAMA_VERSION_MAJOR 0
#define LLAMA_VERSION_MINOR 1
#define LLAMA_VERSION_PATCH 0

#include "Types.hpp"
#include "DatumStruct.hpp"
#include "DatumArray.hpp"
#include "UserDomain.hpp"

#include "allocator/Vector.hpp"
#include "allocator/SharedPtr.hpp"
#include "allocator/Stack.hpp"

#include "Factory.hpp"

#include "mapping/AoS.hpp"
#include "mapping/SoA.hpp"
#include "mapping/One.hpp"

#include "preprocessor/macros.hpp"
#include "preprocessor/DefineDatumDomain.hpp"

#include "ForEach.hpp"

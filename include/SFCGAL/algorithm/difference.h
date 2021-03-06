/**
 *   SFCGAL
 *
 *   Copyright (C) 2012-2013 Oslandia <infos@oslandia.com>
 *   Copyright (C) 2012-2013 IGN (http://www.ign.fr)
 *
 *   This library is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU Library General Public
 *   License as published by the Free Software Foundation; either
 *   version 2 of the License, or (at your option) any later version.
 *   
 *   This library is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *   Library General Public License for more details.

 *   You should have received a copy of the GNU Library General Public
 *   License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SFCGAL_DIFFERENCE_ALGORITHM
#define SFCGAL_DIFFERENCE_ALGORITHM

#include <memory>
#include <SFCGAL/export.h>

namespace SFCGAL {
class Geometry;
namespace detail {
template <int Dim> class GeometrySet;
}
namespace algorithm {
/**
 * Difference between two 2D geometries.
 */
SFCGAL_API std::auto_ptr<Geometry> difference( const Geometry& ga, const Geometry& gb );

/**
 * Difference between two geometry sets
 */
template <int Dim>
void difference( const detail::GeometrySet<Dim>& a, const detail::GeometrySet<Dim>& b, detail::GeometrySet<Dim>& output );
}
}

#endif

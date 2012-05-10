/*
 * $Revision: 2027 $
 *
 * last checkin:
 *   $Author: gutwenger $
 *   $Date: 2010-09-01 11:55:17 +0200 (Wed, 01 Sep 2010) $
 ***************************************************************/

/** \file
 * \brief Merges nodes with solar system rules.
 *
 * \author Gereon Bartel
 *
 * \par License:
 * This file is part of the Open Graph Drawing Framework (OGDF).
 *
 * Copyright (C). All rights reserved.
 * See README.txt in the root directory of the OGDF installation for details.
 *
 * \par
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * Version 2 or 3 as published by the Free Software Foundation
 * and appearing in the files LICENSE_GPL_v2.txt and
 * LICENSE_GPL_v3.txt included in the packaging of this file.
 *
 * \par
 * In addition, as a special exception, you have permission to link
 * this software with the libraries of the COIN-OR Osi project
 * (http://www.coin-or.org/projects/Osi.xml), all libraries required
 * by Osi, and all LP-solver libraries directly supported by the
 * COIN-OR Osi project, and distribute executables, as long as
 * you follow the requirements of the GNU General Public License
 * in regard to all of the software in the executable aside from these
 * third-party libraries.
 *
 * \par
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * \par
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * \see  http://www.gnu.org/copyleft/gpl.html
 ***************************************************************/

#include <ogdf/energybased/multilevelmixer/MultilevelBuilder.h>

#ifdef _MSC_VER
#pragma once
#endif

#ifndef OGDF_SOLAR_MERGER_H
#define OGDF_SOLAR_MERGER_H

namespace ogdf {

struct PathData {
	PathData(int targetSun = 0, float length = 0.0f, int number = 0)
		:targetSun(targetSun), length(length), number(number)
	{};
	int targetSun;
	float length;
	int number;
};

class OGDF_EXPORT SolarMerger : public MultilevelBuilder
{
private:
	bool m_sunSelectionSimple;
	bool m_massAsNodeRadius;
	NodeArray<unsigned int> m_mass;
	NodeArray<float> m_radius;
	NodeArray<int> m_celestial; // 0 = unknown, 1 = sun, 2 = planet, 3 = moon
	NodeArray<node> m_orbitalCenter;
	NodeArray<float> m_distanceToOrbit;
	NodeArray< std::vector<PathData> > m_pathDistances;
	std::map< int, std::map<int, PathData> > m_interSystemPaths;

	node sunOf(node object);
	float distanceToSun(node object, MultilevelGraph &MLG);
	void addPath(node sourceSun, node targetSun, float distance);
	void findInterSystemPaths(Graph &G, MultilevelGraph &MLG);
	int calcSystemMass(node v);
	bool collapsSolarSystem(MultilevelGraph &MLG, node sun, int level);
	bool buildOneLevel(MultilevelGraph &MLG);
	std::vector<node> selectSuns(MultilevelGraph &MLG);

public:
	SolarMerger(bool simple = false, bool massAsNodeRadius = false);

	void buildAllLevels(MultilevelGraph &MLG);
};

} // namespace ogdf

#endif

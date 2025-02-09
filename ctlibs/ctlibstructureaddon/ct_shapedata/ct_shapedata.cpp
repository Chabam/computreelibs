/****************************************************************************

 Copyright (C) 2010-2012 the Office National des Forêts (ONF), France
                     and the Association de Recherche Technologie et Sciences (ARTS), Ecole Nationale Supérieure d'Arts et Métiers (ENSAM), Cluny, France.
                     All rights reserved.

 Contact : alexandre.piboule@onf.fr

 Developers : Michaël KREBS (ARTS/ENSAM)

 This file is part of PluginShared library 2.0.

 PluginShared is free library: you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 PluginShared is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU Lesser General Public License
 along with PluginShared.  If not, see <http://www.gnu.org/licenses/lgpl.html>.

*****************************************************************************/

#include "ct_shapedata.h"

CT_ShapeData::CT_ShapeData(const Eigen::Vector3d& center, const Eigen::Vector3d& direction)
{
    _center = center;
    _direction = direction;
    _direction.normalize();
}

CT_ShapeData::~CT_ShapeData() {};

const Eigen::Vector3d& CT_ShapeData::getCenter() const
{
    return _center;
}

const Eigen::Vector3d& CT_ShapeData::getDirection() const
{
    return _direction;
}

void CT_ShapeData::setCenterX(const double& x)
{
    _center(0) = x;
}

void CT_ShapeData::setCenterY(const double& y)
{
    _center(1) = y;
}

void CT_ShapeData::setCenterZ(const double& z)
{
    _center(2) = z;
}

void CT_ShapeData::setCenter(const Eigen::Vector3d& center)
{
    _center = center;
}

void CT_ShapeData::setDirection(const Eigen::Vector3d& direction)
{
    _direction = direction;
    _direction.normalize();
}

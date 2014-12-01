/*
 * Copyright 2014 Christian Loose <christian.loose@hamburg.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef STYLECOLLECTION_H
#define STYLECOLLECTION_H

#include <QString>
#include <QStringList>
#include "style.h"


class StyleCollection
{
public:
    StyleCollection();

    void insert(const Style &style);

    QStringList styleNames() const;
    bool contains(const QString &name) const;
    const Style style(const QString &name) const;

private:
    QStringList stylesIndex;
    QList<Style> styles;
};

#endif // STYLECOLLECTION_H


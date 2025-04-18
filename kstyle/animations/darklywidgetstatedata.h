#ifndef darklywidgetstatedata_h
#define darklywidgetstatedata_h

/*************************************************************************
 * Copyright (C) 2014 by Hugo Pereira Da Costa <hugo.pereira@free.fr>    *
 *                                                                       *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 *************************************************************************/

#include "darklygenericdata.h"

namespace Darkly
{

//* handle widget state (hover/focus/enable) changes
class WidgetStateData : public GenericData
{
    Q_OBJECT

public:
    //* constructor
    WidgetStateData(QObject *parent, QWidget *target, int duration, bool state = false)
        : GenericData(parent, target, duration)
        , _initialized(false)
        , _state(state)
    {
    }

    //* destructor
    virtual ~WidgetStateData()
    {
    }

    /**
    returns true if hover has Changed
    and starts timer accordingly
    */
    virtual bool updateState(bool value, AnimationParameters parameters = AnimationDefaut);

private:
    bool _initialized;
    bool _state;
};

}

#endif

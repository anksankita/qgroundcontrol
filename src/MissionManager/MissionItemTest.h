/*=====================================================================
 
 QGroundControl Open Source Ground Control Station
 
 (c) 2009 - 2015 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 
 This file is part of the QGROUNDCONTROL project
 
 QGROUNDCONTROL is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 QGROUNDCONTROL is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with QGROUNDCONTROL. If not, see <http://www.gnu.org/licenses/>.
 
 ======================================================================*/

#ifndef MissionItemTest_H
#define MissionItemTest_H

#include "UnitTest.h"
#include "MultiSignalSpy.h"
#include "MissionItem.h"

/// Unit test for the MissionItem Object
class MissionItemTest : public UnitTest
{
    Q_OBJECT
    
public:
    MissionItemTest(void);
    
private slots:
    void _testSetGet(void);
    void _testSignals(void);
    void _testFactSignals(void);
    void _testLoadFromStream(void);
    void _testSimpleLoadFromStream(void);
    void _testLoadFromJson(void);
    void _testSimpleLoadFromJson(void);
    void _testSaveToJson(void);

private:
    void _checkExpectedMissionItem(const MissionItem& missionItem);
};

#endif

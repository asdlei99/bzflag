/* bzflag
 * Copyright (c) 1993-2023 Tim Riker
 *
 * This package is free software;  you can redistribute it and/or
 * modify it under the terms of the license found in the file
 * named COPYING that should have accompanied this file.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "common.h"

// interface header
#include "WorldFileObject.h"

// system headers
#include <string>
#include <string.h>
#include <iostream>
#include <vector>

WorldFileObject::WorldFileObject()
{
    name = "";
    lines = 0;
}


bool WorldFileObject::read(const char *cmd, std::istream& input)
{
    if (strcasecmp(cmd, "name") == 0)
    {
        input >> name;
        return true;
    }
    return false;
}


void WorldFileObject::writeToWorld(WorldInfo*) const
{
    std::cout << "ERROR: writeToWorld() called improperly" << std::endl;
    return;
}


void WorldFileObject::writeToManager() const
{
    std::cout << "ERROR: writeToManager() called improperly" << std::endl;
    return;
}


void WorldFileObject::writeToGroupDef(GroupDefinition*) const
{
    std::cout << "ERROR: writeToGroupDef() called improperly" << std::endl;
    return;
}

int WorldFileObject::getLineCount() const
{
    return lines;
}


/** delete all of the world file objects from a vector list
 */

void emptyWorldFileObjectList(std::vector<WorldFileObject*>& wlist)
{
    const int n = wlist.size();
    for (int i = 0; i < n; ++i)
        delete wlist[i];
    wlist.clear();
}


// Local variables: ***
// mode: C++ ***
// tab-width: 4***
// c-basic-offset: 4 ***
// indent-tabs-mode: nil ***
// End: ***
// ex: shiftwidth=4 tabstop=4

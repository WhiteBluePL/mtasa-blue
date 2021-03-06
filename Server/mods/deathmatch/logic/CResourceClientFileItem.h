/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CResourceClientFileItem.h
 *  PURPOSE:     Resource client-side file item class
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#pragma once

#include "CResourceFile.h"

class CResourceClientFileItem : public CResourceFile
{
public:
    CResourceClientFileItem(class CResource* resource, const char* szShortName, const char* szResourceFileName, CXMLAttributes* xmlAttributes,
                            bool bClientAutoDownload = true);
    ~CResourceClientFileItem(void);

    bool Start(void);
    bool Stop(void);

    bool IsAutoDownload(void) { return m_bClientAutoDownload; };

private:
    bool m_bClientAutoDownload;
};

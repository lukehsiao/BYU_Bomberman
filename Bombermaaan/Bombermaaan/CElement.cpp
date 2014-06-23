/************************************************************************************

    Copyright (C) 2000-2002, 2007 Thibaut Tollemer

    This file is part of Bombermaaan.

    Bombermaaan is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Bombermaaan is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Bombermaaan.  If not, see <http://www.gnu.org/licenses/>.

************************************************************************************/


/**
 *  \file CElement.cpp
 *  \brief An element of the arena
 */

#include "STDAFX.H"
#include "CElement.h"
#include "CArenaSnapshot.h"

//******************************************************************************************************************************
//******************************************************************************************************************************
//******************************************************************************************************************************

CElement::CElement (void)
{
    m_Exist = false;
    m_pDisplay = NULL;
    m_pSound = NULL;
    m_pArena = NULL;
}

//******************************************************************************************************************************
//******************************************************************************************************************************
//******************************************************************************************************************************

CElement::~CElement (void)
{
}

//******************************************************************************************************************************
//******************************************************************************************************************************
//******************************************************************************************************************************

void CElement::Create (void)
{
    m_Exist = true;
    ASSERT (m_pArena != NULL);
    ASSERT (m_pDisplay != NULL);
    ASSERT (m_pSound != NULL);
}

//******************************************************************************************************************************
//******************************************************************************************************************************
//******************************************************************************************************************************

void CElement::Destroy (void)
{
    m_Exist = false;
    m_pDisplay = NULL;
    m_pSound = NULL;
    m_pArena = NULL;
}

//******************************************************************************************************************************
//******************************************************************************************************************************
//******************************************************************************************************************************

void CElement::WriteSnapshot (CArenaSnapshot& Snapshot)
{
    Snapshot.WriteBoolean(m_Exist);

    if (m_Exist)
        OnWriteSnapshot(Snapshot);
}

//******************************************************************************************************************************
//******************************************************************************************************************************
//******************************************************************************************************************************

void CElement::ReadSnapshot (CArenaSnapshot& Snapshot)
{
    Snapshot.ReadBoolean(&m_Exist);

    if (m_Exist)
        OnReadSnapshot(Snapshot);
}

//******************************************************************************************************************************
//******************************************************************************************************************************
//******************************************************************************************************************************

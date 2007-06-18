/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TwoSidedLightingChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETWOSIDEDLIGHTINGCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGTwoSidedLightingChunkBase.h"
#include "OSGTwoSidedLightingChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TwoSidedLightingChunk
    
 */


TwoSidedLightingChunkBase::TypeObject TwoSidedLightingChunkBase::_type(
    TwoSidedLightingChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TwoSidedLightingChunkBase::createEmpty,
    TwoSidedLightingChunk::initMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TwoSidedLightingChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TwoSidedLightingChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &TwoSidedLightingChunkBase::getType(void) const
{
    return _type;
}

UInt32 TwoSidedLightingChunkBase::getContainerSize(void) const
{
    return sizeof(TwoSidedLightingChunk);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 TwoSidedLightingChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void TwoSidedLightingChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void TwoSidedLightingChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
TwoSidedLightingChunkPtr TwoSidedLightingChunkBase::create(void)
{
    TwoSidedLightingChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<TwoSidedLightingChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
TwoSidedLightingChunkPtr TwoSidedLightingChunkBase::createEmpty(void)
{
    TwoSidedLightingChunkPtr returnValue;

    newPtr<TwoSidedLightingChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr TwoSidedLightingChunkBase::shallowCopy(void) const
{
    TwoSidedLightingChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const TwoSidedLightingChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TwoSidedLightingChunkBase::TwoSidedLightingChunkBase(void) :
    Inherited()
{
}

TwoSidedLightingChunkBase::TwoSidedLightingChunkBase(const TwoSidedLightingChunkBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

TwoSidedLightingChunkBase::~TwoSidedLightingChunkBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void TwoSidedLightingChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TwoSidedLightingChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TwoSidedLightingChunkBase::createAspectCopy(void) const
{
    TwoSidedLightingChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TwoSidedLightingChunk *>(this));

    return returnValue;
}
#endif

void TwoSidedLightingChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TwoSidedLightingChunkPtr>::_type("TwoSidedLightingChunkPtr", "StateChunkPtr");
#endif


OSG_END_NAMESPACE

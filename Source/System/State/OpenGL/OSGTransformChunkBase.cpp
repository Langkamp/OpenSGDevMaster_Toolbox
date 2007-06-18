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
 **     class TransformChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETRANSFORMCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGTransformChunkBase.h"
#include "OSGTransformChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TransformChunk
    \ingroup GrpSystemState

    See \ref PageSystemTransformChunk for a description.

    This chunk wraps glMultMatrix() for the GL_MODELVIEW matrix mode.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Matrix          TransformChunkBase::_sfMatrix
    
*/


void TransformChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFMatrix *(TransformChunkBase::*GetSFMatrixF)(void) const;

    GetSFMatrixF GetSFMatrix = &TransformChunkBase::getSFMatrix;
#endif

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "matrix",
        "",
        MatrixFieldId, MatrixFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TransformChunkBase::editSFMatrix),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFMatrix));
#else
        reinterpret_cast<FieldGetMethodSig >(&TransformChunkBase::getSFMatrix));
#endif

    oType.addInitialDesc(pDesc);
}


TransformChunkBase::TypeObject TransformChunkBase::_type(
    TransformChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TransformChunkBase::createEmpty,
    TransformChunk::initMethod,
    (InitalInsertDescFunc) &TransformChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TransformChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemTransformChunk for a description.\n"
    "\n"
    "This chunk wraps glMultMatrix() for the GL_MODELVIEW matrix mode.\n"
    "\t<Field\n"
    "\t\tname=\"matrix\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemTransformChunk for a description.\n"
    "\n"
    "This chunk wraps glMultMatrix() for the GL_MODELVIEW matrix mode.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TransformChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &TransformChunkBase::getType(void) const
{
    return _type;
}

UInt32 TransformChunkBase::getContainerSize(void) const
{
    return sizeof(TransformChunk);
}

/*------------------------- decorator get ------------------------------*/


SFMatrix *TransformChunkBase::editSFMatrix(void)
{
    editSField(MatrixFieldMask);

    return &_sfMatrix;
}

const SFMatrix *TransformChunkBase::getSFMatrix(void) const
{
    return &_sfMatrix;
}

#ifdef OSG_1_GET_COMPAT
SFMatrix            *TransformChunkBase::getSFMatrix         (void)
{
    return this->editSFMatrix         ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 TransformChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        returnValue += _sfMatrix.getBinSize();
    }

    return returnValue;
}

void TransformChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyToBin(pMem);
    }
}

void TransformChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TransformChunkPtr TransformChunkBase::create(void)
{
    TransformChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<TransformChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
TransformChunkPtr TransformChunkBase::createEmpty(void)
{
    TransformChunkPtr returnValue;

    newPtr<TransformChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr TransformChunkBase::shallowCopy(void) const
{
    TransformChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const TransformChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TransformChunkBase::TransformChunkBase(void) :
    Inherited(),
    _sfMatrix                 ()
{
}

TransformChunkBase::TransformChunkBase(const TransformChunkBase &source) :
    Inherited(source),
    _sfMatrix                 (source._sfMatrix                 )
{
}


/*-------------------------- destructors ----------------------------------*/

TransformChunkBase::~TransformChunkBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void TransformChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TransformChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TransformChunkBase::createAspectCopy(void) const
{
    TransformChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TransformChunk *>(this));

    return returnValue;
}
#endif

void TransformChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TransformChunkPtr>::_type("TransformChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TransformChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, TransformChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, TransformChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE

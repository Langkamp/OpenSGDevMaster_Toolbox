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
 **     class ShaderParameterMVec2f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERMVEC2FINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterMVec2fBase.h"
#include "OSGShaderParameterMVec2f.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterMVec2f
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec2f           ShaderParameterMVec2fBase::_mfValue
    parameter value
*/


void ShaderParameterMVec2fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFVec2f::Description(
        MFVec2f::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShaderParameterMVec2fBase::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderParameterMVec2fBase::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderParameterMVec2fBase::TypeObject ShaderParameterMVec2fBase::_type(
    ShaderParameterMVec2fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShaderParameterMVec2fBase::createEmptyLocal,
    ShaderParameterMVec2f::initMethod,
    ShaderParameterMVec2f::exitMethod,
    (InitalInsertDescFunc) &ShaderParameterMVec2fBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterMVec2f\"\n"
    "\tparent=\"ShaderParameter\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterMVec2fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterMVec2fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterMVec2fBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterMVec2f);
}

/*------------------------- decorator get ------------------------------*/


MFVec2f *ShaderParameterMVec2fBase::editMFValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return &_mfValue;
}

const MFVec2f *ShaderParameterMVec2fBase::getMFValue(void) const
{
    return &_mfValue;
}

#ifdef OSG_1_GET_COMPAT
MFVec2f             *ShaderParameterMVec2fBase::getMFValue          (void)
{
    return this->editMFValue          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterMVec2fBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterMVec2fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }
}

void ShaderParameterMVec2fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderParameterMVec2fTransitPtr ShaderParameterMVec2fBase::create(void)
{
    ShaderParameterMVec2fTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderParameterMVec2f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderParameterMVec2fTransitPtr ShaderParameterMVec2fBase::createLocal(BitVector bFlags)
{
    ShaderParameterMVec2fTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderParameterMVec2f>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterMVec2fPtr ShaderParameterMVec2fBase::createEmpty(void)
{
    ShaderParameterMVec2fPtr returnValue;

    newPtr<ShaderParameterMVec2f>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

ShaderParameterMVec2fPtr ShaderParameterMVec2fBase::createEmptyLocal(BitVector bFlags)
{
    ShaderParameterMVec2fPtr returnValue;

    newPtr<ShaderParameterMVec2f>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderParameterMVec2fBase::shallowCopy(void) const
{
    ShaderParameterMVec2fPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const ShaderParameterMVec2f *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr ShaderParameterMVec2fBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderParameterMVec2fPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderParameterMVec2f *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShaderParameterMVec2fBase::ShaderParameterMVec2fBase(void) :
    Inherited(),
    _mfValue                  ()
{
}

ShaderParameterMVec2fBase::ShaderParameterMVec2fBase(const ShaderParameterMVec2fBase &source) :
    Inherited(source),
    _mfValue                  (source._mfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderParameterMVec2fBase::~ShaderParameterMVec2fBase(void)
{
}


GetFieldHandlePtr ShaderParameterMVec2fBase::getHandleValue           (void) const
{
    MFVec2f::GetHandlePtr returnValue(
        new  MFVec2f::GetHandle(
             &_mfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderParameterMVec2fBase::editHandleValue          (void)
{
    MFVec2f::EditHandlePtr returnValue(
        new  MFVec2f::EditHandle(
             &_mfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    editMField(ValueFieldMask, _mfValue);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterMVec2fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterMVec2fBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ShaderParameterMVec2fBase::createAspectCopy(void) const
{
    ShaderParameterMVec2fPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterMVec2f *>(this));

    return returnValue;
}
#endif

void ShaderParameterMVec2fBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfValue.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterMVec2fPtr>::_type("ShaderParameterMVec2fPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterMVec2fPtr)

OSG_EXPORT_PTR_SFIELD_FULL(FieldContainerPtrSField, 
                           ShaderParameterMVec2fPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(FieldContainerPtrMField, 
                           ShaderParameterMVec2fPtr, 
                           0);

OSG_END_NAMESPACE

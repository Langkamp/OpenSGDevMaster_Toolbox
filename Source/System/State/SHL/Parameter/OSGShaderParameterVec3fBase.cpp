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
 **     class ShaderParameterVec3f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERVEC3FINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterVec3fBase.h"
#include "OSGShaderParameterVec3f.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterVec3f
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec3f           ShaderParameterVec3fBase::_sfValue
    parameter value
*/


void ShaderParameterVec3fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderParameterVec3f::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderParameterVec3f::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderParameterVec3fBase::TypeObject ShaderParameterVec3fBase::_type(
    ShaderParameterVec3fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ShaderParameterVec3fBase::createEmptyLocal),
    ShaderParameterVec3f::initMethod,
    ShaderParameterVec3f::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderParameterVec3fBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterVec3f\"\n"
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
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterVec3fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterVec3fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterVec3fBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterVec3f);
}

/*------------------------- decorator get ------------------------------*/


SFVec3f *ShaderParameterVec3fBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFVec3f *ShaderParameterVec3fBase::getSFValue(void) const
{
    return &_sfValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterVec3fBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterVec3fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderParameterVec3fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderParameterVec3fTransitPtr ShaderParameterVec3fBase::createLocal(BitVector bFlags)
{
    ShaderParameterVec3fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderParameterVec3f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderParameterVec3fTransitPtr ShaderParameterVec3fBase::create(void)
{
    ShaderParameterVec3fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderParameterVec3f>(tmpPtr);
    }

    return fc;
}

ShaderParameterVec3f *ShaderParameterVec3fBase::createEmptyLocal(BitVector bFlags)
{
    ShaderParameterVec3f *returnValue;

    newPtr<ShaderParameterVec3f>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterVec3f *ShaderParameterVec3fBase::createEmpty(void)
{
    ShaderParameterVec3f *returnValue;

    newPtr<ShaderParameterVec3f>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderParameterVec3fBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderParameterVec3f *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderParameterVec3f *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderParameterVec3fBase::shallowCopy(void) const
{
    ShaderParameterVec3f *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderParameterVec3f *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderParameterVec3fBase::ShaderParameterVec3fBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderParameterVec3fBase::ShaderParameterVec3fBase(const ShaderParameterVec3fBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderParameterVec3fBase::~ShaderParameterVec3fBase(void)
{
}


GetFieldHandlePtr ShaderParameterVec3fBase::getHandleValue           (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderParameterVec3fBase::editHandleValue          (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId)));


    editSField(ValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterVec3fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterVec3fBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderParameterVec3fBase::createAspectCopy(void) const
{
    ShaderParameterVec3f *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterVec3f *>(this));

    return returnValue;
}
#endif

void ShaderParameterVec3fBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterVec3f *>::_type("ShaderParameterVec3fPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterVec3f *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderParameterVec3f *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderParameterVec3f *,
                           0);

OSG_END_NAMESPACE

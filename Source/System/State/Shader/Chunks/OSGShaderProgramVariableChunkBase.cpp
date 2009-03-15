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
 **     class ShaderProgramVariableChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include "OSGChangedFunctorMFields.h"     // DestroyedFunctors default header

#include <OSGShaderProgramVariables.h> // Variables Class

#include "OSGShaderProgramVariableChunkBase.h"
#include "OSGShaderProgramVariableChunk.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderProgramVariableChunk
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ShaderProgramVariables * ShaderProgramVariableChunkBase::_sfVariables
    fragment program object
*/

/*! \var ChangedFunctorCallback ShaderProgramVariableChunkBase::_mfDestroyedFunctors
    
*/


void ShaderProgramVariableChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecChildShaderProgramVariablesPtr::Description(
        SFUnrecChildShaderProgramVariablesPtr::getClassType(),
        "variables",
        "fragment program object\n",
        VariablesFieldId, VariablesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgramVariableChunk::editHandleVariables),
        static_cast<FieldGetMethodSig >(&ShaderProgramVariableChunk::getHandleVariables));

    oType.addInitialDesc(pDesc);

    pDesc = new MFChangedFunctorCallback::Description(
        MFChangedFunctorCallback::getClassType(),
        "destroyedFunctors",
        "",
        DestroyedFunctorsFieldId, DestroyedFunctorsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderProgramVariableChunk::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderProgramVariableChunk::invalidGetField));

    oType.addInitialDesc(pDesc);
}


ShaderProgramVariableChunkBase::TypeObject ShaderProgramVariableChunkBase::_type(
    ShaderProgramVariableChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ShaderProgramVariableChunkBase::createEmptyLocal),
    ShaderProgramVariableChunk::initMethod,
    ShaderProgramVariableChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderProgramVariableChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderProgramVariableChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"variables\"\n"
    "\t type=\"ShaderProgramVariables\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"childpointer\"\n"
    "     childParentType=\"FieldContainer\"\n"
    "     linkParentField=\"Parents\"\n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"destroyedFunctors\"\n"
    "\t type=\"ChangedFunctorCallback\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"none\"\n"
    "     defaultHeader=\"OSGChangedFunctorMFields.h\"\n"
    "\t >\n"
    "  </Field> \n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderProgramVariableChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderProgramVariableChunkBase::getType(void) const
{
    return _type;
}

UInt32 ShaderProgramVariableChunkBase::getContainerSize(void) const
{
    return sizeof(ShaderProgramVariableChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ShaderProgramVariableChunk::_sfVariables field.
const SFUnrecChildShaderProgramVariablesPtr *ShaderProgramVariableChunkBase::getSFVariables(void) const
{
    return &_sfVariables;
}

SFUnrecChildShaderProgramVariablesPtr *ShaderProgramVariableChunkBase::editSFVariables      (void)
{
    editSField(VariablesFieldMask);

    return &_sfVariables;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShaderProgramVariableChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        returnValue += _sfVariables.getBinSize();
    }
    if(FieldBits::NoField != (DestroyedFunctorsFieldMask & whichField))
    {
        returnValue += _mfDestroyedFunctors.getBinSize();
    }

    return returnValue;
}

void ShaderProgramVariableChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        _sfVariables.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DestroyedFunctorsFieldMask & whichField))
    {
        _mfDestroyedFunctors.copyToBin(pMem);
    }
}

void ShaderProgramVariableChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        _sfVariables.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DestroyedFunctorsFieldMask & whichField))
    {
        _mfDestroyedFunctors.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderProgramVariableChunkTransitPtr ShaderProgramVariableChunkBase::createLocal(BitVector bFlags)
{
    ShaderProgramVariableChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderProgramVariableChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderProgramVariableChunkTransitPtr ShaderProgramVariableChunkBase::createDependent(BitVector bFlags)
{
    ShaderProgramVariableChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderProgramVariableChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderProgramVariableChunkTransitPtr ShaderProgramVariableChunkBase::create(void)
{
    ShaderProgramVariableChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderProgramVariableChunk>(tmpPtr);
    }

    return fc;
}

ShaderProgramVariableChunk *ShaderProgramVariableChunkBase::createEmptyLocal(BitVector bFlags)
{
    ShaderProgramVariableChunk *returnValue;

    newPtr<ShaderProgramVariableChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderProgramVariableChunk *ShaderProgramVariableChunkBase::createEmpty(void)
{
    ShaderProgramVariableChunk *returnValue;

    newPtr<ShaderProgramVariableChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderProgramVariableChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderProgramVariableChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderProgramVariableChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderProgramVariableChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderProgramVariableChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderProgramVariableChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderProgramVariableChunkBase::shallowCopy(void) const
{
    ShaderProgramVariableChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderProgramVariableChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderProgramVariableChunkBase::ShaderProgramVariableChunkBase(void) :
    Inherited(),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfDestroyedFunctors      ()
{
}

ShaderProgramVariableChunkBase::ShaderProgramVariableChunkBase(const ShaderProgramVariableChunkBase &source) :
    Inherited(source),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfDestroyedFunctors      (source._mfDestroyedFunctors      )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderProgramVariableChunkBase::~ShaderProgramVariableChunkBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool ShaderProgramVariableChunkBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == VariablesFieldId)
    {
        ShaderProgramVariables * pTypedChild =
            dynamic_cast<ShaderProgramVariables *>(pChild);

        if(pTypedChild != NULL)
        {
            if(pTypedChild == _sfVariables.getValue())
            {
                editSField(VariablesFieldMask);

                _sfVariables.setValue(NULL);

                return true;
            }

            FWARNING(("ShaderProgramVariableChunkBase::unlinkParent: Child <-> "
                      "Parent link inconsistent.\n"));

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void ShaderProgramVariableChunkBase::onCreate(const ShaderProgramVariableChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ShaderProgramVariableChunk *pThis = static_cast<ShaderProgramVariableChunk *>(this);

        pThis->setVariables(source->getVariables());
    }
}

GetFieldHandlePtr ShaderProgramVariableChunkBase::getHandleVariables       (void) const
{
    SFUnrecChildShaderProgramVariablesPtr::GetHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::GetHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramVariableChunkBase::editHandleVariables      (void)
{
    SFUnrecChildShaderProgramVariablesPtr::EditHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::EditHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId)));

    returnValue->setSetMethod(
        boost::bind(&ShaderProgramVariableChunk::setVariables,
                    static_cast<ShaderProgramVariableChunk *>(this), _1));

    editSField(VariablesFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramVariableChunkBase::getHandleDestroyedFunctors (void) const
{
    MFChangedFunctorCallback::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderProgramVariableChunkBase::editHandleDestroyedFunctors(void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderProgramVariableChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderProgramVariableChunk *pThis = static_cast<ShaderProgramVariableChunk *>(this);

    pThis->execSync(static_cast<ShaderProgramVariableChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderProgramVariableChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderProgramVariableChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderProgramVariableChunk *>(pRefAspect),
                  dynamic_cast<const ShaderProgramVariableChunk *>(this));

    return returnValue;
}
#endif

void ShaderProgramVariableChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ShaderProgramVariableChunk *>(this)->setVariables(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfDestroyedFunctors.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderProgramVariableChunk *>::_type("ShaderProgramVariableChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderProgramVariableChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderProgramVariableChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderProgramVariableChunk *,
                           0);

OSG_END_NAMESPACE

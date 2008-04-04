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
 **     class TestMultiPartitionStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETESTMULTIPARTITIONSTAGEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGTestMultiPartitionStageBase.h"
#include "OSGTestMultiPartitionStage.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TestMultiPartitionStage
    just dumps a message on traversal and render for testing
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     TestMultiPartitionStageBase::_sfMessage
    
*/

/*! \var Int32           TestMultiPartitionStageBase::_sfNumPartitions
    
*/

/*! \var Int32           TestMultiPartitionStageBase::_mfOrder
    
*/

/*! \var bool            TestMultiPartitionStageBase::_sfUseGroup
    
*/


void TestMultiPartitionStageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "message",
        "",
        MessageFieldId, MessageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&TestMultiPartitionStageBase::editHandleMessage),
        static_cast<FieldGetMethodSig >(&TestMultiPartitionStageBase::getHandleMessage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "numPartitions",
        "",
        NumPartitionsFieldId, NumPartitionsFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&TestMultiPartitionStageBase::editHandleNumPartitions),
        static_cast<FieldGetMethodSig >(&TestMultiPartitionStageBase::getHandleNumPartitions));

    oType.addInitialDesc(pDesc);

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "order",
        "",
        OrderFieldId, OrderFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&TestMultiPartitionStageBase::editHandleOrder),
        static_cast<FieldGetMethodSig >(&TestMultiPartitionStageBase::getHandleOrder));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "useGroup",
        "",
        UseGroupFieldId, UseGroupFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&TestMultiPartitionStageBase::editHandleUseGroup),
        static_cast<FieldGetMethodSig >(&TestMultiPartitionStageBase::getHandleUseGroup));

    oType.addInitialDesc(pDesc);
}


TestMultiPartitionStageBase::TypeObject TestMultiPartitionStageBase::_type(
    TestMultiPartitionStageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TestMultiPartitionStageBase::createEmptyLocal,
    TestMultiPartitionStage::initMethod,
    TestMultiPartitionStage::exitMethod,
    (InitalInsertDescFunc) &TestMultiPartitionStageBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TestMultiPartitionStage\"\n"
    "\tparent=\"Stage\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "just dumps a message on traversal and render for testing\n"
    "\t<Field\n"
    "\t\tname=\"message\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "    <Field\n"
    "        name=\"numPartitions\"\n"
    "        type=\"Int32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"1\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"order\"\n"
    "        type=\"Int32\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"useGroup\"\n"
    "        type=\"bool\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "just dumps a message on traversal and render for testing\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TestMultiPartitionStageBase::getType(void)
{
    return _type;
}

const FieldContainerType &TestMultiPartitionStageBase::getType(void) const
{
    return _type;
}

UInt32 TestMultiPartitionStageBase::getContainerSize(void) const
{
    return sizeof(TestMultiPartitionStage);
}

/*------------------------- decorator get ------------------------------*/


SFString *TestMultiPartitionStageBase::editSFMessage(void)
{
    editSField(MessageFieldMask);

    return &_sfMessage;
}

const SFString *TestMultiPartitionStageBase::getSFMessage(void) const
{
    return &_sfMessage;
}

#ifdef OSG_1_GET_COMPAT
SFString            *TestMultiPartitionStageBase::getSFMessage        (void)
{
    return this->editSFMessage        ();
}
#endif

SFInt32 *TestMultiPartitionStageBase::editSFNumPartitions(void)
{
    editSField(NumPartitionsFieldMask);

    return &_sfNumPartitions;
}

const SFInt32 *TestMultiPartitionStageBase::getSFNumPartitions(void) const
{
    return &_sfNumPartitions;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *TestMultiPartitionStageBase::getSFNumPartitions  (void)
{
    return this->editSFNumPartitions  ();
}
#endif

MFInt32 *TestMultiPartitionStageBase::editMFOrder(void)
{
    editMField(OrderFieldMask, _mfOrder);

    return &_mfOrder;
}

const MFInt32 *TestMultiPartitionStageBase::getMFOrder(void) const
{
    return &_mfOrder;
}

#ifdef OSG_1_GET_COMPAT
MFInt32             *TestMultiPartitionStageBase::getMFOrder          (void)
{
    return this->editMFOrder          ();
}
#endif

SFBool *TestMultiPartitionStageBase::editSFUseGroup(void)
{
    editSField(UseGroupFieldMask);

    return &_sfUseGroup;
}

const SFBool *TestMultiPartitionStageBase::getSFUseGroup(void) const
{
    return &_sfUseGroup;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *TestMultiPartitionStageBase::getSFUseGroup       (void)
{
    return this->editSFUseGroup       ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 TestMultiPartitionStageBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MessageFieldMask & whichField))
    {
        returnValue += _sfMessage.getBinSize();
    }
    if(FieldBits::NoField != (NumPartitionsFieldMask & whichField))
    {
        returnValue += _sfNumPartitions.getBinSize();
    }
    if(FieldBits::NoField != (OrderFieldMask & whichField))
    {
        returnValue += _mfOrder.getBinSize();
    }
    if(FieldBits::NoField != (UseGroupFieldMask & whichField))
    {
        returnValue += _sfUseGroup.getBinSize();
    }

    return returnValue;
}

void TestMultiPartitionStageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MessageFieldMask & whichField))
    {
        _sfMessage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NumPartitionsFieldMask & whichField))
    {
        _sfNumPartitions.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OrderFieldMask & whichField))
    {
        _mfOrder.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UseGroupFieldMask & whichField))
    {
        _sfUseGroup.copyToBin(pMem);
    }
}

void TestMultiPartitionStageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MessageFieldMask & whichField))
    {
        _sfMessage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NumPartitionsFieldMask & whichField))
    {
        _sfNumPartitions.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OrderFieldMask & whichField))
    {
        _mfOrder.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UseGroupFieldMask & whichField))
    {
        _sfUseGroup.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TestMultiPartitionStageTransitPtr TestMultiPartitionStageBase::create(void)
{
    TestMultiPartitionStageTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TestMultiPartitionStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TestMultiPartitionStageTransitPtr TestMultiPartitionStageBase::createLocal(BitVector bFlags)
{
    TestMultiPartitionStageTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TestMultiPartitionStage>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
TestMultiPartitionStagePtr TestMultiPartitionStageBase::createEmpty(void)
{
    TestMultiPartitionStagePtr returnValue;

    newPtr<TestMultiPartitionStage>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

TestMultiPartitionStagePtr TestMultiPartitionStageBase::createEmptyLocal(BitVector bFlags)
{
    TestMultiPartitionStagePtr returnValue;

    newPtr<TestMultiPartitionStage>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TestMultiPartitionStageBase::shallowCopy(void) const
{
    TestMultiPartitionStagePtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const TestMultiPartitionStage *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr TestMultiPartitionStageBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TestMultiPartitionStagePtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TestMultiPartitionStage *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TestMultiPartitionStageBase::TestMultiPartitionStageBase(void) :
    Inherited(),
    _sfMessage                (),
    _sfNumPartitions          (Int32(1)),
    _mfOrder                  (),
    _sfUseGroup               ()
{
}

TestMultiPartitionStageBase::TestMultiPartitionStageBase(const TestMultiPartitionStageBase &source) :
    Inherited(source),
    _sfMessage                (source._sfMessage                ),
    _sfNumPartitions          (source._sfNumPartitions          ),
    _mfOrder                  (source._mfOrder                  ),
    _sfUseGroup               (source._sfUseGroup               )
{
}


/*-------------------------- destructors ----------------------------------*/

TestMultiPartitionStageBase::~TestMultiPartitionStageBase(void)
{
}


GetFieldHandlePtr TestMultiPartitionStageBase::getHandleMessage         (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfMessage, 
             this->getType().getFieldDesc(MessageFieldId)));

    return returnValue;
}

EditFieldHandlePtr TestMultiPartitionStageBase::editHandleMessage        (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfMessage, 
             this->getType().getFieldDesc(MessageFieldId)));

    editSField(MessageFieldMask);

    return returnValue;
}

GetFieldHandlePtr TestMultiPartitionStageBase::getHandleNumPartitions   (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfNumPartitions, 
             this->getType().getFieldDesc(NumPartitionsFieldId)));

    return returnValue;
}

EditFieldHandlePtr TestMultiPartitionStageBase::editHandleNumPartitions  (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfNumPartitions, 
             this->getType().getFieldDesc(NumPartitionsFieldId)));

    editSField(NumPartitionsFieldMask);

    return returnValue;
}

GetFieldHandlePtr TestMultiPartitionStageBase::getHandleOrder           (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfOrder, 
             this->getType().getFieldDesc(OrderFieldId)));

    return returnValue;
}

EditFieldHandlePtr TestMultiPartitionStageBase::editHandleOrder          (void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfOrder, 
             this->getType().getFieldDesc(OrderFieldId)));

    editMField(OrderFieldMask, _mfOrder);

    return returnValue;
}

GetFieldHandlePtr TestMultiPartitionStageBase::getHandleUseGroup        (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUseGroup, 
             this->getType().getFieldDesc(UseGroupFieldId)));

    return returnValue;
}

EditFieldHandlePtr TestMultiPartitionStageBase::editHandleUseGroup       (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUseGroup, 
             this->getType().getFieldDesc(UseGroupFieldId)));

    editSField(UseGroupFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TestMultiPartitionStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TestMultiPartitionStageBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TestMultiPartitionStageBase::createAspectCopy(void) const
{
    TestMultiPartitionStagePtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TestMultiPartitionStage *>(this));

    return returnValue;
}
#endif

void TestMultiPartitionStageBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfOrder.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TestMultiPartitionStagePtr>::_type("TestMultiPartitionStagePtr", "StagePtr");
#endif


OSG_END_NAMESPACE
